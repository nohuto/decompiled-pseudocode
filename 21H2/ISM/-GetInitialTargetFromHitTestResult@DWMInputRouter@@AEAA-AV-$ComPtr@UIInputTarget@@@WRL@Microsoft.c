/*
 * XREFs of ?GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@W4InputType@@AEBUHitTestResult@@PEAUIInputTarget@@@Z @ 0x180017E90
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x180138770 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AE40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@0@@Z @ 0x18000D590 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$Com.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetTargetListFromHitTestResult@DWMInputRouter@@AEAA?AV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@W4InputType@@AEBUHitTestResult@@AEAV?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Z @ 0x180017A80 (-GetTargetListFromHitTestResult@DWMInputRouter@@AEAA-AV-$vector@V-$ComPtr@UIInputTarget@@@WRL@Mi.c)
 *     ??$As@UIDCompInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x180018090 (--$As@UIDCompInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18001836C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?InternalAddRef@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ @ 0x180033710 (-InternalAddRef@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall DWMInputRouter::GetInitialTargetFromHitTestResult(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        _QWORD *a4,
        int (__fastcall ***a5)(_QWORD, GUID *, __int64 *))
{
  int (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall ***v10)(_QWORD, _QWORD, _QWORD); // rbx
  void (__fastcall *v11)(_QWORD, GUID *, __int64); // rdi
  __int64 v12; // rax
  void (__fastcall *v13)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), GUID *, __int64); // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 *v16; // rbx
  __int64 *v17; // rdi
  __int64 *v18; // rdx
  __int64 v20; // [rsp+30h] [rbp-30h] BYREF
  void (__fastcall ***v21)(_QWORD, GUID *, __int64); // [rsp+38h] [rbp-28h] BYREF
  __int128 v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h]

  v20 = 0LL;
  v9 = a5;
  if ( a5 )
  {
    a5 = 0LL;
    if ( (**v9)(v9, &GUID_09d4eb6f_2e60_439b_b350_48a58a91f245, (__int64 *)&a5) < 0 )
    {
      v13 = (void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), GUID *, __int64))**v9;
      v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDCompInputTarget>>(&v20);
      v13(v9, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, v14);
    }
    else
    {
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), void (__fastcall ****)(_QWORD, GUID *, __int64)))(*a5)[3])(
        a5,
        &v21);
      v10 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v21;
      if ( v21 )
      {
        v11 = **v21;
        v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDCompInputTarget>>(&v20);
        v11(v10, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, v12);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
    }
    v15 = (__int64)a5;
    if ( a5 )
    {
      a5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  DWMInputRouter::GetTargetListFromHitTestResult(a1, (__int64)&v22, a3, a4, (__int64)&v20);
  v17 = (__int64 *)*((_QWORD *)&v22 + 1);
  v16 = (__int64 *)v22;
  if ( (_QWORD)v22 == *((_QWORD *)&v22 + 1) )
  {
LABEL_14:
    *a2 = 0LL;
    if ( v16 )
    {
      v18 = v17;
LABEL_16:
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IInputTarget>>>(v16, v18);
      std::_Deallocate<16,0>(v16, (const struct std::nothrow_t *)(8 * ((v23 - (__int64)v16) >> 3)));
      v22 = 0LL;
      v23 = 0LL;
    }
  }
  else
  {
    while ( 1 )
    {
      a5 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(v16, &a5) >= 0 )
      {
        if ( ((unsigned __int8 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD))(*a5)[5])(
               a5,
               a4[4]) )
        {
          break;
        }
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&a5);
      if ( ++v16 == v17 )
      {
        v17 = (__int64 *)*((_QWORD *)&v22 + 1);
        v16 = (__int64 *)v22;
        goto LABEL_14;
      }
    }
    *a2 = *v16;
    Microsoft::WRL::ComPtr<IInputTarget>::InternalAddRef(a2);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&a5);
    v16 = (__int64 *)v22;
    if ( (_QWORD)v22 )
    {
      v18 = (__int64 *)*((_QWORD *)&v22 + 1);
      goto LABEL_16;
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  return a2;
}
