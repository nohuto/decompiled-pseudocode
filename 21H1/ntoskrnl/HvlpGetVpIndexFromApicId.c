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
  int *v5; // rax
  __int64 v6; // r8
  int v7; // esi
  __int64 v8; // rdx
  int *v9; // r14
  __int64 v10; // r9
  __int16 v11; // ax
  unsigned int v12; // ebx
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  __int128 v15; // [rsp+30h] [rbp-30h]
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF
  __int128 v17; // [rsp+50h] [rbp-10h]

  v16 = 0LL;
  v17 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v4 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v16, 1, 0LL, 16LL);
  v5 = (int *)HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v14, 2, 0LL, 4LL);
  v6 = *((_QWORD *)&v15 + 1);
  v7 = 0;
  v8 = *((_QWORD *)&v17 + 1);
  v9 = v5;
  *v4 = -1LL;
  v4[1] = 0LL;
  *((_DWORD *)v4 + 4) = a1;
  v11 = HvcallInitiateHypercall(154, v8, v6, v10);
  if ( !v11 )
    v7 = *v9;
  *a2 = v7;
  v12 = v11 != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage(&v14);
  HvlpReleaseHypercallPage(&v16);
  return v12;
}
