/*
 * XREFs of ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180014FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001332C (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ??8@YA_NAEBU_MARGINS@@0@Z @ 0x1800150EC (--8@YA_NAEBU_MARGINS@@0@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180015678 (--0CWindowData@@QEAA@XZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180018360 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::ClientMarginsChange(CWindowList *this, struct IDwmWindow *a2)
{
  CWindowData *v4; // rdi
  int v5; // ebx
  CWindowData *v6; // rsi
  __int64 v7; // rax
  CWindowList *v8; // rcx
  int v9; // r8d
  __int128 v11; // xmm0
  CWindowData *v12; // rax
  int v13; // eax
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v5 = 0;
  v6 = (CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v6 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_3;
  v12 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         768LL);
  if ( v12 )
    v6 = CWindowData::CWindowData(v12);
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x882u);
    goto LABEL_15;
  }
  *((_QWORD *)v6 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v6);
  *((_QWORD *)v6 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v13 = CWindowList::SyncWindowData(this, a2, v6);
  v5 = v13;
  if ( v13 >= 0 )
LABEL_3:
    v4 = v6;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x886u);
  if ( v5 < 0 )
  {
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xBEEu);
    goto LABEL_8;
  }
  if ( v4 )
  {
    v7 = *(_QWORD *)a2;
    v14 = 0LL;
    (*(void (__fastcall **)(struct IDwmWindow *, __int128 *))(v7 + 120))(a2, &v14);
    v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 128LL))(a2);
    if ( *((_DWORD *)v4 + 69) != v9 || !(unsigned __int8)operator==((char *)v4 + 244, &v14) )
    {
      v11 = v14;
      *((_DWORD *)v4 + 69) = v9;
      *(_OWORD *)((char *)v4 + 244) = v11;
      CWindowList::OnClientMarginsChange(v8, v4);
    }
  }
LABEL_8:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v5;
}
