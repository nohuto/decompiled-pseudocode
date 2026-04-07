/*
 * XREFs of ?IsWarpAdapterLuid@CDWMDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x18005235C
 * Callers:
 *     ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x18003680C (-CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ.c)
 *     ?CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ @ 0x180085678 (-CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CDWMDXGIEnumeration::IsWarpAdapterLuid(CDWMDXGIEnumeration *this, struct _LUID a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r8
  __int64 v4; // r10
  __int64 v5; // rcx

  v2 = *((_DWORD *)this + 20);
  v3 = 0LL;
  if ( !v2 )
    return 0;
  v4 = *((_QWORD *)this + 7);
  while ( 1 )
  {
    v5 = *(_QWORD *)(v4 + 8 * v3);
    if ( a2 == *(_QWORD *)(v5 + 336) && *(_DWORD *)(v5 + 296) == 5140 && *(_DWORD *)(v5 + 300) == 140 )
      break;
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= v2 )
      return 0;
  }
  return 1;
}
