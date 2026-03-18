/*
 * XREFs of ??0?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@QEAA@_KAEBV?$allocator@UDISPLAYCONFIG_MODE_INFO@@@1@@Z @ 0x1400086A4
 * Callers:
 *     BlackScreenDiagnostics::GetVidPnOwnership @ 0x140008E1C (BlackScreenDiagnostics--GetVidPnOwnership.c)
 * Callees:
 *     memset_0 @ 0x14000430C (memset_0.c)
 *     ?_Buy_nonzero@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAX_K@Z @ 0x140009714 (-_Buy_nonzero@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@s.c)
 */

void **__fastcall std::vector<DISPLAYCONFIG_MODE_INFO>::vector<DISPLAYCONFIG_MODE_INFO>(void **a1, __int64 a2)
{
  char *v4; // rsi

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    std::vector<DISPLAYCONFIG_MODE_INFO>::_Buy_nonzero();
    v4 = (char *)*a1;
    memset_0(*a1, 0, a2 << 6);
    a1[1] = &v4[64 * a2];
  }
  return a1;
}
