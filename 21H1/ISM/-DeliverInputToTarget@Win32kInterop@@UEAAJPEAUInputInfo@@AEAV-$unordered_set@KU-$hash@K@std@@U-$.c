/*
 * XREFs of ?DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUIInputTarget@@@Z @ 0x1800AFE50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBW4GameInputGamepadButtons@@@?$vector@W4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@QEAAPEAW4GameInputGamepadButtons@@QEAW42@AEBW42@@Z @ 0x180089F78 (--$_Emplace_reallocate@AEBW4GameInputGamepadButtons@@@-$vector@W4GameInputGamepadButtons@@V-$all.c)
 *     ??$_Try_emplace@AEBI$$V@?$unordered_map@IV?$vector@IV?$allocator@I@std@@@std@@U?$hash@I@2@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x1800AE208 (--$_Try_emplace@AEBI$$V@-$unordered_map@IV-$vector@IV-$allocator@I@std@@@std@@U-$hash@I@2@U-$equ.c)
 *     ?InitializeInputMessageWithInputInfo@@YAXPEBUPointerInputInfo@@PEAPEAU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800B0A54 (-InitializeInputMessageWithInputInfo@@YAXPEBUPointerInputInfo@@PEAPEAU_MIT_INPUT_INTEROP_MESSAGE.c)
 *     ?MakeRoutingDecisionsForAllFrames@Win32kInterop@@AEAAJAEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUInputInfo@@PEAUIInputTarget@@@Z @ 0x1800B0ED4 (-MakeRoutingDecisionsForAllFrames@Win32kInterop@@AEAAJAEAV-$unordered_set@KU-$hash@K@std@@U-$equ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MinQMouseAndMiP@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B2A7C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MinQMouseAndMiP@@@details@wil@@QEAAX_NW4R.c)
 *     ?RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@PEAX@Z @ 0x1800B2C2C (-RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Win32kInterop::DeliverInputToTarget(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int (__fastcall ***a4)(_QWORD, GUID *, __int64 *))
{
  int (__fastcall ***v4)(_QWORD, _QWORD, _QWORD); // r14
  void *v5; // r15
  struct _MIT_INPUT_INTEROP_MESSAGE *v7; // rsi
  __int64 v8; // rdx
  int *v9; // r8
  char *v10; // rcx
  int (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // r9
  void *v12; // rdx
  int (__fastcall *v13)(_QWORD, GUID *, __int64 *); // rbx
  int v14; // r12d
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  _BYTE *v19; // rdx
  int v20; // eax
  const struct std::nothrow_t *v21; // rdx
  unsigned int RoutingDecisionsForAllFrames; // eax
  unsigned int v24; // ebx
  __int64 v25[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v26; // [rsp+30h] [rbp-10h] BYREF
  int v27; // [rsp+78h] [rbp+38h] BYREF
  int v28; // [rsp+7Ch] [rbp+3Ch]
  struct _MIT_INPUT_INTEROP_MESSAGE *v29; // [rsp+80h] [rbp+40h] BYREF

  v4 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))a4;
  v5 = a3;
  v7 = (struct _MIT_INPUT_INTEROP_MESSAGE *)a1;
  if ( a3[2] )
    *(_BYTE *)(a1 + 1624) = 1;
  if ( (*(_DWORD *)a2 & 0x1000) != 0 )
  {
    if ( *(_BYTE *)(a2 + 126) )
      ((void (__fastcall *)(__int64, _QWORD))Win32kInterop::s_pfnMTCallback)(a2 + 128, 0LL);
    return 0LL;
  }
  v8 = 2LL;
  if ( (*(_BYTE *)a2 & 2) != 0 )
  {
    v29 = *(struct _MIT_INPUT_INTEROP_MESSAGE **)(a2 + 200);
    if ( a4 )
    {
      if ( *(_BYTE *)(a2 + 208) )
      {
        LOBYTE(v8) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_MinQMouseAndMiP>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_MinQMouseAndMiP>::GetImpl'::`2'::impl,
          v8);
      }
      v27 = *(_DWORD *)(a2 + 56);
      v28 = *(_DWORD *)(a2 + 60);
      v9 = &v27;
      v8 = 1LL;
    }
    else
    {
      v9 = 0LL;
    }
    NtMITPostMouseInputMessage(&v29, v8, v9);
    return 0LL;
  }
  v25[0] = 0LL;
  if ( !a4 )
  {
    if ( *(_BYTE *)(a1 + 1624) )
    {
      v10 = (char *)(a1 - 8);
      v11 = 0LL;
LABEL_32:
      Win32kInterop::MakeRoutingDecisionsForAllFrames(v10, v5, a2, v11);
      goto LABEL_35;
    }
    v12 = 0LL;
    goto LABEL_34;
  }
  v13 = **a4;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v25);
  if ( v13(v4, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, v25) >= 0 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25[0] + 64LL))(v25[0]);
    if ( v14 )
    {
      InitializeInputMessageWithInputInfo((const struct PointerInputInfo *)a2, &v29);
      v7 = v29;
      v27 = *(_DWORD *)(a2 + 224);
      v15 = 0LL;
      if ( !*(_DWORD *)(a2 + 212) )
      {
LABEL_27:
        ((void (__fastcall *)(struct _MIT_INPUT_INTEROP_MESSAGE *, _QWORD))Win32kInterop::s_pfnMTCallback)(v7, 0LL);
        operator delete(v7, v21);
LABEL_35:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v25);
        return 0LL;
      }
      v5 = &Win32kInterop::s_inputInfoCachedLock;
      v25[1] = (__int64)&Win32kInterop::s_inputInfoCachedLock;
      while ( 1 )
      {
        *((_DWORD *)v7 + 60 * (unsigned int)v15 + 64) = v14;
        v4 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))*(unsigned int *)(a2 + 144 * v15 + 220);
        v16 = _Mtx_lock((_Mtx_t)&Win32kInterop::s_inputInfoCachedLock);
        if ( v16 )
          break;
        std::unordered_map<unsigned int,std::vector<unsigned int>>::_Try_emplace<unsigned int const &,>(
          v17,
          (__int64)&v26,
          (const unsigned __int8 *)&v27);
        v18 = v26 + 24;
        LODWORD(v29) = (_DWORD)v4;
        v19 = *(_BYTE **)(v26 + 32);
        if ( *(_BYTE **)(v26 + 40) == v19 )
        {
          std::vector<enum GameInputGamepadButtons>::_Emplace_reallocate<enum GameInputGamepadButtons const &>(
            (const void **)v18,
            v19,
            &v29);
        }
        else
        {
          *(_DWORD *)v19 = (_DWORD)v4;
          *(_QWORD *)(v18 + 8) += 4LL;
        }
        v20 = _Mtx_unlock((_Mtx_t)&Win32kInterop::s_inputInfoCachedLock);
        if ( v20 )
        {
          std::_Throw_C_error(v20);
          break;
        }
        v15 = (unsigned int)(v15 + 1);
        if ( (unsigned int)v15 >= *(_DWORD *)(a2 + 212) )
          goto LABEL_27;
      }
      std::_Throw_C_error(v16);
      __debugbreak();
    }
    if ( *((_BYTE *)v7 + 1624) )
    {
      v10 = (char *)v7 - 8;
      v11 = v4;
      goto LABEL_32;
    }
    v12 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25[0] + 56LL))(v25[0]);
LABEL_34:
    Win32kInterop::RoutePointerFrame((struct InputInfo *)a2, v12);
    goto LABEL_35;
  }
  if ( *((_BYTE *)v7 + 1624) )
  {
    RoutingDecisionsForAllFrames = Win32kInterop::MakeRoutingDecisionsForAllFrames((char *)v7 - 8, v5, a2, v4);
  }
  else
  {
    Win32kInterop::RoutePointerFrame((struct InputInfo *)a2, 0LL);
    RoutingDecisionsForAllFrames = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, _QWORD, _QWORD), __int64))(*v4)[3])(
                                     v4,
                                     a2);
  }
  v24 = RoutingDecisionsForAllFrames;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v25);
  return v24;
}
