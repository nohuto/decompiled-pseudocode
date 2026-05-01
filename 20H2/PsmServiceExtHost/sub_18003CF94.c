/*
 * XREFs of sub_18003CF94 @ 0x18003CF94
 * Callers:
 *     sub_18000DCD8 @ 0x18000DCD8 (sub_18000DCD8.c)
 *     sub_18003BC18 @ 0x18003BC18 (sub_18003BC18.c)
 *     sub_18003BF7C @ 0x18003BF7C (sub_18003BF7C.c)
 *     sub_1800433B0 @ 0x1800433B0 (sub_1800433B0.c)
 *     sub_180044070 @ 0x180044070 (sub_180044070.c)
 *     sub_180044770 @ 0x180044770 (sub_180044770.c)
 *     sub_18007BE20 @ 0x18007BE20 (sub_18007BE20.c)
 *     sub_18007BE54 @ 0x18007BE54 (sub_18007BE54.c)
 *     sub_18007BF28 @ 0x18007BF28 (sub_18007BF28.c)
 *     sub_18007FE60 @ 0x18007FE60 (sub_18007FE60.c)
 *     sub_18007FF10 @ 0x18007FF10 (sub_18007FF10.c)
 *     sub_18008011C @ 0x18008011C (sub_18008011C.c)
 *     sub_180081898 @ 0x180081898 (sub_180081898.c)
 *     sub_180082424 @ 0x180082424 (sub_180082424.c)
 *     sub_1800824A8 @ 0x1800824A8 (sub_1800824A8.c)
 * Callees:
 *     sub_18001FD20 @ 0x18001FD20 (sub_18001FD20.c)
 *     sub_180020CC0 @ 0x180020CC0 (sub_180020CC0.c)
 *     sub_180025F18 @ 0x180025F18 (sub_180025F18.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_180027598 @ 0x180027598 (sub_180027598.c)
 */

_QWORD *__fastcall sub_18003CF94(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v3; // rdi
  unsigned __int64 v5; // rbx
  __int64 v6; // rax

  v3 = a3;
  if ( a3 )
  {
    v5 = a3[97];
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 + 24)) <= 1 )
      __fastfail(0xEu);
  }
  else
  {
    v5 = sub_180025F18(a1, 4 - a2);
    v3 = 0LL;
  }
  if ( v5 )
  {
    do
    {
      if ( v3 )
        v6 = sub_180020CC0(v3);
      else
        v6 = (__int64)sub_18001FD20(v5);
      v3 = (_QWORD *)v6;
      if ( v6 )
        break;
      v5 = sub_180027598(a1, (_QWORD *)v5);
    }
    while ( v5 );
    if ( v5 )
      sub_1800274E0((_QWORD *)v5);
  }
  return v3;
}
