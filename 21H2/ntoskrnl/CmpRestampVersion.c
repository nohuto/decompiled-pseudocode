/*
 * XREFs of CmpRestampVersion @ 0x140867A50
 * Callers:
 *     CmpSetVersionData @ 0x1407A802C (CmpSetVersionData.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403D6A60 (swprintf_s.c)
 *     ZwSetValueKey @ 0x1403FB180 (ZwSetValueKey.c)
 */

__int64 __fastcall CmpRestampVersion(HANDLE KeyHandle, __int64 a2)
{
  int v4; // eax
  ULONG DataSize; // ebx
  void *Data; // rcx
  int v8; // eax
  void *v9; // rcx
  int v10; // eax
  void *v11; // rcx
  int v12; // eax
  wchar_t Dst[128]; // [rsp+30h] [rbp-128h] BYREF

  v4 = swprintf_s(Dst, 0x80uLL, L"%u", (unsigned __int16)*(_DWORD *)a2);
  if ( v4 == -1 )
    return 2147483653LL;
  DataSize = (unsigned __int16)(2 * v4) + 2;
  ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentBuildNumberString, 0, 1u, Dst, DataSize);
  ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentBuildString, 0, 1u, Dst, DataSize);
  ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpUBRString, 0, 4u, (PVOID)(a2 + 4), 4u);
  Data = *(void **)(a2 + 16);
  if ( Data )
  {
    v8 = *(unsigned __int16 *)(a2 + 8);
    if ( (_WORD)v8 )
      ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpBuildBranchString, 0, 1u, Data, v8 + 2);
  }
  v9 = *(void **)(a2 + 32);
  if ( v9 )
  {
    v10 = *(unsigned __int16 *)(a2 + 24);
    if ( (_WORD)v10 )
      ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpBuildLabString, 0, 1u, v9, v10 + 2);
  }
  v11 = *(void **)(a2 + 48);
  if ( v11 )
  {
    v12 = *(unsigned __int16 *)(a2 + 40);
    if ( (_WORD)v12 )
      ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpBuildLabExString, 0, 1u, v11, v12 + 2);
  }
  return 0LL;
}
