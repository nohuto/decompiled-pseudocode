/*
 * XREFs of HalpMcaInitializeErrorSection @ 0x1404BA820
 * Callers:
 *     HalpMcaPopulateErrorData @ 0x1404BA8BC (HalpMcaPopulateErrorData.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x1403A10C0 (HalpGetCpuInfo.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall HalpMcaInitializeErrorSection(__int64 a1, unsigned int a2)
{
  unsigned __int8 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  memset((void *)(a1 + 4), 0, 0x10CuLL);
  *(_DWORD *)a1 = 2;
  if ( !HalpGetCpuInfo(0LL, 0LL, 0LL, &v5) )
    goto LABEL_6;
  if ( v5 != 2 )
  {
    if ( v5 == 1 )
    {
      *(_DWORD *)(a1 + 4) = 2;
      goto LABEL_7;
    }
LABEL_6:
    *(_DWORD *)(a1 + 4) = 0;
    goto LABEL_7;
  }
  *(_DWORD *)(a1 + 4) = 1;
LABEL_7:
  *(_QWORD *)(a1 + 8) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(a1 + 16) = a2;
  return ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))off_140C007C8[0])(a2, a1 + 68, 0LL);
}
