/*
 * XREFs of ?GetOffloadStreamGroups@CDeviceGraphStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18006FA60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800239A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x1800239C0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BD0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047D48 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800CE10C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800CE144 (--$_Emplace_reallocate@AEBV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UISt.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDeviceGraphStore::GetOffloadStreamGroups(__int64 a1, __int64 a2)
{
  __int128 v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // r8
  __int64 **v7; // rax
  __int64 i; // rax
  __int64 *j; // rcx
  const char *v10; // r9
  void *v11; // rbx
  _QWORD *k; // r14
  int v13; // eax
  unsigned int v14; // r15d
  __int64 result; // rax
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+60h] [rbp+8h] BYREF

  v16 = 0LL;
  v4 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((struct _RTL_CRITICAL_SECTION *)(a1 + 16), &v19);
  v5 = **(_QWORD ***)(a1 + 56);
  try
  {
    while ( v5 != *(_QWORD **)(a1 + 56) )
    {
      v6 = v5 + 8;
      if ( (_QWORD)v4 == *((_QWORD *)&v4 + 1) )
      {
        std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IStreamGroupProxy> const &>(
          &v16,
          *((_QWORD *)&v4 + 1),
          v6);
        *(_QWORD *)&v4 = v17;
        *((_QWORD *)&v4 + 1) = *((_QWORD *)&v16 + 1);
      }
      else
      {
        **((_QWORD **)&v4 + 1) = *v6;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(*((__int64 **)&v4 + 1));
        *((_QWORD *)&v4 + 1) += 8LL;
        *((_QWORD *)&v16 + 1) = *((_QWORD *)&v4 + 1);
      }
      v7 = (__int64 **)v5[2];
      if ( *((_BYTE *)v7 + 25) )
      {
        for ( i = v5[1]; !*(_BYTE *)(i + 25) && v5 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
          v5 = (_QWORD *)i;
        v5 = (_QWORD *)i;
      }
      else
      {
        v5 = (_QWORD *)v5[2];
        for ( j = *v7; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v5 = j;
      }
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v19);
    v11 = (void *)v16;
    for ( k = (_QWORD *)v16; k != *((_QWORD **)&v4 + 1); ++k )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*k + 160LL))(*k, a2);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x343,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
          (const char *)(unsigned int)v13);
        if ( v11 )
        {
          std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v11);
          std::_Deallocate<16,0>(v11, (const struct std::nothrow_t *)(8 * ((__int64)(v4 - (_QWORD)v11) >> 3)));
        }
        return v14;
      }
    }
    if ( v11 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v11);
      std::_Deallocate<16,0>(v11, (const struct std::nothrow_t *)(8 * ((__int64)(v4 - (_QWORD)v11) >> 3)));
    }
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v19) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x348,
                     (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                     v10);
    return (unsigned int)v19;
  }
  return result;
}
