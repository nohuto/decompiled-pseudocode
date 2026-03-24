/*
 * XREFs of ??A?$deque@UScribbleFrame@CComputeScribbleScheduler@@V?$allocator@UScribbleFrame@CComputeScribbleScheduler@@@std@@@std@@QEAAAEAUScribbleFrame@CComputeScribbleScheduler@@_K@Z @ 0x1801A426C
 * Callers:
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x1801A4EA0 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 * Callees:
 *     ??C?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@VCMegaRect@@@std@@@std@@@std@@QEBAPEAVCMegaRect@@XZ @ 0x1800EFD04 (--C-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@VCMegaRect@@@std@@@std@@@std@@QEBAPEAV.c)
 */

__int64 __fastcall std::deque<CComputeScribbleScheduler::ScribbleFrame>::operator[](__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  _QWORD **v3; // rax
  _QWORD *v4; // rcx
  _QWORD ***v5; // rcx
  _QWORD *v6; // rax
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0LL;
  v4 = *(_QWORD **)a1;
  if ( v4 )
  {
    v5 = (_QWORD ***)*v4;
    if ( v5 )
      v3 = *v5;
  }
  v8 = 0LL;
  if ( v3 )
  {
    v6 = *v3;
    if ( v6 )
      *(_QWORD *)&v8 = *v6;
  }
  v9 = v2 + a2;
  return std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<CMegaRect>>>::operator->((__int64 **)&v8);
}
