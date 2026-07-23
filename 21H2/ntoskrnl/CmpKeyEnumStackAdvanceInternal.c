/*
 * XREFs of CmpKeyEnumStackAdvanceInternal @ 0x14072A06C
 * Callers:
 *     CmpKeyEnumStackAdvance @ 0x140729FD8 (CmpKeyEnumStackAdvance.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x1405F8DC8 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1405F8E58 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpCompareKeysByName @ 0x140875EB4 (CmpCompareKeysByName.c)
 *     CmpKeyEnumStackEntryAdvance @ 0x14087AA78 (CmpKeyEnumStackEntryAdvance.c)
 */

__int64 __fastcall CmpKeyEnumStackAdvanceInternal(__int64 a1)
{
  unsigned int v1; // edi
  __int16 v3; // bx
  __int64 v4; // rbp
  __int16 v5; // r14
  unsigned __int64 v6; // rax
  __int64 v7; // r15
  __int16 i; // bp
  __int16 v10; // dx
  _QWORD *EntryAtLayerHeight; // rbx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx

  v1 = 0;
  if ( *(_BYTE *)(a1 + 4) )
  {
    for ( i = 0; i <= *(__int16 *)a1; ++i )
    {
      EntryAtLayerHeight = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(a1 + 8, i);
      if ( EntryAtLayerHeight[2] )
      {
        v12 = CmpKeyEnumStackGetEntryAtLayerHeight(a1, v10);
        CmpKeyEnumStackEntryAdvance(v12);
        if ( EntryAtLayerHeight[2] )
          (*(void (__fastcall **)(_QWORD, _QWORD *))(*EntryAtLayerHeight + 16LL))(
            *EntryAtLayerHeight,
            EntryAtLayerHeight + 3);
        *EntryAtLayerHeight = 0LL;
        *(_QWORD *)((char *)EntryAtLayerHeight + 12) = 0LL;
        *((_DWORD *)EntryAtLayerHeight + 5) = 0;
        *((_DWORD *)EntryAtLayerHeight + 2) = -1;
        EntryAtLayerHeight[3] = 0LL;
        *((_DWORD *)EntryAtLayerHeight + 6) = -1;
        *((_WORD *)EntryAtLayerHeight + 14) = 0;
      }
    }
  }
  v3 = *(_WORD *)a1;
  *(_BYTE *)(a1 + 4) = 1;
  v4 = 0LL;
  v5 = -1;
  if ( v3 < 0 )
    return (unsigned int)-2147483622;
  do
  {
    v6 = CmpKeyEnumStackGetEntryAtLayerHeight(a1, v3);
    v7 = *(_QWORD *)(v6 + 120);
    if ( v7 && (!v4 || (int)CmpCompareKeysByName(*(_QWORD *)(v6 + 120), v4) < 0) )
    {
      v4 = v7;
      v5 = v3;
    }
    --v3;
  }
  while ( v3 >= 0 );
  if ( v4 )
  {
    for ( ; v5 >= 0; --v5 )
    {
      v13 = CmpKeyEnumStackGetEntryAtLayerHeight(a1, v5);
      v14 = *(_QWORD *)(v13 + 120);
      if ( v14 && (v14 == v4 || !(unsigned int)CmpCompareKeysByName(v14, v4)) )
      {
        v15 = CmpKeyNodeStackGetEntryAtLayerHeight(a1 + 8, v5);
        v16 = *(_QWORD *)v13;
        v17 = *(unsigned int *)(v13 + 112);
        *(_QWORD *)v15 = *(_QWORD *)v13;
        *(_DWORD *)(v15 + 8) = v17;
        *(_QWORD *)(v15 + 16) = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v16 + 8))(v16, v17, v15 + 24);
      }
    }
  }
  else
  {
    return (unsigned int)-2147483622;
  }
  return v1;
}
