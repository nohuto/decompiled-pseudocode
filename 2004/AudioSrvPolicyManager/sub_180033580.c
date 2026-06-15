/*
 * XREFs of sub_180033580 @ 0x180033580
 * Callers:
 *     sub_180034A74 @ 0x180034A74 (sub_180034A74.c)
 *     sub_180035970 @ 0x180035970 (sub_180035970.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_1800362DC @ 0x1800362DC (sub_1800362DC.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180033580(__int64 a1)
{
  unsigned int v2; // ebp
  unsigned int v3; // r14d
  DWORD v4; // esi
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  struct _ACL *v7; // rax
  int v8; // r14d
  unsigned __int64 i; // rsi
  __int64 v10; // rax
  __int64 v11; // r15
  DWORD nAceListLength; // ebx
  void *v13; // rax
  int v15; // ebx
  int v16; // ebx

  if ( !*(_QWORD *)(a1 + 8) && !*(_BYTE *)(a1 + 16) )
  {
    v2 = *(_DWORD *)(a1 + 32);
    v3 = 0;
    v4 = 8;
    if ( v2 )
    {
      v5 = 0LL;
      while ( v5 < *(_QWORD *)(a1 + 32) )
      {
        _mm_lfence();
        v6 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v5);
        if ( v6 )
          v4 += (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        ++v3;
        ++v5;
        if ( v3 >= v2 )
          goto LABEL_9;
      }
LABEL_18:
      sub_18000A174(-2147024809);
    }
LABEL_9:
    v7 = (struct _ACL *)o_malloc(v4);
    *(_QWORD *)(a1 + 8) = v7;
    if ( !v7 )
      sub_18000A174(-2147024882);
    if ( !InitializeAcl(v7, v4, *(_DWORD *)(a1 + 20)) )
    {
      v15 = sub_1800362DC();
      _o_free(*(_QWORD *)(a1 + 8));
      *(_QWORD *)(a1 + 8) = 0LL;
      sub_18000A174(v15);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
    v8 = 0;
    if ( v2 )
    {
      for ( i = 0LL; i < *(_QWORD *)(a1 + 32); ++i )
      {
        _mm_lfence();
        v10 = *(_QWORD *)(a1 + 24);
        v11 = *(_QWORD *)(v10 + 8 * i);
        if ( !v11
          || (nAceListLength = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 16LL))(*(_QWORD *)(v10 + 8 * i)),
              v13 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11),
              !AddAce(*(PACL *)(a1 + 8), *(_DWORD *)(a1 + 20), 0xFFFFFFFF, v13, nAceListLength)) )
        {
          v16 = sub_1800362DC();
          _o_free(*(_QWORD *)(a1 + 8));
          *(_QWORD *)(a1 + 8) = 0LL;
          sub_18000A174(v16);
        }
        if ( ++v8 >= v2 )
          return *(_QWORD *)(a1 + 8);
      }
      goto LABEL_18;
    }
  }
  return *(_QWORD *)(a1 + 8);
}
