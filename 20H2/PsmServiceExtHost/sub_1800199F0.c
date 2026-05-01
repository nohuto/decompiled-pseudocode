/*
 * XREFs of sub_1800199F0 @ 0x1800199F0
 * Callers:
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 * Callees:
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18001FD20 @ 0x18001FD20 (sub_18001FD20.c)
 *     sub_180020CC0 @ 0x180020CC0 (sub_180020CC0.c)
 *     sub_180023230 @ 0x180023230 (sub_180023230.c)
 *     sub_1800277CC @ 0x1800277CC (sub_1800277CC.c)
 *     sub_18003569C @ 0x18003569C (sub_18003569C.c)
 *     sub_1800356D8 @ 0x1800356D8 (sub_1800356D8.c)
 *     sub_180035A10 @ 0x180035A10 (sub_180035A10.c)
 *     sub_1800374BC @ 0x1800374BC (sub_1800374BC.c)
 *     sub_1800468FC @ 0x1800468FC (sub_1800468FC.c)
 *     sub_18007F36C @ 0x18007F36C (sub_18007F36C.c)
 *     sub_18007F818 @ 0x18007F818 (sub_18007F818.c)
 *     sub_18007F87C @ 0x18007F87C (sub_18007F87C.c)
 */

__int64 __fastcall sub_1800199F0(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned int *v9; // r14
  unsigned int v10; // r15d
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v20; // rcx
  int v21; // r9d
  int *v22; // [rsp+20h] [rbp-58h]
  __int64 *v23; // [rsp+28h] [rbp-50h]
  __int64 *v24; // [rsp+30h] [rbp-48h]
  int v25; // [rsp+88h] [rbp+10h] BYREF
  __int64 v26; // [rsp+90h] [rbp+18h] BYREF
  __int64 v27; // [rsp+98h] [rbp+20h] BYREF

  v2 = 0;
  if ( (*(_BYTE *)(a2 + 772) & 1) == 0 )
    return 0LL;
  if ( *(_QWORD *)(a2 + 648) >> 62 )
    return 0LL;
  sub_1800468FC(a2, &v25, &v26);
  if ( (v25 & 0x100) == 0 || (v26 & 0x100) != 0 )
    return 0LL;
  v6 = *(_QWORD *)(a2 + 656);
  if ( (v6 & 1) == 0 )
  {
    if ( (v6 & 2) != 0 )
    {
      v7 = *(_QWORD *)(a2 + 648);
      if ( (v7 & 0x2000000000000LL) == 0 )
        goto LABEL_11;
    }
    return 0LL;
  }
  v7 = *(_QWORD *)(a2 + 648);
LABEL_11:
  v8 = v6 & 0xFFFFFFFFFFFFFFFEuLL;
  *(_QWORD *)(a2 + 656) = v8;
  if ( (v7 & 0x2000000000000LL) == 0 )
    *(_QWORD *)(a2 + 656) = v8 & 0xFFFFFFFFFFFFFFFDuLL;
  sub_18000A110(a2);
  sub_18000F390();
  sub_1800277CC(a1);
  v9 = (unsigned int *)(a1 + 608);
  v10 = *(_DWORD *)(a1 + 608);
  if ( (v10 & 0x100000) != 0 )
  {
    do
    {
      sub_18007F818(a2);
      sub_18007F87C(a1);
      v10 = *v9;
    }
    while ( (*v9 & 0x100000) != 0 );
  }
  *v9 = v10 & 0xFE0FFFFF | 0x100000;
  sub_180023230(a1);
  v11 = sub_18001FD20(a1);
  if ( v11 )
  {
    while ( 1 )
    {
      sub_1800093A0(v11, 0);
      if ( *(_QWORD *)(v11 + 648) >= 0x4000000000000000uLL || (unsigned int)sub_18003569C(v11) )
        break;
      v2 |= (*(_QWORD *)(v11 + 648) >> 49) & 1;
      sub_18000A110(v11);
      v11 = sub_180020CC0(v11);
      if ( !v11 )
        goto LABEL_18;
    }
    sub_18000A110(v11);
    sub_18001E380(v17);
    if ( (*(_QWORD *)(v11 + 592))-- == 1LL )
      sub_18000A1AC(v11 - 64, v18);
    sub_18000F390();
    sub_1800277CC(a1);
    *v9 = v10 & 0x600000 | *v9 & 0xFE1FFFFF | v10 & 0x1800000;
    sub_180023230(a1);
  }
  else
  {
LABEL_18:
    v14 = (unsigned int)sub_180035A10(a1);
    if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
    {
      v26 = *(_QWORD *)(a2 - 32);
      v27 = a2 + 24;
      v24 = &v26;
      v23 = &v27;
      v22 = &v25;
      v25 = v14;
      sub_18007F36C(v15, &unk_1800A1694);
    }
    if ( !v2 )
    {
      sub_1800374BC(a1, v12, v13, v14, v22, v23, v24);
      if ( (unsigned int)dword_1800B3218 > 4 )
      {
        if ( sub_180010470((__int64)&dword_1800B3218, 8LL) )
        {
          v26 = *(_QWORD *)(a2 - 32);
          v27 = a2 + 24;
          v25 = v21;
          sub_18007F36C(v20, &unk_1800A1651);
        }
      }
    }
    sub_1800356D8(a1, a2);
  }
  sub_1800277CC(a1);
  *v9 &= ~0x100000u;
  RtlWakeAddressAll(a1 + 608);
  sub_180023230(a1);
  sub_18001E380(v16);
  sub_1800093A0(a2, 0);
  return 1LL;
}
