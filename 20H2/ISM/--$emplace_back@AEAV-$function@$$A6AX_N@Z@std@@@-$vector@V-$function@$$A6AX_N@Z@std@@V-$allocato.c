/*
 * XREFs of ??$emplace_back@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAAAEAV?$function@$$A6AX_N@Z@1@AEAV21@@Z @ 0x180068F38
 * Callers:
 *     ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x180069120 (-FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ.c)
 * Callees:
 *     ??0?$function@$$A6AX_N@Z@std@@QEAA@AEBV01@@Z @ 0x180020E70 (--0-$function@$$A6AX_N@Z@std@@QEAA@AEBV01@@Z.c)
 */

unsigned __int64 __fastcall std::vector<std::function<void (bool)>>::emplace_back<std::function<void (bool)> &>(
        __int64 *a1,
        __int64 a2)
{
  unsigned __int64 result; // rax

  if ( a1[2] == a1[1] )
    return std::vector<std::function<void (bool)>>::_Emplace_reallocate<std::function<void (bool)> &>(a1, a1[1], a2);
  std::function<void (bool)>::function<void (bool)>(a1[1], a2);
  result = a1[1];
  a1[1] = result + 64;
  return result;
}
