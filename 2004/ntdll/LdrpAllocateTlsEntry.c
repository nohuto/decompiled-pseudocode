/*
 * XREFs of LdrpAllocateTlsEntry @ 0x18004839C
 * Callers:
 *     LdrpInitializeTls @ 0x1800473D8 (LdrpInitializeTls.c)
 *     LdrpHandleTlsData @ 0x180047C14 (LdrpHandleTlsData.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     LdrpAcquireTlsIndex @ 0x1800484E8 (LdrpAcquireTlsIndex.c)
 *     LdrpGenericExceptionFilter @ 0x1800D543C (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpAllocateTlsEntry(__int64 a1, __int64 a2, int *a3, __int64 a4, __int64 *a5)
{
  __int64 Heap; // rax
  __int64 v9; // rbx
  int v10; // edi
  int v11; // edx
  __int64 *v12; // rax

  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 786432, 72LL);
  v9 = Heap;
  if ( !Heap )
    return 3221225495LL;
  *(_OWORD *)(Heap + 16) = *(_OWORD *)a1;
  *(_OWORD *)(Heap + 32) = *(_OWORD *)(a1 + 16);
  *(_QWORD *)(Heap + 48) = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(Heap + 24) < *(_QWORD *)(Heap + 16) )
  {
    v10 = -1073741701;
    goto LABEL_13;
  }
  if ( !a4 )
  {
    v11 = (*a3)++;
    goto LABEL_6;
  }
  v10 = LdrpAcquireTlsIndex(a3, a4);
  if ( v10 < 0 )
  {
LABEL_13:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
    return (unsigned int)v10;
  }
  v11 = *a3;
LABEL_6:
  **(_DWORD **)(v9 + 32) = v11;
  *(_DWORD *)(v9 + 64) = v11;
  *(_QWORD *)(v9 + 56) = a2;
  v12 = (__int64 *)off_180164528;
  if ( *off_180164528 != (_UNKNOWN *)&LdrpTlsList )
    __fastfail(3u);
  *(_QWORD *)v9 = &LdrpTlsList;
  *(_QWORD *)(v9 + 8) = v12;
  *v12 = v9;
  off_180164528 = (_UNKNOWN **)v9;
  if ( a5 )
    *a5 = v9;
  return 0LL;
}
