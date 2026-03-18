/*
 * XREFs of DpiFdoStartNonLdaAdapter @ 0x1C01F5830
 * Callers:
 *     DpiFdoStartAdapterThreadImpl @ 0x1C01F5298 (DpiFdoStartAdapterThreadImpl.c)
 * Callees:
 *     DpiFdoCreateSysMmAdapter @ 0x1C01F58C8 (DpiFdoCreateSysMmAdapter.c)
 *     DpiFdoStartAdapter @ 0x1C01FB06C (DpiFdoStartAdapter.c)
 */

__int64 __fastcall DpiFdoStartNonLdaAdapter(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  int SysMmAdapter; // eax
  __int64 v9; // rbx
  int started; // eax

  SysMmAdapter = DpiFdoCreateSysMmAdapter(a1);
  v9 = SysMmAdapter;
  if ( SysMmAdapter >= 0 )
  {
    started = DpiFdoStartAdapter(a1, a5, a6, a7);
    v9 = started;
    if ( started >= 0 )
      return 0LL;
  }
  WdLogSingleEntry1(2LL, v9);
  return (unsigned int)v9;
}
