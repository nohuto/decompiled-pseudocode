/*
 * XREFs of ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x180031B80
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x18002EB10 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180022D50 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     CDelayIAMOperations::AddOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___ @ 0x1800348E0 (CDelayIAMOperations--AddOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___.c)
 *     ??0SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@PEAUIImmersiveApplication@@PEAUIObjectArray@@IPEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x1800349D8 (--0SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@PEAUIImmersiveApplication@@PEAUIObjectArray@@IPEBU_GU.c)
 *     ?RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z @ 0x180058AE0 (-RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CApplicationManager::OnMessage(
        CApplicationManager *this,
        int a2,
        HWND a3,
        unsigned int a4,
        bool *a5)
{
  char v9; // r14
  int v10; // r15d
  bool v11; // al
  bool v12; // r12
  _DWORD *v13; // rsi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r14
  __int64 v16; // rbx
  int v17; // esi
  __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // rcx
  int (__fastcall ***v25)(_QWORD, GUID *, __int64 *); // rcx
  char *v26; // rbx
  int CallbackArray; // eax
  struct IObjectArray *v28; // rdi
  __int64 v29; // r14
  __int64 v30; // r15
  void *v31; // r12
  unsigned int Ptr; // r13d
  _DWORD *v33; // rax
  _DWORD *v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  const struct std::nothrow_t *v37; // rdx
  const struct std::nothrow_t *v38; // rdx
  char *v39; // rcx
  struct CDelayIAMOperations::COperation *v40; // rbx
  struct CDelayIAMOperations::COperation *v41; // rax
  struct CDelayIAMOperations::COperation *v42; // rbx
  char *v43; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v45; // [rsp+48h] [rbp-B8h] BYREF
  struct IObjectArray *v46; // [rsp+50h] [rbp-B0h] BYREF
  int v47; // [rsp+58h] [rbp-A8h] BYREF
  int v48; // [rsp+5Ch] [rbp-A4h] BYREF
  int v49; // [rsp+60h] [rbp-A0h]
  __int64 v50; // [rsp+68h] [rbp-98h]
  bool *v51; // [rsp+70h] [rbp-90h]
  HWND v52; // [rsp+78h] [rbp-88h] BYREF
  __int64 v53; // [rsp+80h] [rbp-80h]
  char v54; // [rsp+88h] [rbp-78h]
  __int64 v55; // [rsp+90h] [rbp-70h] BYREF
  __int64 v56; // [rsp+98h] [rbp-68h]
  int v57; // [rsp+A0h] [rbp-60h]
  void *v58; // [rsp+A8h] [rbp-58h]
  int v59; // [rsp+B0h] [rbp-50h]
  _QWORD v60[5]; // [rsp+B8h] [rbp-48h] BYREF
  GUID iid; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR Buffer[40]; // [rsp+F0h] [rbp-10h] BYREF

  v51 = a5;
  v9 = 0;
  if ( CApplicationManager::_uMsgWindowServiceRegister == a2 || CApplicationManager::_uMsgWindowServiceUnregister == a2 )
  {
    if ( GlobalGetAtomNameW(a4, Buffer, 40) )
    {
      if ( IIDFromString(Buffer, &iid) >= 0
        && (unsigned int)GetWindowBand(a3, &v47)
        && ((v47 == 1 || v47 == 8) && v47 != 1
         || (unsigned int)GetWindowBand(a3, &v48)
         && ((v48 == 1 || v48 == 8) && v48 != 1 || v48 == 1 && (unsigned int)IsShellManagedWindow(a3))) )
      {
        v10 = 4;
        if ( !GetWindow(a3, 4u) )
        {
          v11 = (int)CoreIsWindowServiceSupported(a3, &iid) >= 0;
          v12 = CApplicationManager::_uMsgWindowServiceRegister == a2;
          if ( v11 == (CApplicationManager::_uMsgWindowServiceRegister == a2) )
          {
            AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
            v43 = (char *)this - 200;
            v13 = 0LL;
            v44 = 0LL;
            v60[2] = 0LL;
            v14 = 0LL;
            v46 = 0LL;
            v15 = 0LL;
            if ( *((_QWORD *)this + 55) )
            {
              v60[3] = 0LL;
              while ( 1 )
              {
                v16 = *(_QWORD *)(*((_QWORD *)this + 54) + 8 * v15);
                v50 = v16;
                if ( v16 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
                v17 = -1;
                v45 = 0LL;
                if ( (**(int (__fastcall ***)(__int64, GUID *, _QWORD **))v16)(
                       v16,
                       &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
                       &v45) >= 0 )
                {
                  v18 = *v45;
                  v52 = a3;
                  v53 = 0LL;
                  v54 = 0;
                  v17 = ((*(unsigned __int8 (__fastcall **)(_QWORD *, HWND *, __int64))(v18 + 296))(v45, &v52, 2LL) != 0)
                      - 1;
                  v19 = v53;
                  if ( v53 )
                  {
                    v53 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
                  }
                }
                v20 = v45;
                if ( v45 )
                {
                  v45 = 0LL;
                  (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
                }
                v50 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
                if ( !v17 )
                  break;
                if ( ++v15 >= *((_QWORD *)this + 55) )
                {
                  v14 = (unsigned __int64)v46;
                  v13 = 0LL;
                  goto LABEL_26;
                }
              }
              v14 = v15;
              v13 = 0LL;
              v21 = 0;
            }
            else
            {
LABEL_26:
              v21 = -2147319765;
            }
            if ( v21 < 0
              || (v25 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 54) + 8 * v14),
                  (**v25)(v25, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v44) < 0) )
            {
              if ( !GetPropW(a3, L"DelayServiceAvailabilityChangedOperationId") )
              {
                v60[0] = v43;
                v60[1] = a3;
                v22 = CDelayIAMOperations::AddOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___(
                        *((_QWORD *)v43 + 100),
                        v60);
                if ( v22 )
                  SetPropW(a3, L"DelayServiceAvailabilityChangedOperationId", (HANDLE)v22);
              }
            }
            else
            {
              if ( v12 )
                v10 = 5;
              if ( (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 384LL))(v44) == a3 )
                v10 |= 2u;
              v43 = 0LL;
              (**(void (__fastcall ***)(__int64, GUID *, char **))v44)(
                v44,
                &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                &v43);
              v26 = v43;
              v46 = 0LL;
              CallbackArray = AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)this + 30, &v46);
              v28 = v46;
              if ( CallbackArray >= 0 )
              {
                SERVICE_AVAILABILITY_CHANGED_DATA::SERVICE_AVAILABILITY_CHANGED_DATA(&v55, v26, v46, 1LL, &iid, v10);
                v29 = v55;
                v55 = 0LL;
                v30 = v56;
                v56 = 0LL;
                v49 = v59;
                v31 = v58;
                v58 = 0LL;
                v59 = 0;
                Ptr = (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[13].Ptr;
                v60[4] = 0LL;
                v33 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
                v34 = v33;
                if ( v33 )
                {
                  v33[3] = 1;
                  *(_QWORD *)v33 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
                  if ( Microsoft::WRL::Details::ModuleBase::module_ )
                    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
                  *((_QWORD *)v34 + 3) = 0LL;
                  v35 = v29;
                  v29 = 0LL;
                  *((_QWORD *)v34 + 2) = v35;
                  v36 = v30;
                  v30 = 0LL;
                  *((_QWORD *)v34 + 3) = v36;
                  v34[12] = v49;
                  v34[8] = v57;
                  *((_QWORD *)v34 + 5) = v31;
                  v31 = 0LL;
                  *(_QWORD *)v34 = off_180489F50;
                  v13 = v34;
                }
                SHTaskPoolQueueTask(3LL, 2LL, Ptr);
                if ( v13 )
                  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 16LL))(v13);
                operator delete(v31, v37);
                if ( v30 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
                if ( v29 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
                operator delete(0LL, v38);
              }
              if ( v28 )
                ((void (__fastcall *)(struct IObjectArray *))v28->lpVtbl->Release)(v28);
              v39 = v43;
              if ( v43 )
              {
                v43 = 0LL;
                (*(void (__fastcall **)(char *))(*(_QWORD *)v39 + 16LL))(v39);
              }
            }
            v23 = v44;
            if ( v44 )
            {
              v44 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
            }
            ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          }
        }
      }
      v9 = 1;
    }
    else
    {
      v9 = 1;
    }
  }
  else if ( a2 == 1025 )
  {
    v9 = 1;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v41 = CDelayIAMOperations::RemoveOperation(*((CDelayIAMOperations **)this + 75), a4);
    v42 = v41;
    if ( v41 )
    {
      (*(void (__fastcall **)(struct CDelayIAMOperations::COperation *))(*(_QWORD *)v41 + 8LL))(v41);
      (**(void (__fastcall ***)(struct CDelayIAMOperations::COperation *, __int64))v42)(v42, 1LL);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  else if ( a2 == 1026 )
  {
    v9 = 1;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v40 = CDelayIAMOperations::RemoveOperation(*((CDelayIAMOperations **)this + 75), a4);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v40 )
    {
      (*(void (__fastcall **)(struct CDelayIAMOperations::COperation *))(*(_QWORD *)v40 + 8LL))(v40);
      (**(void (__fastcall ***)(struct CDelayIAMOperations::COperation *, __int64))v40)(v40, 1LL);
    }
  }
  *v51 = v9;
  return 0LL;
}
