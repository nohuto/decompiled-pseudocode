/*
 * XREFs of ?AddWakeUpToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02BEA04
 * Callers:
 *     ?AddWakeUpCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@@Z @ 0x1C02BDC88 (-AddWakeUpCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?DoGetProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@PEAI4PEA_N@Z @ 0x1C02BEA7C (-DoGetProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYP.c)
 */

__int64 __fastcall DripsBlockerTrackingHelper::AddWakeUpToProcessEntry(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  _BYTE v6[4]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v7; // [rsp+44h] [rbp-14h] BYREF
  _DWORD v8[4]; // [rsp+48h] [rbp-10h] BYREF

  v7 = 0;
  v8[0] = 0;
  v6[0] = 0;
  result = DripsBlockerTrackingHelper::DoGetProcessEntry(a1, a2, 0LL, a3, a4, &v7, v8, v6);
  if ( (int)result >= 0 && !v6[0] )
    ++*(_DWORD *)(a1 + 4720LL * v7 + 72LL * v8[0] + 168);
  return result;
}
