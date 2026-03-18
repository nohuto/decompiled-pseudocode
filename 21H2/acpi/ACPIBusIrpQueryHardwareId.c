/*
 * XREFs of ACPIBusIrpQueryHardwareId @ 0x1C0092C24
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C0093F10 (ACPIBusIrpQueryId.c)
 * Callees:
 *     AMLIGetNSObjectType @ 0x1C0001738 (AMLIGetNSObjectType.c)
 *     RtlStringCbPrintfExW @ 0x1C0006798 (RtlStringCbPrintfExW.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     WPP_RECORDER_SF_qdLqss @ 0x1C004D1E8 (WPP_RECORDER_SF_qdLqss.c)
 *     ACPIValidateStringVendorDeviceIdFormat @ 0x1C0091B94 (ACPIValidateStringVendorDeviceIdFormat.c)
 *     ACPIAllocateBuffer @ 0x1C0092FC8 (ACPIAllocateBuffer.c)
 */

__int64 __fastcall ACPIBusIrpQueryHardwareId(wchar_t **a1, size_t *a2, __int64 a3)
{
  void *v6; // r15
  int v7; // esi
  wchar_t *v8; // rax
  size_t v9; // rbx
  NTSTRSAFE_PWSTR v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  size_t v15; // r8
  char *v16; // rdx
  __int64 v17; // rdx
  void *Pool2; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  NTSTATUS v21; // eax
  bool v22; // zf
  int v23; // eax
  const char *v25; // rax
  __int64 v26; // rdx
  const char *v27; // rcx
  __int64 v28; // r8
  int dwFlags; // [rsp+20h] [rbp-49h]
  int pszFormat; // [rsp+28h] [rbp-41h]
  int v31; // [rsp+30h] [rbp-39h]
  PVOID P; // [rsp+60h] [rbp-9h] BYREF
  size_t v33; // [rsp+68h] [rbp-1h] BYREF
  size_t Size; // [rsp+70h] [rbp+7h] BYREF
  void *Src; // [rsp+78h] [rbp+Fh] BYREF
  PVOID v36; // [rsp+80h] [rbp+17h] BYREF
  _QWORD v37[7]; // [rsp+88h] [rbp+1Fh] BYREF
  size_t pcbRemaining; // [rsp+E0h] [rbp+77h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+E8h] [rbp+7Fh] BYREF

  Src = 0LL;
  P = 0LL;
  v36 = 0LL;
  v6 = 0LL;
  v33 = 0LL;
  Size = 0LL;
  v37[0] = 0LL;
  v7 = ACPIGet(a3, 1145653343, 268959830, 0LL, 0, 0LL, 0LL, (__int64)&Src, (__int64)&Size);
  if ( v7 < 0 )
    goto LABEL_46;
  v8 = (wchar_t *)ACPIAllocateBuffer(a2, a3, Size + 660);
  v9 = *a2;
  v10 = v8;
  pcbRemaining = v9;
  *a1 = v8;
  ppszDestEnd = v8;
  if ( !v8 )
  {
    v7 = -1073741670;
    goto LABEL_46;
  }
  v11 = *(_QWORD *)(a3 + 760);
  if ( v11 && (unsigned int)AMLIGetNSObjectType(v11) == 12 )
  {
    memmove(v10, Src, Size);
    if ( v9 < Size )
      goto LABEL_34;
    v7 = RtlStringCbPrintfExW(&v10[Size >> 1], v9 - Size, &ppszDestEnd, &pcbRemaining, 0, &word_1C006FA08);
    goto LABEL_33;
  }
  v12 = *(_QWORD *)(a3 + 8);
  if ( (v12 & 0x200000000000LL) == 0 || (v12 & 0x800000000000LL) != 0 )
    goto LABEL_25;
  v13 = *(_QWORD *)(a3 + 608);
  if ( !v13 )
  {
    v23 = ACPIGet(a3, 1145653343, 268959782, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&v33);
LABEL_29:
    v7 = v23;
    if ( v23 >= 0 )
      goto LABEL_34;
    goto LABEL_33;
  }
  v14 = -1LL;
  do
    ++v14;
  while ( *(_BYTE *)(v13 + v14) );
  v33 = v14;
  P = (PVOID)ExAllocatePool2(256LL, v14, 1114661697LL);
  if ( !P )
    goto LABEL_34;
  v15 = v33;
  v16 = *(char **)(a3 + 608);
  if ( v33 >= 5 )
  {
    v15 = v33 - 5;
    v33 -= 5LL;
    v16 += 5;
  }
  memmove(P, v16, v15);
  if ( !ACPIValidateStringVendorDeviceIdFormat((__int64)P, v33) && (*(_BYTE *)(a3 + 1000) & 0x1C) == 0 )
    goto LABEL_25;
  Pool2 = (void *)ExAllocatePool2(256LL, v17, 1114661697LL);
  v6 = Pool2;
  if ( !Pool2 )
    goto LABEL_34;
  if ( v33 == 7 )
  {
    v19 = 3LL;
  }
  else
  {
    v19 = 4LL;
    if ( v33 <= 4 )
      goto LABEL_18;
  }
  memmove(Pool2, (char *)P + v19, v33 - v19);
  *((_BYTE *)P + v19) = 0;
LABEL_18:
  v20 = *(_QWORD *)(a3 + 1000);
  if ( (v20 & 0x10) != 0 )
  {
    v7 = ACPIGet(a3, 1112888159, 268959764, 0LL, 0, 0LL, 0LL, (__int64)&v36, (__int64)v37);
    if ( v7 < 0 )
      goto LABEL_46;
    if ( (*(_BYTE *)(a3 + 1000) & 8) != 0 )
    {
      v31 = (int)P;
      v7 = RtlStringCbPrintfExW(v10, v9, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S&SUBSYS_%S&REV_%04X");
      if ( v7 < 0 )
        goto LABEL_46;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_34;
      v10 = ppszDestEnd + 1;
      v9 = pcbRemaining - 2;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
    }
    v31 = (int)P;
    v21 = RtlStringCbPrintfExW(v10, v9, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S&SUBSYS_%S");
  }
  else
  {
    if ( (v20 & 8) != 0 )
    {
      v31 = (int)P;
      v7 = RtlStringCbPrintfExW(v10, v9, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S&REV_%04X");
      if ( v7 < 0 )
        goto LABEL_46;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_34;
      v10 = ppszDestEnd + 1;
      v9 = pcbRemaining - 2;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
    }
    v31 = (int)P;
    v21 = RtlStringCbPrintfExW(v10, v9, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S");
  }
  v7 = v21;
  if ( v21 < 0 )
    goto LABEL_46;
  if ( !ppszDestEnd || pcbRemaining < 2 )
    goto LABEL_34;
  v9 = pcbRemaining - 2;
  v10 = ppszDestEnd + 1;
  v22 = (*(_BYTE *)(a3 + 1000) & 4) == 0;
  ++ppszDestEnd;
  pcbRemaining -= 2LL;
  if ( !v22 )
  {
    v31 = (int)P;
    v7 = RtlStringCbPrintfExW(
           v10,
           v9,
           &ppszDestEnd,
           &pcbRemaining,
           0,
           L"ACPI\\VEN_%S&DEV_%S&CLS_%04I64X&SUBCLS_%04I64X&PI_%02I64X");
    if ( v7 < 0 )
      goto LABEL_46;
    if ( !ppszDestEnd || pcbRemaining < 2 )
      goto LABEL_34;
    v31 = (int)P;
    ++ppszDestEnd;
    pcbRemaining -= 2LL;
    v7 = RtlStringCbPrintfExW(
           ppszDestEnd,
           pcbRemaining,
           &ppszDestEnd,
           &pcbRemaining,
           0,
           L"ACPI\\VEN_%S&DEV_%S&CLS_%04I64X&SUBCLS_%04I64X");
    if ( v7 < 0 )
      goto LABEL_46;
    if ( !ppszDestEnd || pcbRemaining < 2 )
      goto LABEL_34;
    v10 = ppszDestEnd + 1;
    v9 = pcbRemaining - 2;
  }
LABEL_25:
  if ( v9 > Size )
  {
    memmove(v10, Src, Size);
    if ( v10 && v9 >= Size )
    {
      v23 = RtlStringCbPrintfExW(&v10[Size >> 1], v9 - Size, &ppszDestEnd, &pcbRemaining, 0, &word_1C006FA08);
      goto LABEL_29;
    }
LABEL_33:
    if ( v7 >= 0 )
      goto LABEL_34;
    goto LABEL_46;
  }
  v7 = -1073741670;
LABEL_46:
  v25 = (const char *)&unk_1C006FB8B;
  v26 = 0LL;
  v27 = (const char *)&unk_1C006FB8B;
  if ( a3 )
  {
    v28 = *(_QWORD *)(a3 + 8);
    v26 = a3;
    if ( (v28 & 0x200000000000LL) != 0 )
    {
      v25 = *(const char **)(a3 + 608);
      if ( (v28 & 0x400000000000LL) != 0 )
        v27 = *(const char **)(a3 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v26,
      (__int64)&WPP_RECORDER_INITIALIZED,
      0x29u,
      dwFlags,
      pszFormat,
      v31,
      v7,
      v26,
      v25,
      v27);
LABEL_34:
  if ( v36 )
    ExFreePoolWithTag(v36, 0x53706341u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x53706341u);
  if ( P )
    ExFreePoolWithTag(P, 0x53706341u);
  if ( Src )
    ExFreePoolWithTag(Src, 0x53706341u);
  return (unsigned int)v7;
}
