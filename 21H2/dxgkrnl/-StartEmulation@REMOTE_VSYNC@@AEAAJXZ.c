/*
 * XREFs of ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C0160258
 * Callers:
 *     ?EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ @ 0x1C01601B4 (-EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GBLTQUEUE@@QEAAPEAXI@Z @ 0x1C00585B0 (--_GBLTQUEUE@@QEAAPEAXI@Z.c)
 *     ?UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z @ 0x1C0160330 (-UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z.c)
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C016051C (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1C0160578 (-Startup@BLTQUEUE@@QEAAJXZ.c)
 *     ??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z @ 0x1C0160824 (--0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z.c)
 */

__int64 __fastcall REMOTE_VSYNC::StartEmulation(REMOTE_VSYNC *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  BLTQUEUE *v6; // rax
  int v7; // eax
  __int64 v8; // rsi
  int v9; // ecx
  BLTQUEUE *v11; // rcx

  v5 = 64;
  v6 = (BLTQUEUE *)operator new[](0xB68uLL, 0x4B677844u, 64LL, a4);
  if ( v6 )
    v6 = BLTQUEUE::BLTQUEUE(v6, 0LL, 0xFFFFFFFF, (struct _KEVENT *)((char *)this + 16), 0);
  *((_QWORD *)this + 1) = v6;
  if ( v6 )
  {
    v7 = BLTQUEUE::Startup(v6);
    v8 = v7;
    if ( v7 < 0 )
    {
      WdLogSingleEntry1(2LL, v7);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to start remote VSync emulation, status 0x%I64x",
        v8,
        0LL,
        0LL,
        0LL,
        0LL);
      v11 = (BLTQUEUE *)*((_QWORD *)this + 1);
      if ( v11 )
      {
        BLTQUEUE::`scalar deleting destructor'(v11, 1);
        *((_QWORD *)this + 1) = 0LL;
      }
    }
    else
    {
      BLTQUEUE::EnableVSync(*((BLTQUEUE **)this + 1));
      if ( !*((_BYTE *)this + 1) )
      {
        v9 = *((_DWORD *)DXGGLOBAL_GetGlobal() + 76202);
        if ( !v9 || (v5 = 0x3E8u / (v9 + 1)) == 0 )
          v5 = 32;
      }
      BLTQUEUE::UpdateDisplayModeInfo(*((BLTQUEUE **)this + 1), (struct _D3DDDI_RATIONAL)(v5 | 0x100000000LL), 0x300u);
    }
    return (unsigned int)v8;
  }
  else
  {
    WdLogSingleEntry1(6LL, 43LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to create remote VSync emulation class",
      43LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
