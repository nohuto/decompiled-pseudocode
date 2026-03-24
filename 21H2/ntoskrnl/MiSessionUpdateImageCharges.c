/*
 * XREFs of MiSessionUpdateImageCharges @ 0x14039EC00
 * Callers:
 *     MiDriverLoadSucceeded @ 0x14075C644 (MiDriverLoadSucceeded.c)
 * Callees:
 *     MiSessionLookupImage @ 0x1402CF668 (MiSessionLookupImage.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     MiCountSystemImageCommitment @ 0x14039EC94 (MiCountSystemImageCommitment.c)
 */

__int64 __fastcall MiSessionUpdateImageCharges(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 v2; // r8
  __int64 v3; // rbp
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx

  v1 = MiSessionLookupImage(*(_QWORD *)(a1 + 48));
  v3 = MiCountSystemImageCommitment(v2);
  v4 = v1[9] - v3;
  if ( v4 )
  {
    v5 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
    MiReturnCommit(*(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(v5 + 430)), v4);
    v1[9] = v3;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 48), -v4);
  }
  return 0LL;
}
