/*
 * XREFs of sub_180094803 @ 0x180094803
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052ED0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void sub_180094803()
{
  std::_Ref_count_base *v0; // [rsp+20h] [rbp+20h]

  if ( v0 )
    std::_Ref_count_base::_Decref(v0);
  JUMPOUT(0x18005A973LL);
}
