/*
 * XREFs of ?v_ShouldIncludeInSnapshot@CVirtualDesktopThumbnail@@MEAA_NPEAVCWindowData@@@Z @ 0x1800B79D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x18001D644 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?Find@?$DynArray@PEAUHMONITOR__@@$0A@@@QEAAHAEBQEAUHMONITOR__@@@Z @ 0x18008973C (-Find@-$DynArray@PEAUHMONITOR__@@$0A@@@QEAAHAEBQEAUHMONITOR__@@@Z.c)
 */

char __fastcall CVirtualDesktopThumbnail::v_ShouldIncludeInSnapshot(
        CVirtualDesktopThumbnail *this,
        struct CWindowData *a2)
{
  char v2; // bl
  bool v6; // zf
  struct CWindowData *v7; // rdi
  struct CWindowData *v8; // rax
  __int64 v9; // rcx
  struct IDwmWindow *v10; // rax
  __int64 v11; // r11
  struct CWindowData *v12; // [rsp+48h] [rbp+10h] BYREF
  struct CWindowData *v13; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  if ( *((char *)a2 + 610) < 0 )
    return 0;
  v6 = (*((_DWORD *)a2 + 26) & 0x40000) == 0;
  v7 = a2;
  v12 = a2;
  if ( v6 )
  {
    do
    {
      v8 = (struct CWindowData *)*((_QWORD *)v7 + 67);
      if ( v8 && (*((_DWORD *)v8 + 25) & 0x10000000) != 0 )
      {
        v7 = (struct CWindowData *)*((_QWORD *)v7 + 67);
        v12 = v8;
      }
      else
      {
        v9 = *((_QWORD *)v7 + 3);
        if ( !v9 )
          break;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 80LL))(v9) )
          break;
        v10 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v7 + 3) + 368LL))(*((_QWORD *)v7 + 3));
        v13 = 0LL;
        if ( (int)CWindowList::GetSyncedWindowData(
                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                    v10,
                    0,
                    &v13) < 0 )
          break;
        v7 = v13;
        v12 = v13;
      }
    }
    while ( (*((_DWORD *)a2 + 26) & 0x40000) == 0 );
  }
  if ( (unsigned int)DynArray<HMONITOR__ *,0>::Find(*((_QWORD *)this + 35) + 128LL, &v12)
    || !(unsigned int)DynArray<HMONITOR__ *,0>::Find(v11 + 160, &v12) && (*((_BYTE *)a2 + 612) & 2) == 0 )
  {
    return 1;
  }
  return v2;
}
