/*
 * XREFs of HvlpSlowFlushListTbEx @ 0x1404F591C
 * Callers:
 *     HvlpFlushRangeListTbEx @ 0x1404F54FC (HvlpFlushRangeListTbEx.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     HvlpCopyFlushVaList @ 0x14038D02C (HvlpCopyFlushVaList.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1404F50B0 (HvlpAffinityToHvProcessorSet.c)
 *     VslFlushSecureAddressSpace @ 0x1404F6A08 (VslFlushSecureAddressSpace.c)
 *     VslSlowFlushSecureRangeList @ 0x1404F7E60 (VslSlowFlushSecureRangeList.c)
 */

char __fastcall HvlpSlowFlushListTbEx(
        _QWORD *a1,
        __int64 a2,
        char a3,
        char a4,
        unsigned int a5,
        unsigned __int64 *a6,
        unsigned int a7)
{
  int v7; // ebx
  int v10; // r15d
  char v11; // si
  __int64 v12; // r12
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  __int128 v18; // [rsp+38h] [rbp-90h] BYREF
  __int128 v19; // [rsp+48h] [rbp-80h]
  _BYTE v20[64]; // [rsp+58h] [rbp-70h] BYREF

  v7 = 0;
  v10 = 0;
  v11 = 1;
  v12 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v13 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v18, 1, (__int64)v20, 32LL);
  v14 = v13;
  if ( (v18 & 2) != 0 )
  {
    if ( a4 )
    {
      *v13 = *a1;
      v13[1] = a1[1];
      HvlpAffinityToHvProcessorSet(0LL, v13 + 2, 0);
      v7 = 19;
    }
  }
  else
  {
    if ( a4 )
    {
      *v13 = *a1;
      v13[1] = a1[1];
      v10 = HvlpAffinityToHvProcessorSet(a2, v13 + 2, 0xFE0u);
      v12 = (unsigned int)(v10 + 32);
    }
    if ( v12 + 8 * (unsigned __int64)a7 > 0x1000 )
    {
      if ( a4 )
        v7 = ((v10 + 7) << 14) & 0x3FE0000 | 0x13;
    }
    else
    {
      HvlpCopyFlushVaList(a5, a6, (HvlpFlags & 0x2000) != 0, (_QWORD *)((char *)v14 + (unsigned int)v12));
      if ( a4 )
      {
        if ( (HvlpFlags & 0x2000) == 0 )
          v14[1] |= 8uLL;
        v7 = ((v10 + 7) << 14) & 0x3FE0000 | 0x14;
      }
      v11 = 0;
    }
  }
  if ( a3 )
  {
    if ( v11 )
      VslFlushSecureAddressSpace();
    else
      VslSlowFlushSecureRangeList(*((_QWORD *)&v19 + 1), v14, a7, (unsigned int)v12);
  }
  if ( a4 )
    HvcallInitiateHypercall(v7);
  return HvlpReleaseHypercallPage((__int64)&v18);
}
