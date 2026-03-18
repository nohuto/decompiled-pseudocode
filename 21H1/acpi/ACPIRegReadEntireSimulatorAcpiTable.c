/*
 * XREFs of ACPIRegReadEntireSimulatorAcpiTable @ 0x1C00B2420
 * Callers:
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C00B1F58 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C000C588 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     memmove @ 0x1C0031EC0 (memmove.c)
 *     WPP_RECORDER_SF_d @ 0x1C005D9FC (WPP_RECORDER_SF_d.c)
 *     OSReadRegValue @ 0x1C0097134 (OSReadRegValue.c)
 */

__int64 __fastcall ACPIRegReadEntireSimulatorAcpiTable(void *a1, const void **a2)
{
  unsigned int *v2; // r14
  _BYTE *v3; // rbx
  int v5; // r12d
  void *v6; // rdi
  _BYTE *i; // r8
  _BYTE *PoolWithTag; // rax
  int v9; // eax
  unsigned int v10; // esi
  unsigned int v11; // ebp
  unsigned int *v12; // rdi
  __int64 v13; // rax
  unsigned int *v14; // r13
  unsigned int *v15; // rax
  unsigned int v16; // edx
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-68h] BYREF
  void *v19; // [rsp+38h] [rbp-60h]
  char pszDest[16]; // [rsp+40h] [rbp-58h] BYREF

  v2 = (unsigned int *)*a2;
  v3 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v5 = 0;
  v19 = a1;
  v6 = a1;
  while ( 1 )
  {
    RtlStringCchPrintfA(pszDest, 9uLL, "%08lx", v5);
    for ( i = v3; ; i = PoolWithTag )
    {
      v9 = OSReadRegValue(pszDest, v6, i, (unsigned int *)&NumberOfBytes);
      if ( v9 >= 0 )
        break;
      if ( v9 != -2147483643 )
      {
        ExFreePoolWithTag(v3, 0);
        return 0LL;
      }
      if ( v3 )
        ExFreePoolWithTag(v3, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x42706341u);
      v3 = PoolWithTag;
      if ( !PoolWithTag )
        return 3221225626LL;
    }
    v10 = NumberOfBytes;
    if ( (unsigned int)NumberOfBytes < 8 )
      break;
    v11 = 0;
    do
    {
      v12 = (unsigned int *)&v3[v11];
      v13 = *v12;
      if ( v12[1] )
      {
        memmove((char *)*a2 + v13, v12 + 2, v12[1]);
      }
      else
      {
        v14 = v2 + 1;
        if ( (_DWORD)v13 != v2[1] )
        {
          v15 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v13, 0x74706341u);
          v2 = v15;
          if ( !v15 )
          {
            ExFreePoolWithTag(v3, 0);
            return 3221225626LL;
          }
          v16 = *v12;
          if ( *v12 >= *v14 )
            v16 = *v14;
          memmove(v15, *a2, v16);
          if ( *a2 )
            ExFreePoolWithTag((PVOID)*a2, 0);
          *a2 = v2;
        }
      }
      v11 += v12[1] + 8;
    }
    while ( v11 < v10 );
    v6 = v19;
    ++v5;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x16u,
      0x28u,
      (__int64)&WPP_6006670290f3383f41c779ffdcc42ff2_Traceguids,
      NumberOfBytes);
  ExFreePoolWithTag(v3, 0);
  return 3221225473LL;
}
