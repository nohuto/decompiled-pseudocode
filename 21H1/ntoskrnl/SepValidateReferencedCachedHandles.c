/*
 * XREFs of SepValidateReferencedCachedHandles @ 0x140678680
 * Callers:
 *     SepSetTokenCachedHandles @ 0x140677FE4 (SepSetTokenCachedHandles.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     RtlStringCchPrintfW @ 0x1402E2030 (RtlStringCchPrintfW.c)
 *     RtlSubAuthoritySid @ 0x14035C480 (RtlSubAuthoritySid.c)
 *     RtlGetCurrentServiceSessionId @ 0x1403A2C60 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x140609D30 (RtlEqualUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x14061B6D0 (RtlPrefixUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     SepQueryNameString @ 0x140678A7C (SepQueryNameString.c)
 *     RtlConvertSidToUnicodeString @ 0x140690990 (RtlConvertSidToUnicodeString.c)
 *     RtlGetAppContainerSidType @ 0x14070D180 (RtlGetAppContainerSidType.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  ULONG Object; // [rsp+20h] [rbp-E0h]
  ULONG HandleInformation; // [rsp+28h] [rbp-D8h]
  ULONG v28; // [rsp+30h] [rbp-D0h]
  int v29; // [rsp+48h] [rbp-B8h]
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v32[2]; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE *v33; // [rsp+68h] [rbp-98h]
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v36[8]; // [rsp+90h] [rbp-70h]
  UNICODE_STRING v37; // [rsp+98h] [rbp-68h] BYREF
  char v38; // [rsp+A8h] [rbp-58h]
  wchar_t pszDest[256]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t SourceString[256]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v4 = 0;
  v33 = a4;
  v6 = *(_DWORD *)a2;
  v29 = 0;
  AppContainerSidType = 0;
  v9 = 0LL;
  P = 0LL;
  v10 = 0;
  v32[0] = 0LL;
  UnicodeString = 0LL;
  if ( v6 )
  {
    if ( v6 != 1 )
      goto LABEL_7;
    v25 = *(unsigned int *)(a1 + 120);
    v32[0] = a2 + 1;
    AppContainerSidType = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%d", v25);
    if ( AppContainerSidType < 0 )
      goto LABEL_32;
    RtlInitUnicodeString(&DestinationString, pszDest);
    v36[0] = 1;
    v10 = 1;
    if ( *(_DWORD *)(a1 + 120) != (unsigned int)RtlGetCurrentServiceSessionId() )
      goto LABEL_7;
    RtlInitUnicodeString(&v37, L"\\BaseNamedObjects");
    v38 = 1;
LABEL_6:
    v10 = 2;
LABEL_7:
    if ( !a3 )
      goto LABEL_32;
    v13 = (const UNICODE_STRING *)v32[0];
    while ( 1 )
    {
      if ( v9 )
        HalPutDmaAdapter(v9);
      v32[0] = 0LL;
      v14 = ObReferenceObjectByHandle(*v33, 0, 0LL, 0, v32, 0LL);
      v9 = (struct _DMA_ADAPTER *)v32[0];
      AppContainerSidType = v14;
      if ( v14 >= 0 )
      {
        v15 = (char *)v32[0] - 48;
        v16 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v32[0] - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(LOWORD(v32[0]) - 48) >> 8)];
        if ( v16 != ObpDirectoryObjectType
          && v16 != ObpSymbolicLinkObjectType
          && (v16 != (struct _OBJECT_TYPE *)IoFileObjectType || *(_DWORD *)(*((_QWORD *)v32[0] + 1) + 72LL) != 17) )
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
        if ( !P || !*((_WORD *)P + 1) || (*(_OWORD *)v32 = *(_OWORD *)P, !v10) )
        {
LABEL_49:
          AppContainerSidType = -1073741811;
          goto LABEL_32;
        }
        while ( !RtlPrefixUnicodeString(
                   (UNICODE_STRING *)((char *)&DestinationString + 24 * v4),
                   (PCUNICODE_STRING)v32,
                   1u) )
        {
          if ( ++v4 >= v10 )
            goto LABEL_49;
        }
        v17 = 3LL * v4;
        v4 = 0;
        if ( v36[8 * v17] )
        {
          if ( (v15[26] & 2) != 0 )
            v18 = &v15[-ObpInfoMaskToOffset[v15[26] & 3]];
          else
            v18 = 0LL;
          if ( !v18 || !*((_WORD *)v18 + 5) )
            goto LABEL_49;
          *(_OWORD *)v32 = *(_OWORD *)(v18 + 8);
          if ( !RtlEqualUnicodeString((PCUNICODE_STRING)v32, v13, 1u) )
          {
            v19 = 0;
            while ( !RtlEqualUnicodeString(
                       (PCUNICODE_STRING)v32,
                       (PCUNICODE_STRING)&AllowedCachedObjectNames[2 * v19],
                       1u) )
            {
              if ( ++v19 >= 5 )
                goto LABEL_49;
            }
          }
        }
      }
      ++v33;
      if ( ++v29 >= a3 )
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
    v28 = *v21;
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
                            v28);
    if ( AppContainerSidType >= 0 )
    {
      RtlInitUnicodeString(&UnicodeString, SourceString);
      v12 = *(unsigned int *)(a1 + 120);
      v32[0] = &UnicodeString;
      AppContainerSidType = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%d", v12);
      if ( AppContainerSidType >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, pszDest);
        v36[0] = 1;
        RtlInitUnicodeString(&v37, L"\\Device\\NamedPipe");
        v38 = 0;
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
