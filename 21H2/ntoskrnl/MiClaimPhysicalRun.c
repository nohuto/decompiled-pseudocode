/*
 * XREFs of MiClaimPhysicalRun @ 0x14030B77C
 * Callers:
 *     MiFindContiguousPages @ 0x14030C430 (MiFindContiguousPages.c)
 *     MiScrubNode @ 0x14056428C (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x1408D1C3C (MmRelocatePfnList.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140297AC4 (MiReleaseFreshPage.c)
 *     MiTradePage @ 0x14030B930 (MiTradePage.c)
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
  unsigned __int64 v17; // rcx
  __int64 v19; // rbx
  _QWORD v20[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v21; // [rsp+30h] [rbp-40h]
  int v22; // [rsp+38h] [rbp-38h]
  int v23; // [rsp+3Ch] [rbp-34h]
  int v24; // [rsp+40h] [rbp-30h]
  int v25; // [rsp+44h] [rbp-2Ch]
  __int64 v26; // [rsp+48h] [rbp-28h]
  unsigned __int64 v27; // [rsp+50h] [rbp-20h]
  __int64 v28; // [rsp+58h] [rbp-18h]
  __int64 v29; // [rsp+60h] [rbp-10h]
  int v30; // [rsp+D0h] [rbp+60h]
  unsigned __int64 v31; // [rsp+D8h] [rbp+68h]
  __int64 v32; // [rsp+E8h] [rbp+78h]

  v25 = 0;
  v10 = a2;
  v27 = 0LL;
  if ( a10 )
    *a10 = -1LL;
  v14 = a3;
  v20[1] = a5;
  v23 = a7;
  v24 = a9;
  v20[0] = a1;
  v30 = 0;
  v29 = a8;
  v22 = a6;
  v21 = a3;
  v28 = a4;
  v26 = -1LL;
  v15 = 48 * a2 - 0x58000000000LL;
  v31 = v15 + 48 * a3;
  v32 = a2 + a3;
  while ( 1 )
  {
    v16 = MiTradePage(v20, v10);
    v17 = v16;
    if ( !v16 )
    {
      v17 = 1LL;
      if ( v27 > 1 )
      {
        if ( v10 == (v10 & ~(v27 - 1)) )
          v17 = v27;
        else
          v17 = (~(v27 - 1) & (v10 + v27 - 1)) - v10;
      }
      if ( !v30 )
      {
        if ( v27 )
          v14 = v32 - (v10 & ~(v27 - 1));
        v30 = 1;
      }
      if ( (a6 & 0x2000) == 0 )
        goto LABEL_20;
      if ( v17 >= v32 - v10 )
        goto LABEL_10;
      goto LABEL_9;
    }
    v21 -= v16;
    if ( !v21 )
      break;
LABEL_9:
    v10 += v17;
    v15 += 48 * v17;
    if ( v15 >= v31 )
    {
LABEL_10:
      if ( (a6 & 0x2000) == 0 )
      {
LABEL_20:
        v19 = a3 - v21;
        if ( a8 )
          *(_DWORD *)(a8 + 40) += -4096 * v19;
        for ( ; v19; --v19 )
        {
          v15 -= 48LL;
          MiReleaseFreshPage(v15);
        }
      }
      return v14;
    }
  }
  if ( (a6 & 0x400000) != 0 && a10 )
    *a10 = v26;
  return 0LL;
}
