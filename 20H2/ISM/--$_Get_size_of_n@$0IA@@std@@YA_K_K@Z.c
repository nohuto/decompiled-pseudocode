/*
 * XREFs of ??$_Get_size_of_n@$0IA@@std@@YA_K_K@Z @ 0x180049464
 * Callers:
 *     ??$_Emplace_reallocate@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@QEAV2@AEBV2@@Z @ 0x18017820C (--$_Emplace_reallocate@AEBVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Get_size_of_n<128>(unsigned __int64 a1)
{
  __int64 result; // rax

  result = a1 << 7;
  if ( a1 > 0x1FFFFFFFFFFFFFFLL )
    return -1LL;
  return result;
}
