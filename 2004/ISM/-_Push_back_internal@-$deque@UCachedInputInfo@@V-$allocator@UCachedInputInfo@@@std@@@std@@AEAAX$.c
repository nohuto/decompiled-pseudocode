/*
 * XREFs of ?_Push_back_internal@?$deque@UCachedInputInfo@@V?$allocator@UCachedInputInfo@@@std@@@std@@AEAAX$$QEAUCachedInputInfo@@@Z @ 0x1800B38C4
 * Callers:
 *     ?MakeRoutingDecisionsForAllFrames@Win32kInterop@@AEAAJAEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUInputInfo@@PEAUIInputTarget@@@Z @ 0x1800B0A14 (-MakeRoutingDecisionsForAllFrames@Win32kInterop@@AEAAJAEAV-$unordered_set@KU-$hash@K@std@@U-$equ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@UCachedInputInfo@@V?$allocator@UCachedInputInfo@@@std@@@std@@AEAAX_K@Z @ 0x1800B374C (-_Growmap@-$deque@UCachedInputInfo@@V-$allocator@UCachedInputInfo@@@std@@@std@@AEAAX_K@Z.c)
 */

__int64 __fastcall std::deque<CachedInputInfo>::_Push_back_internal(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rcx
  __int64 result; // rax
  __int64 *v10; // rdx
  __int64 *v11; // rcx

  v2 = qword_180208BD0;
  v4 = qword_180208BC0;
  if ( qword_180208BC0 <= (unsigned __int64)(qword_180208BD0 + 1) )
  {
    std::deque<CachedInputInfo>::_Growmap();
    v2 = qword_180208BD0;
    v4 = qword_180208BC0;
  }
  v5 = v4 - 1;
  qword_180208BC8 &= v5;
  v6 = v5 & (qword_180208BC8 + v2);
  v7 = *((_QWORD *)&Win32kInterop::s_inputInfoCachedQueue + 1);
  if ( !*(_QWORD *)(*((_QWORD *)&Win32kInterop::s_inputInfoCachedQueue + 1) + 8 * v6) )
  {
    *(_QWORD *)(*((_QWORD *)&Win32kInterop::s_inputInfoCachedQueue + 1) + 8 * v6) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    v7 = *((_QWORD *)&Win32kInterop::s_inputInfoCachedQueue + 1);
  }
  v8 = *(_QWORD **)(v7 + 8 * v6);
  result = *a2;
  *a2 = 0LL;
  v10 = v8 + 1;
  *v8 = result;
  v8[1] = 0LL;
  v11 = a2 + 1;
  if ( v10 != a2 + 1 )
  {
    result = *v11;
    *v10 = *v11;
    *v11 = 0LL;
  }
  ++qword_180208BD0;
  return result;
}
