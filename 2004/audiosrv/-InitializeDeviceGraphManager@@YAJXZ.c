/*
 * XREFs of ?InitializeDeviceGraphManager@@YAJXZ @ 0x180065D80
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x180063D30 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCDeviceGraphManager@@UIDeviceGraphManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphManager@@@Z @ 0x180055FAC (--$MakeAndInitialize@VCDeviceGraphManager@@UIDeviceGraphManager@@$$V@Details@WRL@Microsoft@@YAJP.c)
 *     ??$MakeAndInitialize@VCDeviceGraphStore@@UIDeviceGraphStore@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphStore@@@Z @ 0x18005606C (--$MakeAndInitialize@VCDeviceGraphStore@@UIDeviceGraphStore@@$$V@Details@WRL@Microsoft@@YAJPEAPE.c)
 *     ?InitializeProcessSubmixManager@@YAJXZ @ 0x180065DC4 (-InitializeProcessSubmixManager@@YAJXZ.c)
 */

__int64 InitializeDeviceGraphManager(void)
{
  int v0; // ebx
  __int64 v2; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v0 = Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphStore,IDeviceGraphStore,>();
  if ( v0 < 0 )
  {
    v2 = 2289LL;
  }
  else
  {
    v0 = Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphManager,IDeviceGraphManager,>();
    if ( v0 < 0 )
    {
      v2 = 2292LL;
    }
    else
    {
      v0 = InitializeProcessSubmixManager();
      if ( v0 >= 0 )
        return 0LL;
      v2 = 2295LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v2,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v0);
  return (unsigned int)v0;
}
