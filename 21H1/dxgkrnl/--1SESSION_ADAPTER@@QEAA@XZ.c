/*
 * XREFs of ??1SESSION_ADAPTER@@QEAA@XZ @ 0x1C00D8E08
 * Callers:
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C0007EC0 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?DeallocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ @ 0x1C015A628 (-DeallocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ.c)
 */

void __fastcall SESSION_ADAPTER::~SESSION_ADAPTER(SESSION_ADAPTER *this, __int64 a2)
{
  __int64 v3; // rax

  if ( *((_DWORD *)this + 12)
    || *((_QWORD *)this + 2)
    || *((_QWORD *)this + 7)
    || *((_QWORD *)this + 8)
    || *((_DWORD *)this + 27)
    || *((_DWORD *)this + 26)
    || *((SESSION_ADAPTER **)this + 14) != (SESSION_ADAPTER *)((char *)this + 112) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 2149LL;
    WdLogEvent5_WdAssertion(v3);
  }
  PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((char *)this + 72);
}
