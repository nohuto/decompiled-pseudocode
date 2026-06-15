/*
 * XREFs of sub_180025854 @ 0x180025854
 * Callers:
 *     sub_180027B9C @ 0x180027B9C (sub_180027B9C.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_180009F20 @ 0x180009F20 (sub_180009F20.c)
 *     sub_180025BB0 @ 0x180025BB0 (sub_180025BB0.c)
 *     sub_18002F420 @ 0x18002F420 (sub_18002F420.c)
 *     sub_18002F490 @ 0x18002F490 (sub_18002F490.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     sub_180039DDC @ 0x180039DDC (sub_180039DDC.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180025854(int a1, _QWORD *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rsi
  void *v6; // rdi
  int v7; // ebp
  int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rax
  _QWORD *v14; // r13
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 retaddr; // [rsp+88h] [rbp+0h]

  v4 = sub_180039DDC(352LL, &unk_18004FFC8);
  v5 = (_QWORD *)v4;
  if ( v4 )
  {
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_DWORD *)(v4 + 32) = 0;
    *(_QWORD *)(v4 + 40) = 0LL;
    *(_QWORD *)(v4 + 48) = 0LL;
    *(_QWORD *)(v4 + 56) = 0LL;
    *(_QWORD *)(v4 + 64) = 0LL;
    *(_QWORD *)(v4 + 72) = 0LL;
    *(_QWORD *)(v4 + 80) = 0LL;
    *(_QWORD *)(v4 + 88) = 0LL;
    *(_DWORD *)(v4 + 96) = 10;
    *(_QWORD *)(v4 + 104) = 0LL;
    *(_QWORD *)(v4 + 112) = 0LL;
    *(_QWORD *)(v4 + 120) = 0LL;
    *(_QWORD *)(v4 + 128) = 0LL;
    *(_QWORD *)(v4 + 136) = 0LL;
    *(_DWORD *)(v4 + 144) = 10;
    *(_QWORD *)(v4 + 152) = 0LL;
    *(_QWORD *)(v4 + 160) = 0LL;
    *(_DWORD *)(v4 + 168) = 0;
    *(_QWORD *)(v4 + 176) = 0LL;
    *(_QWORD *)(v4 + 184) = 0LL;
    *(_QWORD *)(v4 + 192) = 0LL;
    *(_QWORD *)(v4 + 200) = 0LL;
    *(_QWORD *)(v4 + 208) = 0LL;
    *(_DWORD *)(v4 + 216) = 10;
    *(_DWORD *)(v4 + 224) = 1065353216;
    *(_QWORD *)(v4 + 228) = 1LL;
    *(_QWORD *)(v4 + 240) = 0LL;
    *(_QWORD *)(v4 + 248) = 0LL;
    *(_QWORD *)(v4 + 256) = 0LL;
    *(_QWORD *)(v4 + 264) = 0LL;
    *(_QWORD *)(v4 + 272) = 0LL;
    *(_QWORD *)(v4 + 280) = 0LL;
    *(_QWORD *)(v4 + 288) = 0LL;
    *(_DWORD *)(v4 + 296) = 0;
    *(_DWORD *)(v4 + 304) = 0;
    *(_QWORD *)(v4 + 312) = 0LL;
    *(_DWORD *)(v4 + 320) = 1;
    *(_BYTE *)(v4 + 324) = 0;
    *(_QWORD *)(v4 + 328) = 0LL;
    *(_QWORD *)(v4 + 336) = 0LL;
    *(_DWORD *)(v4 + 344) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = v5;
  if ( !v5 )
  {
    v7 = -2147024882;
    v8 = 186;
LABEL_18:
    sub_180003AB0(retaddr, v8, (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp", v7);
    goto LABEL_20;
  }
  *(_DWORD *)v5 = a1;
  v9 = v5[32];
  v5[32] = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = qword_18004FE48;
  v5[32] = 0LL;
  v11 = sub_180039DDC(128LL, &unk_18004FFC8);
  v12 = v11;
  if ( !v11 )
  {
    v7 = -2147024882;
LABEL_17:
    v8 = 189;
    goto LABEL_18;
  }
  *(_DWORD *)(v11 + 12) = 1;
  *(_QWORD *)v11 = off_18003F538;
  if ( qword_18004FE28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18004FE28 + 8LL))(qword_18004FE28);
  *(_QWORD *)v12 = off_18003F4E0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v12 + 16), 0, 0);
  *(_DWORD *)(v12 + 56) = 0;
  *(_QWORD *)(v12 + 64) = 0LL;
  *(_QWORD *)(v12 + 72) = 0LL;
  v13 = sub_180009F20(0x38uLL);
  *v13 = v13;
  v13[1] = v13;
  *(_QWORD *)(v12 + 64) = v13;
  v14 = v13;
  *(_QWORD *)(v12 + 80) = 0LL;
  *(_QWORD *)(v12 + 88) = 0LL;
  *(_QWORD *)(v12 + 96) = 0LL;
  v15 = sub_180009F20(0x80uLL);
  *(_QWORD *)(v12 + 80) = v15;
  *(_QWORD *)(v12 + 96) = v15 + 16;
  v16 = 16LL;
  do
  {
    *v15++ = v14;
    --v16;
  }
  while ( v16 );
  *(_QWORD *)(v12 + 88) = v15;
  *(_QWORD *)(v12 + 104) = 7LL;
  *(_QWORD *)(v12 + 112) = 8LL;
  *(_DWORD *)(v12 + 56) = 1065353216;
  *(_QWORD *)(v12 + 120) = v10;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v7 = sub_18002F490(v12, &unk_180045378, v5 + 32);
  sub_18002F420(v12);
  if ( v7 < 0 )
    goto LABEL_17;
  v6 = 0LL;
  *a2 = v5;
  v7 = 0;
LABEL_20:
  if ( v6 )
  {
    sub_180025BB0(v6);
    sub_180039D98(v6);
  }
  return (unsigned int)v7;
}
