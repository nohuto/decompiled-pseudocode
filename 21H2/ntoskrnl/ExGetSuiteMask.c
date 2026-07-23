/*
 * XREFs of ExGetSuiteMask @ 0x1407BE250
 * Callers:
 *     PspSiloInitializeSuiteMask @ 0x140906B3C (PspSiloInitializeSuiteMask.c)
 *     ExpInitSystemPhase0 @ 0x140A6A014 (ExpInitSystemPhase0.c)
 * Callees:
 *     RtlGetProductInfo @ 0x14024F0E0 (RtlGetProductInfo.c)
 *     ExpGetProductInfoSuiteTypeMap @ 0x1407BE2F4 (ExpGetProductInfoSuiteTypeMap.c)
 *     ExpParseSuiteMask @ 0x1407BE33C (ExpParseSuiteMask.c)
 */

__int64 __fastcall ExGetSuiteMask(__int64 a1, char a2)
{
  int v3; // ebx
  int v4; // eax
  int *v5; // rdx
  __int64 v6; // r8
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  ULONG ReturnedProductType; // [rsp+58h] [rbp+10h] BYREF

  ReturnedProductType = 0;
  v8 = 0LL;
  v3 = ExpParseSuiteMask();
  if ( RtlGetProductInfo(6u, 0, 0, 0, &ReturnedProductType) && ReturnedProductType != -1412584499 )
  {
    v4 = 0;
    v5 = &dword_140986F54;
    v6 = 51LL;
    do
    {
      if ( *(v5 - 1) != ReturnedProductType )
        v4 |= *v5;
      v5 += 3;
      --v6;
    }
    while ( v6 );
    v3 &= ~v4;
    if ( (unsigned __int8)ExpGetProductInfoSuiteTypeMap(ReturnedProductType, &v8) )
      v3 |= HIDWORD(v8);
  }
  return v3 | (a2 != 0 ? 131088 : 272);
}
