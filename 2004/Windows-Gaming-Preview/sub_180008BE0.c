/*
 * XREFs of sub_180008BE0 @ 0x180008BE0
 * Callers:
 *     sub_1800471E0 @ 0x1800471E0 (sub_1800471E0.c)
 * Callees:
 *     sub_180007864 @ 0x180007864 (sub_180007864.c)
 *     sub_180007A7C @ 0x180007A7C (sub_180007A7C.c)
 *     sub_180008EA8 @ 0x180008EA8 (sub_180008EA8.c)
 */

__int64 __fastcall sub_180008BE0(__int64 a1)
{
  struct _TP_TIMER *v2; // rsi
  DWORD LastError; // ebx
  void *v4; // rbx
  HANDLE ProcessHeap; // rax
  void *v6; // rbx
  HANDLE v7; // rax
  struct _TP_TIMER *v8; // rcx

  *(_BYTE *)a1 = 0;
  v2 = *(struct _TP_TIMER **)(a1 + 16);
  if ( v2 )
  {
    LastError = GetLastError();
    sub_180008EA8(v2);
    SetLastError(LastError);
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)a1 = 0;
  sub_180007A7C(a1);
  v4 = *(void **)(a1 + 104);
  *(_QWORD *)(a1 + 104) = 0LL;
  if ( v4 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v4);
  }
  v6 = *(void **)(a1 + 72);
  *(_QWORD *)(a1 + 72) = 0LL;
  if ( v6 )
  {
    v7 = GetProcessHeap();
    HeapFree(v7, 0, v6);
  }
  if ( *(_QWORD *)(a1 + 40) )
    sub_180007864();
  if ( *(_QWORD *)(a1 + 32) )
    sub_180007864();
  v8 = *(struct _TP_TIMER **)(a1 + 16);
  if ( v8 )
    sub_180008EA8(v8);
  return a1;
}
