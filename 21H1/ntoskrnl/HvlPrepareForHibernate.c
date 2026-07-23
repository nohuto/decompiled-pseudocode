/*
 * XREFs of HvlPrepareForHibernate @ 0x1404F2590
 * Callers:
 *     PopSaveHiberContext @ 0x14098F9E0 (PopSaveHiberContext.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlPrepareForHibernate(_OWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  unsigned int v5; // ebp
  _OWORD *v10; // rbx
  _QWORD *v11; // rsi
  PHYSICAL_ADDRESS v13[4]; // [rsp+20h] [rbp-58h] BYREF
  PHYSICAL_ADDRESS v14[4]; // [rsp+40h] [rbp-38h] BYREF

  v5 = 0;
  memset(v14, 0, sizeof(v14));
  memset(v13, 0, sizeof(v13));
  v10 = HvlpAcquireHypercallPage(v14, 1, 0LL, 88LL);
  v11 = HvlpAcquireHypercallPage(v13, 2, 0LL, 32LL);
  memset(v10, 0, 0x58uLL);
  *v10 = *a1;
  v10[1] = a1[1];
  v10[2] = a1[2];
  v10[3] = a1[3];
  v10[4] = a1[4];
  if ( (unsigned __int16)HvcallInitiateHypercall(134) )
  {
    v5 = -1073741823;
  }
  else
  {
    *a2 = *v11;
    *a3 = v11[1];
    *a4 = v11[2];
    *a5 = v11[3];
  }
  HvlpReleaseHypercallPage((__int64)v13);
  HvlpReleaseHypercallPage((__int64)v14);
  return v5;
}
