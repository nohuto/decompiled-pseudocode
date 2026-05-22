/*
 * XREFs of ?PopulateTargetingData@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18001E960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCHeadProcessor::PopulateTargetingData(
        MPCHeadProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  *((_BYTE *)a3 + 48) = 1;
  *((_DWORD *)a3 + 30) = *((_DWORD *)a2 + 38);
  *((_DWORD *)a3 + 31) = *((_DWORD *)a2 + 39);
  *((_DWORD *)a3 + 32) = *((_DWORD *)a2 + 40);
  *((_DWORD *)a3 + 33) = *((_DWORD *)a2 + 41);
  *((_DWORD *)a3 + 34) = *((_DWORD *)a2 + 42);
  *((_DWORD *)a3 + 35) = *((_DWORD *)a2 + 43);
}
