/*
 * XREFs of ?ApplicationViewShown@VirtualDesktopWindowMoveManager@@UEAAJPEAUIApplicationView@@_K@Z @ 0x180079FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingMove@VirtualDesktopWindowMoveManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingMove@VirtualDesktopWindowMoveManager@@@@V?$CSimpleArrayStandardCompareHelper@UPendingMove@VirtualDesktopWindowMoveManager@@@@V?$CSimpleArrayStandardMergeHelper@UPendingMove@VirtualDesktopWindowMoveManager@@@@@@QEAAJ_K@Z @ 0x18044A36C (-RemoveAt@-$CTSimpleArray@UPendingMove@VirtualDesktopWindowMoveManager@@$0PPPPPPPO@V-$CTPolicyCo.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopWindowMoveManager::ApplicationViewShown(
        VirtualDesktopWindowMoveManager *this,
        struct IApplicationView *a2,
        unsigned __int64 a3)
{
  __int64 v6; // rbx
  int v7; // ebx
  __int64 v8; // rcx
  int v10; // eax
  _QWORD *v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rdx
  _QWORD *v16; // r9
  _QWORD *v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 (__fastcall *v20)(__int64, char *, __int64 *); // rbx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // [rsp+20h] [rbp-39h] BYREF
  __int64 v24; // [rsp+28h] [rbp-31h] BYREF
  _QWORD v25[6]; // [rsp+30h] [rbp-29h] BYREF
  __int128 v26; // [rsp+60h] [rbp+7h] BYREF
  __int128 v27; // [rsp+70h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  if ( !*((_QWORD *)this + 8) )
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
      (const char *)0x8007139FLL);
    return (unsigned int)v7;
  }
  v6 = *((_QWORD *)this + 12);
  if ( v6 )
  {
    v13 = 32 * v6;
    do
    {
      if ( *(_QWORD *)(v13 + *((_QWORD *)this + 11) - 8) + 500LL < a3 )
      {
        v14 = CTSimpleArray<VirtualDesktopWindowMoveManager::PendingMove,4294967294,CTPolicyCoTaskMem<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardCompareHelper<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardMergeHelper<VirtualDesktopWindowMoveManager::PendingMove>>::RemoveAt(
                (char *)this + 88,
                v6 - 1);
        if ( v14 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x81,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
            (const char *)(unsigned int)v14);
      }
      v13 -= 32LL;
      --v6;
    }
    while ( v6 );
  }
  v24 = 0LL;
  v7 = (**(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
         a2,
         &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
         &v24);
  if ( v7 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v24 + 24LL))(v24, v25);
    v7 = v10;
    if ( v10 < 0 )
    {
      v15 = 95LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
        (const char *)(unsigned int)v10);
      goto LABEL_4;
    }
    v11 = (_QWORD *)((char *)this + 88);
    v12 = 0LL;
    if ( !*((_QWORD *)this + 12) )
    {
LABEL_9:
      v7 = -2147319765;
      goto LABEL_4;
    }
    v16 = (_QWORD *)*v11;
    v17 = (_QWORD *)*v11;
    while ( *v17 != v25[0] )
    {
      ++v12;
      v17 += 4;
      if ( v12 >= *((_QWORD *)this + 12) )
        goto LABEL_9;
    }
    v26 = *(_OWORD *)&v16[4 * v12];
    v27 = *(_OWORD *)&v16[4 * v12 + 2];
    CTSimpleArray<VirtualDesktopWindowMoveManager::PendingMove,4294967294,CTPolicyCoTaskMem<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardCompareHelper<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardMergeHelper<VirtualDesktopWindowMoveManager::PendingMove>>::RemoveAt(
      v11,
      v12);
    v18 = *((_QWORD *)&v26 + 1) - 0x4CF966F2C2DDEA68LL;
    if ( *((_QWORD *)&v26 + 1) == 0x4CF966F2C2DDEA68LL )
      v18 = v27 + 0x534404FF02E49B7ELL;
    if ( !v18 )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 6) + 128LL))(
              *((_QWORD *)this + 6),
              a2);
      v7 = v10;
      if ( v10 >= 0 )
        goto LABEL_4;
      v15 = 110LL;
      goto LABEL_27;
    }
    v23 = 0LL;
    v19 = *((_QWORD *)this + 7);
    v20 = *(__int64 (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v19 + 88LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    v21 = v20(v19, (char *)&v26 + 8, &v23);
    v7 = v21;
    if ( v21 >= 0 )
    {
      v21 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(**((_QWORD **)this + 6) + 112LL))(
              *((_QWORD *)this + 6),
              a2,
              v23);
      v7 = v21;
      if ( v21 >= 0 )
      {
LABEL_33:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
        goto LABEL_4;
      }
      v22 = 116LL;
    }
    else
    {
      v22 = 115LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
      (const char *)(unsigned int)v21);
    goto LABEL_33;
  }
LABEL_4:
  v8 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)v7;
}
