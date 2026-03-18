/*
 * XREFs of ?Reserve@DXGBLACKBOX@@QEAAPEAEI@Z @ 0x1C02FEE88
 * Callers:
 *     ?LogDisplayBlackBoxData@DISPLAYSTATECHECKER@@AEAAXPEAI@Z @ 0x1C02EF870 (-LogDisplayBlackBoxData@DISPLAYSTATECHECKER@@AEAAXPEAI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

unsigned __int8 *__fastcall DXGBLACKBOX::Reserve(DXGBLACKBOX *this, int a2)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  _BYTE v8[24]; // [rsp+50h] [rbp-18h] BYREF

  if ( !*((_QWORD *)this + 7) )
    return 0LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGBLACKBOX *)((char *)this + 8), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v5 = *((_QWORD *)this + 7);
  v6 = *(unsigned int *)(v5 + 4);
  if ( (unsigned int)(v6 + a2) <= 0x1000 )
  {
    *(_DWORD *)(v5 + 4) = v6 + a2;
    v7 = v5 + v6;
  }
  else
  {
    WdLogSingleEntry1(2LL, 82LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGBLACKBOX::Reserve() ran out of space.",
      82LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v7 = 0LL;
  }
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  return (unsigned __int8 *)v7;
}
