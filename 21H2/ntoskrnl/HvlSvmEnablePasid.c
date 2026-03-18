/*
 * XREFs of HvlSvmEnablePasid @ 0x140548B70
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x14039DD80 (HvcallFastExtended.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x140459C2A (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHandleInsufficientMemory @ 0x1405438E8 (HvlpHandleInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x14054CA70 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmEnablePasid(unsigned int a1, int a2)
{
  __int64 v2; // rdx
  __int16 v3; // cx
  __int64 v4; // r8
  __int64 v6; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+38h] [rbp-10h]
  int v8; // [rsp+3Ch] [rbp-Ch]

  v8 = 0;
  v6 = a1;
  v7 = a2;
  while ( 1 )
  {
    LOWORD(v2) = HvcallFastExtended(65700LL, (__int64)&v6, 0x10u, 0LL, 0);
    if ( (HvlpFlags & 2) == 0 || !HvlpHvStatusIsInsufficientMemory(v2) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v3, v2, v4) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus((unsigned __int16)v2);
}
