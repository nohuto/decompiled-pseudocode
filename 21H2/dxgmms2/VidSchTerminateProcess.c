/*
 * XREFs of VidSchTerminateProcess @ 0x1C0082590
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0001868 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000188C (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VidSchTerminateProcess(PVOID *P)
{
  unsigned int v2; // edi
  DXGGLOBAL *Global; // rax
  DXGGLOBAL *v4; // rax
  __int64 v6; // rcx

  if ( P )
  {
    v2 = 0;
    Global = DXGGLOBAL::GetGlobal();
    if ( (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(Global) )
    {
      do
      {
        ++v2;
        v4 = DXGGLOBAL::GetGlobal();
      }
      while ( v2 < (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(v4) );
    }
    ExFreePoolWithTag(P[4], 0);
    ExFreePoolWithTag(P[328], 0);
    if ( (PVOID *)g_pVidSchSystemProcess == P )
      g_pVidSchSystemProcess = 0LL;
    ExFreePoolWithTag(P, 0);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
    return 3221225485LL;
  }
}
