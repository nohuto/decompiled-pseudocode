/*
 * XREFs of ??1REMOTE_VSYNC@@QEAA@XZ @ 0x1C0289044
 * Callers:
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0266F70 (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall REMOTE_VSYNC::~REMOTE_VSYNC(REMOTE_VSYNC *this, __int64 a2)
{
  __int64 v2; // rax

  if ( *((_QWORD *)this + 1) )
  {
    v2 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v2 + 24) = 32LL;
    WdLogEvent5_WdAssertion(v2);
  }
}
