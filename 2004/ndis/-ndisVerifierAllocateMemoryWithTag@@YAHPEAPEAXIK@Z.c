/*
 * XREFs of ?ndisVerifierAllocateMemoryWithTag@@YAHPEAPEAXIK@Z @ 0x1C00AB970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 *     ?ndisVerifierInjectResourceFailure@@YAEE@Z @ 0x1C00ABD48 (-ndisVerifierInjectResourceFailure@@YAEE@Z.c)
 */

__int64 __fastcall ndisVerifierAllocateMemoryWithTag(_LIST_ENTRY **a1, unsigned int a2, int a3)
{
  _LIST_ENTRY *v3; // rbp
  unsigned int v5; // edi
  int v7; // eax
  __int64 v8; // r8
  int v9; // r9d
  _LIST_ENTRY *v10; // rbx
  KIRQL v11; // dl
  _LIST_ENTRY *v12; // rcx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0LL;
  v5 = a2;
  if ( (ndisFlags & 0x400) != 0 )
  {
    v3 = retaddr;
    v7 = -1;
    if ( a2 + 40 >= a2 )
      v7 = a2 + 40;
    v5 = v7;
  }
  if ( ndisVerifierInjectResourceFailure((unsigned __int8)a1) || v9 < 0 )
    v10 = 0LL;
  else
    v10 = (_LIST_ENTRY *)(*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, _LIST_ENTRY *))ndisVerifierWdmDispatch
                          + 6))(
                           512LL,
                           v5,
                           v8,
                           24LL,
                           retaddr);
  if ( !v10 || (ndisFlags & 0x400) == 0 )
  {
    *a1 = v10;
    return v10 == 0LL ? 0xC0000001 : 0;
  }
  *a1 = (_LIST_ENTRY *)((char *)v10 + 40);
  v10->Flink = 0LL;
  v10->Blink = 0LL;
  v10[2].Flink = 0LL;
  LODWORD(v10[1].Flink) = a3;
  HIDWORD(v10[1].Flink) = v5;
  v10[1].Blink = v3;
  v11 = KeAcquireSpinLockRaiseToDpc(&ndisTrackMemLock);
  if ( !ndisMiniportTrackAlloc )
  {
    Flink = ndisDriverTrackAllocList.Flink;
    if ( ndisDriverTrackAllocList.Flink->Blink == &ndisDriverTrackAllocList )
    {
      v10->Flink = ndisDriverTrackAllocList.Flink;
      v10->Blink = &ndisDriverTrackAllocList;
      Flink->Blink = v10;
      ndisDriverTrackAllocList.Flink = v10;
      goto LABEL_17;
    }
LABEL_15:
    __fastfail(3u);
  }
  v12 = ndisMiniportTrackAllocList.Flink;
  if ( ndisMiniportTrackAllocList.Flink->Blink != &ndisMiniportTrackAllocList )
    goto LABEL_15;
  v10->Flink = ndisMiniportTrackAllocList.Flink;
  v10->Blink = &ndisMiniportTrackAllocList;
  v12->Blink = v10;
  ndisMiniportTrackAllocList.Flink = v10;
LABEL_17:
  KeReleaseSpinLock(&ndisTrackMemLock, v11);
  v10 = *a1;
  return v10 == 0LL ? 0xC0000001 : 0;
}
