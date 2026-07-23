/*
 * XREFs of HvlSvmCreatePasidSpace @ 0x1404F1160
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x14038CDD0 (HvcallFastExtended.c)
 *     HvlpHandleInsufficientMemory @ 0x1404EC608 (HvlpHandleInsufficientMemory.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1404F5258 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1404F5274 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmCreatePasidSpace(int a1, int a2)
{
  __int64 v2; // rdx
  __int16 v3; // cx
  __int64 v4; // r8
  _DWORD v6[6]; // [rsp+30h] [rbp-18h] BYREF

  v6[0] = a1;
  v6[1] = a2;
  while ( 1 )
  {
    v2 = HvcallFastExtended(65693LL, (__int64)v6, 8u, 0, 0);
    if ( (HvlpFlags & 2) == 0 || !(unsigned __int8)HvlpHvStatusIsInsufficientMemory((unsigned __int16)v2, v2) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v3, v2, v4) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus((unsigned __int16)v2);
}
