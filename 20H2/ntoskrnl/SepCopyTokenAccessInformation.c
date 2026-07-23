/*
 * XREFs of SepCopyTokenAccessInformation @ 0x1405D657C
 * Callers:
 *     SeQueryInformationToken @ 0x14060D9F0 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x14061D520 (NtQueryInformationToken.c)
 * Callees:
 *     SeQueryMandatoryPolicyToken @ 0x140202B98 (SeQueryMandatoryPolicyToken.c)
 *     RtlSidHashInitialize @ 0x14020DF80 (RtlSidHashInitialize.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x14023D5B0 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     AuthzBasepQueryInternalSecurityAttributesToken @ 0x1405D6A04 (AuthzBasepQueryInternalSecurityAttributesToken.c)
 *     RtlCopySidAndAttributesArray @ 0x14061F860 (RtlCopySidAndAttributesArray.c)
 */

__int64 __fastcall SepCopyTokenAccessInformation(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        int a9,
        unsigned int a10,
        unsigned int a11,
        int a12,
        int a13,
        char a14,
        unsigned __int8 *a15)
{
  int v18; // r15d
  __int64 v19; // rcx
  __int64 v20; // rcx
  char *v21; // rbp
  int v22; // eax
  ULONG v23; // r8d
  void *SidArea; // rax
  __int64 v25; // rbx
  __int64 v26; // rdi
  ULONG v27; // ecx
  __int64 v28; // rbx
  __int64 v29; // rdi
  ULONG v30; // ecx
  char *v31; // rbx
  char *v32; // rdi
  unsigned __int8 *v33; // rdx
  char *v34; // rbx
  char *v35; // rbx
  char *v36; // rdx
  PSID RemainingSidArea; // [rsp+70h] [rbp+8h] BYREF

  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 192);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a1 + 196);
  *(_DWORD *)(a2 + 44) = *(_DWORD *)(a1 + 200);
  v18 = a2 + a3;
  SeQueryMandatoryPolicyToken(a1, (_DWORD *)(a2 + 40));
  v20 = *(_QWORD *)(v19 + 1080);
  v21 = 0LL;
  v22 = 0;
  if ( v20 )
    v22 = *(_DWORD *)(v20 + 40);
  v23 = a5 - a6;
  *(_DWORD *)(a2 + 48) = v22;
  *(_DWORD *)(a2 + 88) = *(_DWORD *)(a1 + 124);
  SidArea = (void *)(a2 + 360 + a6);
  *(_QWORD *)(a2 + 96) = a2 + 360;
  *(_QWORD *)a2 = a2 + 88;
  RtlCopySidAndAttributesArray(
    *(_DWORD *)(a1 + 124),
    *(PSID_AND_ATTRIBUTES *)(a1 + 152),
    v23,
    (PSID_AND_ATTRIBUTES)(a2 + 360),
    SidArea,
    &RemainingSidArea,
    (PULONG)&RemainingSidArea);
  RtlSidHashInitialize((PSID_AND_ATTRIBUTES)(a2 + 360), *(_DWORD *)(a1 + 124), (PSID_AND_ATTRIBUTES_HASH)(a2 + 88));
  v25 = a2 + 360 + a5;
  *(_DWORD *)v25 = *(_DWORD *)(a1 + 128);
  v26 = v25 + 272;
  *(_QWORD *)(v25 + 8) = v25 + 272;
  *(_QWORD *)(a2 + 8) = v25;
  v27 = *(_DWORD *)(a1 + 128);
  if ( v27 )
  {
    RtlCopySidAndAttributesArray(
      v27,
      *(PSID_AND_ATTRIBUTES *)(a1 + 160),
      a7 - a8,
      (PSID_AND_ATTRIBUTES)(v25 + 272),
      (PSID)(v26 + a8),
      &RemainingSidArea,
      (PULONG)&RemainingSidArea);
    RtlSidHashInitialize((PSID_AND_ATTRIBUTES)(v25 + 272), *(_DWORD *)(a1 + 128), (PSID_AND_ATTRIBUTES_HASH)v25);
  }
  v28 = v26 + a7;
  *(_DWORD *)v28 = *(_DWORD *)(a1 + 800);
  v29 = v28 + 272;
  *(_QWORD *)(v28 + 8) = v28 + 272;
  *(_QWORD *)(a2 + 64) = v28;
  v30 = *(_DWORD *)(a1 + 800);
  if ( v30 )
  {
    RtlCopySidAndAttributesArray(
      v30,
      *(PSID_AND_ATTRIBUTES *)(a1 + 792),
      a10 - a11,
      (PSID_AND_ATTRIBUTES)(v28 + 272),
      (PSID)(v29 + a11),
      &RemainingSidArea,
      (PULONG)&RemainingSidArea);
    RtlSidHashInitialize((PSID_AND_ATTRIBUTES)(v28 + 272), *(_DWORD *)(a1 + 800), (PSID_AND_ATTRIBUTES_HASH)v28);
  }
  v31 = (char *)(v29 + a10);
  v32 = 0LL;
  if ( a9 )
  {
    v32 = v31;
    memmove(v31, *(const void **)(a1 + 784), 4LL * *(unsigned __int8 *)(*(_QWORD *)(a1 + 784) + 1LL) + 8);
  }
  v33 = a15;
  *(_QWORD *)(a2 + 56) = v32;
  if ( !a14 )
    v33 = *(unsigned __int8 **)(a1 + 1104);
  v34 = &v31[a9];
  if ( a12 )
  {
    v21 = v34;
    memmove(v34, v33, 4LL * v33[1] + 8);
  }
  v35 = &v34[a12];
  *(_QWORD *)(a2 + 72) = v21;
  AuthzBasepQueryInternalSecurityAttributesToken(
    *(_QWORD *)(a1 + 776),
    v35,
    (unsigned int)(v18 - (_DWORD)v35),
    &RemainingSidArea);
  v36 = &v35[a13];
  *(_QWORD *)(a2 + 80) = v35;
  *(_DWORD *)v36 = a4;
  *(_QWORD *)(a2 + 16) = v36;
  return SepConvertTokenPrivilegesToLuidAndAttributes((_QWORD *)a1, (__int64)(v36 + 4));
}
