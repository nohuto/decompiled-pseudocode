/*
 * XREFs of sub_1800054FC @ 0x1800054FC
 * Callers:
 *     sub_180005750 @ 0x180005750 (sub_180005750.c)
 * Callees:
 *     sub_180004A38 @ 0x180004A38 (sub_180004A38.c)
 *     sub_180005700 @ 0x180005700 (sub_180005700.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18001D590 @ 0x18001D590 (sub_18001D590.c)
 */

__int64 __fastcall sub_1800054FC(__int64 a1, __int64 a2)
{
  NTSTATUS v4; // r13d
  int i; // r14d
  unsigned __int64 v6; // r12
  unsigned int v7; // ebx
  unsigned int v8; // edx
  int v9; // esi
  __int64 *v10; // rbp
  void *v11; // rcx
  int v12; // ebx
  __int64 v13; // rsi
  char v15; // [rsp+30h] [rbp-58h] BYREF
  int v16; // [rsp+48h] [rbp-40h]
  unsigned __int64 v17; // [rsp+90h] [rbp+8h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+18h] BYREF
  _LARGE_INTEGER Timeout; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 1;
  i = -1;
  RtlQueryUnbiasedInterruptTime(&v17);
  v6 = v17 / 0x2710;
  while ( 1 )
  {
    v7 = -1;
    NtSetInformationJobObject(*(HANDLE *)(a1 + 576), JobObjectExtendedLimitInformation|0x10, 0LL, 0);
    NtTerminateJobObject(*(HANDLE *)(a1 + 576), v4);
    RtlQueryUnbiasedInterruptTime(&v17);
    v8 = v17 / 0x2710 - v6;
    if ( v8 >= 0x7D0 )
      v4 = 1073807364;
    else
      v7 = 2000 - v8;
    if ( v8 < 0x96 )
    {
      v9 = 0;
      if ( v7 >= 150 - v8 )
        v7 = 150 - v8;
    }
    else
    {
      v9 = 1;
    }
    if ( v7 == -1 )
    {
      v10 = 0LL;
    }
    else
    {
      v10 = &v18;
      v18 = -10000LL * v7;
    }
    sub_1800093A0(a1, 0LL);
    v11 = *(void **)(a1 + 576);
    Timeout.QuadPart = 0LL;
    if ( NtWaitForSingleObject(v11, 0, &Timeout) != 258 )
      break;
    if ( v9 && ((sub_18001D590(a1, (unsigned int)&v15, 0, 0, 0LL), v12 = v16, i == -1) || i < v16) )
    {
      sub_18000A110(a1);
      v13 = 0LL;
      for ( i = v12; (unsigned int)v13 < *(_DWORD *)(a2 + 16); v13 = (unsigned int)(v13 + 1) )
        sub_180004A38(*(void **)(*(_QWORD *)a2 + 8 * v13), *(_DWORD *)(*(_QWORD *)(a2 + 8) + 4 * v13), v12);
    }
    else
    {
      sub_180005700(a1, a1 + 680, v10);
      sub_18000A110(a1);
    }
  }
  return sub_18000A110(a1);
}
