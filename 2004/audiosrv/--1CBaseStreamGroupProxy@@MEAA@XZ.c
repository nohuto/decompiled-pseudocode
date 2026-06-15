/*
 * XREFs of ??1CBaseStreamGroupProxy@@MEAA@XZ @ 0x18004F910
 * Callers:
 *     ??_GCSharedStreamGroupProxy@@MEAAPEAXI@Z @ 0x18004F7D0 (--_GCSharedStreamGroupProxy@@MEAAPEAXI@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800E401C (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@.c)
 *     ??_ECBaseStreamGroupProxy@@MEAAPEAXI@Z @ 0x1800E45B0 (--_ECBaseStreamGroupProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BD0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800BBD20 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@@Z @ 0x1800E38E0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKK@std@@PEAX@std@@@std@@@-$_Tree_val@U-$_T.c)
 */

void __fastcall CBaseStreamGroupProxy::~CBaseStreamGroupProxy(CBaseStreamGroupProxy *this)
{
  __int64 v2; // rcx
  __int64 *v3; // rdi
  __int64 *v4; // rsi
  __int64 *v5; // r14
  const struct std::nothrow_t *v6; // rdx
  void *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct _RTL_CRITICAL_SECTION *v10; // rdi
  _QWORD *p_Type; // rcx
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  void *v15; // rcx
  unsigned __int64 v16; // [rsp+50h] [rbp+8h] BYREF
  void *v17; // [rsp+58h] [rbp+10h] BYREF

  *(_QWORD *)this = &CBaseStreamGroupProxy::`vftable';
  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    v13 = *((_QWORD *)this + 9);
    if ( v13 )
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v2 + 72LL))(
        v2,
        2LL,
        0xFFFFFFFFLL,
        *(unsigned int *)(v13 + 56));
  }
  v3 = (__int64 *)*((_QWORD *)this + 27);
  if ( v3 )
  {
    v4 = (__int64 *)*((_QWORD *)this + 28);
    v5 = (__int64 *)*((_QWORD *)this + 27);
    if ( v3 != v4 )
    {
      do
      {
        v14 = *v5;
        if ( *v5 )
        {
          *v5 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        ++v5;
      }
      while ( v5 != v4 );
    }
    v6 = (const struct std::nothrow_t *)((*((_QWORD *)this + 29) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL);
    v16 = (unsigned __int64)v6;
    v17 = v3;
    if ( (unsigned __int64)v6 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v17, &v16);
      v6 = (const struct std::nothrow_t *)v16;
      v3 = (__int64 *)v17;
    }
    operator delete(v3, v6);
    *((_QWORD *)this + 27) = 0LL;
    *((_QWORD *)this + 28) = 0LL;
    *((_QWORD *)this + 29) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 24);
  if ( v7 )
  {
    std::_Deallocate<16,0>(
      v7,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 26) - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 24) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v8 = *((_QWORD *)this + 11);
  if ( v8 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 10);
  if ( v9 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this + 9);
  if ( v10 )
  {
    p_Type = &v10[1].DebugInfo->Type;
    v12 = (_QWORD *)p_Type[1];
    if ( !*((_BYTE *)v12 + 25) )
    {
      do
      {
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *>>>(
          &v10[1],
          &v10[1],
          v12[2]);
        v15 = v12;
        v12 = (_QWORD *)*v12;
        std::_Deallocate<16,0>(v15, (const struct std::nothrow_t *)0x28);
      }
      while ( !*((_BYTE *)v12 + 25) );
      p_Type = &v10[1].DebugInfo->Type;
    }
    operator delete(p_Type, (const struct std::nothrow_t *)0x28);
    DeleteCriticalSection(v10);
    operator delete(v10, (const struct std::nothrow_t *)0x40);
  }
  *((_QWORD *)this + 9) = 0LL;
  operator delete(*((void **)this + 8), (const struct std::nothrow_t *)0x10);
  *((_QWORD *)this + 8) = 0LL;
  CoTaskMemFree(*((LPVOID *)this + 6));
  *((_QWORD *)this + 6) = 0LL;
  CoTaskMemFree(*((LPVOID *)this + 5));
  *((_QWORD *)this + 5) = 0LL;
}
