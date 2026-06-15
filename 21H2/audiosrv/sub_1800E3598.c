/*
 * XREFs of sub_1800E3598 @ 0x1800E3598
 * Callers:
 *     sub_18002EE80 @ 0x18002EE80 (sub_18002EE80.c)
 *     sub_180032170 @ 0x180032170 (sub_180032170.c)
 *     sub_18010C07C @ 0x18010C07C (sub_18010C07C.c)
 *     sub_18010DFFC @ 0x18010DFFC (sub_18010DFFC.c)
 *     sub_18010E4B8 @ 0x18010E4B8 (sub_18010E4B8.c)
 *     sub_18010E7A8 @ 0x18010E7A8 (sub_18010E7A8.c)
 *     sub_180110B28 @ 0x180110B28 (sub_180110B28.c)
 *     sub_180112CEC @ 0x180112CEC (sub_180112CEC.c)
 *     sub_180113C34 @ 0x180113C34 (sub_180113C34.c)
 *     sub_180113C98 @ 0x180113C98 (sub_180113C98.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@2@PEAU32@@Z @ 0x1800E6E78 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXU_Mutex_count_pair@-A0xd833279a@@@std@@@std@.c)
 */

__int64 *__fastcall sub_1800E3598(__int64 *a1)
{
  __int64 *v1; // r8
  __int64 v2; // rcx
  __int64 i; // rax

  v1 = a1;
  v2 = *a1;
  if ( *(_BYTE *)(*(_QWORD *)(v2 + 16) + 25LL) )
  {
    for ( i = *(_QWORD *)(v2 + 8); !*(_BYTE *)(i + 25) && v2 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
    {
      *v1 = i;
      v2 = i;
    }
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Min(
          *(_QWORD *)(v2 + 16),
          0LL,
          v1);
  }
  *v1 = i;
  return v1;
}
