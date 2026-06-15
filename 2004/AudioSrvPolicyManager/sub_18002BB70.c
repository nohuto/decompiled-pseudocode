/*
 * XREFs of sub_18002BB70 @ 0x18002BB70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_18000ACE4 @ 0x18000ACE4 (sub_18000ACE4.c)
 *     sub_1800112C0 @ 0x1800112C0 (sub_1800112C0.c)
 *     sub_180011568 @ 0x180011568 (sub_180011568.c)
 *     sub_180011A98 @ 0x180011A98 (sub_180011A98.c)
 *     sub_1800121E8 @ 0x1800121E8 (sub_1800121E8.c)
 *     sub_180012658 @ 0x180012658 (sub_180012658.c)
 *     sub_1800126D0 @ 0x1800126D0 (sub_1800126D0.c)
 *     sub_180012748 @ 0x180012748 (sub_180012748.c)
 *     sub_1800127C0 @ 0x1800127C0 (sub_1800127C0.c)
 *     sub_180012868 @ 0x180012868 (sub_180012868.c)
 *     sub_180012B64 @ 0x180012B64 (sub_180012B64.c)
 *     sub_180015834 @ 0x180015834 (sub_180015834.c)
 *     sub_180015BC8 @ 0x180015BC8 (sub_180015BC8.c)
 *     sub_180016B98 @ 0x180016B98 (sub_180016B98.c)
 *     sub_18001E454 @ 0x18001E454 (sub_18001E454.c)
 *     sub_18001E6B8 @ 0x18001E6B8 (sub_18001E6B8.c)
 *     sub_18001E7B8 @ 0x18001E7B8 (sub_18001E7B8.c)
 *     sub_180020B70 @ 0x180020B70 (sub_180020B70.c)
 *     sub_18002262C @ 0x18002262C (sub_18002262C.c)
 *     sub_1800250BC @ 0x1800250BC (sub_1800250BC.c)
 *     sub_18002975C @ 0x18002975C (sub_18002975C.c)
 *     sub_18002AA88 @ 0x18002AA88 (sub_18002AA88.c)
 *     sub_18002BAC8 @ 0x18002BAC8 (sub_18002BAC8.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18002BB70(__int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rsi
  unsigned __int64 v4; // rcx
  unsigned int v5; // eax
  const wchar_t *v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // r14d
  int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r12
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // r15d
  unsigned __int8 v20; // al
  __int64 v21; // rax
  __int64 v22; // rbx
  DWORD v23; // edi
  __int64 v24; // rax
  int v25; // [rsp+28h] [rbp-50h]
  __int64 v26; // [rsp+80h] [rbp+8h] BYREF
  __int64 v27; // [rsp+88h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(v2 + 256);
  LODWORD(v27) = 0;
  v4 = v2;
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 56LL))(*(_QWORD *)(a1 + 8));
    if ( v5 > 2 )
      v6 = L"unknown";
    else
      v6 = off_1800407E8[v5];
    v7 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 192LL);
    v25 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 48LL))(*(_QWORD *)(a1 + 8));
    sub_18002262C(*((_QWORD *)off_18004F000 + 2), 0xCu, &stru_180045198, v7, v6, v25);
    v4 = *(_QWORD *)(a1 + 24);
  }
  v8 = (v4 + 16) & ((unsigned __int128)-(__int128)v4 >> 64);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 48LL))(*(_QWORD *)(a1 + 8));
  LOBYTE(v11) = 0;
  LODWORD(v26) = 0;
  if ( v9 < 0x15 )
  {
    v12 = sub_1800250BC(v8, v9, (int *)&v26);
    v11 = v26;
    if ( v12 >= 0 )
    {
      if ( (_DWORD)v26 == 3
        && !(*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 56LL))(*(_QWORD *)(a1 + 8)) )
      {
        sub_18000ACE4(v13, *(_QWORD *)(a1 + 16), v14, 1, *(void (__fastcall ****)(_QWORD, void *, _QWORD *))(a1 + 8));
      }
      v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 72LL))(*(_QWORD *)(a1 + 16));
      v16 = sub_180016B98(*(_QWORD *)(a1 + 24), 11LL);
      v17 = sub_180016B98(*(_QWORD *)(a1 + 24), 10LL) + v16;
      v18 = sub_180016B98(*(_QWORD *)(a1 + 24), 2LL) + v17;
      v19 = v18 + sub_180016B98(*(_QWORD *)(a1 + 24), 1LL);
      v20 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 64LL))(*(_QWORD *)(a1 + 8));
      sub_180015834(*(int **)(a1 + 24), v15, v11, 1, v20, 0LL, 0LL);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 64LL))(*(_QWORD *)(a1 + 8))
        || v11 == 2
        || (unsigned int)sub_180012658(v3) && !(unsigned int)sub_180012748(v3) && (unsigned int)sub_180012868(v3, 1) )
      {
        v21 = *(_QWORD *)(a1 + 24);
        if ( *(_DWORD *)(v21 + 508) == 3 )
        {
          *(_QWORD *)(v21 + 508) = 0LL;
          *(_DWORD *)(v21 + 516) = 4;
        }
        sub_1800121E8(v3);
        sub_180015BC8(*(_QWORD *)(a1 + 24));
        sub_180012B64(v3);
      }
      if ( v11 == 2 )
        sub_1800112C0(v3);
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 456LL)
        && (v11 == 2
         || (unsigned int)sub_180012658(v3) && !(unsigned int)sub_180012748(v3) && (unsigned int)sub_180012868(v3, 1))
        && *(_DWORD *)(v3 + 432) )
      {
        sub_180011A98(v3);
        if ( *(_DWORD *)(v3 + 564) == 2 )
        {
          *(_QWORD *)(v3 + 564) = 0LL;
          *(_QWORD *)(v3 + 572) = 0LL;
          *(_QWORD *)(v3 + 580) = 0LL;
          *(_DWORD *)(v3 + 588) = 1;
        }
        *(_DWORD *)(v3 + 432) = 0;
        sub_18001E6B8(qword_18004FE78, v3, 0xD1u, 0);
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 64LL))(*(_QWORD *)(a1 + 8)) )
      {
        if ( (unsigned int)sub_1800126D0(v3) )
          v12 = sub_18001E7B8(qword_18004FE78, *(_DWORD *)(v3 + 212), 0);
      }
      else
      {
        v26 = 0LL;
        (***(void (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 8))(*(_QWORD *)(a1 + 8), &unk_180042A90, &v26);
        v22 = v26;
        v23 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 196LL);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 64LL))(*(_QWORD *)(a1 + 8));
        sub_18002975C(v23, v15, v11, 0, v22, (int *)&v27);
        if ( v26 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        if ( (_DWORD)v27 )
          sub_18001E454(qword_18004FE78, *(_DWORD *)(v3 + 212), 3u);
        v12 = sub_18001E7B8(qword_18004FE78, *(_DWORD *)(v3 + 212), 0);
        if ( (v11 - 10 <= 1 || v11 - 1 <= 1) && !v19 )
          sub_180011568(v3);
        if ( v11 - 10 <= 1 || v11 <= 2 )
          sub_18002AA88(*(_DWORD *)(*(_QWORD *)(a1 + 24) + 196LL));
        if ( (unsigned int)sub_1800127C0(v3) )
          sub_180020B70();
      }
    }
  }
  else
  {
    v12 = -2147024809;
  }
  v24 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(v24 + 456) && byte_180050000 < 0 )
    sub_18002BAC8(v10, &stru_180043510, *(_QWORD *)(v3 + 24), *(_DWORD *)(v24 + 192), v11);
  if ( v12 < 0 )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0xDu, &stru_180045198, v12);
    }
    sub_180005724("CStreamStartedWorkItem::Invoke", 267, v12);
  }
}
