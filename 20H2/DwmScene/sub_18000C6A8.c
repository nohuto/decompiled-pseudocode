/*
 * XREFs of sub_18000C6A8 @ 0x18000C6A8
 * Callers:
 *     sub_18000D6FC @ 0x18000D6FC (sub_18000D6FC.c)
 * Callees:
 *     sub_18000C498 @ 0x18000C498 (sub_18000C498.c)
 */

void __fastcall sub_18000C6A8(__int64 a1)
{
  void *v1; // rsi
  DWORD LastError; // ebx
  void *v4; // rsi
  DWORD v5; // ebx

  v1 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    LastError = GetLastError();
    sub_18000C498(v1);
    SetLastError(LastError);
  }
  *(_QWORD *)a1 = 0LL;
  v4 = *(void **)(a1 + 8);
  if ( v4 )
  {
    v5 = GetLastError();
    sub_18000C498(v4);
    SetLastError(v5);
  }
  *(_QWORD *)(a1 + 8) = 0LL;
}
