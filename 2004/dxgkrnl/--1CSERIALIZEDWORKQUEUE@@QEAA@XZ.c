/*
 * XREFs of ??1CSERIALIZEDWORKQUEUE@@QEAA@XZ @ 0x1C0045544
 * Callers:
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0267F50 (--1DXGGLOBAL@@AEAA@XZ.c)
 *     ??1DXGSESSIONMGR@@QEAA@XZ @ 0x1C029E064 (--1DXGSESSIONMGR@@QEAA@XZ.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C000653C (--1DXGFASTMUTEX@@QEAA@XZ.c)
 */

void __fastcall CSERIALIZEDWORKQUEUE::~CSERIALIZEDWORKQUEUE(CSERIALIZEDWORKQUEUE *this, __int64 a2)
{
  __int64 v3; // rax

  if ( *((_BYTE *)this + 56) || *((CSERIALIZEDWORKQUEUE **)this + 5) != (CSERIALIZEDWORKQUEUE *)((char *)this + 40) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 499LL;
    WdLogEvent5_WdAssertion(v3);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX(this, a2);
}
