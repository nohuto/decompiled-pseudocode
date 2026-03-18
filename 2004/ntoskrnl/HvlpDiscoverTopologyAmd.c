/*
 * XREFs of HvlpDiscoverTopologyAmd @ 0x140A8C3B4
 * Callers:
 *     HvlpDiscoverTopologyWorker @ 0x14088B778 (HvlpDiscoverTopologyWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     HvlpLpCpuid @ 0x140A8C778 (HvlpLpCpuid.c)
 */

__int64 __fastcall HvlpDiscoverTopologyAmd(__int64 a1, unsigned int a2, unsigned int *a3, _DWORD *a4)
{
  unsigned int v7; // ebx
  int v8; // edi
  unsigned int v9; // ebp
  unsigned int v10; // r14d
  int v11; // ecx
  unsigned int v12; // esi
  __int64 result; // rax
  __int128 v14; // [rsp+28h] [rbp-50h] BYREF

  v7 = 1;
  v14 = 0LL;
  v8 = 1;
  v9 = a1;
  HvlpLpCpuid(a1, 0x80000000LL, 0LL, &v14);
  v10 = v14;
  if ( (unsigned int)v14 >= 0x80000008 )
  {
    HvlpLpCpuid(v9, 2147483656LL, 0LL, &v14);
    LOWORD(v11) = WORD4(v14) >> 12;
    if ( !(WORD4(v14) >> 12) )
      _BitScanReverse((unsigned int *)&v11, 2 * BYTE8(v14) + 1);
    v12 = (unsigned __int8)(1 << v11);
    v8 = v12;
    if ( v10 >= 0x8000001E )
    {
      HvlpLpCpuid(v9, 2147483649LL, 0LL, &v14);
      if ( (DWORD2(v14) & 0x400000) != 0 )
      {
        HvlpLpCpuid(v9, 2147483678LL, 0LL, &v14);
        v7 = BYTE5(v14) + 1;
        v8 = v12 / v7;
      }
    }
  }
  *a3 = a2 / (v8 * v7);
  result = a2 / v7;
  *a4 = result;
  return result;
}
