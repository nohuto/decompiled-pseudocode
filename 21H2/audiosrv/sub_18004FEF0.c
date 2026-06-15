/*
 * XREFs of sub_18004FEF0 @ 0x18004FEF0
 * Callers:
 *     sub_18004FD90 @ 0x18004FD90 (sub_18004FD90.c)
 * Callees:
 *     sub_1800356E8 @ 0x1800356E8 (sub_1800356E8.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_18006D208 @ 0x18006D208 (sub_18006D208.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800CB5A0 @ 0x1800CB5A0 (sub_1800CB5A0.c)
 *     sub_1800CBFC0 @ 0x1800CBFC0 (sub_1800CBFC0.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18004FEF0(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r10
  __int64 v8; // r10
  __int64 v9; // rcx
  bool i; // zf
  __int64 v11; // rdx

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 12LL, &unk_18015E3E8, a1);
  }
  *(_QWORD *)(a1 + 456) = 0LL;
  v2 = *(std::_Ref_count_base **)(a1 + 464);
  *(_QWORD *)(a1 + 464) = 0LL;
  if ( v2 )
    sub_180052600(v2);
  if ( *(_QWORD *)(a1 + 160) )
    sub_1800CBFC0();
  if ( *(_QWORD *)(a1 + 192) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800CB5A0(
        *((_QWORD *)off_18019C348 + 2),
        13LL,
        &unk_18015E3E8,
        *(_QWORD *)(a1 + 192),
        *(_QWORD *)(*(_QWORD *)(a1 + 192) + 56LL));
    }
    v4 = *(_QWORD **)(a1 + 192);
    if ( v4[7] )
    {
      if ( *(_BYTE *)(a1 + 188) )
      {
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 168) + 304LL))(*(_QWORD *)(a1 + 168));
        v4 = *(_QWORD **)(a1 + 192);
      }
      LOBYTE(v3) = 1;
      (*(void (__fastcall **)(_QWORD, _QWORD *, __int64))(**(_QWORD **)(a1 + 168) + 312LL))(
        *(_QWORD *)(a1 + 168),
        v4,
        v3);
      v4 = *(_QWORD **)(a1 + 192);
    }
    (*(void (__fastcall **)(_QWORD *))(*v4 + 64LL))(v4);
    *(_QWORD *)(a1 + 192) = 0LL;
    if ( a1 != -224 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  }
  v5 = off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 5u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 14LL, &unk_18015E3E8, *(_QWORD *)(a1 + 168));
    v5 = off_18019C348;
  }
  v6 = *(_QWORD *)(a1 + 168);
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*(_QWORD *)(a1 + 168));
    *(_QWORD *)(a1 + 168) = 0LL;
    v5 = off_18019C348;
  }
  if ( v5 != &off_18019C348 )
  {
    if ( (*((_DWORD *)v5 + 7) & 0x100) != 0 && *((_BYTE *)v5 + 25) >= 5u )
    {
      sub_1800BB4B4(v5[2], 15LL, &unk_18015E3E8);
      v5 = off_18019C348;
    }
    if ( v5 != &off_18019C348 && (*((_DWORD *)v5 + 7) & 0x100) != 0 && *((_BYTE *)v5 + 25) >= 5u )
    {
      sub_1800BD7DC(v5[2], 16LL, &unk_18015E3E8, *(_QWORD *)(a1 + 152));
      v5 = off_18019C348;
    }
  }
  v7 = *(_QWORD *)(a1 + 152);
  if ( v7 )
  {
    if ( !(unsigned int)sub_18006D208(v7 + 12) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 104LL))(v8, 1LL);
      if ( qword_18019E418 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 16LL))(qword_18019E418);
    }
    *(_QWORD *)(a1 + 152) = 0LL;
    v5 = off_18019C348;
  }
  if ( v5 != &off_18019C348 && (*((_DWORD *)v5 + 7) & 0x100) != 0 && *((_BYTE *)v5 + 25) >= 5u )
    sub_1800BB4B4(v5[2], 17LL, &unk_18015E3E8);
  EnterCriticalSection(&stru_18019EF60);
  v9 = qword_18019D9B0;
  for ( i = qword_18019D9B0 == 0; !i; i = v11 == 0 )
  {
    v11 = *(_QWORD *)v9;
    if ( *(_QWORD *)(v9 + 16) == a1 )
    {
      if ( v9 == qword_18019D9B0 )
        qword_18019D9B0 = *(_QWORD *)v9;
      else
        **(_QWORD **)(v9 + 8) = v11;
      if ( v9 == qword_18019D9B8 )
        qword_18019D9B8 = *(_QWORD *)(v9 + 8);
      else
        *(_QWORD *)(*(_QWORD *)v9 + 8LL) = *(_QWORD *)(v9 + 8);
      *(_QWORD *)v9 = qword_18019D9D0;
      qword_18019D9D0 = v9;
      if ( !--qword_18019D9C0 )
        sub_1800356E8((__int64)&qword_18019D9B0);
      break;
    }
    v9 = *(_QWORD *)v9;
  }
  LeaveCriticalSection(&stru_18019EF60);
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 18LL, &unk_18015E3E8, a1);
  }
}
