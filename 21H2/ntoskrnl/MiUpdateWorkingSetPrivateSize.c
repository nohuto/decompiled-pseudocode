/*
 * XREFs of MiUpdateWorkingSetPrivateSize @ 0x14026EEA8
 * Callers:
 *     MiConvertPrivateToProto @ 0x140272A10 (MiConvertPrivateToProto.c)
 *     MiDemoteCombinedPte @ 0x1403336E0 (MiDemoteCombinedPte.c)
 *     MiBuildForkPte @ 0x1405B88D8 (MiBuildForkPte.c)
 * Callees:
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

void __fastcall MiUpdateWorkingSetPrivateSize(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 SharedVm; // rax
  __int64 v9; // rax

  if ( !a4 )
  {
    SharedVm = MiGetSharedVm(a1);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(SharedVm + 64));
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 152), a3);
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 136), a3);
  if ( !a4 )
  {
    v9 = MiGetSharedVm(a1);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v9 + 64));
  }
}
