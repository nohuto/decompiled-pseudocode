/*
 * XREFs of ??1SESSION_VIEW@@QEAA@XZ @ 0x1C00DF438
 * Callers:
 *     ??_GSESSION_VIEW@@QEAAPEAXI@Z @ 0x1C0001B60 (--_GSESSION_VIEW@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SESSION_VIEW::~SESSION_VIEW(SESSION_VIEW *this, __int64 a2)
{
  __int64 v2; // rax

  if ( *((_DWORD *)this + 10) || *((SESSION_VIEW **)this + 6) != (SESSION_VIEW *)((char *)this + 48) )
  {
    v2 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v2 + 24) = 1813LL;
    WdLogEvent5_WdAssertion(v2);
  }
}
