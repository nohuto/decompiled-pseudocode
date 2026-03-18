/*
 * XREFs of ?MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C000C07C
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C000C6A4 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 * Callees:
 *     ?PopulatePanelId@CInputSpaceRegion@@QEAAXXZ @ 0x1C000C1B4 (-PopulatePanelId@CInputSpaceRegion@@QEAAXXZ.c)
 *     RIMUpdatePointerDeviceScalingInfo @ 0x1C000FBD0 (RIMUpdatePointerDeviceScalingInfo.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputSpaceRegion::MapToDisplayPath(
        CInputSpaceRegion *this,
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2)
{
  _OWORD *v3; // rdi
  unsigned int *v4; // rsi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  *((_BYTE *)this + 488) = 1;
  *((_OWORD *)this + 31) = *(_OWORD *)a2;
  v3 = (_OWORD *)((char *)this + 168);
  *((_OWORD *)this + 32) = *((_OWORD *)a2 + 1);
  v4 = (unsigned int *)((char *)this + 184);
  *((_OWORD *)this + 33) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 34) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 35) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 36) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 37) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 38) = *((_OWORD *)a2 + 7);
  *((_OWORD *)this + 39) = *((_OWORD *)a2 + 8);
  *((_OWORD *)this + 40) = *((_OWORD *)a2 + 9);
  *((_OWORD *)this + 41) = *((_OWORD *)a2 + 10);
  *((_OWORD *)this + 42) = *((_OWORD *)a2 + 11);
  *((_QWORD *)this + 86) = *((_QWORD *)a2 + 24);
  *((_DWORD *)this + 4) |= 2u;
  *(_QWORD *)((char *)this + 36) = *((_QWORD *)a2 + 2);
  v5 = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 11) = v5;
  *((_DWORD *)this + 44) = *((_DWORD *)a2 + 14);
  *((_DWORD *)this + 45) = *((_DWORD *)a2 + 15);
  *((_DWORD *)this + 41) = *((_DWORD *)a2 + 26);
  v10 = 0LL;
  ((void (__fastcall *)(char *, const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *, __int128 *, char *))RIMUpdatePointerDeviceScalingInfo)(
    (char *)this + 168,
    a2,
    &v10,
    (char *)this + 184);
  CInputSpaceRegion::PopulatePanelId(this);
  v9 = *v4;
  if ( *((_DWORD *)this + 48) == (_DWORD)v9 || (v9 = *((unsigned int *)this + 47), *((_DWORD *)this + 49) == (_DWORD)v9) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v6, v7, v8);
    *(_OWORD *)v4 = *v3;
  }
}
