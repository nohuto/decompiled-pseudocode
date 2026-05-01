/*
 * XREFs of sub_18003E9CC @ 0x18003E9CC
 * Callers:
 *     sub_18003EB10 @ 0x18003EB10 (sub_18003EB10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003E9CC(void *a1, __int64 a2, void **a3)
{
  signed int v4; // eax
  signed int v5; // ebx
  signed int LastError; // eax
  char *v7; // rcx
  HANDLE hExistingToken; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  hExistingToken = 0LL;
  if ( OpenProcessToken(a1, 0xEu, &hExistingToken) )
  {
    if ( DuplicateTokenEx(hExistingToken, 0xCu, 0LL, SecurityImpersonation, TokenImpersonation, a3) )
    {
      v5 = 0;
    }
    else
    {
      LastError = GetLastError();
      v5 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v5 = LastError;
      if ( v5 >= 0 )
        v5 = -2147467259;
    }
  }
  else
  {
    v4 = GetLastError();
    v5 = (unsigned __int16)v4 | 0x80070000;
    if ( v4 <= 0 )
      v5 = v4;
    if ( v5 >= 0 )
      v5 = -2147467259;
  }
  v7 = (char *)hExistingToken;
  hExistingToken = 0LL;
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v7);
  return (unsigned int)v5;
}
