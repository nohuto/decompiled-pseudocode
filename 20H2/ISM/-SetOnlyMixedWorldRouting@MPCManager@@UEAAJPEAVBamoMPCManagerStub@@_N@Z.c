/*
 * XREFs of ?SetOnlyMixedWorldRouting@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@_N@Z @ 0x180074080
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011CD0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 */

__int64 __fastcall MPCManager::SetOnlyMixedWorldRouting(MPCManager *this, struct BamoMPCManagerStub *a2, char a3)
{
  *((_BYTE *)MPCHolographicInputManager::GetInstance() + 2365) = a3;
  return 0LL;
}
