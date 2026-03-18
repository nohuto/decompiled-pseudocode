/*
 * XREFs of ??1DISPLAY_SOURCE@@QEAA@XZ @ 0x1C020C540
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C000CF90 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 */

void __fastcall DISPLAY_SOURCE::~DISPLAY_SOURCE(DISPLAY_SOURCE *this, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  void *v8; // rcx
  __int64 v9; // rdx

  if ( *((_QWORD *)this + 113) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 4028LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((_QWORD *)this + 135) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 4029LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((_QWORD *)this + 95) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v5 + 24) = 4035LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_QWORD *)this + 101) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v6 + 24) = 4036LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_QWORD *)this + 106) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v7 + 24) = 4037LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = (void *)*((_QWORD *)this + 117);
  if ( v8 )
    ObfDereferenceObject(v8);
  DXGFASTMUTEX::~DXGFASTMUTEX((DISPLAY_SOURCE *)((char *)this + 3760), a2);
  DXGFASTMUTEX::~DXGFASTMUTEX((DISPLAY_SOURCE *)((char *)this + 864), v9);
}
