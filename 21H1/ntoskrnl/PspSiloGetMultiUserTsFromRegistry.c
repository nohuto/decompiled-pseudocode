/*
 * XREFs of PspSiloGetMultiUserTsFromRegistry @ 0x140902678
 * Callers:
 *     PspSiloInitializeSuiteMask @ 0x1409027FC (PspSiloInitializeSuiteMask.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     RtlpQueryRegistryValues @ 0x1406823A0 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall PspSiloGetMultiUserTsFromRegistry(_BYTE *a1)
{
  char v1; // bl
  __int64 result; // rax
  _QWORD v4[15]; // [rsp+30h] [rbp-78h] BYREF
  int v5; // [rsp+B8h] [rbp+10h] BYREF

  v1 = 0;
  v5 = 0;
  memset(v4, 0, 0x70uLL);
  LODWORD(v4[1]) = 292;
  v4[2] = L"TSAppCompat";
  LODWORD(v4[4]) = 0x4000000;
  v4[3] = &v5;
  result = RtlpQueryRegistryValues(2, L"Terminal Server", (__int64)v4, 0LL);
  if ( (_DWORD)result == -1073741772 )
  {
    result = 0LL;
  }
  else
  {
    if ( (int)result < 0 )
      return result;
    v1 = v5;
  }
  *a1 = v1;
  return result;
}
