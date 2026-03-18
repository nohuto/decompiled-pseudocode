/*
 * XREFs of SepValidateReferencedCachedHandles @ 0x14068E2B0
 * Callers:
 *     SepSetTokenCachedHandles @ 0x14068DC14 (SepSetTokenCachedHandles.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     RtlStringCchPrintfW @ 0x140340D00 (RtlStringCchPrintfW.c)
 *     RtlSubAuthoritySid @ 0x140340E50 (RtlSubAuthoritySid.c)
 *     RtlGetCurrentServiceSessionId @ 0x1403A57B0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     RtlEqualUnicodeString @ 0x14061FE70 (RtlEqualUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 *     RtlPrefixUnicodeString @ 0x140671570 (RtlPrefixUnicodeString.c)
 *     SepQueryNameString @ 0x14068E6AC (SepQueryNameString.c)
 *     RtlGetAppContainerSidType @ 0x1406FB810 (RtlGetAppContainerSidType.c)
 *     RtlConvertSidToUnicodeString @ 0x1406FDB70 (RtlConvertSidToUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepValidateReferencedCachedHandles(__int64 a1, PSID *a2, unsigned int a3, HANDLE *a4)
{
  unsigned int v4; // esi
  int v6; // ecx
  NTSTATUS AppContainerSidType; // ebx
  struct _DMA_ADAPTER *v9; // r14
  unsigned int v10; // r12d
  PSID v11; // r12
  __int64 v12; // r9
  const UNICODE_STRING *v13; // r13
  NTSTATUS v14; // eax
  char *v15; // rdi
  struct _OBJECT_TYPE *v16; // rdx
  __int64 v17; // rax
  char *v18; // rdi
  unsigned int v19; // edi
  PULONG v21; // rsi
  PULONG v22; // rdi
  PULONG v23; // rbx
  PULONG v24; // rax
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  ULONG Object; // [rsp+20h] [rbp-E0h]
  ULONG HandleInformation; // [rsp+28h] [rbp-D8h]
  ULONG v30; // [rsp+30h] [rbp-D0h]
  int v31; // [rsp+48h] [rbp-B8h]
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v34[2]; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE *v35; // [rsp+68h] [rbp-98h]
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v38[8]; // [rsp+90h] [rbp-70h]
  UNICODE_STRING v39; // [rsp+98h] [rbp-68h] BYREF
  char v40; // [rsp+A8h] [rbp-58h]
  wchar_t pszDest[256]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t SourceString[256]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v4 = 0;
  v35 = a4;
  v6 = *(_DWORD *)a2;
  v31 = 0;
  AppContainerSidType = 0;
  v9 = 0LL;
  P = 0LL;
  v10 = 0;
  v34[0] = 0LL;
  UnicodeString = 0LL;
  if ( v6 )
  {
    if ( v6 != 1 )
      goto LABEL_7;
    v25 = *(unsigned int *)(a1 + 120);
    v34[0] = a2 + 1;
    AppContainerSidType = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%d", v25);
    if ( AppContainerSidType < 0 )
      goto LABEL_32;
    RtlInitUnicodeString(&DestinationString, pszDest);
    v38[0] = 1;
    v10 = 1;
    if ( *(_DWORD *)(a1 + 120) != (unsigned int)RtlGetCurrentServiceSessionId(v27, v26) )
      goto LABEL_7;
    RtlInitUnicodeString(&v39, L"\\BaseNamedObjects");
    v40 = 1;
LABEL_6:
    v10 = 2;
LABEL_7:
    if ( !a3 )
      goto LABEL_32;
    v13 = (const UNICODE_STRING *)v34[0];
    while ( 1 )
    {
      if ( v9 )
        HalPutDmaAdapter(v9);
      v34[0] = 0LL;
      v14 = ObReferenceObjectByHandle(*v35, 0, 0LL, 0, v34, 0LL);
      v9 = (struct _DMA_ADAPTER *)v34[0];
      AppContainerSidType = v14;
      if ( v14 >= 0 )
      {
        v15 = (char *)v34[0] - 48;
        v16 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v34[0] - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(LOWORD(v34[0]) - 48) >> 8)];
        if ( v16 != ObpDirectoryObjectType
          && v16 != ObpSymbolicLinkObjectType
          && (v16 != (struct _OBJECT_TYPE *)IoFileObjectType || *(_DWORD *)(*((_QWORD *)v34[0] + 1) + 72LL) != 17) )
        {
          goto LABEL_49;
        }
        if ( P )
        {
          ExFreePoolWithTag(P, 0);
          P = 0LL;
        }
        AppContainerSidType = SepQueryNameString(v9, &P);
        if ( AppContainerSidType < 0 )
          goto LABEL_32;
        if ( !P || !*((_WORD *)P + 1) || (*(_OWORD *)v34 = *(_OWORD *)P, !v10) )
        {
LABEL_49:
          AppContainerSidType = -1073741811;
          goto LABEL_32;
        }
        while ( !RtlPrefixUnicodeString(
                   (UNICODE_STRING *)((char *)&DestinationString + 24 * v4),
                   (PCUNICODE_STRING)v34,
                   1u) )
        {
          if ( ++v4 >= v10 )
            goto LABEL_49;
        }
        v17 = 3LL * v4;
        v4 = 0;
        if ( v38[8 * v17] )
        {
          if ( (v15[26] & 2) != 0 )
            v18 = &v15[-ObpInfoMaskToOffset[v15[26] & 3]];
          else
            v18 = 0LL;
          if ( !v18 || !*((_WORD *)v18 + 5) )
            goto LABEL_49;
          *(_OWORD *)v34 = *(_OWORD *)(v18 + 8);
          if ( !RtlEqualUnicodeString((PCUNICODE_STRING)v34, v13, 1u) )
          {
            v19 = 0;
            while ( !RtlEqualUnicodeString(
                       (PCUNICODE_STRING)v34,
                       (PCUNICODE_STRING)&AllowedCachedObjectNames[2 * v19],
                       1u) )
            {
              if ( ++v19 >= 5 )
                goto LABEL_49;
            }
          }
        }
      }
      ++v35;
      if ( ++v31 >= a3 )
        goto LABEL_32;
    }
  }
  AppContainerSidType = RtlGetAppContainerSidType(a2[1]);
  if ( AppContainerSidType >= 0 )
  {
    v11 = a2[1];
    v21 = RtlSubAuthoritySid(a2[1], 0xBu);
    v22 = RtlSubAuthoritySid(v11, 0xAu);
    v23 = RtlSubAuthoritySid(v11, 9u);
    v24 = RtlSubAuthoritySid(v11, 8u);
    v30 = *v21;
    HandleInformation = *v22;
    Object = *v23;
    v4 = 0;
    AppContainerSidType = RtlStringCchPrintfW(
                            SourceString,
                            0x100uLL,
                            L"%u-%u-%u-%u",
                            *v24,
                            Object,
                            HandleInformation,
                            v30);
    if ( AppContainerSidType >= 0 )
    {
      RtlInitUnicodeString(&UnicodeString, SourceString);
      v12 = *(unsigned int *)(a1 + 120);
      v34[0] = &UnicodeString;
      AppContainerSidType = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%d", v12);
      if ( AppContainerSidType >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, pszDest);
        v38[0] = 1;
        RtlInitUnicodeString(&v39, L"\\Device\\NamedPipe");
        v40 = 0;
        goto LABEL_6;
      }
    }
  }
LABEL_32:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
    HalPutDmaAdapter(v9);
  return (unsigned int)AppContainerSidType;
}
