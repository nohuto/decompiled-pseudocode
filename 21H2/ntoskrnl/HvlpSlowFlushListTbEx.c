/*
 * XREFs of HvlpSlowFlushListTbEx @ 0x14054CFC4
 * Callers:
 *     HvlpFlushRangeListTbEx @ 0x14054CD1C (HvlpFlushRangeListTbEx.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039D8F0 (HvlpReleaseHypercallPage.c)
 *     HvlpCopyFlushVaList @ 0x14039DE18 (HvlpCopyFlushVaList.c)
 *     HvcallInitiateHypercall @ 0x14039DF00 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14039DF90 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     HvlpAffinityToHvProcessorSet @ 0x14054C8F0 (HvlpAffinityToHvProcessorSet.c)
 *     VslFlushSecureAddressSpace @ 0x14054E120 (VslFlushSecureAddressSpace.c)
 *     VslSlowFlushSecureRangeList @ 0x14054F91C (VslSlowFlushSecureRangeList.c)
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
  int v9; // ebx
  char v10; // si
  int v11; // r15d
  __int64 v12; // r12
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  __int128 v18; // [rsp+38h] [rbp-90h] BYREF
  __int64 v19; // [rsp+48h] [rbp-80h]
  __int64 v20; // [rsp+50h] [rbp-78h]
  __int64 v21; // [rsp+58h] [rbp-70h] BYREF

  v9 = 0;
  v18 = 0LL;
  v10 = 1;
  v19 = 0LL;
  LODWORD(v20) = 0;
  v11 = 0;
  v12 = 0LL;
  v13 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v18, 1, (__int64)&v21, 32LL);
  v14 = v13;
  if ( (v18 & 2) != 0 )
  {
    if ( a4 )
    {
      *v13 = *a1;
      v13[1] = a1[1];
      HvlpAffinityToHvProcessorSet(0LL, v13 + 2, 0);
      v9 = 19;
    }
  }
  else
  {
    if ( a4 )
    {
      *v13 = *a1;
      v13[1] = a1[1];
      v11 = HvlpAffinityToHvProcessorSet(a2, v13 + 2, 0xFE0u);
      v12 = (unsigned int)(v11 + 32);
    }
    if ( v12 + 8 * (unsigned __int64)a7 > 0x1000 )
    {
      if ( a4 )
        v9 = ((v11 + 7) << 14) & 0x3FE0000 | 0x13;
    }
    else
    {
      HvlpCopyFlushVaList(a5, a6, (HvlpFlags & 0x2000) != 0, (_QWORD *)((char *)v14 + (unsigned int)v12));
      if ( a4 )
      {
        if ( (HvlpFlags & 0x2000) == 0 )
          v14[1] |= 8uLL;
        v9 = ((v11 + 7) << 14) & 0x3FE0000 | 0x14;
      }
      v10 = 0;
    }
  }
  if ( a3 )
  {
    if ( v10 )
      VslFlushSecureAddressSpace();
    else
      VslSlowFlushSecureRangeList(v20, v14, a7, (unsigned int)v12);
  }
  if ( a4 )
    HvcallInitiateHypercall(v9);
  return HvlpReleaseHypercallPage((__int64)&v18);
}
