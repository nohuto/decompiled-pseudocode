/*
 * XREFs of _LdrpAllocateTlsEntry@20 @ 0x4B2E1766
 * Callers:
 *     _LdrpHandleTlsData@4 @ 0x4B2D0CD1 (_LdrpHandleTlsData@4.c)
 *     _LdrpInitializeTls@0 @ 0x4B2E14F7 (_LdrpInitializeTls@0.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _LdrpAcquireTlsIndex@8 @ 0x4B2E185E (_LdrpAcquireTlsIndex@8.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _LdrpGenericExceptionFilter@8 @ 0x4B334947 (_LdrpGenericExceptionFilter@8.c)
 */

int __fastcall LdrpAllocateTlsEntry(const void *a1, int a2, int *a3, int a4, _DWORD *a5)
{
  _DWORD *Heap; // eax
  _DWORD *v7; // ebx
  int v8; // edx
  _DWORD *v9; // eax
  int v11; // esi
  SIZE_T v12; // [esp-4h] [ebp-48h]
  int v14; // [esp+24h] [ebp-20h]

  LODWORD(v12) = 40;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 786432, v12);
  v7 = Heap;
  if ( !Heap )
    return -1073741801;
  qmemcpy(Heap + 2, a1, 0x18u);
  if ( Heap[3] < Heap[2] )
  {
    v11 = -1073741701;
LABEL_15:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    return v11;
  }
  if ( !a4 )
  {
    v14 = (*a3)++;
    goto LABEL_6;
  }
  v8 = LdrpAcquireTlsIndex(a3, a4);
  if ( v8 < 0 )
  {
    v11 = v8;
    goto LABEL_15;
  }
  v14 = *a3;
LABEL_6:
  *(_DWORD *)v7[4] = v14;
  v7[9] = v14;
  v7[8] = a2;
  v9 = off_4B3A33AC;
  if ( *off_4B3A33AC != (_UNKNOWN *)&LdrpTlsList )
    __fastfail(3u);
  *v7 = &LdrpTlsList;
  v7[1] = v9;
  *v9 = v7;
  off_4B3A33AC = (_UNKNOWN **)v7;
  if ( a5 )
    *a5 = v7;
  return 0;
}
