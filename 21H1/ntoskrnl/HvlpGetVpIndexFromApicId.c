/*
 * XREFs of HvlpGetVpIndexFromApicId @ 0x1404ED5B0
 * Callers:
 *     HvlpEnableNextLogicalProcessor @ 0x1404ED3A8 (HvlpEnableNextLogicalProcessor.c)
 *     HvlHalGetVpIndexFromApicId @ 0x1404EF9E0 (HvlHalGetVpIndexFromApicId.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpGetVpIndexFromApicId(int a1, _DWORD *a2)
{
  _QWORD *v4; // rbx
  int v5; // esi
  _QWORD *v6; // r14
  __int16 v7; // ax
  unsigned int v8; // ebx
  _OWORD v10[2]; // [rsp+20h] [rbp-40h] BYREF
  _OWORD v11[2]; // [rsp+40h] [rbp-20h] BYREF

  memset(v11, 0, sizeof(v11));
  memset(v10, 0, sizeof(v10));
  v4 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v11, 1, 0LL, 16LL);
  v5 = 0;
  v6 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v10, 2, 0LL, 4LL);
  *v4 = -1LL;
  v4[1] = 0LL;
  *((_DWORD *)v4 + 4) = a1;
  v7 = HvcallInitiateHypercall(154);
  if ( !v7 )
    v5 = *(_DWORD *)v6;
  *a2 = v5;
  v8 = v7 != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage(v10);
  HvlpReleaseHypercallPage(v11);
  return v8;
}
