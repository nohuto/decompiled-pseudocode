/*
 * XREFs of ?DestroyKeyedMutex@DXGGLOBAL@@QEAAXPEAVDXGKEYEDMUTEX@@@Z @ 0x1C0290304
 * Callers:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0040074 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00029C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_GDXGKEYEDMUTEX@@QEAAPEAXI@Z @ 0x1C0048324 (--_GDXGKEYEDMUTEX@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGGLOBAL::DestroyKeyedMutex(struct _KTHREAD **this, struct DXGKEYEDMUTEX *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  struct DXGKEYEDMUTEX **v6; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v4 + 24) = 4726LL;
    WdLogEvent5_WdAssertion(v4);
  }
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 66));
  v5 = *(_QWORD *)a2;
  if ( *(struct DXGKEYEDMUTEX **)(*(_QWORD *)a2 + 8LL) != a2
    || (v6 = (struct DXGKEYEDMUTEX **)*((_QWORD *)a2 + 1), *v6 != a2) )
  {
    __fastfail(3u);
  }
  *v6 = (struct DXGKEYEDMUTEX *)v5;
  *(_QWORD *)(v5 + 8) = v6;
  DXGFASTMUTEX::Release(this + 66, v5);
  DXGKEYEDMUTEX::`scalar deleting destructor'(a2);
}
