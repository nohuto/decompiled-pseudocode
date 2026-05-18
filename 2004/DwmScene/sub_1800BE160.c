/*
 * XREFs of sub_1800BE160 @ 0x1800BE160
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BF6A4 @ 0x1800BF6A4 (sub_1800BF6A4.c)
 *     sub_1800C1360 @ 0x1800C1360 (sub_1800C1360.c)
 *     sub_1800C2154 @ 0x1800C2154 (sub_1800C2154.c)
 *     sub_1800C2CAC @ 0x1800C2CAC (sub_1800C2CAC.c)
 *     sub_1800C5744 @ 0x1800C5744 (sub_1800C5744.c)
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800BE160(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // eax

  sub_1800C1360();
  if ( *(_BYTE *)(a1 + 1464) )
  {
    sub_1800C2154(a1, a2);
    sub_1800C5744(a1, a2);
  }
  v4 = Mtx_lock((_Mtx_t)(a1 + 1552));
  if ( v4 )
  {
LABEL_9:
    std::_Throw_C_error(v4);
    JUMPOUT(0x1800BE219LL);
  }
  sub_1800BF6A4(a1, a2, a1 + 1488);
  v5 = Mtx_unlock((_Mtx_t)(a1 + 1552));
  if ( v5 )
  {
    std::_Throw_C_error(v5);
    goto LABEL_9;
  }
  if ( *(_BYTE *)(a1 + 1465) )
    sub_1800C2CAC(a1, a2, 0LL);
  return sub_1800C1DC0(a1, a2, a1 + 200);
}
