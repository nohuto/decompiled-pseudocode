/*
 * XREFs of ACPIGetConvertToDeviceIDWide @ 0x1C0028108
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C000C130 (ACPIGetWorkerForString.c)
 *     ACPIGetConvertToDeviceID @ 0x1C0027ED8 (ACPIGetConvertToDeviceID.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C000C588 (RtlStringCchPrintfA.c)
 *     ACPIAnsiStringToWideHelper @ 0x1C000C604 (ACPIAnsiStringToWideHelper.c)
 *     ACPIGetProcessorIDWide @ 0x1C0027480 (ACPIGetProcessorIDWide.c)
 *     ACPIAmliDoubleToNameWide @ 0x1C002834C (ACPIAmliDoubleToNameWide.c)
 *     memset @ 0x1C0032180 (memset.c)
 */

__int64 __fastcall ACPIGetConvertToDeviceIDWide(__int64 a1, __int64 a2, __int64 a3, int a4, char **a5, int *a6)
{
  __int64 v8; // rax
  int v9; // ebp
  char *v10; // rdi
  int v12; // eax
  _BYTE *v13; // rsi
  __int64 v14; // rbx
  unsigned int v15; // ebx
  SIZE_T v16; // r14
  char *v17; // rax
  __int64 v18; // rbx
  unsigned int v19; // ebx
  char *PoolWithTag; // rax

  if ( (a4 & 0x4000000) == 0 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    if ( (v8 & 0x1000000000LL) != 0 )
      return ACPIGetProcessorIDWide(0x1000000000LL, a2, a3, a4, a5, a6);
    if ( (v8 & 0x800000000000LL) != 0 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( *(_BYTE *)(*(_QWORD *)(a1 + 568) + v18) );
      v19 = v18 + 1;
      v9 = 2 * v19;
      v16 = 2 * v19;
      PoolWithTag = (char *)ExAllocatePoolWithTag(
                              (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                              v16,
                              0x53706341u);
      v10 = PoolWithTag;
      if ( !PoolWithTag )
        return 3221225626LL;
      memset(PoolWithTag, 0, (unsigned int)v16);
      RtlStringCchPrintfA(v10, v19, "%s", *(_QWORD *)(a1 + 568));
LABEL_20:
      ACPIAnsiStringToWideHelper(v10, v16);
      goto LABEL_8;
    }
  }
  if ( (int)a2 < 0 )
    return (unsigned int)a2;
  if ( *(_WORD *)(a3 + 2) != 1 )
  {
    if ( *(_WORD *)(a3 + 2) != 2 )
      return 3222536207LL;
    v12 = *(_DWORD *)(a3 + 24);
    v13 = *(_BYTE **)(a3 + 32);
    if ( !v12 )
      return 3221225485LL;
    if ( *v13 == 42 )
    {
      ++v13;
      --v12;
    }
    if ( !v12 )
      return 3221225485LL;
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = v14 + 6;
    v9 = 2 * v15;
    v16 = 2 * v15;
    v17 = (char *)ExAllocatePoolWithTag(
                    (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                    v16,
                    0x53706341u);
    v10 = v17;
    if ( !v17 )
      return 3221225626LL;
    memset(v17, 0, (unsigned int)v16);
    RtlStringCchPrintfA(v10, v15, "ACPI\\%s", v13);
    goto LABEL_20;
  }
  v9 = 26;
  v10 = (char *)ExAllocatePoolWithTag(
                  (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                  0x1AuLL,
                  0x53706341u);
  if ( !v10 )
    return 3221225626LL;
  *(_OWORD *)v10 = 0LL;
  *((_QWORD *)v10 + 2) = 0LL;
  *((_WORD *)v10 + 12) = 0;
  RtlStringCchPrintfA(v10, 0xDuLL, "ACPI\\");
  ACPIAnsiStringToWideHelper(v10, 0xAuLL);
  ACPIAmliDoubleToNameWide(v10 + 10, *(unsigned int *)(a3 + 16), 0LL);
LABEL_8:
  *a5 = v10;
  if ( a6 )
    *a6 = v9;
  return 0LL;
}
