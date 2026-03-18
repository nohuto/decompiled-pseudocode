/*
 * XREFs of ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x1C01C3AFC
 * Callers:
 *     DxgkCheckOcclusion @ 0x1C01C3920 (DxgkCheckOcclusion.c)
 *     ?CheckOcclusion@DXGPRESENT@@QEAAEXZ @ 0x1C032FD6C (-CheckOcclusion@DXGPRESENT@@QEAAEXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z @ 0x1C01C3C78 (-IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z.c)
 */

char __fastcall DXGGLOBAL::IsWindowVisible(DXGGLOBAL *this, const struct tagRECT *const a2)
{
  _QWORD **v3; // r14
  _QWORD *v4; // rsi
  char v5; // di
  _QWORD *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  int IsWindowVisible; // eax
  _QWORD v11[2]; // [rsp+58h] [rbp-B0h] BYREF
  char v12; // [rsp+68h] [rbp-A0h]
  _BYTE v13[24]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v14[144]; // [rsp+88h] [rbp-80h] BYREF

  v3 = (_QWORD **)((char *)this + 800);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (DXGGLOBAL *)((char *)this + 704), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  v4 = *v3;
  v5 = 1;
  while ( 1 )
  {
    do
    {
      if ( v4 == v3 || !v4 )
      {
        v5 = 0;
        goto LABEL_19;
      }
      v6 = v4;
      v4 = (_QWORD *)*v4;
      _m_prefetchw(v6 + 3);
      v7 = v6[3];
      while ( v7 )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange64(v6 + 3, v7 + 1, v7);
        if ( v8 == v7 )
        {
          LOBYTE(v7) = 1;
          break;
        }
      }
    }
    while ( !(_BYTE)v7 );
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v14, (struct DXGADAPTER *const)v6, 0LL);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v6);
    if ( v6[349] )
      break;
LABEL_13:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v14);
  }
  v11[1] = v6;
  v12 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
  if ( *((_DWORD *)v6 + 50) != 1 )
  {
LABEL_11:
    if ( v12 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
    goto LABEL_13;
  }
  IsWindowVisible = ADAPTER_DISPLAY::IsWindowVisible((ADAPTER_DISPLAY *)v6[349], a2);
  if ( IsWindowVisible != -1073741823 )
  {
    if ( !IsWindowVisible )
      goto LABEL_16;
    if ( IsWindowVisible != 261 )
    {
      WdLogSingleEntry1(1LL, 3632LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"IsWindowVisible returns unexpected status!",
        3632LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    goto LABEL_11;
  }
  v5 = 0;
LABEL_16:
  if ( v12 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v14);
LABEL_19:
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  return v5;
}
