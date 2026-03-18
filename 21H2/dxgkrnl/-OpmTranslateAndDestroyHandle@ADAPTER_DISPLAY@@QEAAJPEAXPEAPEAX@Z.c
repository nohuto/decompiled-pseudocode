/*
 * XREFs of ?OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C01ED870
 * Callers:
 *     DxgkOpmTranslateAndDestroyHandle @ 0x1C01ED788 (DxgkOpmTranslateAndDestroyHandle.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?OpmValidateAdapterHandle@ADAPTER_DISPLAY@@AEAAEPEAX@Z @ 0x1C01EDE04 (-OpmValidateAdapterHandle@ADAPTER_DISPLAY@@AEAAEPEAX@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::OpmTranslateAndDestroyHandle(DXGADAPTER **this, _QWORD *a2, void **a3)
{
  _QWORD **v6; // rcx
  void **v7; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 6661LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 6661LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( this[49] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 6662LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OpmI2CMutex.IsOwner()", 6662LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( ADAPTER_DISPLAY::OpmValidateAdapterHandle((ADAPTER_DISPLAY *)this, a2) )
  {
    v6 = (_QWORD **)*a2;
    *a3 = (void *)a2[2];
    if ( v6[1] != a2 || (v7 = (void **)a2[1], *v7 != a2) )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = v7;
    operator delete(a2);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, 6670LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"OPM passed in an invalid hOpmAdapterHandle!",
      6670LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223192844LL;
  }
}
