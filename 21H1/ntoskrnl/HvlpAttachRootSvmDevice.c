/*
 * XREFs of HvlpAttachRootSvmDevice @ 0x1404F19F8
 * Callers:
 *     HvlSvmAttachPasidSpace @ 0x1404F1010 (HvlSvmAttachPasidSpace.c)
 * Callees:
 *     HvcallFastExtended @ 0x14038CDD0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HvlpHandleInsufficientMemory @ 0x1404EC608 (HvlpHandleInsufficientMemory.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1404F5258 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1404F5274 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlpAttachRootSvmDevice(unsigned int a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v7; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v8; // [rsp+48h] [rbp-38h]
  int v9; // [rsp+4Ch] [rbp-34h]
  __int64 v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  int v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+64h] [rbp-1Ch]

  v13 = 0;
  v7 = -1LL;
  v9 = 0x40000000;
  v10 = 7LL;
  v11 = a1;
  v8 = a1;
  v12 = a2;
  while ( 1 )
  {
    v2 = HvcallFastExtended(65666LL, (__int64)&v7, 0x28u, 0, 0);
    if ( !(unsigned __int8)HvlpHvStatusIsInsufficientMemory((unsigned __int16)v2, v2) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v4, v3, v5) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v4);
}
