/*
 * XREFs of ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAX_K0@Z @ 0x18009DBDC
 * Callers:
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x18009DB00 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x18009DD3C (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ?size@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ @ 0x18009DD74 (-size@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAUIDXGIResource@@@std@@V?$checked_array_iterator@PEAPEAUIDXGIResource@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAUIDXGIResource@@@stdext@@V?$move_iterator@PEAPEAUIDXGIResource@@@0@0V12@@Z @ 0x180154768 (--$uninitialized_copy@V-$move_iterator@PEAPEAUIDXGIResource@@@std@@V-$checked_array_iterator@PEA.c)
 */

__int64 __fastcall detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::clear_region(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned __int64 v18; // r8
  __int128 v20; // [rsp+20h] [rbp-48h] BYREF
  __int64 v21; // [rsp+30h] [rbp-38h]
  __int128 v22; // [rsp+40h] [rbp-28h] BYREF
  __int64 v23; // [rsp+50h] [rbp-18h]

  v5 = detail::pointer_buffer_impl<CDrawListEntry *>::size(a1);
  v9 = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1, v6, v7, v8, v20, *((_QWORD *)&v20 + 1)) + 8 * v5;
  v14 = (v9 - detail::pointer_buffer_impl<CDrawListEntry *>::first(a1, v10, v11, v12, v20, *((_QWORD *)&v20 + 1))) >> 3;
  if ( a3 > v14 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_5;
  }
  v17 = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1, v13, v15, v16, v20, *((_QWORD *)&v20 + 1));
  v18 = v17 + 8 * v14;
  if ( a3 != v14 )
  {
LABEL_5:
    v21 = 0LL;
    *(_QWORD *)&v20 = v17;
    *((_QWORD *)&v20 + 1) = v14;
    v23 = 0LL;
    v22 = v20;
    std::uninitialized_copy<std::move_iterator<IDXGIResource * *>,stdext::checked_array_iterator<IDXGIResource * *>>(
      &v20,
      v17 + 8 * a3,
      v18,
      &v22);
  }
  return detail::pointer_buffer_impl<CDrawListEntry *>::consume(a1, -(__int64)a3, v18);
}
