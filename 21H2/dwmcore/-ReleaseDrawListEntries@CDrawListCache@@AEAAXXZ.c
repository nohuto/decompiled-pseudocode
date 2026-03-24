/*
 * XREFs of ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x180093FD8
 * Callers:
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x180093E28 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x180093E80 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x1800940BC (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ?size@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ @ 0x1800940F4 (-size@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ.c)
 *     ?consume@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEAAX_J@Z @ 0x1800941BC (-consume@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEAAX_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAUIDXGIResource@@@std@@V?$checked_array_iterator@PEAPEAUIDXGIResource@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAUIDXGIResource@@@stdext@@V?$move_iterator@PEAPEAUIDXGIResource@@@0@0V12@@Z @ 0x180154E48 (--$uninitialized_copy@V-$move_iterator@PEAPEAUIDXGIResource@@@std@@V-$checked_array_iterator@PEA.c)
 */

void __fastcall CDrawListCache::ReleaseDrawListEntries(CDrawListCache *this)
{
  char *v1; // rsi
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r8
  __int128 v13; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+30h] [rbp-38h]
  __int128 v15; // [rsp+40h] [rbp-28h] BYREF
  __int64 v16; // [rsp+50h] [rbp-18h]

  v1 = (char *)this + 32;
  v2 = (_QWORD *)detail::pointer_buffer_impl<CDrawListEntry *>::first((char *)this + 32);
  v3 = detail::pointer_buffer_impl<CDrawListEntry *>::size(v1);
  v4 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v1) + 8 * v3;
  while ( v2 != (_QWORD *)v4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 8LL))(*v2);
    ++v2;
  }
  v5 = detail::pointer_buffer_impl<CDrawListEntry *>::size(v1);
  v6 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v1) + 8 * v5;
  v7 = (v6 - detail::pointer_buffer_impl<CDrawListEntry *>::first(v1)) >> 3;
  if ( v7 )
  {
    v8 = detail::pointer_buffer_impl<CDrawListEntry *>::size(v1);
    v9 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v1) + 8 * v8;
    v10 = (v9 - detail::pointer_buffer_impl<CDrawListEntry *>::first(v1)) >> 3;
    if ( v7 > v10 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    else
    {
      v11 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v1);
      if ( v7 == v10 )
      {
LABEL_7:
        detail::pointer_buffer_impl<CDrawListEntry *>::consume(v1, -(__int64)v7, v12);
        return;
      }
    }
    v14 = 0LL;
    *(_QWORD *)&v13 = v11;
    *((_QWORD *)&v13 + 1) = v10;
    v16 = 0LL;
    v15 = v13;
    std::uninitialized_copy<std::move_iterator<IDXGIResource * *>,stdext::checked_array_iterator<IDXGIResource * *>>(
      &v13,
      v11 + 8 * v7,
      v11 + 8 * v10,
      &v15);
    goto LABEL_7;
  }
}
