/*
 * XREFs of ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180016360
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180015678 (--0CWindowData@@QEAA@XZ.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x1800164D8 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180018360 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018AD4 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::OwnerChange(CWindowList *this, struct IDwmWindow *a2, struct IDwmWindow *a3)
{
  struct CWindowData *v6; // rbp
  struct CWindowData *v7; // rdi
  int v8; // esi
  CWindowList *v9; // rcx
  struct CWindowData *v10; // rbx
  unsigned int v11; // ebx
  int SyncedWindowData; // eax
  CWindowData *v14; // rax
  CWindowData *v15; // rax
  int v16; // eax
  unsigned int v17; // [rsp+20h] [rbp-38h]
  struct CWindowData *v18; // [rsp+68h] [rbp+10h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v10 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v10 || !a3 && !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_4;
  v14 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         768LL);
  if ( !v14 || (v15 = CWindowData::CWindowData(v14), (v10 = v15) == 0LL) )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x882u);
    v11 = -2147024882;
    goto LABEL_18;
  }
  *((_QWORD *)v15 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v15);
  *((_QWORD *)v10 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v16 = CWindowList::SyncWindowData(this, a2, v10);
  v8 = v16;
  if ( v16 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x886u);
  else
LABEL_4:
    v7 = v10;
  v11 = v8;
  if ( v8 < 0 )
  {
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xE33u);
    goto LABEL_7;
  }
  if ( v7 )
  {
    v18 = 0LL;
    if ( a3 )
    {
      SyncedWindowData = CWindowList::GetSyncedWindowData(this, a3, 0, &v18);
      v11 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v17 = 3643;
        goto LABEL_20;
      }
      v6 = v18;
    }
    SyncedWindowData = CWindowList::SetOwner(v9, v7, v6);
    v11 = SyncedWindowData;
    if ( SyncedWindowData >= 0 )
      goto LABEL_7;
    v17 = 3647;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, v17);
  }
LABEL_7:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v11;
}
