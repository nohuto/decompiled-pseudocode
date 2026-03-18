/*
 * XREFs of ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801A0058
 * Callers:
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x1800552E0 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x180055570 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAUIDXGIResource@@@std@@V?$checked_array_iterator@PEAPEAUIDXGIResource@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAUIDXGIResource@@@stdext@@V?$move_iterator@PEAPEAUIDXGIResource@@@0@0V12@@Z @ 0x1801565C0 (--$uninitialized_copy@V-$move_iterator@PEAPEAUIDXGIResource@@@std@@V-$checked_array_iterator@PEA.c)
 *     ?size@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@QEBA_KXZ @ 0x1801A018C (-size@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@d.c)
 */

__int64 __fastcall detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::clear_region(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  __int128 v9; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10; // [rsp+30h] [rbp-38h]
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]

  v5 = detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::size();
  if ( a3 > v5 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  v6 = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1);
  v7 = v6 + 8 * v5;
  if ( a3 != v5 )
  {
    v10 = 0LL;
    *(_QWORD *)&v9 = v6;
    *((_QWORD *)&v9 + 1) = v5;
    v12 = 0LL;
    v11 = v9;
    std::uninitialized_copy<std::move_iterator<IDXGIResource * *>,stdext::checked_array_iterator<IDXGIResource * *>>(
      (__int64)&v9,
      (const void *)(v6 + 8 * a3),
      v7,
      (__int64 *)&v11);
  }
  return detail::pointer_buffer_impl<CDrawListEntry *>::consume(a1, -(__int64)a3, v7);
}
