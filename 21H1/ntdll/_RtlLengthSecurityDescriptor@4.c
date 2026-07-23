/*
 * XREFs of _RtlLengthSecurityDescriptor@4 @ 0x4B2E86D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlLengthSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v1; // bx
  char *v2; // edx
  ULONG v3; // esi
  char *v4; // edx
  char *v5; // edx
  char *v7; // edx

  v1 = *((_WORD *)SecurityDescriptor + 1);
  v2 = (char *)*((_DWORD *)SecurityDescriptor + 1);
  if ( v1 < 0 )
    v2 = v2 != 0 ? (char *)SecurityDescriptor + (_DWORD)v2 : 0;
  v3 = 20;
  if ( v2 )
    v3 = ((4 * (unsigned __int8)v2[1] + 11) & 0xFFFFFFFC) + 20;
  v4 = (char *)*((_DWORD *)SecurityDescriptor + 2);
  if ( v1 < 0 )
    v4 = v4 != 0 ? (char *)SecurityDescriptor + (_DWORD)v4 : 0;
  if ( v4 )
    v3 += (4 * (unsigned __int8)v4[1] + 11) & 0xFFFFFFFC;
  if ( (v1 & 4) != 0 )
  {
    v5 = (char *)*((_DWORD *)SecurityDescriptor + 4);
    if ( v1 < 0 )
      v5 = v5 != 0 ? (char *)SecurityDescriptor + (_DWORD)v5 : 0;
    if ( v5 )
      v3 += (*((unsigned __int16 *)v5 + 1) + 3) & 0xFFFFFFFC;
  }
  if ( (v1 & 0x10) != 0 )
  {
    v7 = (char *)*((_DWORD *)SecurityDescriptor + 3);
    if ( v1 < 0 )
      v7 = v7 != 0 ? (char *)SecurityDescriptor + (_DWORD)v7 : 0;
    if ( v7 )
      v3 += (*((unsigned __int16 *)v7 + 1) + 3) & 0xFFFFFFFC;
  }
  return v3;
}
