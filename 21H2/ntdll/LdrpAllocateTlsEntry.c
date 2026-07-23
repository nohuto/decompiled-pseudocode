/*
 * XREFs of LdrpAllocateTlsEntry @ 0x180054D18
 * Callers:
 *     LdrpInitializeTls @ 0x180053D54 (LdrpInitializeTls.c)
 *     LdrpHandleTlsData @ 0x180054590 (LdrpHandleTlsData.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     LdrpAcquireTlsIndex @ 0x180054E64 (LdrpAcquireTlsIndex.c)
 *     LdrpGenericExceptionFilter @ 0x1800D554C (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpAllocateTlsEntry(__int64 a1, __int64 a2, int *a3, __int64 a4, _QWORD *a5)
{
  _QWORD *Heap; // rax
  _QWORD *v9; // rbx
  int v10; // edi
  int v11; // edx
  _QWORD *v12; // rax

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 786432, 0x48uLL);
  v9 = Heap;
  if ( !Heap )
    return 3221225495LL;
  *((_OWORD *)Heap + 1) = *(_OWORD *)a1;
  *((_OWORD *)Heap + 2) = *(_OWORD *)(a1 + 16);
  Heap[6] = *(_QWORD *)(a1 + 32);
  if ( Heap[3] < Heap[2] )
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
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    return (unsigned int)v10;
  }
  v11 = *a3;
LABEL_6:
  *(_DWORD *)v9[4] = v11;
  *((_DWORD *)v9 + 16) = v11;
  v9[7] = a2;
  v12 = off_1801665F8;
  if ( *off_1801665F8 != (_UNKNOWN *)&LdrpTlsList )
    __fastfail(3u);
  *v9 = &LdrpTlsList;
  v9[1] = v12;
  *v12 = v9;
  off_1801665F8 = (_UNKNOWN **)v9;
  if ( a5 )
    *a5 = v9;
  return 0LL;
}
