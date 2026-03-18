/*
 * XREFs of ?DestroyKeyedMutex@DXGGLOBAL@@QEAAXPEAVDXGKEYEDMUTEX@@@Z @ 0x1C033F718
 * Callers:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C005591C (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_GDXGKEYEDMUTEX@@QEAAPEAXI@Z @ 0x1C002F902 (--_GDXGKEYEDMUTEX@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGGLOBAL::DestroyKeyedMutex(struct _KTHREAD **this, struct DXGKEYEDMUTEX ***a2)
{
  struct DXGKEYEDMUTEX **v4; // rdx
  struct DXGKEYEDMUTEX **v5; // rax

  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 4749LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pKeyedMutex != NULL", 4749LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 80));
  v4 = *a2;
  if ( (*a2)[1] != (struct DXGKEYEDMUTEX *)a2 || (v5 = a2[1], *v5 != (struct DXGKEYEDMUTEX *)a2) )
    __fastfail(3u);
  *v5 = (struct DXGKEYEDMUTEX *)v4;
  v4[1] = (struct DXGKEYEDMUTEX *)v5;
  DXGFASTMUTEX::Release(this + 80);
  DXGKEYEDMUTEX::`scalar deleting destructor'((DXGKEYEDMUTEX *)a2);
}
