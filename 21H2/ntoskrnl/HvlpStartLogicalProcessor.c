/*
 * XREFs of HvlpStartLogicalProcessor @ 0x1404F40EC
 * Callers:
 *     HvlpEnableNextLogicalProcessor @ 0x1404F2D84 (HvlpEnableNextLogicalProcessor.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x140390610 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404F27C0 (HvlpAcquireHypercallPage.c)
 *     HvlpDepositPages @ 0x1404F2B84 (HvlpDepositPages.c)
 *     HvlpReleaseHypercallPage @ 0x1404F33B0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpStartLogicalProcessor(int a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  int v5; // r14d
  __int64 v7; // rbp
  __int64 result; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rsi
  __int16 v13; // ax
  __int16 v14; // bx
  PHYSICAL_ADDRESS v15[4]; // [rsp+20h] [rbp-58h] BYREF
  PHYSICAL_ADDRESS v16[4]; // [rsp+40h] [rbp-38h] BYREF

  *(_OWORD *)a4 = 0LL;
  v5 = a2;
  memset(v16, 0, sizeof(v16));
  *(_OWORD *)(a4 + 16) = 0LL;
  memset(v15, 0, sizeof(v15));
  *(_OWORD *)(a4 + 32) = 0LL;
  *(_QWORD *)(a4 + 48) = 0LL;
  v7 = *(unsigned __int16 *)(KeNodeBlock[a3] + 148);
  while ( 1 )
  {
    result = HvlpDepositPages(v7, a2, 0);
    if ( (_DWORD)result )
      break;
    v9 = HvlpAcquireHypercallPage(v16, 1, 0LL, 24LL);
    v10 = HvlpAcquireHypercallPage(v15, 2, 0LL, 56LL);
    v11 = KeNodeBlock[v7];
    v12 = v10;
    v9[2] = 0LL;
    *(_DWORD *)v9 = a1;
    *((_DWORD *)v9 + 1) = v5;
    *((_DWORD *)v9 + 2) = *(_DWORD *)(v11 + 168);
    *((_DWORD *)v9 + 3) = -2147483647;
    v13 = HvcallInitiateHypercall(118);
    v14 = v13;
    if ( v13 != 11 )
    {
      *(_OWORD *)a4 = *(_OWORD *)v12;
      *(_OWORD *)(a4 + 16) = *((_OWORD *)v12 + 1);
      *(_OWORD *)(a4 + 32) = *((_OWORD *)v12 + 2);
      *(_QWORD *)(a4 + 48) = v12[6];
      *(_WORD *)a4 = v13;
    }
    HvlpReleaseHypercallPage((__int64)v15);
    HvlpReleaseHypercallPage((__int64)v16);
    if ( v14 != 11 )
      return v14 != 0 ? 0xC0000001 : 0;
  }
  return result;
}
