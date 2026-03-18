/*
 * XREFs of ?ReleaseSessionGdiViewId@DXGSESSIONDATA@@QEAAXKE@Z @ 0x1C03483AC
 * Callers:
 *     DxgkReleaseGdiViewId @ 0x1C03496C8 (DxgkReleaseGdiViewId.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 */

void __fastcall DXGSESSIONDATA::ReleaseSessionGdiViewId(DXGSESSIONDATA *this, signed __int32 a2, char a3)
{
  int v6; // r9d
  __int64 v7; // rbx
  unsigned int v8; // r8d
  unsigned int v9; // edx
  _BYTE v10[16]; // [rsp+50h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGSESSIONDATA *)((char *)this + 19088), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v6 = *((_DWORD *)this + 4785);
  v7 = 0LL;
  v8 = *((_DWORD *)this + 4784);
  v9 = v8 + v6;
  if ( v8 + v6 )
  {
    do
    {
      if ( *(_DWORD *)(*((_QWORD *)this + 2394) + 4 * v7) == a2 )
        break;
      v7 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v7 < v9 );
  }
  if ( (unsigned int)v7 >= v9 )
  {
    WdLogSingleEntry1(1LL, 4745LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"i < m_NumSessionViewIds + m_NumPendingSessionViewIds",
      4745LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v6 = *((_DWORD *)this + 4785);
    v8 = *((_DWORD *)this + 4784);
  }
  if ( (unsigned int)v7 < v8 + v6 )
  {
    if ( (unsigned int)v7 >= v8 )
      *((_DWORD *)this + 4785) = --v6;
    else
      *((_DWORD *)this + 4784) = --v8;
    if ( (unsigned int)v7 < v8 + v6 )
      memmove(
        (void *)(*((_QWORD *)this + 2394) + 4 * v7),
        (const void *)(*((_QWORD *)this + 2394) + 4LL * (unsigned int)(v7 + 1)),
        4LL * (v8 + v6 - (unsigned int)v7));
  }
  if ( a3 )
    _InterlockedCompareExchange((volatile signed __int32 *)&DXGSESSIONDATA::s_GlobalGdiViewId, a2 - 1, a2);
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
}
