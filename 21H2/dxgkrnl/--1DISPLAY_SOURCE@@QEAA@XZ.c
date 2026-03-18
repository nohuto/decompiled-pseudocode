/*
 * XREFs of ??1DISPLAY_SOURCE@@QEAA@XZ @ 0x1C02BEE70
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C000E608 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 */

void __fastcall DISPLAY_SOURCE::~DISPLAY_SOURCE(DISPLAY_SOURCE *this)
{
  void *v2; // rcx

  if ( *((_QWORD *)this + 100) )
  {
    WdLogSingleEntry1(1LL, 4144LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_PristineCursor.pPixels == NULL",
      4144LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)this + 106) )
  {
    WdLogSingleEntry1(1LL, 4145LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SavedCursor.pPixels == NULL", 4145LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)this + 111) )
  {
    WdLogSingleEntry1(1LL, 4146LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_ClippedCursor.pPixels == NULL", 4146LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = (void *)*((_QWORD *)this + 116);
  if ( v2 )
    ObfDereferenceObject(v2);
  DXGFASTMUTEX::~DXGFASTMUTEX((DISPLAY_SOURCE *)((char *)this + 3784));
}
