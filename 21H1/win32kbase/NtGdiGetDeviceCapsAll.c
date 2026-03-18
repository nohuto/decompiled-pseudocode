/*
 * XREFs of NtGdiGetDeviceCapsAll @ 0x1C014C170
 * Callers:
 *     <none>
 * Callees:
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C0019388 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001B60C (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C003C4D0 (EngSetLastError.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C006923C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007B81C (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007B850 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00B4C68 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?NtGdiGetDeviceCapsAllInternal@@YAHAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C00CF4FC (-NtGdiGetDeviceCapsAllInternal@@YAHAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 */

__int64 __fastcall NtGdiGetDeviceCapsAll(HDC a1, struct _DEVCAPS *a2)
{
  __int64 v4; // rdx
  int v5; // r8d
  __int64 v6; // rdx
  int v7; // r8d
  unsigned int DeviceCapsAllInternal; // ebx
  __int64 v9; // rdx
  DYNAMICMODECHANGESHARELOCK *v10; // rcx
  int v11; // r8d
  int v13; // r8d
  __int64 v14; // rdx
  int v15; // r8d
  __int64 v16; // rdx
  int v17; // r8d
  _QWORD v18[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v19; // [rsp+50h] [rbp+20h] BYREF
  __int64 v20; // [rsp+58h] [rbp+28h] BYREF

  if ( (unsigned int)PsGetWin32KFilterSet(a1) == 5 && a1 == (HDC)-589410304LL )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v19, v4, v5);
    v19 = *(_QWORD *)(gpDispInfo + 40);
    if ( v19 )
    {
      DeviceCapsAllInternal = NtGdiGetDeviceCapsAllInternal((struct PDEVOBJ *)&v19, a2);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v10, v9, v11);
      return DeviceCapsAllInternal;
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(0LL, v6, v7);
  }
  else
  {
    DCOBJ::DCOBJ((DCOBJ *)v18, a1);
    if ( v18[0] )
    {
      NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
        (NEEDDYNAMICMODECHANGESHARELOCK *)&v19,
        (*(_DWORD *)(*(_QWORD *)(v18[0] + 48LL) + 40LL) & 0x8000) == 0,
        v13);
      v20 = *(_QWORD *)(v18[0] + 48LL);
      if ( v20 )
      {
        DeviceCapsAllInternal = NtGdiGetDeviceCapsAllInternal((struct PDEVOBJ *)&v20, a2);
        NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK(
          (NEEDDYNAMICMODECHANGESHARELOCK *)&v19,
          v16,
          v17);
        if ( v18[0] )
          XDCOBJ::vUnlockFast((XDCOBJ *)v18);
        return DeviceCapsAllInternal;
      }
      NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v19, v14, v15);
    }
    else
    {
      EngSetLastError(6u);
    }
    if ( v18[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v18);
  }
  return 0LL;
}
