/*
 * XREFs of ACPIGetProcessorIDWide @ 0x1C001E2B0
 * Callers:
 *     ACPIGetConvertToDeviceIDWide @ 0x1C001D038 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToHardwareIDWide @ 0x1C001D6EC (ACPIGetConvertToHardwareIDWide.c)
 * Callees:
 *     ACPIAnsiStringToWideHelper @ 0x1C001D258 (ACPIAnsiStringToWideHelper.c)
 *     RtlStringCchPrintfA @ 0x1C001D284 (RtlStringCchPrintfA.c)
 *     RtlStringCchPrintfExA @ 0x1C001E73C (RtlStringCchPrintfExA.c)
 *     RtlStringCchCopyNA @ 0x1C0020438 (RtlStringCchCopyNA.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 */

__int64 __fastcall ACPIGetProcessorIDWide(__int64 a1, __int64 a2, __int64 a3, int a4, char **a5, _DWORD *a6)
{
  size_t v6; // rbx
  void *v8; // rdi
  char *v9; // rsi
  char *v10; // r13
  size_t v11; // rdx
  void *Pool2; // rax
  ULONG i; // ecx
  char v14; // dl
  __int64 v15; // rdx
  char *v16; // rax
  char *v17; // r14
  char *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r8
  unsigned __int64 v25; // r15
  char *v26; // r14
  unsigned int v27; // ebx
  size_t v29; // rdx
  char *v30; // rcx
  size_t v31; // rdx
  char *v32; // rcx
  char v33[4]; // [rsp+40h] [rbp-40h] BYREF
  ULONG ReturnLength; // [rsp+44h] [rbp-3Ch] BYREF
  size_t pcchRemaining; // [rsp+48h] [rbp-38h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+50h] [rbp-30h] BYREF
  char *v37; // [rsp+58h] [rbp-28h]
  char **v38; // [rsp+60h] [rbp-20h]
  _DWORD *v39; // [rsp+68h] [rbp-18h]
  char v40[8]; // [rsp+70h] [rbp-10h] BYREF

  v6 = (unsigned __int16)AcpiProcessorString;
  v38 = a5;
  v8 = 0LL;
  v9 = 0LL;
  v39 = a6;
  v10 = 0LL;
  strcpy(v40, "ACPI\\");
  v11 = (unsigned __int16)AcpiProcessorString;
  *(_WORD *)v33 = 42;
  ReturnLength = 0;
  LODWORD(ppszDestEnd) = a4 & 0x40;
  v37 = 0LL;
  pcchRemaining = (unsigned __int16)AcpiProcessorString;
  if ( (a4 & 0x40) == 0 )
  {
    if ( (a4 & 0x20) == 0 )
      goto LABEL_28;
    if ( ZwQuerySystemInformation(SystemProcessorBrandString, 0LL, 0, &ReturnLength) == -1073741820 )
    {
      Pool2 = (void *)ExAllocatePool2(64LL, ReturnLength, 1399874369LL);
      v8 = Pool2;
      if ( Pool2 )
      {
        if ( ZwQuerySystemInformation(SystemProcessorBrandString, Pool2, ReturnLength, &ReturnLength) < 0 )
        {
          ExFreePoolWithTag(v8, 0x53706341u);
          v8 = 0LL;
        }
        else
        {
          for ( i = 0; i < ReturnLength; ++i )
          {
            v14 = *((_BYTE *)v8 + i);
            if ( !v14 )
              break;
            if ( (unsigned __int8)(v14 - 32) > 0x5Fu || v14 == 44 )
              *((_BYTE *)v8 + i) = 32;
          }
        }
      }
    }
    v15 = -1LL;
    do
      ++v15;
    while ( v40[v15] );
    v11 = v6 + (unsigned int)v15;
    pcchRemaining = v11;
    v6 = v11;
    if ( !v8 )
    {
LABEL_28:
      v25 = 2 * v11;
      v26 = (char *)ExAllocatePool2(
                      (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                      2 * v11,
                      1399874369LL);
      if ( !v26 )
      {
        v27 = -1073741670;
        goto LABEL_35;
      }
      if ( (a4 & 0x20) != 0 )
      {
        if ( v8 )
          RtlStringCchPrintfA(v26, v6, "%s%s - %s", v40, *((const char **)&AcpiProcessorString + 1), (const char *)v8);
        else
          RtlStringCchPrintfA(v26, v6, "%s%s", v40, *((_QWORD *)&AcpiProcessorString + 1));
      }
      else
      {
        if ( !(_DWORD)ppszDestEnd )
        {
LABEL_33:
          v27 = 0;
          *v38 = v26;
          if ( v39 )
            *v39 = v25;
LABEL_35:
          if ( !v9 )
            goto LABEL_37;
          goto LABEL_36;
        }
        ppszDestEnd = v26;
        RtlStringCchPrintfExA(v26, v6, &ppszDestEnd, &pcchRemaining, 0, "%s%s", v40, v9);
        RtlStringCchPrintfExA(ppszDestEnd + 1, pcchRemaining - 1, &ppszDestEnd, &pcchRemaining, 0, "%s%s", v33, v9);
        v29 = pcchRemaining - 1;
        v30 = ppszDestEnd + 1;
        *(v37 - 1) = 0;
        RtlStringCchPrintfExA(v30, v29, &ppszDestEnd, &pcchRemaining, 0, "%s%s", v40, v9);
        RtlStringCchPrintfExA(ppszDestEnd + 1, pcchRemaining - 1, &ppszDestEnd, &pcchRemaining, 0, "%s%s", v33, v9);
        v31 = pcchRemaining - 1;
        v32 = ppszDestEnd + 1;
        *(v10 - 1) = 0;
        RtlStringCchPrintfExA(v32, v31, &ppszDestEnd, &pcchRemaining, 0, "%s%s", v40, v9);
        RtlStringCchPrintfA(ppszDestEnd + 1, pcchRemaining - 1, "%s%s", v33, v9);
      }
      ACPIAnsiStringToWideHelper(v26, v25);
      goto LABEL_33;
    }
    v6 = v11 + ReturnLength + 3;
LABEL_27:
    v11 = v6;
    pcchRemaining = v6;
    goto LABEL_28;
  }
  v16 = (char *)ExAllocatePool2(64LL, (unsigned __int16)AcpiProcessorString, 1399874369LL);
  v9 = v16;
  if ( !v16 )
    return (unsigned int)-1073741670;
  RtlStringCchCopyNA(v16, v6, *((STRSAFE_PCNZCH *)&AcpiProcessorString + 1), (unsigned __int16)AcpiProcessorString);
  v17 = strstr(v9, "Model");
  v37 = v17;
  v18 = strstr(v9, "Family");
  v10 = v18;
  if ( v17 && v18 )
  {
    v19 = -1LL;
    v20 = -1LL;
    do
      ++v20;
    while ( v17[v20] );
    v21 = -1LL;
    do
      ++v21;
    while ( v10[v21] );
    v22 = 6 * v6 - (unsigned int)(2 * v20) - (unsigned int)(2 * v21);
    v23 = -1LL;
    do
      ++v23;
    while ( v33[v23] );
    v24 = (unsigned int)(3 * v23) + v22;
    do
      ++v19;
    while ( v40[v19] );
    v6 = v24 + (unsigned int)(3 * v19) + 1LL;
    goto LABEL_27;
  }
  v27 = -1073741823;
LABEL_36:
  ExFreePoolWithTag(v9, 0x53706341u);
LABEL_37:
  if ( v8 )
    ExFreePoolWithTag(v8, 0x53706341u);
  return v27;
}
