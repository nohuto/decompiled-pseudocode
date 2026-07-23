/*
 * XREFs of _RtlpQueryPackageIdentityAttributes@20 @ 0x4B2E4EE1
 * Callers:
 *     _RtlQueryPackageClaims@32 @ 0x4B2E4E70 (_RtlQueryPackageClaims@32.c)
 *     _RtlpHpOptIntoSegmentHeap@4 @ 0x4B358522 (_RtlpHpOptIntoSegmentHeap@4.c)
 * Callees:
 *     _ZwQuerySecurityAttributesToken@24 @ 0x4B2F3F20 (_ZwQuerySecurityAttributesToken@24.c)
 */

NTSTATUS __thiscall RtlpQueryPackageIdentityAttributes(HANDLE TokenHandle, PVOID Buffer, _DWORD *a3, _DWORD *a4)
{
  ULONG v4; // ebx
  NTSTATUS result; // eax
  HANDLE v6; // ebx
  unsigned __int8 v7; // dl
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  ULONG ReturnLength; // [esp+10h] [ebp-8h] BYREF
  char v14; // [esp+17h] [ebp-1h]

  if ( a4 )
  {
    *a4 = 0;
    a4[1] = 0;
  }
  v4 = 1;
  v14 = 1;
  if ( a3 || a4 )
    v4 = 2;
  result = ZwQuerySecurityAttributesToken(TokenHandle, (PUNICODE_STRING)&Attributes, v4, Buffer, 0x2F0u, &ReturnLength);
  if ( result >= 0 )
  {
    v6 = TokenHandle;
    v7 = v14;
  }
  else
  {
    if ( result != -1073741275 )
      return result;
    if ( v4 == 1 )
      return result;
    v6 = TokenHandle;
    result = ZwQuerySecurityAttributesToken(
               TokenHandle,
               (PUNICODE_STRING)&Attributes,
               1u,
               Buffer,
               0x2F0u,
               &ReturnLength);
    if ( result < 0 )
      return result;
    v7 = 0;
  }
  if ( !*((_DWORD *)Buffer + 1) )
    return -1073741275;
  if ( a3 )
  {
    if ( v7 )
    {
      v8 = *(_DWORD **)(*((_DWORD *)Buffer + 2) + 44);
      *a3 = *v8;
      a3[1] = v8[1];
    }
    else
    {
      *a3 = 0;
      a3[1] = 0;
    }
  }
  if ( a4 )
  {
    v9 = v7;
    a4[1] |= v9 >> 31;
    *a4 |= (2 * v9) | 1;
    if ( ZwQuerySecurityAttributesToken(v6, (PUNICODE_STRING)&stru_4B281DC0, 1u, 0, 0, &ReturnLength) == -1073741789 )
    {
      v10 = a4[1];
      *a4 |= 4u;
      a4[1] = v10;
    }
    if ( ZwQuerySecurityAttributesToken(v6, (PUNICODE_STRING)&stru_4B281DB8, 1u, 0, 0, &ReturnLength) == -1073741789 )
    {
      v11 = a4[1];
      *a4 |= 8u;
      a4[1] = v11;
    }
  }
  return 0;
}
