/*
 * XREFs of sub_18000DA20 @ 0x18000DA20
 * Callers:
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 * Callees:
 *     sub_1800014F0 @ 0x1800014F0 (sub_1800014F0.c)
 *     sub_1800034A8 @ 0x1800034A8 (sub_1800034A8.c)
 *     sub_1800061F8 @ 0x1800061F8 (sub_1800061F8.c)
 *     sub_180008268 @ 0x180008268 (sub_180008268.c)
 *     sub_1800085FC @ 0x1800085FC (sub_1800085FC.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180025C98 @ 0x180025C98 (sub_180025C98.c)
 *     sub_180027B54 @ 0x180027B54 (sub_180027B54.c)
 *     sub_180029F74 @ 0x180029F74 (sub_180029F74.c)
 *     sub_180037470 @ 0x180037470 (sub_180037470.c)
 *     sub_18006B8A0 @ 0x18006B8A0 (sub_18006B8A0.c)
 *     sub_180077D40 @ 0x180077D40 (sub_180077D40.c)
 *     sub_180085678 @ 0x180085678 (sub_180085678.c)
 */

unsigned __int64 __fastcall sub_18000DA20(__int64 a1, char a2)
{
  __int64 v2; // rsi
  unsigned __int64 result; // rax
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // r15d
  BOOL v11; // ebp
  BOOL v12; // r14d
  int v13; // ebp
  __int64 v14; // rcx
  __int64 v15; // rcx
  int ThreadInformation; // [rsp+58h] [rbp+10h] BYREF

  v2 = a1 + 64;
  if ( (a2 & 0x10) != 0 )
  {
    sub_18000A110(a1 + 64);
    sub_18006B8A0(a1, 0LL);
    sub_1800093A0(v2, 0);
  }
  result = a2 & 0x27;
  if ( (a2 & 0x27) != 0 )
  {
    result = (unsigned int)~(_DWORD)result;
    *(_DWORD *)(a1 + 1244) &= result;
  }
  if ( (a2 & 8) != 0 )
  {
    sub_1800085FC(v2);
    if ( (*(_QWORD *)(v2 + 648) & 0x200000000000LL) == 0 )
    {
      *(_DWORD *)(a1 + 1248) |= 8u;
      v10 = sub_1800061F8(v2, v8, v9);
      v11 = v10 || (unsigned int)sub_180037470(*(unsigned int *)(v2 + 664));
      sub_18000A110(v2);
      sub_18000F390();
      v12 = 0;
      if ( v11 )
        v12 = (int)sub_1800014F0(*(_QWORD *)(a1 + 48), 1u) >= 0;
      if ( v10 )
        v13 = sub_1800034A8();
      else
        v13 = 0;
      sub_180027B54(a1, 0LL);
      if ( v10 )
      {
        ThreadInformation = v13;
        NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasePriority, &ThreadInformation, 4u);
      }
      if ( v12 )
        sub_1800014F0(*(_QWORD *)(a1 + 48), 0);
      sub_18001E380(v14);
      sub_1800093A0(v2, 0);
      *(_DWORD *)(a1 + 1248) &= ~8u;
    }
    *(_DWORD *)(a1 + 1244) &= ~8u;
    *(_QWORD *)(v2 + 648) &= ~0x200000000000uLL;
    result = sub_180008268(v2);
  }
  if ( a2 < 0 )
  {
    v6 = *(_DWORD *)(a1 + 1248) | 0x80;
    *(_DWORD *)(a1 + 1248) = v6;
    *(_DWORD *)(a1 + 1248) = v6 ^ ((unsigned __int16)v6 ^ (unsigned __int16)*(_DWORD *)(a1 + 1244)) & 0x100;
    sub_18000A110(v2);
    sub_18000F390();
    if ( (int)sub_180029F74(a1, 0LL) < 0 )
      sub_180085678();
    sub_180025C98(v2, 0LL);
    sub_18001E380(v7);
    sub_1800093A0(v2, 0);
    *(_DWORD *)(a1 + 1248) &= 0xFFFFFE7F;
    *(_DWORD *)(a1 + 1244) &= 0xFFFFFE7F;
    result = 0xFFFFFFFF1FFFFFFFuLL;
    *(_QWORD *)(v2 + 648) &= 0xFFFFFFFF1FFFFFFFuLL;
  }
  if ( (a2 & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 1248) |= 0x40u;
    sub_18000A110(v2);
    sub_18000F390();
    sub_180077D40(a1, 0LL);
    sub_18001E380(v15);
    sub_1800093A0(v2, 0);
    result = 4294967231LL;
    *(_DWORD *)(a1 + 1248) &= ~0x40u;
    *(_DWORD *)(a1 + 1244) &= ~0x40u;
  }
  return result;
}
