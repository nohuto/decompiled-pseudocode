/*
 * XREFs of ?_SetApplicationPos@CApplicationManager@@AEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAXW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x1800414F0
 * Callers:
 *     ?SetCloak@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@HW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x180041DB0 (-SetCloak@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@HW4APPLICATION_VIEW_CLOAK_TYPE@@@.c)
 *     ?SetApplicationPos@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAX@Z @ 0x18012C8D0 (-SetApplicationPos@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DAT.c)
 *     ?SetApplicationPosSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAX@Z @ 0x18012C970 (-SetApplicationPosSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x180129604 (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x18013157C (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CApplicationManager::_SetApplicationPos(
        CApplicationManager *a1,
        void *a2,
        __int64 a3,
        int a4,
        __int64 a5)
{
  __int64 v8; // r13
  __int64 v9; // rdi
  void *v10; // rbx
  int v11; // r12d
  void *v12; // rcx
  HRESULT Site; // ebx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, IUnknown **); // rcx
  CIAMGlobals *v15; // rcx
  int v16; // edi
  IUnknown *v17; // r12
  int v18; // eax
  void *v19; // rcx
  IUnknown *v20; // rcx
  char v22; // al
  int v23; // eax
  int v24; // [rsp+20h] [rbp-59h]
  __int64 v25; // [rsp+30h] [rbp-49h]
  void *ppv[12]; // [rsp+60h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+4Fh]
  struct ISyncIAMEventHandler *v28; // [rsp+D0h] [rbp+57h] BYREF
  IUnknown *punk; // [rsp+D8h] [rbp+5Fh] BYREF
  __int64 v30; // [rsp+E0h] [rbp+67h]

  v30 = a3;
  punk = 0LL;
  ppv[1] = a2;
  if ( a2 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)a2 + 8LL))(a2);
  punk = 0LL;
  ppv[2] = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( *((_QWORD *)a1 + 80) )
  {
    ppv[3] = 0LL;
    while ( 1 )
    {
      v10 = *(void **)(*((_QWORD *)a1 + 79) + 8 * v9);
      ppv[4] = v10;
      if ( v10 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 8LL))(v10);
      v11 = -1;
      ppv[0] = 0LL;
      if ( (**(int (__fastcall ***)(void *, GUID *, void **))v10)(v10, &GUID_8b14e88b_5663_4caf_b196_c31479262831, ppv) >= 0 )
      {
        (*(void (__fastcall **)(void *, void *, struct ISyncIAMEventHandler **))(*(_QWORD *)ppv[0] + 104LL))(
          ppv[0],
          a2,
          &v28);
        v11 = ((_DWORD)v28 != 0) - 1;
      }
      v12 = ppv[0];
      if ( ppv[0] )
      {
        ppv[0] = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
      }
      (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
      if ( !v11 )
        break;
      if ( (unsigned __int64)++v9 >= *((_QWORD *)a1 + 80) )
        goto LABEL_29;
    }
    v8 = v9;
    Site = 0;
  }
  else
  {
LABEL_29:
    Site = -2147319765;
  }
  if ( Site >= 0 )
  {
    v14 = *(__int64 (__fastcall ****)(_QWORD, GUID *, IUnknown **))(*((_QWORD *)a1 + 79) + 8 * v8);
    Site = (**v14)(v14, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &punk);
  }
  if ( a2 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)a2 + 16LL))(a2);
  if ( Site >= 0 )
  {
    ppv[0] = 0LL;
    Site = IUnknown_GetSite(punk, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, ppv);
    if ( Site >= 0 )
    {
      v16 = 0;
      if ( (a4 & 0x30) == 0 )
        goto LABEL_20;
      v22 = -CIAMGlobals::IsCalledOnIAMThread(v15);
      Site = v22 == 0 ? 0x8001010E : 0;
      if ( v22 )
      {
        if ( (a4 & 0x30) != 0 && (((a4 & 0x30) - 1LL) & a4 & 0x30) == 0 )
        {
          v23 = a4 & 0x10;
          a4 &= 0xFFFFFFCF;
          v16 = v23 != 0 ? 1 : 8;
LABEL_20:
          v17 = punk;
          HIDWORD(v25) = HIDWORD(a5);
          v18 = ((__int64 (__fastcall *)(IUnknown *, _QWORD, __int64, _QWORD))punk->lpVtbl[10].Release)(
                  punk,
                  0LL,
                  v30,
                  0LL);
          Site = v18;
          if ( v18 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x105C,
              (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const char *)(unsigned int)v18,
              a4);
          }
          else
          {
            if ( v16 && (((__int64 (__fastcall *)(IUnknown *))v17->lpVtbl[11].Release)(v17) & 2) != 0 )
            {
              v28 = 0LL;
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
              if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(a1, &v28) >= 0 )
              {
                LODWORD(v25) = 1;
                (*(void (__fastcall **)(struct ISyncIAMEventHandler *, _QWORD, _QWORD *, void *, int, int, __int64))(*(_QWORD *)v28 + 24LL))(
                  v28,
                  0LL,
                  (_QWORD *)a1 + 31,
                  a2,
                  v16,
                  5,
                  v25);
              }
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
            }
            Site = 0;
          }
          goto LABEL_23;
        }
        Site = -2147024809;
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x102A,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)Site,
          v24);
      }
    }
LABEL_23:
    v19 = ppv[0];
    if ( ppv[0] )
    {
      ppv[0] = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v19 + 16LL))(v19);
    }
  }
  v20 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v20->lpVtbl->Release)(v20);
  }
  return (unsigned int)Site;
}
