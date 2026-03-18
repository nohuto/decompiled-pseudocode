/*
 * XREFs of ??1DXGKEYEDMUTEX@@QEAA@XZ @ 0x1C028F400
 * Callers:
 *     ??_GDXGKEYEDMUTEX@@QEAAPEAXI@Z @ 0x1C0048324 (--_GDXGKEYEDMUTEX@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C000653C (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0290098 (-DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGKEYEDMUTEX::~DXGKEYEDMUTEX(DXGKEYEDMUTEX *this, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  if ( *((_QWORD *)this + 3) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 3583LL;
    WdLogEvent5_WdAssertion(v3);
  }
  DXGKEYEDMUTEX::DestroyGlobal(this);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGKEYEDMUTEX *)((char *)this + 112), v4);
  *((_QWORD *)this + 2) = 0LL;
}
