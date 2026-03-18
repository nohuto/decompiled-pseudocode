/*
 * XREFs of ?OpmValidateAdapterHandle@ADAPTER_DISPLAY@@AEAAEPEAX@Z @ 0x1C016E498
 * Callers:
 *     ?OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C016DFDC (-OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 *     ?OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C016E3F8 (-OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall ADAPTER_DISPLAY::OpmValidateAdapterHandle(DXGADAPTER **this, DXGADAPTER **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  DXGADAPTER **i; // rax
  __int64 v9; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v9 + 24) = 6455LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( this[42] != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v6 + 24) = 6456LL;
    WdLogEvent5_WdAssertion(v6);
  }
  for ( i = (DXGADAPTER **)this[38]; i != this + 38; i = (DXGADAPTER **)*i )
  {
    if ( i == a2 )
      return 1;
  }
  return 0;
}
