/*
 * XREFs of ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0002394
 * Callers:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C0023048 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C0076460 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGFASTMUTEX::~DXGFASTMUTEX(DXGFASTMUTEX *this)
{
  __int64 v2; // rax
  __int64 v3; // rax

  if ( *((_QWORD *)this + 2) )
  {
    v2 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v2 + 24) = 639LL;
    WdLogEvent5_WdAssertion(v2);
  }
  if ( *((_DWORD *)this + 6) )
  {
    v3 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v3 + 24) = 640LL;
    WdLogEvent5_WdAssertion(v3);
  }
}
