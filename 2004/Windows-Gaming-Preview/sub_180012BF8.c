/*
 * XREFs of sub_180012BF8 @ 0x180012BF8
 * Callers:
 *     sub_180012B70 @ 0x180012B70 (sub_180012B70.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180011A50 @ 0x180011A50 (sub_180011A50.c)
 *     sub_180012D80 @ 0x180012D80 (sub_180012D80.c)
 *     sub_180013620 @ 0x180013620 (sub_180013620.c)
 *     sub_180013690 @ 0x180013690 (sub_180013690.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180012BF8(__int64 a1)
{
  int v2; // eax
  int v3; // esi
  __int64 v4; // rdi
  float *v5; // rax
  float v6; // xmm0_4
  _QWORD *v7; // rsi
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = 0LL;
  v2 = sub_180012D80(*(_QWORD *)a1, &v14);
  v3 = v2;
  if ( v2 < 0 )
  {
    sub_180003268(
      retaddr,
      275,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      v2);
    v4 = v14;
    goto LABEL_12;
  }
  v5 = *(float **)(a1 + 8);
  v6 = *v5;
  if ( *v5 <= v5[1] )
    v6 = v5[1];
  v7 = **(_QWORD ***)(a1 + 16);
  *v7 = 0LL;
  v8 = operator new(0x50uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v9 = v8;
  if ( !v8 )
  {
    v4 = v14;
    v3 = -2147024882;
LABEL_10:
    sub_180003268(
      retaddr,
      279,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      v3);
    goto LABEL_12;
  }
  v10 = v8 + 2;
  sub_180011A50(v8 + 2);
  v11 = qword_18005ADB0;
  *v9 = off_180049788;
  v9[1] = off_180049768;
  *v10 = off_180049720;
  v9[7] = 1LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  *v9 = off_180049900;
  v9[1] = off_180049768;
  *v10 = off_180049720;
  v4 = 0LL;
  v9[8] = v14;
  *((_DWORD *)v9 + 18) = (int)v6;
  v3 = sub_180013690(v9, &xmmword_180050DA0, v7);
  sub_180013620(v9);
  if ( v3 < 0 )
    goto LABEL_10;
  v3 = 0;
LABEL_12:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v3;
}
