/*
 * XREFs of ?reserve@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@QEAAX_K@Z @ 0x1800A2BAC
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x1800A1728 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 * Callees:
 *     ?_Reallocate_exactly@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@AEAAX_K@Z @ 0x1800A2AD4 (-_Reallocate_exactly@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateState@@@std@@@std@@AEAAX.c)
 */

unsigned __int64 __fastcall std::vector<LampUpdateState>::reserve(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  result = (__int64)(a1[2] - *a1) >> 3;
  if ( a2 > result )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    return std::vector<LampUpdateState>::_Reallocate_exactly((__int64)a1, a2);
  }
  return result;
}
