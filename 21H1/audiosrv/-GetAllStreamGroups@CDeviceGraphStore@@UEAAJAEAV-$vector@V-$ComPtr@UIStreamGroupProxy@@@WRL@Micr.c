/*
 * XREFs of ?GetAllStreamGroups@CDeviceGraphStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800E8AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BE0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047D58 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800CE04C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800CE084 (--$_Emplace_reallocate@AEBV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UISt.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDeviceGraphStore::GetAllStreamGroups(__int64 a1, __int64 a2)
{
  __int64 *v4; // rsi
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  const char *v6; // r9
  _QWORD *v7; // rbx
  __int64 *v8; // r14
  __int64 *v9; // r8
  __int64 **v10; // rax
  __int64 i; // rax
  __int64 *j; // rcx
  __int64 *v13; // rbx
  __int64 *k; // rdi
  int v15; // eax
  unsigned int v16; // r15d
  __int64 result; // rax
  __int128 v18; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v19; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v18 = 0LL;
  v4 = 0LL;
  v19 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v7 = **(_QWORD ***)(a1 + 56);
  v8 = 0LL;
  try
  {
    while ( v7 != *(_QWORD **)(a1 + 56) )
    {
      v9 = v7 + 8;
      if ( v4 == v8 )
      {
        std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IStreamGroupProxy> const &>(
          (__int64 *)&v18,
          (__int64)v8,
          v9);
        v4 = v19;
        v8 = (__int64 *)*((_QWORD *)&v18 + 1);
      }
      else
      {
        *v8 = *v9;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v8++);
        *((_QWORD *)&v18 + 1) = v8;
      }
      v10 = (__int64 **)v7[2];
      if ( *((_BYTE *)v10 + 25) )
      {
        for ( i = v7[1]; !*(_BYTE *)(i + 25) && v7 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
          v7 = (_QWORD *)i;
        v7 = (_QWORD *)i;
      }
      else
      {
        v7 = (_QWORD *)v7[2];
        for ( j = *v10; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v7 = j;
      }
    }
    if ( v5 )
      LeaveCriticalSection(v5);
    v13 = (__int64 *)v18;
    for ( k = (__int64 *)v18; k != v8; ++k )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)*k + 144LL))(*k, a2);
      v16 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x326,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
          (const char *)(unsigned int)v15);
        if ( v13 )
        {
          std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v13, v8);
          std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(8 * (v4 - v13)));
        }
        return v16;
      }
    }
    if ( v13 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v13, v8);
      std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(8 * (v4 - v13)));
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x32B,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                           v6);
  }
  return result;
}
