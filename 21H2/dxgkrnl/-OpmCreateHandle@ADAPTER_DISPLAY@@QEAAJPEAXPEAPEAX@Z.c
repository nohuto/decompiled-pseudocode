/*
 * XREFs of ?OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C01ED690
 * Callers:
 *     DxgkOpmCreateHandle @ 0x1C01ED5A8 (DxgkOpmCreateHandle.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::OpmCreateHandle(DXGADAPTER **this, void *a2, void **a3)
{
  __int64 v6; // r9
  _BYTE *v7; // rax
  _QWORD *v8; // rcx
  DXGADAPTER *v9; // rdx

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 6582LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 6582LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( this[49] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 6583LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OpmI2CMutex.IsOwner()", 6583LL, 0LL, 0LL, 0LL, 0LL);
  }
  v7 = (_BYTE *)operator new[](0x20uLL, 0x4B677844u, 256LL, v6);
  if ( !v7 )
    return 3221225495LL;
  v8 = this + 44;
  v7[24] = 0;
  *((_QWORD *)v7 + 2) = a2;
  v9 = this[44];
  if ( *((DXGADAPTER ***)v9 + 1) != this + 44 )
    __fastfail(3u);
  *(_QWORD *)v7 = v9;
  *((_QWORD *)v7 + 1) = v8;
  *((_QWORD *)v9 + 1) = v7;
  *v8 = v7;
  *a3 = v7;
  return 0LL;
}
