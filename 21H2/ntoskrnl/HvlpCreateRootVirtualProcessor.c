/*
 * XREFs of HvlpCreateRootVirtualProcessor @ 0x1409311AC
 * Callers:
 *     HvlpEnableRootVirtualProcessor @ 0x1409312DC (HvlpEnableRootVirtualProcessor.c)
 * Callees:
 *     HvcallInitInputControl @ 0x1403731A0 (HvcallInitInputControl.c)
 *     HvlpReleaseHypercallPage @ 0x14039D8F0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF00 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14039DF90 (HvlpAcquireHypercallPage.c)
 *     HvlpDepositPages @ 0x140544258 (HvlpDepositPages.c)
 */

__int64 __fastcall HvlpCreateRootVirtualProcessor(__int64 a1, int a2)
{
  __int64 v4; // rdi
  int v5; // r14d
  __int64 v6; // rdx
  __int64 result; // rax
  _QWORD *v8; // rax
  __int16 v9; // bx
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+38h] [rbp-20h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  LODWORD(v12) = 0;
  v4 = *(unsigned __int16 *)(KeNodeBlock[*(unsigned __int16 *)(a1 + 12)] + 2);
  v5 = *(_DWORD *)(KeNodeBlock[v4] + 4);
  HvcallInitInputControl(78, &v13);
  while ( 1 )
  {
    result = HvlpDepositPages(v4, v6, 0);
    if ( (_DWORD)result )
      break;
    v8 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v10, 1, 0LL, 40LL);
    *v8 = HvlPartitionId;
    *((_DWORD *)v8 + 2) = a2;
    *((_BYTE *)v8 + 15) = 0;
    *((_DWORD *)v8 + 6) = v5;
    *((_DWORD *)v8 + 7) = -2147483647;
    v8[4] = *(unsigned int *)(a1 + 4);
    v9 = HvcallInitiateHypercall(v13);
    HvlpReleaseHypercallPage((__int64)&v10);
    if ( v9 != 11 )
      return v9 != 0 ? 0xC0000001 : 0;
  }
  return result;
}
