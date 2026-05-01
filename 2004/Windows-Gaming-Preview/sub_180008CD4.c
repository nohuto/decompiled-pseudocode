/*
 * XREFs of sub_180008CD4 @ 0x180008CD4
 * Callers:
 *     sub_180047180 @ 0x180047180 (sub_180047180.c)
 * Callees:
 *     sub_180004E98 @ 0x180004E98 (sub_180004E98.c)
 *     sub_180004F0C @ 0x180004F0C (sub_180004F0C.c)
 *     sub_1800072D8 @ 0x1800072D8 (sub_1800072D8.c)
 *     sub_180008538 @ 0x180008538 (sub_180008538.c)
 *     sub_180008EA8 @ 0x180008EA8 (sub_180008EA8.c)
 */

__int64 __fastcall sub_180008CD4(__int64 a1)
{
  struct _TP_TIMER *v2; // rsi
  DWORD LastError; // ebx
  struct _TP_TIMER *v4; // rsi
  DWORD v5; // ebx
  void *v6; // rbx
  HANDLE ProcessHeap; // rax
  void *v8; // rsi
  HANDLE v9; // rax
  void *v10; // rsi
  HANDLE v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  struct _TP_TIMER *v16; // rcx
  struct _TP_TIMER *v17; // rcx
  _QWORD *v18; // rcx

  *(_BYTE *)a1 = 0;
  v2 = *(struct _TP_TIMER **)(a1 + 48);
  if ( v2 )
  {
    LastError = GetLastError();
    sub_180008EA8(v2);
    SetLastError(LastError);
  }
  *(_QWORD *)(a1 + 48) = 0LL;
  v4 = *(struct _TP_TIMER **)(a1 + 56);
  if ( v4 )
  {
    v5 = GetLastError();
    sub_180008EA8(v4);
    SetLastError(v5);
  }
  *(_QWORD *)(a1 + 56) = 0LL;
  v6 = *(void **)(a1 + 272);
  *(_QWORD *)(a1 + 272) = 0LL;
  if ( v6 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v6);
  }
  v8 = *(void **)(a1 + 240);
  *(_QWORD *)(a1 + 240) = 0LL;
  if ( v8 )
  {
    v9 = GetProcessHeap();
    HeapFree(v9, 0, v8);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v10 = *(void **)(a1 + 168);
  *(_QWORD *)(a1 + 168) = 0LL;
  if ( v10 )
  {
    v11 = GetProcessHeap();
    HeapFree(v11, 0, v10);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 104));
  v12 = *(_QWORD *)(a1 + 96);
  if ( v12 )
    sub_1800072D8(v12);
  v13 = *(_QWORD *)(a1 + 88);
  if ( v13 )
    sub_180004F0C(v13);
  v14 = *(_QWORD *)(a1 + 80);
  if ( v14 )
    sub_180004E98(v14);
  v15 = *(_QWORD *)(a1 + 72);
  if ( v15 )
    sub_180004E98(v15);
  v16 = *(struct _TP_TIMER **)(a1 + 56);
  if ( v16 )
    sub_180008EA8(v16);
  v17 = *(struct _TP_TIMER **)(a1 + 48);
  if ( v17 )
    sub_180008EA8(v17);
  v18 = *(_QWORD **)(a1 + 16);
  if ( v18 )
    sub_180008538(v18);
  return a1;
}
