/*
 * XREFs of VidSchTerminateProcess @ 0x1C0076E00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C000230C (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall VidSchTerminateProcess(PVOID *P, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  DXGGLOBAL *Global; // rax
  DXGGLOBAL *v6; // rax
  __int64 v8; // rax

  if ( P )
  {
    v4 = 0;
    Global = DXGGLOBAL::GetGlobal();
    if ( (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(Global) )
    {
      do
      {
        ++v4;
        v6 = DXGGLOBAL::GetGlobal();
      }
      while ( v4 < (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(v6) );
    }
    ExFreePoolWithTag(P[3], 0);
    ExFreePoolWithTag(P[327], 0);
    if ( (PVOID *)g_pVidSchSystemProcess == P )
      g_pVidSchSystemProcess = 0LL;
    ExFreePoolWithTag(P, 0);
    return 0LL;
  }
  else
  {
    v8 = WdLogNewEntry5_WdAssertion(0LL, a2, a3);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v8);
    return 3221225485LL;
  }
}
