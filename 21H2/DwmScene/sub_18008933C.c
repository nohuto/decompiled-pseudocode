/*
 * XREFs of sub_18008933C @ 0x18008933C
 * Callers:
 *     sub_180010D18 @ 0x180010D18 (sub_180010D18.c)
 *     sub_1800123D8 @ 0x1800123D8 (sub_1800123D8.c)
 *     sub_180012460 @ 0x180012460 (sub_180012460.c)
 *     sub_180013A88 @ 0x180013A88 (sub_180013A88.c)
 *     sub_180013CC8 @ 0x180013CC8 (sub_180013CC8.c)
 *     sub_1800719A8 @ 0x1800719A8 (sub_1800719A8.c)
 *     sub_1800834AC @ 0x1800834AC (sub_1800834AC.c)
 *     sub_1800843C8 @ 0x1800843C8 (sub_1800843C8.c)
 *     sub_180084514 @ 0x180084514 (sub_180084514.c)
 *     sub_1800855B4 @ 0x1800855B4 (sub_1800855B4.c)
 *     sub_1800866A4 @ 0x1800866A4 (sub_1800866A4.c)
 *     sub_180086CD8 @ 0x180086CD8 (sub_180086CD8.c)
 *     sub_180086D34 @ 0x180086D34 (sub_180086D34.c)
 *     sub_180086F6C @ 0x180086F6C (sub_180086F6C.c)
 *     sub_180087978 @ 0x180087978 (sub_180087978.c)
 *     GsDriverEntry @ 0x180087A20 (GsDriverEntry.c)
 *     sub_180087A58 @ 0x180087A58 (sub_180087A58.c)
 *     sub_180087AC4 @ 0x180087AC4 (sub_180087AC4.c)
 *     sub_1800882A0 @ 0x1800882A0 (sub_1800882A0.c)
 *     sub_180088310 @ 0x180088310 (sub_180088310.c)
 *     sub_180088444 @ 0x180088444 (sub_180088444.c)
 *     sub_180088528 @ 0x180088528 (sub_180088528.c)
 *     ?_Init@?$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180088790 (-_Init@-$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     sub_180088970 @ 0x180088970 (sub_180088970.c)
 *     sub_180088FAC @ 0x180088FAC (sub_180088FAC.c)
 *     sub_1800890D0 @ 0x1800890D0 (sub_1800890D0.c)
 *     sub_180089158 @ 0x180089158 (sub_180089158.c)
 *     sub_18008FC98 @ 0x18008FC98 (sub_18008FC98.c)
 *     sub_180099E70 @ 0x180099E70 (sub_180099E70.c)
 *     sub_18009C100 @ 0x18009C100 (sub_18009C100.c)
 *     sub_18009DD34 @ 0x18009DD34 (sub_18009DD34.c)
 *     sub_1800B9788 @ 0x1800B9788 (sub_1800B9788.c)
 *     sub_1800B99C8 @ 0x1800B99C8 (sub_1800B99C8.c)
 *     sub_1800B9C04 @ 0x1800B9C04 (sub_1800B9C04.c)
 *     sub_1800B9E40 @ 0x1800B9E40 (sub_1800B9E40.c)
 *     sub_1800BA07C @ 0x1800BA07C (sub_1800BA07C.c)
 *     sub_1800C09DC @ 0x1800C09DC (sub_1800C09DC.c)
 *     sub_1800C1D80 @ 0x1800C1D80 (sub_1800C1D80.c)
 *     sub_1800C3FC8 @ 0x1800C3FC8 (sub_1800C3FC8.c)
 *     sub_1800C4F74 @ 0x1800C4F74 (sub_1800C4F74.c)
 *     sub_1800C857C @ 0x1800C857C (sub_1800C857C.c)
 *     sub_1800DA948 @ 0x1800DA948 (sub_1800DA948.c)
 *     sub_180102090 @ 0x180102090 (sub_180102090.c)
 *     sub_1801023A0 @ 0x1801023A0 (sub_1801023A0.c)
 * Callees:
 *     sub_18006714C @ 0x18006714C (sub_18006714C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18008933C(__int64 a1)
{
  __int64 v1; // rdx
  __int128 v2; // rcx
  signed __int32 v3; // eax
  __int128 v4; // [rsp+20h] [rbp-28h]

  v4 = 0LL;
  v1 = *(_QWORD *)(a1 + 80);
  if ( v1 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(v1 + 8);
      if ( !v3 )
        break;
      if ( v3 == _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 8), v3 + 1, v3) )
      {
        v2 = *(_OWORD *)(a1 + 72);
        *((_QWORD *)&v4 + 1) = *((_QWORD *)&v2 + 1);
        goto LABEL_3;
      }
    }
  }
  v2 = 0LL;
LABEL_3:
  if ( (_QWORD)v2 )
    sub_18006714C(v2 + 16, v1);
  if ( *((_QWORD *)&v2 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v2 + 1) + 8LL), 0xFFFFFFFF) == 1 )
  {
    (***((void (__fastcall ****)(_QWORD))&v4 + 1))(*((_QWORD *)&v4 + 1));
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v4 + 1) + 12LL), 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v4 + 1) + 8LL))(*((_QWORD *)&v4 + 1));
  }
}
