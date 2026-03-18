/*
 * XREFs of ??1SESSION_VIEW@@QEAA@XZ @ 0x1C01C10A0
 * Callers:
 *     ??_GSESSION_VIEW@@QEAAPEAXI@Z @ 0x1C0013A3C (--_GSESSION_VIEW@@QEAAPEAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall SESSION_VIEW::~SESSION_VIEW(SESSION_VIEW *this)
{
  if ( *((_DWORD *)this + 10) || *((SESSION_VIEW **)this + 6) != (SESSION_VIEW *)((char *)this + 48) )
  {
    WdLogSingleEntry1(1LL, 1850LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(m_NumDisplaySources == 0) && (IsListEmpty(&m_DisplaySourceListHead))",
      1850LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
