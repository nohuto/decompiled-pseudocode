/*
 * XREFs of ?_FindAppOnLayoutByActivationTime@PPIWin32VtcLayoutOperation@@AEAAJW4ActivationTime@1@PEAPEAUIApplicationView@@W4LayoutType@1@@Z @ 0x1800BA9A0
 * Callers:
 *     ?EvictApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1800B96E0 (-EvictApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?ShouldHandleOperation@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4LAYOUT_OPERATION_TYPE@@PEAH@Z @ 0x1800B9FC0 (-ShouldHandleOperation@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4LAYOUT_OPERATION.c)
 *     ?_QueryInsertAppToLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@W4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1800BB36C (-_QueryInsertAppToLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@W4APP_LAYOUT_INS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIAppLayoutBuilder@@@?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B8CF0 (--$As@UIAppLayoutBuilder@@@-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIA.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PPIWin32VtcLayoutOperation::_FindAppOnLayoutByActivationTime(
        _QWORD *a1,
        int a2,
        __int64 *a3,
        int a4)
{
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rax
  __int64 v13; // [rsp+20h] [rbp-29h] BYREF
  __int128 v14; // [rsp+30h] [rbp-19h]
  __int128 v15; // [rsp+40h] [rbp-9h]
  __int64 (__fastcall **v16)(); // [rsp+50h] [rbp+7h] BYREF
  __int128 v17; // [rsp+58h] [rbp+Fh]
  __int128 v18; // [rsp+68h] [rbp+1Fh]
  __int64 (__fastcall ***v19)(); // [rsp+88h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]
  __int64 v21; // [rsp+B0h] [rbp+67h] BYREF
  __int64 v22; // [rsp+C0h] [rbp+77h] BYREF

  *a3 = 0LL;
  v7 = a1[8];
  if ( a4 == 1 )
  {
    v21 = 0LL;
    v8 = Microsoft::WRL::ComPtr<IAppLayout>::As<IAppLayoutBuilder>(a1 + 7, &v21);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x262,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
        (const char *)(unsigned int)v8);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      return v9;
    }
    v7 = v21;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  }
  v13 = 0LL;
  v22 = 0LL;
  *(_QWORD *)&v14 = a1;
  DWORD2(v14) = a2;
  *(_QWORD *)&v15 = &v13;
  *((_QWORD *)&v15 + 1) = &v22;
  v16 = off_1804964E8;
  v17 = v14;
  v18 = v15;
  v19 = &v16;
  v10 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 (__fastcall ***)()))(*a1 + 176LL))(a1, v7, &v16);
  v9 = v10;
  if ( v10 >= 0 )
  {
    v11 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      *a3 = v11;
    }
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27E,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)v10);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  return v9;
}
