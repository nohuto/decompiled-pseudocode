/*
 * XREFs of ?AcquireSessionGdiViewId@DXGSESSIONDATA@@QEAAJPEAK@Z @ 0x1C03475A8
 * Callers:
 *     DxgkAcquireGdiViewIds @ 0x1C021AD08 (DxgkAcquireGdiViewIds.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 */

__int64 __fastcall DXGSESSIONDATA::AcquireSessionGdiViewId(DXGSESSIONDATA *this, unsigned int *a2)
{
  signed __int32 v4; // ecx
  signed __int32 v5; // r14d
  signed __int32 v6; // esi
  __int64 v7; // r9
  int v8; // edx
  int v9; // r8d
  unsigned int v10; // ecx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  void *v13; // rax
  void *v14; // rbp
  unsigned int v15; // edi
  const void *v16; // rdx
  _BYTE v18[16]; // [rsp+50h] [rbp-18h] BYREF

  v4 = DXGSESSIONDATA::s_GlobalGdiViewId;
  do
  {
    v5 = v4;
    if ( v4 == -2 )
    {
      v15 = -1073741756;
      WdLogSingleEntry1(2LL, -1073741756LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Exceeded the maximun GDI view ID, returning 0x%I64x.",
        -1073741756LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return v15;
    }
    v6 = v4 + 1;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)&DXGSESSIONDATA::s_GlobalGdiViewId, v4 + 1, v4);
  }
  while ( v4 + 1 != v6 );
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (DXGSESSIONDATA *)((char *)this + 19088), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  v8 = *((_DWORD *)this + 4785);
  v9 = *((_DWORD *)this + 4784);
  v10 = *((_DWORD *)this + 4786);
  if ( v9 + v8 >= v10 )
  {
    if ( v10 )
      v11 = 2 * v10;
    else
      v11 = 16LL;
    *((_DWORD *)this + 4786) = v11;
    v12 = 4 * v11;
    if ( !is_mul_ok(v11, 4uLL) )
      v12 = -1LL;
    v13 = (void *)operator new[](v12, 0x4B677844u, 256LL, v7);
    v14 = v13;
    if ( !v13 )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)&DXGSESSIONDATA::s_GlobalGdiViewId, v5, v6);
      WdLogSingleEntry1(6LL, *(unsigned int *)this);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Unable to allocate GDI View ID buffer for session 0x%I64x",
        *(unsigned int *)this,
        0LL,
        0LL,
        0LL,
        0LL);
      v15 = -1073741801;
      goto LABEL_16;
    }
    v16 = (const void *)*((_QWORD *)this + 2394);
    if ( v16 )
    {
      memmove(v13, v16, 4LL * (unsigned int)(*((_DWORD *)this + 4785) + *((_DWORD *)this + 4784)));
      operator delete[](*((void **)this + 2394));
    }
    v8 = *((_DWORD *)this + 4785);
    v9 = *((_DWORD *)this + 4784);
    *((_QWORD *)this + 2394) = v14;
  }
  *(_DWORD *)(*((_QWORD *)this + 2394) + 4LL * (unsigned int)(v9 + v8)) = v6;
  ++*((_DWORD *)this + 4785);
  v15 = 0;
  *a2 = v6;
LABEL_16:
  if ( v18[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
  return v15;
}
