/*
 * XREFs of NtGdiGetDeviceCapsAll @ 0x1C0143990
 * Callers:
 *     <none>
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003D8E8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003D91C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00409E8 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0041720 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C0092FEC (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0094D5C (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C00AAA00 (EngSetLastError.c)
 *     ?NtGdiGetDeviceCapsAllInternal@@YAHAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C00CFC4C (-NtGdiGetDeviceCapsAllInternal@@YAHAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 */

__int64 __fastcall NtGdiGetDeviceCapsAll(HDC a1, struct _DEVCAPS *a2)
{
  unsigned int DeviceCapsAllInternal; // ebx
  DYNAMICMODECHANGESHARELOCK *v5; // rcx
  int v7; // r8d
  __int64 v8; // rbx
  __int64 v9; // rdx
  int v10; // r8d
  __int64 v11; // rdx
  int v12; // r8d
  _QWORD v13[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v14; // [rsp+50h] [rbp+20h] BYREF
  __int64 v15; // [rsp+58h] [rbp+28h] BYREF

  if ( (unsigned int)PsGetWin32KFilterSet() == 5 && a1 == (HDC)-589410304LL )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v14);
    v14 = *(_QWORD *)(gpDispInfo + 40);
    if ( v14 )
    {
      DeviceCapsAllInternal = NtGdiGetDeviceCapsAllInternal((struct PDEVOBJ *)&v14, a2);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v5);
      return DeviceCapsAllInternal;
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(0LL);
  }
  else
  {
    DCOBJ::DCOBJ((DCOBJ *)v13, a1);
    v8 = v13[0];
    if ( v13[0] )
    {
      NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
        (NEEDDYNAMICMODECHANGESHARELOCK *)&v14,
        (*(_DWORD *)(*(_QWORD *)(v13[0] + 48LL) + 40LL) & 0x8000) == 0,
        v7);
      v15 = *(_QWORD *)(v8 + 48);
      if ( v15 )
      {
        DeviceCapsAllInternal = NtGdiGetDeviceCapsAllInternal((struct PDEVOBJ *)&v15, a2);
        NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK(
          (NEEDDYNAMICMODECHANGESHARELOCK *)&v14,
          v11,
          v12);
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v13);
        return DeviceCapsAllInternal;
      }
      NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v14, v9, v10);
    }
    else
    {
      EngSetLastError(6u);
    }
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v13);
  }
  return 0LL;
}
