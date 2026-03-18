/*
 * XREFs of ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x1C0133EBC
 * Callers:
 *     DxgkCheckOcclusion @ 0x1C0133D00 (DxgkCheckOcclusion.c)
 *     ?CheckOcclusion@DXGPRESENT@@QEAAEXZ @ 0x1C027B1C4 (-CheckOcclusion@DXGPRESENT@@QEAAEXZ.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z @ 0x1C0134030 (-IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z.c)
 */

char __fastcall DXGGLOBAL::IsWindowVisible(DXGGLOBAL *this, const struct tagRECT *const a2)
{
  _QWORD **v3; // r14
  __int64 v4; // rdx
  _QWORD *v5; // rsi
  char v6; // di
  _QWORD *v7; // rbx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  __int64 v10; // rdx
  int IsWindowVisible; // eax
  __int64 v12; // rcx
  __int64 v14; // rax
  _QWORD v15[2]; // [rsp+28h] [rbp-89h] BYREF
  char v16; // [rsp+38h] [rbp-79h]
  _BYTE v17[24]; // [rsp+40h] [rbp-71h] BYREF
  _BYTE v18[144]; // [rsp+58h] [rbp-59h] BYREF

  v3 = (_QWORD **)((char *)this + 552);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (DXGGLOBAL *)((char *)this + 472), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v5 = *v3;
  v6 = 1;
  while ( 1 )
  {
    do
    {
      if ( v5 == v3 || !v5 )
      {
        v6 = 0;
        goto LABEL_19;
      }
      v7 = v5;
      v5 = (_QWORD *)*v5;
      _m_prefetchw(v7 + 3);
      v8 = v7[3];
      while ( v8 )
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange64(v7 + 3, v8 + 1, v8);
        if ( v9 == v8 )
        {
          LOBYTE(v8) = 1;
          break;
        }
      }
    }
    while ( !(_BYTE)v8 );
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v18, (struct DXGADAPTER *const)v7, 0LL);
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v7);
    if ( v7[334] )
      break;
LABEL_13:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v18, v10);
  }
  v15[1] = v7;
  v16 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
  if ( *((_DWORD *)v7 + 50) != 1 )
  {
LABEL_11:
    if ( v16 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
    goto LABEL_13;
  }
  IsWindowVisible = ADAPTER_DISPLAY::IsWindowVisible((ADAPTER_DISPLAY *)v7[334], a2);
  if ( IsWindowVisible != -1073741823 )
  {
    if ( !IsWindowVisible )
      goto LABEL_16;
    if ( IsWindowVisible != 261 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v12, v10);
      *(_QWORD *)(v14 + 24) = 3293LL;
      WdLogEvent5_WdAssertion(v14);
    }
    goto LABEL_11;
  }
  v6 = 0;
LABEL_16:
  if ( v16 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v18, v10);
LABEL_19:
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17, v4);
  return v6;
}
