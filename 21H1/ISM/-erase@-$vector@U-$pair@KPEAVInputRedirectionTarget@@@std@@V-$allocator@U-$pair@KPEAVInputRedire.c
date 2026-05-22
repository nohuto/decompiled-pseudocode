/*
 * XREFs of ?erase@?$vector@U?$pair@KPEAVInputRedirectionTarget@@@std@@V?$allocator@U?$pair@KPEAVInputRedirectionTarget@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KPEAVInputRedirectionTarget@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KPEAVInputRedirectionTarget@@@std@@@std@@@std@@@2@@Z @ 0x18017F904
 * Callers:
 *     ?OnFocusRequest@InputRedirectionProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18000D570 (-OnFocusRequest@InputRedirectionProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextual.c)
 *     ?DisableInputRedirection@InputRedirectionProcessor@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z @ 0x18017F3C0 (-DisableInputRedirection@InputRedirectionProcessor@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z.c)
 *     ?EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z @ 0x18017F4E0 (-EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z.c)
 *     ?OnHitTest@InputRedirectionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18017F6B0 (-OnHitTest@InputRedirectionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProc.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::vector<std::pair<unsigned long,InputRedirectionTarget *>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // r9

  v3 = *(_QWORD *)(a1 + 8);
  v4 = a3 + 16;
  if ( a3 + 16 != v3 )
  {
    do
    {
      *(_DWORD *)(v4 - 16) = *(_DWORD *)v4;
      *(_QWORD *)(v4 - 8) = *(_QWORD *)(v4 + 8);
      v4 += 16LL;
    }
    while ( v4 != v3 );
    v3 = *(_QWORD *)(a1 + 8);
  }
  *a2 = a3;
  *(_QWORD *)(a1 + 8) = v3 - 16;
  return a2;
}
