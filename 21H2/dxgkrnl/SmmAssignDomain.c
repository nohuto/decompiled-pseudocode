/*
 * XREFs of SmmAssignDomain @ 0x1C006D784
 * Callers:
 *     ?SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C03C01D4 (-SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmIommuSwitchToTranslation @ 0x1C03C028C (SmmIommuSwitchToTranslation.c)
 * Callees:
 *     <none>
 */

void __fastcall SmmAssignDomain(__int64 a1, __int64 a2, int a3)
{
  KIRQL v6; // al

  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  *(_QWORD *)(a1 + 96) = a2;
  *(_DWORD *)(a1 + 92) = a3;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v6);
}
