/*
 * XREFs of ??0?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@QEAA@_KAEBV?$allocator@UDISPLAYCONFIG_PATH_INFO@@@1@@Z @ 0x140008710
 * Callers:
 *     BlackScreenDiagnostics::GetVidPnOwnership @ 0x140008E1C (BlackScreenDiagnostics--GetVidPnOwnership.c)
 * Callees:
 *     memset_0 @ 0x14000430C (memset_0.c)
 *     ?_Buy_nonzero@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAX_K@Z @ 0x140009774 (-_Buy_nonzero@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@s.c)
 */

__int64 *__fastcall std::vector<DISPLAYCONFIG_PATH_INFO>::vector<DISPLAYCONFIG_PATH_INFO>(__int64 *a1, __int64 a2)
{
  __int64 v4; // rsi
  size_t v5; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    std::vector<DISPLAYCONFIG_PATH_INFO>::_Buy_nonzero();
    v4 = *a1;
    v5 = 72 * a2;
    memset_0((void *)*a1, 0, v5);
    a1[1] = v5 + v4;
  }
  return a1;
}
