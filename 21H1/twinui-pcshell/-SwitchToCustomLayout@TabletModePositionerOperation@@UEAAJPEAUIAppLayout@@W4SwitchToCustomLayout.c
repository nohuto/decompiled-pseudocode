/*
 * XREFs of ?SwitchToCustomLayout@TabletModePositionerOperation@@UEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x1803E8EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180014EB0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007C124 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x18045B0BC (-_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18045C48C (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x18045CE08 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall TabletModePositionerOperation::SwitchToCustomLayout(__int64 a1, struct IAppLayout *a2, char a3)
{
  char v5; // si
  struct _RTL_CRITICAL_SECTION *v6; // r12
  CAppLayoutOperation *v8; // r15
  int v9; // r13d
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rbx
  int v16; // eax
  int v17; // eax
  __int64 v19; // [rsp+30h] [rbp-49h] BYREF
  int v20[2]; // [rsp+38h] [rbp-41h] BYREF
  __int64 v21[2]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v22[16]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v23; // [rsp+60h] [rbp-19h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v5 = 1;
  v6 = (struct _RTL_CRITICAL_SECTION *)((a1 + 16) & -(__int64)(a1 != 176));
  v8 = (CAppLayoutOperation *)(a1 - 152);
  v9 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
  v10 = CAppLayoutOperation::_VerifyAndPrepareLayout(v8, a2, 0);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v21[0] = 0LL;
    v12 = *(_QWORD *)(a1 - 120);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
    v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 128LL))(v12, v21);
    if ( v13 >= 0 )
    {
      while ( (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v21[0] + 24LL))(v21[0], 1LL, v22) >= 0 )
      {
        if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 - 112) + 184LL))(
                *(_QWORD *)(a1 - 112),
                v23) )
          CAppLayoutOperation::_AddAnimationData(a1 - 152, v23, (a3 & 1) != 0 ? 10 : 5);
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC2,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
        (const char *)(unsigned int)v13);
    }
    *(_DWORD *)(a1 - 72) = 1;
    if ( (a3 & 1) != 0 )
    {
      *(_DWORD *)(a1 - 72) = 65;
      if ( (a3 & 2) == 0 )
      {
        *(_QWORD *)v20 = 0LL;
        v19 = 0LL;
        v14 = *(_QWORD *)(a1 - 112);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
        if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v14 + 104LL))(
               v14,
               0LL,
               1LL,
               &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
               v20) >= 0 )
        {
          v15 = *(_QWORD *)v20;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
          v16 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v15 + 48LL))(
                  v15,
                  &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
                  &v19);
          if ( v16 >= 0 )
          {
            Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 - 88), &v19);
            *(_DWORD *)(a1 - 72) |= 2u;
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xDE,
              (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
              (const char *)(unsigned int)v16);
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
      }
    }
    else
    {
      v5 = 0;
    }
    if ( (a3 & 4) == 0 )
    {
      v17 = *(_DWORD *)(a1 - 72) | 0x10000;
      *(_DWORD *)(a1 - 72) = v17;
      if ( v5 )
        *(_DWORD *)(a1 - 72) = v17 | 0x80000;
    }
    CAppLayoutOperation::_FinalizeLayout(a1 - 152, 0LL);
    v11 = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBE,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
      (const char *)(unsigned int)v10);
  }
  if ( v9 >= 0 )
    LeaveCriticalSection(v6);
  return v11;
}
