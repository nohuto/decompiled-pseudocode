/*
 * XREFs of ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEAAX_K@Z @ 0x180056EAC
 * Callers:
 *     ?reserve_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAPEAPEAVCDrawListEntry@@_K0@Z @ 0x180056C48 (-reserve_region@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x180055570 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVCDrawListEntry@@@std@@V?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@V?$move_iterator@PEAPEAVCDrawListEntry@@@0@0V12@@Z @ 0x1800CC58C (--$uninitialized_copy@V-$move_iterator@PEAPEAVCDrawListEntry@@@std@@V-$checked_array_iterator@PE.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall detail::pointer_buffer_impl<CDrawListEntry *>::ensure_extra_capacity(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v2; // r8
  void *v3; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  int v9; // r8d
  int v10; // r8d
  __int64 v11; // rax
  unsigned __int64 result; // rax
  int v13; // r8d
  unsigned __int64 v14; // rbp
  _QWORD *v15; // rax
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rax
  __int128 v18; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+30h] [rbp-38h]
  __int128 v20; // [rsp+40h] [rbp-28h] BYREF
  __int64 v21; // [rsp+50h] [rbp-18h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  v2 = *a1;
  v3 = 0LL;
  v6 = *a1 & 3;
  if ( (*a1 & 3) != 0 )
  {
    if ( (_DWORD)v6 == 1 )
    {
      v7 = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1);
      v2 = *a1;
      v8 = *(_QWORD *)(v7 - 16);
    }
    else
    {
      if ( (unsigned int)(v6 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v8 = 0LL;
    }
  }
  else
  {
    v8 = 1LL;
  }
  v9 = v2 & 3;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( !v10 )
    {
      v11 = *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(a1) - 8);
      goto LABEL_7;
    }
    v13 = v10 - 1;
    if ( !v13 )
    {
      v11 = 0LL;
      goto LABEL_7;
    }
    if ( v13 != 1 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
  }
  v11 = 1LL;
LABEL_7:
  result = v11 - v8;
  if ( result < a2 )
  {
    v14 = v8 + a2;
    if ( v14 < v8 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    }
    if ( v14 == 1 )
    {
      *a1 = 3LL;
    }
    else
    {
      v15 = operator new(8 * v14 + 16);
      *((_QWORD *)&v18 + 1) = v8;
      v19 = 0LL;
      v16 = (unsigned __int64)(v15 + 2);
      *v15 = 0LL;
      *(_QWORD *)&v18 = v15 + 2;
      v15[1] = 0LL;
      v17 = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1);
      v20 = v18;
      v21 = v19;
      ((void (__fastcall *)(__int128 *, unsigned __int64, unsigned __int64, __int128 *))std::uninitialized_copy<std::move_iterator<CDrawListEntry * *>,stdext::checked_array_iterator<CDrawListEntry * *>>)(
        &v18,
        v17,
        v17 + 8 * v8,
        &v20);
      if ( (*(_DWORD *)a1 & 3) == 1 )
        v3 = (void *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(a1) - 16);
      *a1 = v16 | 1;
      operator delete(v3);
      *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(a1) - 16) = v8;
      result = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1);
      *(_QWORD *)(result - 8) = v14;
    }
  }
  return result;
}
