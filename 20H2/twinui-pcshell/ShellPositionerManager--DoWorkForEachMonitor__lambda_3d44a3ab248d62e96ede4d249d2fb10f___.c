/*
 * XREFs of ShellPositionerManager::DoWorkForEachMonitor__lambda_3d44a3ab248d62e96ede4d249d2fb10f___ @ 0x1803D25EC
 * Callers:
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@1PEAUIPresentationRequestedArgs@@W4SHELL_POSITIONER_TYPE@@3@Z @ 0x1803D4344 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180014660 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003A530 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089674 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x1803D0220 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKV-$ComPtr@UIApplicationFrame@@@WRL@Micros.c)
 *     wil::ResultFromException__lambda_cdb60d23c2a90c24b7bbcc9711020c83___ @ 0x1803D2A70 (wil--ResultFromException__lambda_cdb60d23c2a90c24b7bbcc9711020c83___.c)
 *     _lambda_3d44a3ab248d62e96ede4d249d2fb10f_::operator() @ 0x1803D32AC (_lambda_3d44a3ab248d62e96ede4d249d2fb10f_--operator().c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ShellPositionerManager::DoWorkForEachMonitor__lambda_3d44a3ab248d62e96ede4d249d2fb10f___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD *v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // esi
  int (__fastcall *v13)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int v14; // ebx
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, __int64 *); // rdi
  wil::details::in1diag3 *v17; // rcx
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // eax
  __int64 *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // r14
  int (__fastcall *v24)(__int64, _QWORD, __int64 *); // rsi
  __int64 v25; // rdx
  __int64 **v26; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v30; // [rsp+30h] [rbp-40h] BYREF
  __int64 v31; // [rsp+38h] [rbp-38h] BYREF
  __int64 v32; // [rsp+40h] [rbp-30h] BYREF
  __int128 v33; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v34[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int v36; // [rsp+A8h] [rbp+38h] BYREF

  v33 = 0LL;
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *v9 = v9;
  v9[1] = v9;
  v9[2] = v9;
  *((_WORD *)v9 + 12) = 257;
  *(_QWORD *)&v33 = v9;
  v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v36);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39B,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_36;
  }
  v12 = 0;
  if ( v36 )
  {
    while ( 1 )
    {
      v32 = 0LL;
      v13 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
      if ( v13(a2, v12, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v32) >= 0 )
        break;
LABEL_15:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
      if ( ++v12 >= v36 )
        goto LABEL_16;
    }
    v14 = 0;
    v31 = 0LL;
    if ( a4 )
    {
      Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(&v31, a4);
    }
    else
    {
      v15 = v32;
      v16 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 80LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
      v14 = v16(v15, &v31);
    }
    v17 = retaddr;
    if ( v14 >= 0 )
    {
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 24LL))(v31, &v30) < 0 )
        goto LABEL_14;
      v34[0] = &v33;
      v34[1] = &v30;
      v34[2] = &v32;
      v20 = wil::ResultFromException__lambda_cdb60d23c2a90c24b7bbcc9711020c83___(v34);
      v17 = retaddr;
      if ( v20 >= 0 )
        goto LABEL_14;
      v18 = (unsigned int)v20;
      v19 = 959LL;
    }
    else
    {
      v18 = (unsigned int)v14;
      v19 = 940LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v17,
      (void *)v19,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)v18);
LABEL_14:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
    goto LABEL_15;
  }
LABEL_16:
  v21 = *(__int64 **)v33;
  while ( v21 != (__int64 *)v33 )
  {
    v22 = v21[5];
    v30 = v22;
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
    v31 = 0LL;
    v23 = *(_QWORD *)(a1 + 152);
    v24 = *(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v23 + 56LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
    if ( v24(v23, *((unsigned int *)v21 + 8), &v31) >= 0 )
    {
      v32 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v22)(
             v22,
             &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
             &v32) >= 0 )
      {
        v25 = a3;
        if ( !a3 )
          v25 = v31;
        lambda_3d44a3ab248d62e96ede4d249d2fb10f_::operator()(a5, v25, v31, v32);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
    v26 = (__int64 **)v21[2];
    if ( *((_BYTE *)v26 + 25) )
    {
      for ( i = (__int64 *)v21[1]; !*((_BYTE *)i + 25) && v21 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v21 = i;
      v21 = i;
    }
    else
    {
      v21 = (__int64 *)v21[2];
      for ( j = *v26; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v21 = j;
    }
  }
  v11 = 0;
LABEL_36:
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *>>>(
    (__int64)&v33,
    (__int64)&v33,
    *(_QWORD *)(v33 + 8));
  std::_Deallocate<16,0>((void *)v33, (const struct std::nothrow_t *)0x30);
  return v11;
}
