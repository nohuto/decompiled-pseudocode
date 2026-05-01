/*
 * XREFs of sub_1800085FC @ 0x1800085FC
 * Callers:
 *     sub_18000DA20 @ 0x18000DA20 (sub_18000DA20.c)
 * Callees:
 *     sub_180008938 @ 0x180008938 (sub_180008938.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_1800097FC @ 0x1800097FC (sub_1800097FC.c)
 *     sub_180009854 @ 0x180009854 (sub_180009854.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18007254C @ 0x18007254C (sub_18007254C.c)
 */

__int64 __fastcall sub_1800085FC(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 *v3; // rbx
  unsigned __int64 v4; // rax
  _QWORD *v5; // rax
  __int64 **v7; // rcx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rcx
  __int64 *v11; // rcx
  __int64 **v12; // rax
  int v13; // [rsp+70h] [rbp+8h] BYREF
  int v14; // [rsp+78h] [rbp+10h] BYREF
  int v15; // [rsp+80h] [rbp+18h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  v2 = (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 776) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                              + 120)
                  + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
     - 168;
  sub_180009854(v2);
  v3 = (__int64 *)(a1 + 976);
  while ( 1 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 776) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                               + 120)
                   + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)(a1 + 664) & 0x40) != 0 )
      break;
    if ( (*(_QWORD *)(a1 + 648) & 0x200000000000LL) != 0 )
      break;
    if ( !*(_DWORD *)(v4 + 552) )
    {
      v5 = (_QWORD *)(v4 + 536);
      if ( (_QWORD *)*v5 == v5 || (__int64 *)*v5 == v3 )
        break;
    }
    if ( (unsigned int)sub_180008938(a1 + 976) )
    {
      v7 = *(__int64 ***)(v2 + 712);
      if ( *v7 != (__int64 *)(v2 + 704) )
        goto LABEL_19;
      *v3 = v2 + 704;
      *(_QWORD *)(a1 + 984) = v7;
      *v7 = v3;
      *(_QWORD *)(v2 + 712) = v3;
    }
    v15 = *(_DWORD *)(v2 + 724);
    sub_1800097FC(v2);
    sub_18000A110(a1);
    sub_18000F390();
    if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)sub_180010470(&dword_1800B3218, 64LL) )
    {
      v13 = *(_DWORD *)(v2 + 720);
      v14 = *(_DWORD *)(a1 + 664);
      v16 = *(_QWORD *)(a1 - 32);
      sub_18007254C(
        (unsigned int)&dword_1800B3218,
        (unsigned int)&unk_1800A0A64,
        v8,
        v9,
        (__int64)&v16,
        (__int64)&v14,
        (__int64)&v13);
    }
    RtlWaitOnAddress(v2 + 724, &v15, 4LL);
    sub_18001E380(v10);
    sub_1800093A0(a1, 0LL);
    sub_180009854(v2);
  }
  if ( !(unsigned int)sub_180008938(a1 + 976) )
  {
    v11 = (__int64 *)*v3;
    if ( *(__int64 **)(*v3 + 8) != v3 || (v12 = *(__int64 ***)(a1 + 984), *v12 != v3) )
LABEL_19:
      __fastfail(3u);
    *v12 = v11;
    v11[1] = (__int64)v12;
    *(_OWORD *)v3 = 0LL;
  }
  ++*(_DWORD *)(v2 + 720);
  return sub_1800097FC(v2);
}
