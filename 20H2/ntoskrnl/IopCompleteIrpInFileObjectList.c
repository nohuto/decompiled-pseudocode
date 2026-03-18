/*
 * XREFs of IopCompleteIrpInFileObjectList @ 0x140294E84
 * Callers:
 *     IopfCompleteRequest @ 0x140292590 (IopfCompleteRequest.c)
 * Callees:
 *     IopCompleteRequest @ 0x1402186C0 (IopCompleteRequest.c)
 *     IopInsertIrpInCompletionQueue @ 0x140294F40 (IopInsertIrpInCompletionQueue.c)
 *     IopDoesCompletionNeedsApc @ 0x1403F0310 (IopDoesCompletionNeedsApc.c)
 *     FeatureServicing_40524482_EnableKey @ 0x1405CBC40 (FeatureServicing_40524482_EnableKey.c)
 */

char __fastcall IopCompleteIrpInFileObjectList(__int64 a1, __int64 a2)
{
  int v3; // ecx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  v5 = 0LL;
  if ( !*(_BYTE *)(a1 + 65) )
  {
    v3 = *(_DWORD *)(a1 + 48);
    if ( (v3 & 0xC0000000) == 0xC0000000 || (*(_DWORD *)(a2 + 80) & 0x2000000) != 0 && v3 >= 0 )
      return 0;
  }
  if ( !*(_QWORD *)(a2 + 176) )
  {
    if ( EnableFeatureServicing_40524482 != 1
      && (!EnableFeatureServicing_40524482 || !(unsigned __int8)FeatureServicing_40524482_EnableKey())
      || !(unsigned __int8)IopDoesCompletionNeedsApc(a1) )
    {
      IopCompleteRequest(a1 + 120, (__int64)&v6, &v5, (ULONG_PTR *)(a1 + 192), &v5);
      return 1;
    }
    return 0;
  }
  IopInsertIrpInCompletionQueue((PIRP)a1);
  return 1;
}
