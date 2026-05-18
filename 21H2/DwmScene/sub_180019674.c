/*
 * XREFs of sub_180019674 @ 0x180019674
 * Callers:
 *     sub_1801312C0 @ 0x1801312C0 (sub_1801312C0.c)
 * Callees:
 *     ?DeleteAsyncTimerAndUnloadLibrary@details@Concurrency@@YAXPEAU_TP_TIMER@@@Z @ 0x18001B0A8 (-DeleteAsyncTimerAndUnloadLibrary@details@Concurrency@@YAXPEAU_TP_TIMER@@@Z.c)
 *     sub_18001D0A0 @ 0x18001D0A0 (sub_18001D0A0.c)
 *     sub_18001FF18 @ 0x18001FF18 (sub_18001FF18.c)
 *     sub_18001FFE4 @ 0x18001FFE4 (sub_18001FFE4.c)
 *     sub_180020010 @ 0x180020010 (sub_180020010.c)
 */

void __fastcall sub_180019674(__int64 a1)
{
  struct _TP_TIMER *v2; // rsi
  DWORD LastError; // ebx
  struct _TP_TIMER *v4; // rdx
  struct _TP_TIMER *v5; // rsi
  DWORD v6; // ebx
  struct _TP_TIMER *v7; // rdx
  void *v8; // rbx
  HANDLE ProcessHeap; // rax
  void *v10; // rsi
  HANDLE v11; // rax
  void *v12; // rsi
  HANDLE v13; // rax
  struct _TP_TIMER *v14; // rdx
  struct _TP_TIMER *v15; // rcx
  struct _TP_TIMER *v16; // rcx
  void *v17; // rcx

  *(_BYTE *)a1 = 0;
  v2 = *(struct _TP_TIMER **)(a1 + 48);
  if ( v2 )
  {
    LastError = GetLastError();
    Concurrency::details::DeleteAsyncTimerAndUnloadLibrary(v2, v4);
    SetLastError(LastError);
  }
  *(_QWORD *)(a1 + 48) = 0LL;
  v5 = *(struct _TP_TIMER **)(a1 + 56);
  if ( v5 )
  {
    v6 = GetLastError();
    Concurrency::details::DeleteAsyncTimerAndUnloadLibrary(v5, v7);
    SetLastError(v6);
  }
  *(_QWORD *)(a1 + 56) = 0LL;
  v8 = *(void **)(a1 + 272);
  *(_QWORD *)(a1 + 272) = 0LL;
  if ( v8 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v8);
  }
  if ( *(_QWORD *)(a1 + 240) )
    sub_18001FFE4();
  v10 = *(void **)(a1 + 232);
  *(_QWORD *)(a1 + 232) = 0LL;
  if ( v10 )
  {
    v11 = GetProcessHeap();
    HeapFree(v11, 0, v10);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  if ( *(_QWORD *)(a1 + 160) )
    sub_18001FF18();
  if ( *(_QWORD *)(a1 + 152) )
    sub_180020010();
  if ( *(_QWORD *)(a1 + 144) )
    sub_180020010();
  v12 = *(void **)(a1 + 136);
  *(_QWORD *)(a1 + 136) = 0LL;
  if ( v12 )
  {
    v13 = GetProcessHeap();
    HeapFree(v13, 0, v12);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 72));
  v15 = *(struct _TP_TIMER **)(a1 + 56);
  if ( v15 )
    Concurrency::details::DeleteAsyncTimerAndUnloadLibrary(v15, v14);
  v16 = *(struct _TP_TIMER **)(a1 + 48);
  if ( v16 )
    Concurrency::details::DeleteAsyncTimerAndUnloadLibrary(v16, v14);
  v17 = *(void **)(a1 + 16);
  if ( v17 )
    sub_18001D0A0(v17);
}
