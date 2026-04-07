/*
 * XREFs of ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x180019DB0
 * Callers:
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x18000CB4C (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x180017BF0 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180097210 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 * Callees:
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x1800198C8 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800270B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::MoveTransitionAndTouchVisualToFront(CWindowList *this)
{
  CDesktopManager *v1; // rbx
  int v2; // esi
  __int64 v4; // rax
  char v5; // di
  __int64 v6; // rbx
  __int64 v7; // rdi
  CVisual *v8; // rcx
  __int64 v9; // rcx
  PVOID v10; // rax
  __int64 v11; // rdi
  _QWORD Buffer[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v14; // [rsp+30h] [rbp-58h]
  __int128 v15; // [rsp+40h] [rbp-48h]
  __int128 v16; // [rsp+50h] [rbp-38h]
  __int64 v17; // [rsp+60h] [rbp-28h]
  char v18; // [rsp+68h] [rbp-20h]

  v1 = CDesktopManager::s_pDesktopManagerInstance;
  v2 = 0;
  v4 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26);
  v5 = 1;
  if ( v4 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v4 + 116), 1u);
    v1 = CDesktopManager::s_pDesktopManagerInstance;
  }
  v6 = *((_QWORD *)v1 + 26);
  if ( v6 )
  {
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( *(_DWORD *)(v6 + 64) && *(_BYTE *)(v6 + 120) )
      v5 = 0;
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( !v5 )
    {
      v7 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31);
      if ( v7 )
      {
        v8 = *(CVisual **)(v7 + 8);
        if ( v8 )
        {
          v2 = CVisual::MoveToFront(v8, 0);
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 8) + 104LL))(*(_QWORD *)(v7 + 8));
          if ( v2 >= 0 )
          {
            v9 = *(_QWORD *)(v7 + 96);
            Buffer[1] = 0LL;
            v17 = -1LL;
            Buffer[0] = v9;
            v14 = 0LL;
            v18 = 0;
            v15 = 0LL;
            v16 = 0LL;
            v10 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
            if ( v10 )
            {
              v11 = *((_QWORD *)v10 + 5);
              if ( v11 )
              {
                CVisual::MoveToFront(*((CVisual **)v10 + 5), 0);
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 104LL))(v11);
              }
            }
          }
        }
      }
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 116), 0xFFFFFFFF) == 1 )
    {
      *(_QWORD *)v6 = &CAnimationEngine::`vftable';
      DynArrayImpl<0>::~DynArrayImpl<0>(v6 + 72);
      DynArrayImpl<0>::~DynArrayImpl<0>(v6 + 40);
      (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v6);
    }
  }
  return (unsigned int)v2;
}
