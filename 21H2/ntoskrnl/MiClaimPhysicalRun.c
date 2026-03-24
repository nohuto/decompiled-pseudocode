/*
 * XREFs of MiClaimPhysicalRun @ 0x140300A2C
 * Callers:
 *     MiFindContiguousPages @ 0x1403016E0 (MiFindContiguousPages.c)
 *     MiScrubNode @ 0x14056404C (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x1408D1ADC (MmRelocatePfnList.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x1402E6774 (MiReleaseFreshPage.c)
 *     MiTradePage @ 0x140300BE0 (MiTradePage.c)
 */

__int64 __fastcall MiClaimPhysicalRun(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        __int64 *a10)
{
  __int64 v10; // rdi
  __int64 v14; // r12
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v19; // rcx
  __int64 v21; // rbx
  _QWORD v22[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v23; // [rsp+30h] [rbp-40h]
  int v24; // [rsp+38h] [rbp-38h]
  int v25; // [rsp+3Ch] [rbp-34h]
  int v26; // [rsp+40h] [rbp-30h]
  int v27; // [rsp+44h] [rbp-2Ch]
  __int64 v28; // [rsp+48h] [rbp-28h]
  unsigned __int64 v29; // [rsp+50h] [rbp-20h]
  __int64 v30; // [rsp+58h] [rbp-18h]
  __int64 v31; // [rsp+60h] [rbp-10h]
  int v32; // [rsp+D0h] [rbp+60h]
  unsigned __int64 v33; // [rsp+D8h] [rbp+68h]
  __int64 v34; // [rsp+E8h] [rbp+78h]

  v27 = 0;
  v10 = a2;
  v29 = 0LL;
  if ( a10 )
    *a10 = -1LL;
  v14 = a3;
  v22[1] = a5;
  v25 = a7;
  v26 = a9;
  v22[0] = a1;
  v32 = 0;
  v31 = a8;
  v24 = a6;
  v23 = a3;
  v30 = a4;
  v28 = -1LL;
  v15 = 48 * a2 - 0x58000000000LL;
  v33 = v15 + 48 * a3;
  v34 = a2 + a3;
  while ( 1 )
  {
    v16 = MiTradePage(v22, v10);
    v19 = v16;
    if ( !v16 )
    {
      v17 = v29;
      v19 = 1LL;
      if ( v29 > 1 )
      {
        v18 = ~(v29 - 1);
        if ( v10 == (v10 & v18) )
          v19 = v29;
        else
          v19 = (v18 & (v10 + v29 - 1)) - v10;
      }
      if ( !v32 )
      {
        if ( v29 )
          v14 = v34 - (v10 & ~(v29 - 1));
        v32 = 1;
      }
      if ( (a6 & 0x2000) == 0 )
        goto LABEL_20;
      if ( v19 >= v34 - v10 )
        goto LABEL_10;
      goto LABEL_9;
    }
    v23 -= v16;
    if ( !v23 )
      break;
LABEL_9:
    v10 += v19;
    v15 += 48 * v19;
    if ( v15 >= v33 )
    {
LABEL_10:
      if ( (a6 & 0x2000) == 0 )
      {
LABEL_20:
        v21 = a3 - v23;
        if ( a8 )
          *(_DWORD *)(a8 + 40) += -4096 * v21;
        for ( ; v21; --v21 )
        {
          v15 -= 48LL;
          MiReleaseFreshPage(v15, v17, v18);
        }
      }
      return v14;
    }
  }
  if ( (a6 & 0x400000) != 0 && a10 )
    *a10 = v28;
  return 0LL;
}
