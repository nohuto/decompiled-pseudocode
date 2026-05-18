/*
 * XREFs of sub_18001950C @ 0x18001950C
 * Callers:
 *     sub_180131270 @ 0x180131270 (sub_180131270.c)
 * Callees:
 *     ?DeleteAsyncTimerAndUnloadLibrary@details@Concurrency@@YAXPEAU_TP_TIMER@@@Z @ 0x18001B0A8 (-DeleteAsyncTimerAndUnloadLibrary@details@Concurrency@@YAXPEAU_TP_TIMER@@@Z.c)
 *     sub_18001C56C @ 0x18001C56C (sub_18001C56C.c)
 *     sub_180020328 @ 0x180020328 (sub_180020328.c)
 */

void __fastcall sub_18001950C(__int64 a1)
{
  struct _TP_TIMER *v2; // rsi
  DWORD LastError; // ebx
  struct _TP_TIMER *v4; // rdx
  struct _TP_TIMER *v5; // rdx
  void *v6; // rbx
  HANDLE ProcessHeap; // rax
  void *v8; // rbx
  HANDLE v9; // rax
  struct _TP_TIMER *v10; // rcx

  *(_BYTE *)a1 = 0;
  v2 = *(struct _TP_TIMER **)(a1 + 16);
  if ( v2 )
  {
    LastError = GetLastError();
    Concurrency::details::DeleteAsyncTimerAndUnloadLibrary(v2, v4);
    SetLastError(LastError);
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)a1 = 0;
  sub_18001C56C(a1);
  v6 = *(void **)(a1 + 104);
  *(_QWORD *)(a1 + 104) = 0LL;
  if ( v6 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v6);
  }
  v8 = *(void **)(a1 + 72);
  *(_QWORD *)(a1 + 72) = 0LL;
  if ( v8 )
  {
    v9 = GetProcessHeap();
    HeapFree(v9, 0, v8);
  }
  if ( *(_QWORD *)(a1 + 40) )
    sub_180020328();
  if ( *(_QWORD *)(a1 + 32) )
    sub_180020328();
  v10 = *(struct _TP_TIMER **)(a1 + 16);
  if ( v10 )
    Concurrency::details::DeleteAsyncTimerAndUnloadLibrary(v10, v5);
}
