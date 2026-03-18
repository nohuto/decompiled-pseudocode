/*
 * XREFs of ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x18004D38C
 * Callers:
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x18004D1E4 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x18004D2B0 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x1800A8544 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x18004D540 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ?size@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ @ 0x18004D578 (-size@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAUIDXGIResource@@@std@@V?$checked_array_iterator@PEAPEAUIDXGIResource@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAUIDXGIResource@@@stdext@@V?$move_iterator@PEAPEAUIDXGIResource@@@0@0V12@@Z @ 0x180158D2C (--$uninitialized_copy@V-$move_iterator@PEAPEAUIDXGIResource@@@std@@V-$checked_array_iterator@PEA.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CDrawListCache::ReleaseDrawListEntries(CDrawListCache *this, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rdi
  __int64 v5; // rbx
  int v6; // ecx
  _QWORD *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rsi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  unsigned __int64 v27; // rbx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int128 v35; // [rsp+20h] [rbp-48h] BYREF
  __int64 v36; // [rsp+30h] [rbp-38h]
  __int128 v37; // [rsp+40h] [rbp-28h] BYREF
  __int64 v38; // [rsp+50h] [rbp-18h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  v4 = (_DWORD *)((char *)this + 32);
  v5 = *((_QWORD *)this + 4);
  v6 = v5 & 3;
  if ( (v5 & 3) == 0 )
  {
LABEL_23:
    v7 = v4;
    goto LABEL_4;
  }
  if ( v6 == 1 )
  {
    v7 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCuLL);
    goto LABEL_4;
  }
  if ( v6 != 2 )
  {
    if ( v6 != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    goto LABEL_23;
  }
  v7 = 0LL;
LABEL_4:
  v8 = 1LL;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      v9 = *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(v4, a2, a3, a4, v35, *((_QWORD *)&v35 + 1))
                     - 16);
    }
    else
    {
      if ( (unsigned int)(v6 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v9 = 0LL;
    }
  }
  else
  {
    v9 = 1LL;
  }
  v11 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v4, a2, a3, a4, v35, *((_QWORD *)&v35 + 1)) + 8 * v9;
  while ( v7 != (_QWORD *)v11 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
    ++v7;
  }
  v14 = *v4 & 3;
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      v8 = *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(
                         v4,
                         v10,
                         v12,
                         v13,
                         v35,
                         *((_QWORD *)&v35 + 1))
                     - 16);
    }
    else
    {
      if ( (unsigned int)(v14 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v8 = 0LL;
    }
  }
  v15 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v4, v10, v12, v13, v35, *((_QWORD *)&v35 + 1)) + 8 * v8;
  if ( (*(_QWORD *)v4 & 3) == 0 )
    goto LABEL_25;
  if ( (*v4 & 3) == 1 )
  {
    v16 = *(_QWORD *)v4 & 0xFFFFFFFFFFFFFFFCuLL;
    goto LABEL_15;
  }
  if ( (*v4 & 3) != 2 )
  {
    if ( (*v4 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
LABEL_25:
    v16 = (unsigned __int64)v4;
    goto LABEL_15;
  }
  v16 = 0LL;
LABEL_15:
  v17 = (__int64)(v15 - v16) >> 3;
  if ( !v17 )
    return;
  v18 = detail::pointer_buffer_impl<CDrawListEntry *>::size(v4);
  v22 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v4, v19, v20, v21, v35, *((_QWORD *)&v35 + 1)) + 8 * v18;
  v27 = (v22 - detail::pointer_buffer_impl<CDrawListEntry *>::first(v4, v23, v24, v25, v35, *((_QWORD *)&v35 + 1))) >> 3;
  if ( v17 > v27 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_42;
  }
  v30 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v4, v26, v28, v29, v35, *((_QWORD *)&v35 + 1));
  if ( v17 != v27 )
  {
LABEL_42:
    v36 = 0LL;
    *(_QWORD *)&v35 = v30;
    *((_QWORD *)&v35 + 1) = v27;
    v38 = 0LL;
    v37 = v35;
    std::uninitialized_copy<std::move_iterator<IDXGIResource * *>,stdext::checked_array_iterator<IDXGIResource * *>>(
      &v35,
      v30 + 8 * v17,
      v30 + 8 * v27,
      &v37);
  }
  if ( (*v4 & 3) == 0 )
    goto LABEL_26;
  if ( (*v4 & 3) == 1 )
  {
    v34 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v4, v31, v32, v33, v35, *((_QWORD *)&v35 + 1));
    *(_QWORD *)(v34 - 16) -= v17;
    return;
  }
  if ( (*v4 & 3) != 2 )
  {
    if ( (*v4 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    if ( v17 != -1LL )
LABEL_26:
      *(_QWORD *)v4 = 2LL;
  }
}
