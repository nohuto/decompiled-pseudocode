/*
 * XREFs of sub_18003BD44 @ 0x18003BD44
 * Callers:
 *     sub_18003BC18 @ 0x18003BC18 (sub_18003BC18.c)
 *     sub_18007F780 @ 0x18007F780 (sub_18007F780.c)
 *     sub_18008011C @ 0x18008011C (sub_18008011C.c)
 *     sub_180081898 @ 0x180081898 (sub_180081898.c)
 * Callees:
 *     sub_18000506C @ 0x18000506C (sub_18000506C.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 *     sub_180034650 @ 0x180034650 (sub_180034650.c)
 *     sub_18003BF5C @ 0x18003BF5C (sub_18003BF5C.c)
 */

__int64 __fastcall sub_18003BD44(__int64 a1, unsigned int a2, int a3, __int64 a4, unsigned int a5, char a6)
{
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 *v13; // r14
  __int64 *v14; // rdi
  unsigned __int64 v15; // rbp
  __int64 result; // rax
  bool v17; // zf
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // r12
  BOOL v22; // edi
  unsigned __int64 v23; // [rsp+30h] [rbp-38h] BYREF
  __int64 v24; // [rsp+38h] [rbp-30h] BYREF
  int v26; // [rsp+90h] [rbp+28h]

  v10 = 0LL;
  if ( *(_DWORD *)(a1 + 8) )
  {
    v10 = *(__int64 **)a1;
    *(_DWORD *)(a1 + 16) = 1;
  }
  for ( ; v10; v10 = (__int64 *)sub_18003BF5C(a1) )
  {
    v11 = *v10;
    sub_18000506C(*v10, a2, a3, a4, 0, 0);
    if ( (a6 & 1) != 0 )
    {
      sub_1800093A0(v11, 0);
      sub_18001CC80(v11, 0);
      sub_18000A110(v11);
    }
  }
  RtlQueryUnbiasedInterruptTime(&v23);
  v13 = &v24;
  v14 = 0LL;
  v15 = v23 / 0x2710;
  result = a5 + (unsigned int)(v23 / 0x2710);
  v17 = a5 == -1;
  v26 = a5 + v23 / 0x2710;
  if ( v17 )
    v13 = 0LL;
  if ( *(_DWORD *)(a1 + 8) )
  {
    v14 = *(__int64 **)a1;
    *(_DWORD *)(a1 + 16) = 1;
  }
  if ( v14 )
  {
    do
    {
      v18 = *v14;
      sub_180034650(*v14, 0);
      v21 = v14 + 1;
      do
      {
        sub_18001E830(v20, v19, 1u);
        RtlReleaseSRWLockShared(v18);
        if ( v13 )
          v24 = -10000LL * (unsigned int)(v26 - v15);
        RtlWaitOnAddress(v18 + 800, v21, 8LL);
        if ( a5 == -1 )
        {
          v22 = 0;
        }
        else
        {
          RtlQueryUnbiasedInterruptTime(&v23);
          LODWORD(v15) = v23 / 0x2710;
          v22 = v26 - (int)v15 > a5;
        }
        sub_180034650(v18, 0);
      }
      while ( *v21 == *(_QWORD *)(v18 + 800) && !v22 );
      sub_18001E830(v20, v19, 1u);
      RtlReleaseSRWLockShared(v18);
      result = sub_18003BF5C(a1);
      v14 = (__int64 *)result;
    }
    while ( result );
  }
  return result;
}
