/*
 * XREFs of sub_180031440 @ 0x180031440
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800325C0 @ 0x1800325C0 (sub_1800325C0.c)
 */

__int64 __fastcall sub_180031440(__int64 a1)
{
  void **v2; // rdi
  char v3; // bp
  __int64 v4; // r14
  void *v5; // rsi
  DWORD LastError; // ebx
  void *v7; // rsi
  DWORD v8; // ebx

  v2 = (void **)(a1 + 168);
  v3 = 0;
  v4 = 9LL;
  do
  {
    v5 = *(v2 - 9);
    if ( v5 || *v2 )
    {
      v3 = 1;
      if ( v5 )
      {
        LastError = GetLastError();
        CoTaskMemFree(v5);
        SetLastError(LastError);
      }
    }
    *(v2 - 9) = 0LL;
    v7 = *v2;
    if ( *v2 )
    {
      v8 = GetLastError();
      CoTaskMemFree(v7);
      SetLastError(v8);
    }
    *v2++ = 0LL;
    --v4;
  }
  while ( v4 );
  if ( v3 )
    sub_1800325C0(a1, 2LL, 0x7FFFLL);
  return 0LL;
}
