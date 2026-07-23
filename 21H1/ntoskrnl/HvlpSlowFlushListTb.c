/*
 * XREFs of HvlpSlowFlushListTb @ 0x1404F579C
 * Callers:
 *     HvlpFlushRangeListTb @ 0x14038CA7C (HvlpFlushRangeListTb.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     HvlpCopyFlushVaList @ 0x14038D02C (HvlpCopyFlushVaList.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 *     VslFlushSecureAddressSpace @ 0x1404F6A08 (VslFlushSecureAddressSpace.c)
 *     VslSlowFlushSecureRangeList @ 0x1404F7E60 (VslSlowFlushSecureRangeList.c)
 */

char __fastcall HvlpSlowFlushListTb(
        __int64 a1,
        char a2,
        char a3,
        unsigned int a4,
        unsigned __int64 *a5,
        unsigned int a6)
{
  int v6; // ebx
  char v10; // bp
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  __int64 v13; // xmm1_8
  __int64 v14; // xmm1_8
  __int128 v17; // [rsp+30h] [rbp-88h] BYREF
  __int128 v18; // [rsp+40h] [rbp-78h]
  _BYTE v19[48]; // [rsp+50h] [rbp-68h] BYREF

  v6 = 0;
  v10 = 1;
  v17 = 0LL;
  v18 = 0LL;
  v11 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v17, 1, (__int64)v19, 24LL);
  v12 = v11;
  if ( a6 > 0x1FD || (v17 & 2) != 0 )
  {
    if ( a3 )
    {
      v6 = 2;
      v14 = *(_QWORD *)(a1 + 16);
      *(_OWORD *)v11 = *(_OWORD *)a1;
      v11[2] = v14;
    }
  }
  else
  {
    HvlpCopyFlushVaList(a4, a5, (HvlpFlags & 0x2000) != 0, v11 + 3);
    if ( a3 )
    {
      v13 = *(_QWORD *)(a1 + 16);
      *(_OWORD *)v12 = *(_OWORD *)a1;
      v12[2] = v13;
      v6 = 3;
      if ( (HvlpFlags & 0x2000) == 0 )
        v12[1] |= 8uLL;
    }
    v10 = 0;
  }
  if ( a2 )
  {
    if ( v10 )
      VslFlushSecureAddressSpace();
    else
      VslSlowFlushSecureRangeList(*((_QWORD *)&v18 + 1), v12, a6, 24LL);
  }
  if ( a3 )
    HvcallInitiateHypercall(v6);
  return HvlpReleaseHypercallPage((__int64)&v17);
}
