/*
 * XREFs of HvlpCreateRootVirtualProcessor @ 0x14088A35C
 * Callers:
 *     HvlpEnableRootVirtualProcessor @ 0x14088A488 (HvlpEnableRootVirtualProcessor.c)
 * Callees:
 *     HvcallInitInputControl @ 0x140363120 (HvcallInitInputControl.c)
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpDepositPages @ 0x1404ED1A8 (HvlpDepositPages.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpCreateRootVirtualProcessor(__int64 a1, int a2)
{
  __int64 v4; // rdi
  int v5; // r14d
  __int64 v6; // rdx
  __int64 result; // rax
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r9
  __int16 v11; // bx
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v14 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v4 = *(unsigned __int16 *)(KeNodeBlock[*(unsigned __int16 *)(a1 + 12)] + 148);
  v5 = *(_DWORD *)(KeNodeBlock[v4] + 168);
  HvcallInitInputControl(78, &v14);
  while ( 1 )
  {
    result = HvlpDepositPages(v4, v6, 0);
    if ( (_DWORD)result )
      break;
    v8 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v12, 1, 0LL, 32LL);
    v9 = *((_QWORD *)&v13 + 1);
    *v8 = HvlPartitionId;
    *((_DWORD *)v8 + 2) = a2;
    *((_DWORD *)v8 + 4) = v5;
    *((_DWORD *)v8 + 5) = -2147483647;
    v8[3] = *(unsigned int *)(a1 + 4);
    v11 = HvcallInitiateHypercall(v14, v9, 0LL, v10);
    HvlpReleaseHypercallPage((__int64)&v12);
    if ( v11 != 11 )
      return v11 != 0 ? 0xC0000001 : 0;
  }
  return result;
}
