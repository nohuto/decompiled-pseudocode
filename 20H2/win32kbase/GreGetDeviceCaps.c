/*
 * XREFs of GreGetDeviceCaps @ 0x1C001EC40
 * Callers:
 *     xxxSetSysColors @ 0x1C001BB80 (xxxSetSysColors.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C001E6D0 (-UpdateUserScreen@@YAJXZ.c)
 *     NtGdiGetDeviceCaps @ 0x1C001EC20 (NtGdiGetDeviceCaps.c)
 *     EnforceColorDependentSettings @ 0x1C001ED40 (EnforceColorDependentSettings.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C001FD54 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003D8E8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003D91C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00409E8 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0041720 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C0092FEC (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0094D5C (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C00AAA00 (EngSetLastError.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C00CF804 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 */

__int64 __fastcall GreGetDeviceCaps(HDC a1, int a2)
{
  unsigned int DeviceCapsInternal; // ebx
  DYNAMICMODECHANGESHARELOCK *v5; // rcx
  __int64 v7; // rbx
  _QWORD v8[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+20h] BYREF
  __int64 v10; // [rsp+58h] [rbp+28h] BYREF

  if ( (unsigned int)PsGetWin32KFilterSet() == 5 && a1 == (HDC)-589410304LL )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v9);
    v9 = *(_QWORD *)(gpDispInfo + 40);
    if ( v9 )
    {
      DeviceCapsInternal = GreGetDeviceCapsInternal((struct PDEVOBJ *)&v9, a2);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v5);
      return DeviceCapsInternal;
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(0LL);
  }
  else
  {
    DCOBJ::DCOBJ((DCOBJ *)v8, a1);
    v7 = v8[0];
    if ( v8[0] )
    {
      NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
        (NEEDDYNAMICMODECHANGESHARELOCK *)&v9,
        (*(_DWORD *)(*(_QWORD *)(v8[0] + 48LL) + 40LL) & 0x8000) == 0);
      v10 = *(_QWORD *)(v7 + 48);
      if ( v10 )
      {
        DeviceCapsInternal = GreGetDeviceCapsInternal((struct PDEVOBJ *)&v10, a2);
        NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v9);
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v8);
        return DeviceCapsInternal;
      }
      NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v9);
    }
    else
    {
      EngSetLastError(6u);
    }
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v8);
  }
  return 0LL;
}
