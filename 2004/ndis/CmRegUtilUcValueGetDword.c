/*
 * XREFs of CmRegUtilUcValueGetDword @ 0x1C0128E38
 * Callers:
 *     CmRegUtilWstrValueGetDword @ 0x1C012911C (CmRegUtilWstrValueGetDword.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CmRegUtilUcValueGetDword(void *a1, _UNICODE_STRING *a2, __int64 a3, _DWORD *a4)
{
  int v4; // ebx
  NTSTATUS result; // eax
  ULONG v7; // [rsp+30h] [rbp-28h] BYREF
  _DWORD v8[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = 0;
  v7 = 0;
  result = ZwQueryValueKey(a1, a2, KeyValuePartialInformation, v8, 0x10u, &v7);
  if ( result >= 0 )
  {
    if ( v8[1] == 4 )
      v4 = v8[3];
    else
      result = -1073741788;
  }
  *a4 = v4;
  return result;
}
