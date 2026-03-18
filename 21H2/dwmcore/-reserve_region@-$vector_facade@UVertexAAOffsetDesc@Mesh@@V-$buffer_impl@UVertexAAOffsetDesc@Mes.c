/*
 * XREFs of ?reserve_region@?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVertexAAOffsetDesc@Mesh@@_K0@Z @ 0x1800D16C4
 * Callers:
 *     ?insert@?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UVertexAAOffsetDesc@Mesh@@@2@V?$basic_iterator@$$CBUVertexAAOffsetDesc@Mesh@@@2@_KAEBUVertexAAOffsetDesc@Mesh@@@Z @ 0x1800D1630 (-insert@-$vector_facade@UVertexAAOffsetDesc@Mesh@@V-$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@V?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@0@0V12@@Z @ 0x1801E2864 (--$uninitialized_move@V-$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@V-$checked_array_itera.c)
 *     ??$move_backward@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@V?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@0@0V12@@Z @ 0x1801E2A74 (--$move_backward@V-$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@V-$checked_array_iterator@P.c)
 */

char *__fastcall detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::reserve_region(
        void **a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rsi
  _BYTE *v5; // rdx
  unsigned __int64 v7; // rcx
  char *v9; // rbx
  __int64 v10; // rdx
  signed __int64 v11; // rdx
  unsigned __int64 v12; // r8
  char *v13; // r9
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rdi
  LPVOID v21; // rax
  void *v22; // r8
  void *v23; // rdx
  LPVOID v24; // rbx
  void *v25; // rcx
  bool v26; // zf
  char *v27; // rcx
  unsigned __int64 v28; // r10
  char *v29; // r9
  __int128 v30; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v31; // [rsp+30h] [rbp-30h]
  __int128 v32; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v33; // [rsp+50h] [rbp-10h]

  v3 = (__int64)a1[1];
  v5 = a1[2];
  v7 = 0xAAAAAAAAAAAAAAABuLL;
  if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v5[-v3] >> 3) < a3 )
  {
    v18 = 0xAAAAAAAAAAAAAAABuLL * ((v3 - (__int64)*a1) >> 3);
    v19 = v18 + a3;
    if ( v19 < v18 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v20 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)v7,
            v7 * ((v5 - (_BYTE *)*a1) >> 3),
            v19);
    v21 = operator new(saturated_mul(v20, 0x18uLL));
    v22 = a1[1];
    v23 = *a1;
    *(_QWORD *)&v30 = v21;
    v24 = v21;
    *((_QWORD *)&v30 + 1) = v18;
    v31 = 0LL;
    v32 = v30;
    v33 = 0LL;
    ((void (__fastcall *)(__int128 *, void *, void *, __int128 *))std::uninitialized_move<std::move_iterator<Mesh::VertexAAOffsetDesc *>,stdext::checked_array_iterator<Mesh::VertexAAOffsetDesc *>>)(
      &v30,
      v23,
      v22,
      &v32);
    v25 = *a1;
    v26 = *a1 == a1 + 3;
    *a1 = v24;
    if ( v26 )
      v25 = 0LL;
    DefaultHeap::Free(v25);
    v27 = (char *)*a1;
    v3 = (__int64)*a1 + 24 * v18;
    a1[1] = (void *)v3;
    a1[2] = &v27[24 * v20];
    v7 = 0xAAAAAAAAAAAAAAABuLL;
  }
  v9 = (char *)*a1;
  v10 = v3 - (_QWORD)*a1;
  *((_QWORD *)&v30 + 1) = a3;
  v11 = 0xAAAAAAAAAAAAAAABuLL * (v10 >> 3);
  v12 = v11 - a2;
  v13 = &v9[24 * v11];
  *(_QWORD *)&v30 = v13;
  if ( a3 && (!v13 || (a3 & 0x8000000000000000uLL) != 0LL) )
  {
LABEL_26:
    _o__invalid_parameter_noinfo_noreturn(v7);
    __debugbreak();
LABEL_27:
    v33 = v11;
    v30 = v32;
    v31 = v11;
    v16 = 24 * a2;
    ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<Mesh::VertexAAOffsetDesc *>,stdext::checked_array_iterator<Mesh::VertexAAOffsetDesc *>>)(
      &v32,
      &v9[24 * a2],
      &v9[24 * (v11 - a3)],
      &v30);
    goto LABEL_10;
  }
  v31 = a3;
  v14 = a3;
  if ( a3 >= v12 )
    v14 = v11 - a2;
  v32 = v30;
  v33 = a3;
  v7 = 24 * v14;
  v15 = v3 - 24 * v14;
  if ( v3 != v3 - v7 )
  {
    v28 = v33;
    v29 = &v13[24 * a3];
    v7 = a3;
    do
    {
      v3 -= 24LL;
      if ( !(_QWORD)v32 )
        goto LABEL_26;
      if ( !v7 )
        goto LABEL_26;
      v7 = v28 - 1;
      v29 -= 24;
      v28 = v7;
      if ( v7 >= *((_QWORD *)&v32 + 1) )
        goto LABEL_26;
      *(_OWORD *)v29 = *(_OWORD *)v3;
      *((_QWORD *)v29 + 2) = *(_QWORD *)(v3 + 16);
    }
    while ( v3 != v15 );
  }
  if ( v12 > a3 )
  {
    *(_QWORD *)&v32 = v9;
    *((_QWORD *)&v32 + 1) = v11;
    if ( !v11 || v9 && v11 >= 0 )
      goto LABEL_27;
    goto LABEL_26;
  }
  v16 = 24 * a2;
LABEL_10:
  a1[1] = (char *)a1[1] + 24 * a3;
  return &v9[v16];
}
