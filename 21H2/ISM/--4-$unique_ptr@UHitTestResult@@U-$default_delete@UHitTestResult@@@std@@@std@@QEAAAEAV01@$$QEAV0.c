/*
 * XREFs of ??4?$unique_ptr@UHitTestResult@@U?$default_delete@UHitTestResult@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180137F80
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x180138770 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1800113C4 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD **__fastcall std::unique_ptr<HitTestResult>::operator=(_QWORD **a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rcx

  if ( a1 != a2 )
  {
    v4 = (_QWORD *)*a2;
    *a2 = 0LL;
    v5 = *a1;
    *a1 = v4;
    if ( v5 )
    {
      v6 = v5[4];
      if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        NtCloseCompositionInputSink(v6);
      std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(v5 + 1, (__int64)a2, a3);
      operator delete(v5, (const struct std::nothrow_t *)0x78);
    }
  }
  return a1;
}
