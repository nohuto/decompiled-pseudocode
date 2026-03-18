/*
 * XREFs of ?OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C015FB54
 * Callers:
 *     DxgkOpmTranslateHandle @ 0x1C015FAA8 (DxgkOpmTranslateHandle.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?OpmValidateAdapterHandle@ADAPTER_DISPLAY@@AEAAEPEAX@Z @ 0x1C015FBF4 (-OpmValidateAdapterHandle@ADAPTER_DISPLAY@@AEAAEPEAX@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::OpmTranslateHandle(DXGADAPTER **this, _QWORD *a2, void **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v12 + 24) = 6372LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( this[42] != KeGetCurrentThread() )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v11 + 24) = 6373LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( ADAPTER_DISPLAY::OpmValidateAdapterHandle((ADAPTER_DISPLAY *)this, a2) )
  {
    if ( *((_BYTE *)a2 + 24) )
    {
      return 3221225473LL;
    }
    else
    {
      *a3 = (void *)a2[2];
      return 0LL;
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v13 + 24) = 6381LL;
    WdLogEvent5_WdAssertion(v13);
    return 3223192844LL;
  }
}
