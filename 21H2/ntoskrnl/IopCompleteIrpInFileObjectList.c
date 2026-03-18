/*
 * XREFs of IopCompleteIrpInFileObjectList @ 0x1403117B0
 * Callers:
 *     IopfCompleteRequest @ 0x1402B59D0 (IopfCompleteRequest.c)
 * Callees:
 *     IopInsertIrpInCompletionQueue @ 0x140311870 (IopInsertIrpInCompletionQueue.c)
 *     IopCompleteRequest @ 0x140347E10 (IopCompleteRequest.c)
 *     IopDoesCompletionNeedsApc @ 0x140417964 (IopDoesCompletionNeedsApc.c)
 *     FeatureServicing_40851744_EnableKey @ 0x14065863C (FeatureServicing_40851744_EnableKey.c)
 */

char __fastcall IopCompleteIrpInFileObjectList(unsigned __int64 Irp, __int64 a2, __int64 a3)
{
  IRP *v3; // rbx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v3 = (IRP *)Irp;
  v6 = 0LL;
  v5 = 0LL;
  if ( !*(_BYTE *)(Irp + 65) )
  {
    Irp = *(unsigned int *)(Irp + 48);
    if ( (Irp & 0xC0000000) == 0xC0000000 || (*(_DWORD *)(a2 + 80) & 0x2000000) != 0 && (Irp & 0x80000000) == 0LL )
      return 0;
  }
  if ( *(_QWORD *)(a2 + 176) )
  {
    IopInsertIrpInCompletionQueue(v3);
    return 1;
  }
  if ( (EnableFeatureServicing_40851744 == 1
     || EnableFeatureServicing_40851744 && (unsigned __int8)FeatureServicing_40851744_EnableKey(Irp, a2, a3))
    && (unsigned __int8)IopDoesCompletionNeedsApc(v3) )
  {
    return 0;
  }
  IopCompleteRequest((_DWORD)v3 + 120, (unsigned int)&v6, (unsigned int)&v5, (_DWORD)v3 + 192, (__int64)&v5);
  return 1;
}
