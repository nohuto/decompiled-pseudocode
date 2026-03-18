/*
 * XREFs of ACPIRegReadEntireSimulatorAcpiTable @ 0x1C00B2020
 * Callers:
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C00B1B70 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C001D284 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     WPP_RECORDER_SF_d @ 0x1C005E894 (WPP_RECORDER_SF_d.c)
 *     OSReadRegValue @ 0x1C00968B0 (OSReadRegValue.c)
 */

__int64 __fastcall ACPIRegReadEntireSimulatorAcpiTable(void *a1, const void **a2)
{
  unsigned int *v2; // r14
  _BYTE *v3; // rbx
  int v5; // r12d
  void *v6; // rdi
  _BYTE *i; // r8
  __int64 Pool2; // rax
  int v9; // eax
  unsigned int v10; // esi
  unsigned int v11; // ebp
  unsigned int *v12; // rdi
  __int64 v13; // rax
  unsigned int *v14; // r13
  unsigned int *v15; // rax
  unsigned int v16; // edx
  unsigned int v18; // [rsp+30h] [rbp-68h] BYREF
  void *v19; // [rsp+38h] [rbp-60h]
  char pszDest[16]; // [rsp+40h] [rbp-58h] BYREF

  v2 = (unsigned int *)*a2;
  v3 = 0LL;
  v18 = 0;
  v5 = 0;
  v19 = a1;
  v6 = a1;
  while ( 1 )
  {
    RtlStringCchPrintfA(pszDest, 9uLL, "%08lx", v5);
    for ( i = v3; ; i = (_BYTE *)Pool2 )
    {
      v9 = OSReadRegValue(pszDest, v6, i, &v18);
      if ( v9 >= 0 )
        break;
      if ( v9 != -2147483643 )
      {
        ExFreePoolWithTag(v3, 0);
        return 0LL;
      }
      if ( v3 )
        ExFreePoolWithTag(v3, 0);
      Pool2 = ExAllocatePool2(256LL, v18, 1114661697LL);
      v3 = (_BYTE *)Pool2;
      if ( !Pool2 )
        return 3221225626LL;
    }
    v10 = v18;
    if ( v18 < 8 )
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
          v15 = (unsigned int *)ExAllocatePool2(64LL, (unsigned int)v13, 1953522497LL);
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
      (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
      v18);
  ExFreePoolWithTag(v3, 0);
  return 3221225473LL;
}
