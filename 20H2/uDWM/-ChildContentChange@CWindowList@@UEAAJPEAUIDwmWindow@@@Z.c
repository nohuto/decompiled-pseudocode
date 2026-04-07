/*
 * XREFs of ?ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003B540
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180015678 (--0CWindowData@@QEAA@XZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180016260 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180018360 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x1800B64E0 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowList::ChildContentChange(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // r14d
  struct CWindowData *v5; // rbx
  int v6; // esi
  struct CWindowData *v7; // rbp
  unsigned int v8; // ebp
  char v9; // al
  char v10; // dl
  CDesktopManager *v11; // rdi
  CWindowData *v13; // rax
  CWindowData *v14; // rax
  int v15; // eax
  int v16; // eax

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v7 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v13 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         768LL);
  if ( !v13 || (v14 = CWindowData::CWindowData(v13), (v7 = v14) == 0LL) )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x882u);
    v8 = -2147024882;
    goto LABEL_16;
  }
  *((_QWORD *)v14 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v14);
  *((_QWORD *)v7 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v15 = CWindowList::SyncWindowData(this, a2, v7);
  v6 = v15;
  if ( v15 >= 0 )
LABEL_2:
    v5 = v7;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x886u);
  v8 = v6;
  if ( v6 < 0 )
  {
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x13C2u);
    goto LABEL_7;
  }
  if ( v5 )
  {
    v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 184LL))(a2);
    v10 = *((_BYTE *)v5 + 609);
    if ( ((v10 & 0x10) != 0) == v9
      || (*((_BYTE *)v5 + 609) = v10 ^ (v10 ^ (16 * v9)) & 0x10,
          v16 = CWindowData::NotifyRepresentationChanged(v5),
          v8 = v16,
          v16 >= 0) )
    {
      v11 = CDesktopManager::s_pDesktopManagerInstance;
      if ( *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 194) )
      {
        do
          CDesktopThumbnailBase::RecloneWindow(*(CDesktopThumbnailBase **)(*((_QWORD *)v11 + 94) + 8LL * v4++), v5);
        while ( v4 < *((_DWORD *)v11 + 194) );
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x13CCu);
    }
  }
LABEL_7:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v8;
}
