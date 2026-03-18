/*
 * XREFs of ACPIGetConvertToDeviceIDWide @ 0x1C001D038
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C0019740 (ACPIGetWorkerForString.c)
 *     ACPIGetConvertToDeviceID @ 0x1C001CFD0 (ACPIGetConvertToDeviceID.c)
 * Callees:
 *     ACPIAnsiStringToWideHelper @ 0x1C001D258 (ACPIAnsiStringToWideHelper.c)
 *     RtlStringCchPrintfA @ 0x1C001D284 (RtlStringCchPrintfA.c)
 *     ACPIAmliDoubleToNameWide @ 0x1C001D62C (ACPIAmliDoubleToNameWide.c)
 *     ACPIGetProcessorIDWide @ 0x1C001E2B0 (ACPIGetProcessorIDWide.c)
 */

__int64 __fastcall ACPIGetConvertToDeviceIDWide(__int64 a1, int a2, __int64 a3, int a4, char **a5, int *a6)
{
  __int64 v8; // rax
  int v9; // ebp
  char *v10; // rax
  char *Pool2; // rdi
  int v13; // eax
  _BYTE *v14; // rsi
  __int64 v15; // rbx
  unsigned int v16; // ebx
  __int64 v17; // r14
  __int64 v18; // rbx
  unsigned int v19; // ebx

  if ( (a4 & 0x4000000) == 0 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    if ( (v8 & 0x1000000000LL) != 0 )
      return ACPIGetProcessorIDWide(a1, a2, a3, a4, (__int64)a5, (__int64)a6);
    if ( (v8 & 0x800000000000LL) != 0 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( *(_BYTE *)(*(_QWORD *)(a1 + 608) + v18) );
      v19 = v18 + 1;
      v9 = 2 * v19;
      v17 = 2 * v19;
      Pool2 = (char *)ExAllocatePool2(
                        (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                        v17,
                        1399874369LL);
      if ( !Pool2 )
        return 3221225626LL;
      RtlStringCchPrintfA(Pool2, v19, "%s", *(_QWORD *)(a1 + 608));
LABEL_19:
      ACPIAnsiStringToWideHelper(Pool2, v17);
      goto LABEL_8;
    }
  }
  if ( a2 < 0 )
    return (unsigned int)a2;
  if ( *(_WORD *)(a3 + 2) != 1 )
  {
    if ( *(_WORD *)(a3 + 2) != 2 )
      return 3222536207LL;
    v13 = *(_DWORD *)(a3 + 24);
    v14 = *(_BYTE **)(a3 + 32);
    if ( !v13 )
      return 3221225485LL;
    if ( *v14 == 42 )
    {
      ++v14;
      if ( v13 == 1 )
        return 3221225485LL;
    }
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    v16 = v15 + 6;
    v9 = 2 * v16;
    v17 = 2 * v16;
    Pool2 = (char *)ExAllocatePool2(
                      (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                      v17,
                      1399874369LL);
    if ( !Pool2 )
      return 3221225626LL;
    RtlStringCchPrintfA(Pool2, v16, "ACPI\\%s", v14);
    goto LABEL_19;
  }
  v9 = 26;
  v10 = (char *)ExAllocatePool2((-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256, 26LL, 1399874369LL);
  Pool2 = v10;
  if ( !v10 )
    return 3221225626LL;
  RtlStringCchPrintfA(v10, 0xDuLL, "ACPI\\");
  ACPIAnsiStringToWideHelper(Pool2, 10LL);
  ACPIAmliDoubleToNameWide(Pool2 + 10, *(unsigned int *)(a3 + 16), 0LL);
LABEL_8:
  *a5 = Pool2;
  if ( a6 )
    *a6 = v9;
  return 0LL;
}
