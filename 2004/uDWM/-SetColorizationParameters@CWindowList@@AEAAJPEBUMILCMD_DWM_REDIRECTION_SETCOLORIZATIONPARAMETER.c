/*
 * XREFs of ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x18000A024
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000D8C0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x18000A190 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?ApplyColorizationParameters@CDesktopManager@@QEAAXPEBVCGlassColorizationParameters@@@Z @ 0x18000A1D4 (-ApplyColorizationParameters@CDesktopManager@@QEAAXPEBVCGlassColorizationParameters@@@Z.c)
 *     ?CheckAnyPolicy@CDesktopManager@@SA_NK@Z @ 0x18000A470 (-CheckAnyPolicy@CDesktopManager@@SA_NK@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011FE8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18002892C (-OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowList::SetColorizationParameters(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS *a2)
{
  unsigned int v4; // ebx
  CDesktopManager *v5; // rcx
  __int128 v6; // xmm0
  int v7; // r12d
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned __int32 v10; // eax
  __int32 v11; // edx
  int v12; // r14d
  struct _RTL_GENERIC_TABLE *v13; // r15
  _QWORD *v14; // rax
  CWindowData *v16; // rsi
  CWindowData *i; // rdi
  CTopLevelWindow *v18; // rcx
  PVOID RestartKey; // [rsp+20h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+28h] [rbp-38h] BYREF
  __int128 v21; // [rsp+30h] [rbp-30h] BYREF
  __m128i v22; // [rsp+40h] [rbp-20h]

  v20 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  RestartKey = 0LL;
  if ( CDesktopManager::CheckAnyPolicy(2u) )
  {
    v4 = -2147024846;
  }
  else
  {
    v5 = CDesktopManager::s_pDesktopManagerInstance;
    v6 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 532);
    v22 = *(__m128i *)((char *)CDesktopManager::s_pDesktopManagerInstance + 548);
    v21 = v6;
    LODWORD(v21) = *((_DWORD *)a2 + 1);
    v7 = _mm_cvtsi128_si32(_mm_srli_si128(v22, 8)) == 2;
    DWORD1(v21) = *((_DWORD *)a2 + 2);
    v8 = *((_DWORD *)a2 + 3);
    if ( v8 > 0x78 )
      v8 = 120;
    DWORD2(v21) = v8;
    v9 = *((_DWORD *)a2 + 4);
    if ( v9 > 0x78 )
      v9 = 120;
    HIDWORD(v21) = v9;
    v10 = *((_DWORD *)a2 + 5);
    if ( v10 > 0x78 )
      v10 = 120;
    v11 = *((_DWORD *)a2 + 7);
    v22.m128i_i32[0] = v10;
    v22.m128i_i32[1] = *((_DWORD *)a2 + 6);
    v22.m128i_i32[2] = v11;
    if ( *((_DWORD *)a2 + 8) != 2 )
      *((_BYTE *)this + 603) = *((_DWORD *)a2 + 8) != 0;
    v12 = v11 == 2;
    CDesktopManager::ApplyColorizationParameters(v5, (const struct CGlassColorizationParameters *)&v21);
    v13 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
    while ( 1 )
    {
      v14 = RtlEnumerateGenericTableWithoutSplaying(v13, &RestartKey);
      if ( !v14 )
        break;
      v16 = (CWindowData *)(v14 + 10);
      for ( i = (CWindowData *)v14[10]; i != v16; i = *(CWindowData **)i )
      {
        CWindowData::OnColorizationUpdated(i);
        v18 = (CTopLevelWindow *)*((_QWORD *)i + 48);
        if ( v18 && v12 != v7 )
          CTopLevelWindow::OnBlurBehindUpdated(v18);
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
  return v4;
}
