/*
 * XREFs of AdtpBuildSidListString @ 0x1409692CC
 * Callers:
 *     AdtpPackageParameters @ 0x1403BC9B4 (AdtpPackageParameters.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14025BA90 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1402E1FA0 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     RtlLengthSidAsUnicodeString @ 0x14068F228 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x140690990 (RtlConvertSidToUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildSidListString(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, char *a6)
{
  wchar_t *PoolWithTag; // rsi
  char v7; // r14
  unsigned int v10; // r15d
  unsigned int v11; // r13d
  unsigned int v12; // ebx
  void **v13; // rsi
  void *v14; // rcx
  unsigned int v15; // ecx
  NTSTATUS appended; // ebx
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // r15
  unsigned int v20; // r13d
  PSID *v21; // r15
  unsigned int v22; // eax
  ULONG StringLength; // [rsp+20h] [rbp-E0h] BYREF
  UNICODE_STRING Destination; // [rsp+28h] [rbp-D8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *v27; // [rsp+48h] [rbp-B8h]
  __int64 v28; // [rsp+50h] [rbp-B0h]
  char *v29; // [rsp+58h] [rbp-A8h]
  char v30; // [rsp+60h] [rbp-A0h] BYREF

  PoolWithTag = 0LL;
  v7 = 0;
  v28 = a4;
  v27 = a5;
  v29 = a6;
  UnicodeString = 0LL;
  Destination = 0LL;
  if ( !a1 || (v10 = *a1) == 0 )
  {
    if ( a3 )
    {
      *(_DWORD *)(a3 + 12) = 0;
      *(_QWORD *)a3 = "-";
      *(_DWORD *)(a3 + 8) = 4;
    }
    appended = 0;
LABEL_23:
    if ( appended >= 0 )
      goto LABEL_26;
    goto LABEL_24;
  }
  v11 = 0;
  v12 = 1;
  v13 = (void **)(*((_QWORD *)a1 + 1) + 8LL);
  do
  {
    v14 = *v13;
    StringLength = 0;
    RtlLengthSidAsUnicodeString(v14, &StringLength);
    v15 = v12 + (StringLength >> 1) + 7;
    if ( v15 < v12 )
    {
      appended = -1073741675;
      goto LABEL_26;
    }
    ++v11;
    v13 += 2;
    v12 += (StringLength >> 1) + 7;
  }
  while ( v11 < v10 );
  if ( v15 > 0x7FFF )
  {
    appended = -1073741811;
    goto LABEL_26;
  }
  v17 = (unsigned int)*v27;
  v18 = v17 + v15;
  if ( (unsigned int)v17 + v12 >= 0x400 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v12, 0x6B416553u);
    if ( !PoolWithTag )
    {
      appended = -1073741801;
      goto LABEL_26;
    }
    v7 = 1;
  }
  else
  {
    PoolWithTag = (wchar_t *)(v28 + 2 * v17);
    *v27 = v18;
  }
  v19 = *((_QWORD *)a1 + 1);
  Destination.MaximumLength = 2 * v12;
  appended = 0;
  UnicodeString.MaximumLength = 512;
  v20 = 0;
  Destination.Buffer = PoolWithTag;
  UnicodeString.Buffer = (wchar_t *)&v30;
  if ( !*a1 )
  {
LABEL_18:
    if ( a3 )
    {
      v22 = Destination.Length + 2;
      *(_QWORD *)a3 = PoolWithTag;
      *(_QWORD *)(a3 + 8) = v22;
    }
    goto LABEL_23;
  }
  v21 = (PSID *)(v19 + 8);
  while ( 1 )
  {
    appended = RtlConvertSidToUnicodeString(&UnicodeString, *v21, 0);
    if ( appended < 0 )
      break;
    RtlAppendUnicodeToString(&Destination, L"\r\n\t\t%{");
    RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
    ++v20;
    v21 += 2;
    appended = RtlAppendUnicodeToString(&Destination, L"}");
    if ( v20 >= *a1 )
      goto LABEL_18;
  }
LABEL_24:
  if ( v7 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    v7 = 0;
  }
LABEL_26:
  *v29 = v7;
  return (unsigned int)appended;
}
