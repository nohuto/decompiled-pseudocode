/*
 * XREFs of ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x1800867D0
 * Callers:
 *     ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x180086470 (-AppendVarInt@Base853Encoder@@QEAAXI@Z.c)
 *     ?EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ @ 0x180086774 (-EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ.c)
 *     ?to_bytes@?$wstring_convert@V?$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PEBG0@Z @ 0x18019A050 (-to_bytes@-$wstring_convert@V-$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$alloc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::string::push_back(_QWORD *a1, char a2)
{
  unsigned __int64 v2; // r8
  bool v3; // cf
  __int64 result; // rax

  v2 = a1[2];
  if ( v2 >= a1[3] )
    return std::string::_Reallocate_grow_by<_lambda_319d5e083f45f90dcdce5dce53cbb275_,char>(a1);
  v3 = a1[3] < 0x10uLL;
  result = v2 + 1;
  a1[2] = v2 + 1;
  if ( !v3 )
    a1 = (_QWORD *)*a1;
  *((_BYTE *)a1 + v2) = a2;
  *((_BYTE *)a1 + v2 + 1) = 0;
  return result;
}
