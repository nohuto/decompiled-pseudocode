/*
 * XREFs of PopEtAggregateKeyCopyFromProcess @ 0x1406D4818
 * Callers:
 *     PopEtProcessSnapshotCreate @ 0x1406D456C (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     PsGetProcessId @ 0x1402D44D0 (PsGetProcessId.c)
 *     PopEtAggregateKeyCopy @ 0x1405F20D0 (PopEtAggregateKeyCopy.c)
 */

void __fastcall PopEtAggregateKeyCopyFromProcess(__int64 *a1, struct _KPROCESS *a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+38h] [rbp-10h]

  v3 = a2[2].Affinity.Bitmap[4];
  v7 = 0LL;
  v8 = 0LL;
  v6 = *(_OWORD *)(v3 + 448);
  if ( (*(_DWORD *)(a3 + 8) & 1) != 0 )
  {
    LODWORD(v8) = (unsigned int)PsGetProcessId(a2);
    v7 = a2[2].Affinity.Bitmap[6];
  }
  PopEtAggregateKeyCopy(a1, &v6);
}
