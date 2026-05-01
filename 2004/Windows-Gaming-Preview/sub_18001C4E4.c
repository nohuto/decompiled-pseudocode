/*
 * XREFs of sub_18001C4E4 @ 0x18001C4E4
 * Callers:
 *     sub_18001F7D0 @ 0x18001F7D0 (sub_18001F7D0.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180009DAC @ 0x180009DAC (sub_180009DAC.c)
 *     sub_180009FE4 @ 0x180009FE4 (sub_180009FE4.c)
 *     sub_180011A50 @ 0x180011A50 (sub_180011A50.c)
 *     sub_18001DD10 @ 0x18001DD10 (sub_18001DD10.c)
 *     sub_180026760 @ 0x180026760 (sub_180026760.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004482C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_18001C4E4(_QWORD *a1, __int64 a2)
{
  HSTRING v3; // r15
  __int64 v4; // r14
  __int64 v5; // r12
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int v8; // edi
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  int v15; // eax
  _QWORD *v16; // rbx
  __int64 retaddr; // [rsp+68h] [rbp+38h]
  __int64 v19; // [rsp+70h] [rbp+40h]
  _QWORD *v20; // [rsp+80h] [rbp+50h] BYREF
  _QWORD *v21; // [rsp+88h] [rbp+58h]

  v19 = 0LL;
  v3 = (HSTRING)a1[2];
  v4 = *(_QWORD *)(*a1 + 128LL);
  v5 = *(_QWORD *)(*a1 + 56LL);
  v6 = operator new(0xE8uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v7 = v6;
  v21 = v6;
  v20 = v6;
  if ( !v6 )
  {
    v8 = -2147024882;
LABEL_13:
    sub_180003268(retaddr, 424, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v8);
    goto LABEL_20;
  }
  sub_180011A50(v6 + 2);
  v7[7] = 1LL;
  *v7 = off_18004ABA0;
  v7[1] = off_18004AB80;
  v7[2] = off_18004AB38;
  if ( qword_18005ADB0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 8LL))(qword_18005ADB0);
  *v7 = off_18004ACB8;
  v7[1] = off_18004AC98;
  v7[2] = off_18004AC50;
  v7[8] = 0LL;
  v7[9] = 0LL;
  v7[10] = 0LL;
  v7[11] = 0LL;
  v7[12] = 0LL;
  v7[13] = 0LL;
  v7[14] = 0LL;
  v7[15] = 0LL;
  v7[16] = 0LL;
  v7[17] = 0LL;
  v7[18] = 0LL;
  v7[19] = 0LL;
  v9 = operator new(0x30uLL);
  *v9 = v9;
  v9[1] = v9;
  v9[2] = v9;
  *((_WORD *)v9 + 12) = 257;
  v7[18] = v9;
  v7[20] = 0LL;
  v7[21] = 0LL;
  v10 = operator new(0x30uLL);
  *v10 = v10;
  v10[1] = v10;
  v10[2] = v10;
  *((_WORD *)v10 + 12) = 257;
  v7[20] = v10;
  v7[22] = 0LL;
  v7[23] = 0LL;
  v11 = operator new(0x30uLL);
  *v11 = v11;
  v11[1] = v11;
  v11[2] = v11;
  *((_WORD *)v11 + 12) = 257;
  v7[22] = v11;
  v7[24] = 0LL;
  v7[25] = 0LL;
  v12 = operator new(0x30uLL);
  *v12 = v12;
  v12[1] = v12;
  v12[2] = v12;
  *((_WORD *)v12 + 12) = 257;
  v7[24] = v12;
  v7[26] = 0LL;
  v7[27] = 0LL;
  v7[28] = 0LL;
  v21 = 0LL;
  v8 = sub_180009DAC(v7, v5, (v4 + 8) & -(__int64)(v4 != 0), v3);
  if ( v8 >= 0 )
  {
    v13 = v7[7];
    while ( v13 >= 0 )
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange64(v7 + 7, v13 + 1, v13);
      if ( v14 == v13 )
        goto LABEL_11;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v13 + 16));
LABEL_11:
    v19 = (__int64)v7;
    ((void (*)(void))sub_180026760)();
    v8 = 0;
  }
  else
  {
    sub_180026760(v7);
  }
  if ( v8 < 0 )
    goto LABEL_13;
  v20 = 0LL;
  v15 = sub_180009FE4(v19, &v20);
  v8 = v15;
  v16 = v20;
  if ( v15 >= 0 && (v15 = sub_18001DD10(a2, v20), v8 = v15, v15 >= 0) )
    v8 = 0;
  else
    sub_180003268(retaddr, 424, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v15);
  if ( v16 )
    (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
LABEL_20:
  if ( v19 )
    sub_180026760(v19);
  return (unsigned int)v8;
}
