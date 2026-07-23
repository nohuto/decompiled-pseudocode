/*
 * XREFs of HvlSvmCreatePrQueue @ 0x1404F6BC0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x140390450 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HvlpHandleInsufficientMemory @ 0x1404F1FE8 (HvlpHandleInsufficientMemory.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1404FAC58 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1404FAC74 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmCreatePrQueue(int a1, int a2, unsigned __int64 a3, int a4, int a5)
{
  int v5; // ecx
  __int64 v6; // rdx
  __int16 v7; // cx
  __int64 v8; // r8
  _DWORD v10[2]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-30h]
  int v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+54h] [rbp-24h]
  __int64 v14; // [rsp+58h] [rbp-20h]

  v14 = 0LL;
  v10[0] = a1;
  v10[1] = a2;
  v11 = a3 >> 12;
  v12 = a4;
  if ( HvlpVirtualProcessorsIdentityMapped )
    v5 = a5;
  else
    v5 = (unsigned __int8)HvlpVirtualProcessorMapping[2 * a5 + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * a5] << 6);
  v13 = v5;
  while ( 1 )
  {
    v6 = HvcallFastExtended(65703LL, (__int64)v10, 0x20u, 0, 0);
    if ( (HvlpFlags & 2) == 0 || !(unsigned __int8)HvlpHvStatusIsInsufficientMemory((unsigned __int16)v6, v6) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v7, v6, v8) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus((unsigned __int16)v6);
}
