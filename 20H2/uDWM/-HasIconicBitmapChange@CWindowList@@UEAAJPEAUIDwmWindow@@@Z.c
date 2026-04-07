/*
 * XREFs of ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800188C0
 * Callers:
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180018360 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x180013588 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z @ 0x180015FA8 (-WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018AD4 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180024670 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::HasIconicBitmapChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // r14d
  char v6; // al
  struct CWindowData *v7; // r8
  char v8; // di
  char v9; // al
  CDesktopManager *v10; // rcx
  HANDLE PropW; // rax
  _QWORD *v13; // rbx
  unsigned int v14; // eax
  unsigned int v15; // edx
  int v16; // eax
  struct CWindowData *v17; // [rsp+60h] [rbp+30h] BYREF
  struct CWindowData **v18; // [rsp+68h] [rbp+38h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v17 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 0, &v17);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, 0x15BCu);
    goto LABEL_11;
  }
  v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 248LL))(a2);
  v7 = v17;
  v8 = v6;
  if ( v17 && (*((int *)v17 + 28) < 8 || *((int *)v17 + 28) > 11) )
  {
    v9 = *((_BYTE *)v17 + 613) & 1;
    if ( v9 )
    {
      PropW = GetPropW(*((HWND *)v17 + 5), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow");
      v7 = v17;
      v9 = PropW == 0LL;
    }
    if ( !v9 )
    {
      if ( (*((_BYTE *)v7 + 610) & 4) == 0 && v8 )
      {
        v13 = (_QWORD *)((char *)this + 464);
        v14 = *((_DWORD *)this + 122);
        v15 = v14 + 1;
        if ( v14 + 1 < v14 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        }
        else if ( v15 <= *((_DWORD *)this + 121) )
        {
          *(_QWORD *)(*v13 + 8LL * *((unsigned int *)this + 122)) = v7;
          *((_DWORD *)this + 122) = v15;
        }
        else
        {
          v18 = &v17;
          v16 = DynArrayImpl<0>::Grow((int)this + 464, 8, 1, 0, (__int64)&v18);
          if ( v16 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0xC0u);
          else
            *(_QWORD *)((unsigned int)(8 * (*((_DWORD *)this + 122))++) + *v13) = *v18;
        }
      }
      else
      {
        if ( (*((_BYTE *)v7 + 610) & 4) == 0 || v8 )
          goto LABEL_10;
        DynArray<CWindowData *,0>::Remove((__int64 *)this + 58, &v17);
      }
      v7 = v17;
LABEL_10:
      v10 = CDesktopManager::s_pDesktopManagerInstance;
      *((_BYTE *)v7 + 610) ^= (*((_BYTE *)v7 + 610) ^ (4 * v8)) & 4;
      CIconicBitmapRegistry::WindowCanHaveIconicBitmapChanged(*((CIconicBitmapRegistry **)v10 + 37), v17);
    }
  }
LABEL_11:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
