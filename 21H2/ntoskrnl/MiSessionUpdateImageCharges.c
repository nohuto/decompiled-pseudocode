/*
 * XREFs of MiSessionUpdateImageCharges @ 0x1402DB994
 * Callers:
 *     MiDriverLoadSucceeded @ 0x140761234 (MiDriverLoadSucceeded.c)
 * Callees:
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiCountSystemImageCommitment @ 0x1402DBA28 (MiCountSystemImageCommitment.c)
 *     MiSessionLookupImage @ 0x1402DBF3C (MiSessionLookupImage.c)
 */

__int64 __fastcall MiSessionUpdateImageCharges(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r8
  __int64 v4; // rbp
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx

  v2 = MiSessionLookupImage(*(_QWORD *)(a1 + 48), a2, a1);
  v4 = MiCountSystemImageCommitment(v3);
  v5 = *(_QWORD *)(v2 + 72) - v4;
  if ( v5 )
  {
    v6 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
    MiReturnCommit(*(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v6 + 366)), v5);
    *(_QWORD *)(v2 + 72) = v4;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 40), -v5);
  }
  return 0LL;
}
