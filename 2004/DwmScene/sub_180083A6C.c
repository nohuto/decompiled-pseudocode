/*
 * XREFs of sub_180083A6C @ 0x180083A6C
 * Callers:
 *     sub_180010C38 @ 0x180010C38 (sub_180010C38.c)
 *     sub_1800122F8 @ 0x1800122F8 (sub_1800122F8.c)
 *     sub_180012380 @ 0x180012380 (sub_180012380.c)
 *     sub_1800139A8 @ 0x1800139A8 (sub_1800139A8.c)
 *     sub_180013BE8 @ 0x180013BE8 (sub_180013BE8.c)
 *     sub_18006C0D8 @ 0x18006C0D8 (sub_18006C0D8.c)
 *     sub_18007DBDC @ 0x18007DBDC (sub_18007DBDC.c)
 *     sub_18007EAF8 @ 0x18007EAF8 (sub_18007EAF8.c)
 *     sub_18007EC44 @ 0x18007EC44 (sub_18007EC44.c)
 *     sub_18007FCE4 @ 0x18007FCE4 (sub_18007FCE4.c)
 *     sub_180080DD4 @ 0x180080DD4 (sub_180080DD4.c)
 *     sub_180081408 @ 0x180081408 (sub_180081408.c)
 *     sub_180081464 @ 0x180081464 (sub_180081464.c)
 *     sub_18008169C @ 0x18008169C (sub_18008169C.c)
 *     sub_1800820A8 @ 0x1800820A8 (sub_1800820A8.c)
 *     GsDriverEntry @ 0x180082150 (GsDriverEntry.c)
 *     sub_180082188 @ 0x180082188 (sub_180082188.c)
 *     sub_1800821F4 @ 0x1800821F4 (sub_1800821F4.c)
 *     sub_1800829D0 @ 0x1800829D0 (sub_1800829D0.c)
 *     sub_180082A40 @ 0x180082A40 (sub_180082A40.c)
 *     sub_180082B74 @ 0x180082B74 (sub_180082B74.c)
 *     sub_180082C58 @ 0x180082C58 (sub_180082C58.c)
 *     ?_Init@?$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180082EC0 (-_Init@-$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     sub_1800830A0 @ 0x1800830A0 (sub_1800830A0.c)
 *     sub_1800836DC @ 0x1800836DC (sub_1800836DC.c)
 *     sub_180083800 @ 0x180083800 (sub_180083800.c)
 *     sub_180083888 @ 0x180083888 (sub_180083888.c)
 *     sub_18008A3C8 @ 0x18008A3C8 (sub_18008A3C8.c)
 *     sub_1800945A0 @ 0x1800945A0 (sub_1800945A0.c)
 *     sub_180096830 @ 0x180096830 (sub_180096830.c)
 *     sub_180098464 @ 0x180098464 (sub_180098464.c)
 *     sub_1800B3EB8 @ 0x1800B3EB8 (sub_1800B3EB8.c)
 *     sub_1800B40F8 @ 0x1800B40F8 (sub_1800B40F8.c)
 *     sub_1800B4334 @ 0x1800B4334 (sub_1800B4334.c)
 *     sub_1800B4570 @ 0x1800B4570 (sub_1800B4570.c)
 *     sub_1800B47AC @ 0x1800B47AC (sub_1800B47AC.c)
 *     sub_1800BB10C @ 0x1800BB10C (sub_1800BB10C.c)
 *     sub_1800BC4B0 @ 0x1800BC4B0 (sub_1800BC4B0.c)
 *     sub_1800BE6F8 @ 0x1800BE6F8 (sub_1800BE6F8.c)
 *     sub_1800BF6A4 @ 0x1800BF6A4 (sub_1800BF6A4.c)
 *     sub_1800C2CAC @ 0x1800C2CAC (sub_1800C2CAC.c)
 *     sub_1800D5078 @ 0x1800D5078 (sub_1800D5078.c)
 *     sub_1800FC7C0 @ 0x1800FC7C0 (sub_1800FC7C0.c)
 *     sub_1800FCAD0 @ 0x1800FCAD0 (sub_1800FCAD0.c)
 * Callees:
 *     sub_18006187C @ 0x18006187C (sub_18006187C.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180083A6C(__int64 a1)
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
    sub_18006187C(v2 + 16, v1);
  if ( *((_QWORD *)&v2 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v2 + 1) + 8LL), 0xFFFFFFFF) == 1 )
  {
    (***((void (__fastcall ****)(_QWORD))&v4 + 1))(*((_QWORD *)&v4 + 1));
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v4 + 1) + 12LL), 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v4 + 1) + 8LL))(*((_QWORD *)&v4 + 1));
  }
}
