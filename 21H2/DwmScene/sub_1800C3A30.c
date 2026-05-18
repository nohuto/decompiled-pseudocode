/*
 * XREFs of sub_1800C3A30 @ 0x1800C3A30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C4F74 @ 0x1800C4F74 (sub_1800C4F74.c)
 *     sub_1800C6C30 @ 0x1800C6C30 (sub_1800C6C30.c)
 *     sub_1800C7A24 @ 0x1800C7A24 (sub_1800C7A24.c)
 *     sub_1800C857C @ 0x1800C857C (sub_1800C857C.c)
 *     sub_1800CB014 @ 0x1800CB014 (sub_1800CB014.c)
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800C3A30(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // eax

  sub_1800C6C30();
  if ( *(_BYTE *)(a1 + 1464) )
  {
    sub_1800C7A24(a1, a2);
    sub_1800CB014(a1, a2);
  }
  v4 = Mtx_lock((_Mtx_t)(a1 + 1552));
  if ( v4 )
  {
LABEL_9:
    std::_Throw_C_error(v4);
    JUMPOUT(0x1800C3AE9LL);
  }
  sub_1800C4F74(a1, a2, a1 + 1488);
  v5 = Mtx_unlock((_Mtx_t)(a1 + 1552));
  if ( v5 )
  {
    std::_Throw_C_error(v5);
    goto LABEL_9;
  }
  if ( *(_BYTE *)(a1 + 1465) )
    sub_1800C857C(a1, a2, 0LL);
  return sub_1800C7690(a1, a2, a1 + 200);
}
