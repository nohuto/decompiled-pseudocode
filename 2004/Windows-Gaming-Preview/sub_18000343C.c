/*
 * XREFs of sub_18000343C @ 0x18000343C
 * Callers:
 *     sub_180008538 @ 0x180008538 (sub_180008538.c)
 *     sub_180008A2C @ 0x180008A2C (sub_180008A2C.c)
 * Callees:
 *     sub_18000336C @ 0x18000336C (sub_18000336C.c)
 */

void __fastcall sub_18000343C(__int64 a1)
{
  void *v1; // rsi
  DWORD LastError; // ebx
  void *v4; // rsi
  DWORD v5; // ebx

  v1 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    LastError = GetLastError();
    sub_18000336C(v1);
    SetLastError(LastError);
  }
  *(_QWORD *)a1 = 0LL;
  v4 = *(void **)(a1 + 8);
  if ( v4 )
  {
    v5 = GetLastError();
    sub_18000336C(v4);
    SetLastError(v5);
  }
  *(_QWORD *)(a1 + 8) = 0LL;
}
