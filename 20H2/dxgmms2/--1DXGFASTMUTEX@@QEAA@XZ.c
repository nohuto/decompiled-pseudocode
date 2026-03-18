/*
 * XREFs of ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0011AC8
 * Callers:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C0022AC8 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C006AEC8 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGFASTMUTEX::~DXGFASTMUTEX(DXGFASTMUTEX *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax

  if ( *((_QWORD *)this + 2) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v4 + 24) = 641LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((_DWORD *)this + 6) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v5 + 24) = 642LL;
    WdLogEvent5_WdAssertion(v5);
  }
}
