/*
 * XREFs of ?DdcciGetTimingReport@CPhysicalMonitorHandle@@QAEJPAU_MC_TIMING_REPORT@@@Z @ 0x1CF769
 * Callers:
 *     ?DdcciGetTimingReport@CMonitorAPI@@QAEJPAXPAU_MC_TIMING_REPORT@@@Z @ 0x1CF71B (-DdcciGetTimingReport@CMonitorAPI@@QAEJPAXPAU_MC_TIMING_REPORT@@@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AAEJ_JPAXK@Z @ 0x1CF957 (-DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AAEJ_JPAXK@Z.c)
 *     ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AAEJ_JPAXK@Z @ 0x1CFA1C (-DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AAEJ_JPAXK@Z.c)
 */

int __thiscall CPhysicalMonitorHandle::DdcciGetTimingReport(CPhysicalMonitorHandle *this, struct _MC_TIMING_REPORT *a2)
{
  int v3; // edx
  unsigned __int16 v4; // ax
  int v5; // ecx
  unsigned __int16 v6; // ax
  int v8; // [esp+8h] [ebp-14h] BYREF
  int v9; // [esp+Ch] [ebp-10h] BYREF
  int v10; // [esp+10h] [ebp-Ch]
  char v11; // [esp+14h] [ebp-8h]

  v8 = 491857;
  v3 = CPhysicalMonitorHandle::DdcciSendDataToMonitorDevice(this, (union _LARGE_INTEGER)-500000LL, &v8, 4u);
  if ( v3 >= 0 )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v3 = CPhysicalMonitorHandle::DdcciReceiveDataFromMonitorDevice(this, (union _LARGE_INTEGER)-500000LL, &v9, 9u);
    if ( v3 >= 0 )
    {
      if ( (v9 & 0x3C000000) != 0 )
      {
        return -1071774330;
      }
      else
      {
        v4 = (unsigned __int8)v10 << 8;
        *((_BYTE *)a2 + 8) = HIBYTE(v9);
        v5 = BYTE1(v10) | v4;
        v6 = BYTE2(v10) << 8;
        *(_DWORD *)a2 = v5;
        *((_DWORD *)a2 + 1) = HIBYTE(v10) | v6;
      }
    }
  }
  return v3;
}
