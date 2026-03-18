/*
 * XREFs of KiCreateDpcLimitsProcessorConfiguration @ 0x1403C1C58
 * Callers:
 *     KeUpdateDpcWatchdogConfiguration @ 0x1405685CC (KeUpdateDpcWatchdogConfiguration.c)
 *     KiInitializeProcessor @ 0x140A5943C (KiInitializeProcessor.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiCreateDpcLimitsProcessorConfiguration(__int64 a1, int a2, int a3)
{
  int v3; // r8d
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 result; // rax

  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 44) = a2;
  *(_DWORD *)(a1 + 40) = a3;
  v3 = KeMaximumIncrement;
  v4 = (unsigned int)KeMaximumIncrement;
  v5 = ((unsigned int)KeMaximumIncrement + 10000 * (unsigned __int64)(unsigned int)KeDpcWatchdogPeriodMs - 1)
     / (unsigned int)KeMaximumIncrement;
  if ( v5 > 0xFFFFFFFF )
    LODWORD(v5) = -1;
  *(_DWORD *)(a1 + 20) = v5;
  if ( KeDpcWatchdogPeriodMs )
  {
    v6 = (unsigned int)(v3 * v5) / 0x4E20uLL;
    if ( v6 > 0xFFFFFFFF )
      LODWORD(v6) = -1;
    *(_QWORD *)(a1 + 8) = (unsigned int)-v3;
    *(_DWORD *)a1 = v6;
  }
  v7 = (10000LL * (unsigned int)KeDpcTimeoutMs + v4 - 1) / v4;
  if ( v7 > 0xFFFFFFFF )
    LODWORD(v7) = -1;
  *(_DWORD *)(a1 + 16) = v7;
  v8 = (v4 + 10000LL * (unsigned int)KeDpcWatchdogProfileCumulativeDpcThresholdMs - 1) / v4;
  if ( v8 > 0xFFFFFFFF )
    LODWORD(v8) = -1;
  *(_DWORD *)(a1 + 36) = v8;
  v9 = (v4 + 10000LL * (unsigned int)KeDpcWatchdogProfileSingleDpcThresholdMs - 1) / v4;
  if ( v9 > 0xFFFFFFFF )
    LODWORD(v9) = -1;
  *(_DWORD *)(a1 + 32) = v9;
  v10 = (v4 + 10000LL * (unsigned int)KeDpcSoftTimeoutMs - 1) / v4;
  if ( v10 > 0xFFFFFFFF )
    LODWORD(v10) = -1;
  *(_DWORD *)(a1 + 24) = v10;
  result = (10000LL * (unsigned int)KeDpcCumulativeSoftTimeoutMs + v4 - 1) / v4;
  if ( result > 0xFFFFFFFF )
    result = 0xFFFFFFFFLL;
  *(_DWORD *)(a1 + 28) = result;
  return result;
}
