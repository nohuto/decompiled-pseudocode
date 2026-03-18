/*
 * XREFs of ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x1800553BC
 * Callers:
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x180055214 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x1800552E0 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x180057D20 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x180055570 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ?size@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ @ 0x1800555A8 (-size@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAUIDXGIResource@@@std@@V?$checked_array_iterator@PEAPEAUIDXGIResource@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAUIDXGIResource@@@stdext@@V?$move_iterator@PEAPEAUIDXGIResource@@@0@0V12@@Z @ 0x1801565C0 (--$uninitialized_copy@V-$move_iterator@PEAPEAUIDXGIResource@@@std@@V-$checked_array_iterator@PEA.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CDrawListCache::ReleaseDrawListEntries(CDrawListCache *this)
{
  _DWORD *v1; // rdi
  __int64 v2; // rbx
  int v3; // ecx
  _QWORD *v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rbp
  int v8; // eax
  __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int128 v17; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+30h] [rbp-38h]
  __int128 v19; // [rsp+40h] [rbp-28h] BYREF
  __int64 v20; // [rsp+50h] [rbp-18h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  v1 = (_DWORD *)((char *)this + 32);
  v2 = *((_QWORD *)this + 4);
  v3 = v2 & 3;
  if ( (v2 & 3) == 0 )
  {
LABEL_23:
    v4 = v1;
    goto LABEL_4;
  }
  if ( v3 == 1 )
  {
    v4 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
    goto LABEL_4;
  }
  if ( v3 != 2 )
  {
    if ( v3 != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    goto LABEL_23;
  }
  v4 = 0LL;
LABEL_4:
  v5 = 1LL;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      v6 = *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(v1) - 16);
    }
    else
    {
      if ( (unsigned int)(v3 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v6 = 0LL;
    }
  }
  else
  {
    v6 = 1LL;
  }
  v7 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v1) + 8 * v6;
  while ( v4 != (_QWORD *)v7 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 8LL))(*v4);
    ++v4;
  }
  v8 = *v1 & 3;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      v5 = *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(v1) - 16);
    }
    else
    {
      if ( (unsigned int)(v8 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v5 = 0LL;
    }
  }
  v9 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v1) + 8 * v5;
  if ( (*(_QWORD *)v1 & 3) == 0 )
    goto LABEL_25;
  if ( (*v1 & 3) == 1 )
  {
    v10 = *(_QWORD *)v1 & 0xFFFFFFFFFFFFFFFCuLL;
    goto LABEL_15;
  }
  if ( (*v1 & 3) != 2 )
  {
    if ( (*v1 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
LABEL_25:
    v10 = (unsigned __int64)v1;
    goto LABEL_15;
  }
  v10 = 0LL;
LABEL_15:
  v11 = (__int64)(v9 - v10) >> 3;
  if ( !v11 )
    return;
  v12 = detail::pointer_buffer_impl<CDrawListEntry *>::size(v1);
  v13 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v1) + 8 * v12;
  v14 = (v13 - detail::pointer_buffer_impl<CDrawListEntry *>::first(v1)) >> 3;
  if ( v11 > v14 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_42;
  }
  v15 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v1);
  if ( v11 != v14 )
  {
LABEL_42:
    v18 = 0LL;
    *(_QWORD *)&v17 = v15;
    *((_QWORD *)&v17 + 1) = v14;
    v20 = 0LL;
    v19 = v17;
    std::uninitialized_copy<std::move_iterator<IDXGIResource * *>,stdext::checked_array_iterator<IDXGIResource * *>>(
      &v17,
      v15 + 8 * v11,
      v15 + 8 * v14,
      &v19);
  }
  if ( (*v1 & 3) == 0 )
    goto LABEL_26;
  if ( (*v1 & 3) == 1 )
  {
    v16 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v1);
    *(_QWORD *)(v16 - 16) -= v11;
    return;
  }
  if ( (*v1 & 3) != 2 )
  {
    if ( (*v1 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    if ( v11 != -1LL )
LABEL_26:
      *(_QWORD *)v1 = 2LL;
  }
}
