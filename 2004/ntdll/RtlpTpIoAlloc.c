/*
 * XREFs of RtlpTpIoAlloc @ 0x180112D9C
 * Callers:
 *     RtlpTpIoLookup @ 0x180113354 (RtlpTpIoLookup.c)
 * Callees:
 *     TppGetCurrentThreadNumaNode @ 0x180012338 (TppGetCurrentThreadNumaNode.c)
 *     TppPoolpReferenceGlobalPool @ 0x1800137E4 (TppPoolpReferenceGlobalPool.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     TpDereferenceGlobalPool @ 0x18006FE28 (TpDereferenceGlobalPool.c)
 *     TpBindFileToDirect @ 0x180075D98 (TpBindFileToDirect.c)
 */

__int64 __fastcall RtlpTpIoAlloc(_QWORD *a1, __int64 a2, void *a3)
{
  __int64 v6; // rdx
  _QWORD *Heap; // rdi
  __int64 v8; // r8
  NTSTATUS v9; // ebx
  int v10; // ecx
  char v11; // dl
  _PEB_LDR_DATA *v12; // rcx
  unsigned __int32 v14; // [rsp+20h] [rbp-28h]
  _PEB_LDR_DATA *v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xB8uLL);
  if ( !Heap )
  {
    v9 = -1073741801;
LABEL_9:
    v14 = v9;
    goto LABEL_10;
  }
  v9 = TppPoolpReferenceGlobalPool(
         (volatile signed __int32 **)&TppPoolpGlobalPool,
         (_PEB_LDR_DATA *)&TppPoolpGlobalPoolLock,
         (volatile signed __int32 **)&v15);
  v14 = v9;
  if ( v9 >= 0 )
  {
    *Heap = a2;
    Heap[8] = RtlpTpIoCallback;
    if ( v15 )
    {
      TppGetCurrentThreadNumaNode((__int64)v15, (_DWORD *)Heap + 18, (_BYTE *)Heap + 76);
      v10 = *((_DWORD *)Heap + 18);
      v11 = *((_BYTE *)Heap + 76);
    }
    else
    {
      *((_DWORD *)Heap + 18) = 0;
      *((_BYTE *)Heap + 76) = 0;
      v10 = 0;
      v11 = 0;
    }
    Heap[5] = 0LL;
    Heap[7] = Heap + 6;
    Heap[6] = Heap + 6;
    Heap[1] = TppDirectTaskVFuncs;
    *((_DWORD *)Heap + 4) = v10;
    *((_BYTE *)Heap + 20) = v11;
    v12 = v15;
    Heap[10] = v15;
    v9 = TpBindFileToDirect(a3, (__int64)(Heap + 1), v12);
    v14 = v9;
    if ( v9 >= 0 )
    {
      ++*((_DWORD *)Heap + 22);
      Heap[12] = Heap + 12;
      Heap[13] = 0LL;
      Heap[14] = 0LL;
      *a1 = Heap;
      v9 = 0;
      goto LABEL_9;
    }
  }
LABEL_10:
  if ( v9 < 0 )
  {
    if ( v15 )
      TpDereferenceGlobalPool(v15, v6, v8);
    if ( Heap )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return v14;
    }
  }
  return (unsigned int)v9;
}
