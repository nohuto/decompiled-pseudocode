/*
 * XREFs of ?OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z @ 0x18002C520
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleForegroundWindow@WindowEventDispatcher@@AEAAXPEAUHWND__@@@Z @ 0x1800298DC (-HandleForegroundWindow@WindowEventDispatcher@@AEAAXPEAUHWND__@@@Z.c)
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004B7F8 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004D370 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1800631B8 (-RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800ADCB4 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?WindowWrapperFromWindow@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x1802B9DD4 (-WindowWrapperFromWindow@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall WindowEventDispatcher::OnShellHookMessage(RTL_SRWLOCK *this, unsigned __int64 a2, HWND a3)
{
  RTL_SRWLOCK *v6; // r14
  char *v7; // rbx
  RTL_SRWLOCK **v8; // rsi
  RTL_SRWLOCK **v9; // r14
  unsigned int PropW; // r14d
  char *v11; // rbx
  RTL_SRWLOCK **v12; // rsi
  RTL_SRWLOCK **v13; // r12
  char *v14; // rcx
  RTL_SRWLOCK *v16; // rcx
  std::_Ref_count_base *v17; // rsi
  std::_Ref_count_base *v18; // r14
  RTL_SRWLOCK *v19; // rbx
  RTL_SRWLOCK **Ptr; // rdi
  RTL_SRWLOCK **v21; // rsi
  int v22; // esi
  __int64 v23; // rax
  std::_Ref_count_base *v24; // rcx
  char *v25; // rcx
  RTL_SRWLOCK *v26; // rdi
  RTL_SRWLOCK *v27; // rcx
  RTL_SRWLOCK *v28; // [rsp+30h] [rbp-68h] BYREF
  RTL_SRWLOCK **v29; // [rsp+38h] [rbp-60h] BYREF
  std::_Ref_count_base *v30; // [rsp+40h] [rbp-58h]
  std::_Ref_count_base *v31[2]; // [rsp+48h] [rbp-50h]
  RTL_SRWLOCK *v32; // [rsp+A8h] [rbp+10h] BYREF
  RTL_SRWLOCK *v33; // [rsp+B0h] [rbp+18h] BYREF
  RTL_SRWLOCK *v34; // [rsp+B8h] [rbp+20h] BYREF

  v6 = 0LL;
  LODWORD(v32) = 0;
  if ( a2 <= 0x26 )
  {
    if ( (_DWORD)a2 != 17 )
    {
      switch ( (int)a2 )
      {
        case 18:
          SetLastError(0);
          if ( !(unsigned int)IsWindowInDestroy(a3) && GetLastError() != 1400 )
            return 0LL;
          v19 = this + 49;
          AcquireSRWLockExclusive(this + 49);
          v34 = this + 49;
          v33 = 0LL;
          LODWORD(v32) = 4;
          Ptr = (RTL_SRWLOCK **)this[36].Ptr;
          v21 = (RTL_SRWLOCK **)this[37].Ptr;
          break;
        case 19:
        case 23:
        case 25:
        case 26:
        case 27:
          v19 = this + 49;
          AcquireSRWLockExclusive(this + 49);
          v32 = this + 49;
          WindowEventDispatcher::HandleForegroundWindow((WindowEventDispatcher *)&this[-10], a3);
          goto LABEL_22;
        case 31:
        case 36:
        case 38:
          v34 = 0LL;
          AcquireSRWLockShared(this + 49);
          v28 = this + 49;
          v7 = 0LL;
          v33 = 0LL;
          LODWORD(v32) = 8;
          v8 = (RTL_SRWLOCK **)this[36].Ptr;
          v9 = (RTL_SRWLOCK **)this[37].Ptr;
          while ( 2 )
          {
            if ( v8 != v9 )
            {
              if ( !*v8 || a3 != (HWND)(*((int (__fastcall **)(RTL_SRWLOCK *))(*v8)->Ptr + 32))(*v8) )
              {
                ++v8;
                continue;
              }
              v14 = (char *)*v8;
              v7 = v14;
              v33 = *v8;
              if ( v14 )
                (*(void (__fastcall **)(char *))(*(_QWORD *)v14 + 8LL))(v14);
            }
            break;
          }
          v33 = 0LL;
          v34 = (RTL_SRWLOCK *)v7;
          if ( this != (RTL_SRWLOCK *)-392LL )
            ReleaseSRWLockShared(this + 49);
          if ( v7 )
          {
            (*(void (__fastcall **)(char *, unsigned __int64))(*(_QWORD *)v7 + 328LL))(v7, a2);
            (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 16LL))(v7);
          }
          return 0LL;
        case 34:
          v19 = this + 49;
          AcquireSRWLockExclusive(this + 49);
          v33 = this + 49;
          WindowEventDispatcher::WindowWrapperFromWindow(&this[-10], &v32, a3);
          if ( v32 )
            (*((void (__fastcall **)(RTL_SRWLOCK *))v32->Ptr + 42))(v32);
          wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v32);
LABEL_22:
          if ( v19 )
            ReleaseSRWLockExclusive(v19);
          return 0LL;
        default:
          return 0LL;
      }
      while ( 1 )
      {
        if ( Ptr == v21 )
          goto LABEL_20;
        if ( *Ptr && a3 == (HWND)(*((int (__fastcall **)(RTL_SRWLOCK *))(*Ptr)->Ptr + 32))(*Ptr) )
          break;
        ++Ptr;
      }
      v27 = *Ptr;
      v6 = v27;
      v33 = *Ptr;
      if ( v27 )
        (*((void (__fastcall **)(RTL_SRWLOCK *))v27->Ptr + 1))(v27);
LABEL_20:
      if ( v6 )
      {
        (*((void (__fastcall **)(RTL_SRWLOCK *, _QWORD))v6->Ptr + 26))(v6, 0LL);
        (*((void (__fastcall **)(RTL_SRWLOCK *))v6->Ptr + 2))(v6);
      }
      goto LABEL_22;
    }
    PropW = (unsigned int)GetPropW(a3, L"Microsoft.Windows.WindowFactory.ViewId");
    if ( PropW )
    {
      *(_OWORD *)v31 = 0LL;
      v34 = 0LL;
      AcquireSRWLockExclusive(this + 49);
      v28 = this + 49;
      v11 = 0LL;
      v33 = 0LL;
      LODWORD(v32) = 1;
      v12 = (RTL_SRWLOCK **)this[36].Ptr;
      v13 = (RTL_SRWLOCK **)this[37].Ptr;
      while ( v12 != v13 )
      {
        if ( (*((unsigned int (__fastcall **)(RTL_SRWLOCK *))(*v12)->Ptr + 36))(*v12) == PropW )
        {
          v16 = *v12;
          v11 = (char *)v16;
          v33 = *v12;
          if ( v16 )
            (*((void (__fastcall **)(RTL_SRWLOCK *))v16->Ptr + 1))(v16);
          break;
        }
        ++v12;
      }
      v33 = 0LL;
      v34 = (RTL_SRWLOCK *)v11;
      if ( !v11
        || (v22 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v11 + 256LL))(v11),
            (*(void (__fastcall **)(char *, HWND))(*(_QWORD *)v11 + 208LL))(v11, a3),
            (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)v11 + 256LL))(v11) == v22) )
      {
        v17 = v31[1];
        v18 = v31[0];
      }
      else
      {
        v23 = (*(__int64 (__fastcall **)(char *, RTL_SRWLOCK ***))(*(_QWORD *)v11 + 264LL))(v11, &v29);
        v18 = *(std::_Ref_count_base **)v23;
        v17 = *(std::_Ref_count_base **)(v23 + 8);
        *(_QWORD *)v23 = 0LL;
        *(_QWORD *)(v23 + 8) = 0LL;
        v31[0] = v18;
        v24 = v31[1];
        v31[1] = v17;
        if ( v24 )
          std::_Ref_count_base::_Decref(v24);
        if ( v30 )
          std::_Ref_count_base::_Decref(v30);
      }
      if ( this != (RTL_SRWLOCK *)-392LL )
        ReleaseSRWLockExclusive(this + 49);
      if ( v18 )
      {
        wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
          &v34,
          &v28);
        v25 = (char *)*((_QWORD *)v18 + 3);
        v32 = (RTL_SRWLOCK *)v25;
        if ( v25 )
        {
          (*(void (__fastcall **)(char *))(*(_QWORD *)v25 + 8LL))(v25);
          v25 = (char *)v32;
        }
        v29 = &v32;
        v26 = v28;
        v33 = (RTL_SRWLOCK *)v25;
        if ( v25 )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v25 + 8LL))(v25);
        WindowEventDispatcher::RaiseViewEventWithPropertySet(&this[-10], v26, 6LL, 0LL, &v33);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
        if ( v28 )
          (*((void (__fastcall **)(RTL_SRWLOCK *))v28->Ptr + 2))(v28);
      }
      if ( v11 )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v11 + 16LL))(v11);
      if ( v17 )
        std::_Ref_count_base::_Decref(v17);
    }
  }
  return 0LL;
}
