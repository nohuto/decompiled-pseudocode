/*
 * XREFs of sub_18000C788 @ 0x18000C788
 * Callers:
 *     sub_18000D7DC @ 0x18000D7DC (sub_18000D7DC.c)
 *     sub_18001D0A0 @ 0x18001D0A0 (sub_18001D0A0.c)
 * Callees:
 *     sub_18000C578 @ 0x18000C578 (sub_18000C578.c)
 */

void __fastcall sub_18000C788(__int64 a1)
{
  void *v1; // rsi
  DWORD LastError; // ebx
  void *v4; // rsi
  DWORD v5; // ebx

  v1 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    LastError = GetLastError();
    sub_18000C578(v1);
    SetLastError(LastError);
  }
  *(_QWORD *)a1 = 0LL;
  v4 = *(void **)(a1 + 8);
  if ( v4 )
  {
    v5 = GetLastError();
    sub_18000C578(v4);
    SetLastError(v5);
  }
  *(_QWORD *)(a1 + 8) = 0LL;
}
