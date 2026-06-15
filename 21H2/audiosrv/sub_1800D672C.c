/*
 * XREFs of sub_1800D672C @ 0x1800D672C
 * Callers:
 *     sub_18000CBF0 @ 0x18000CBF0 (sub_18000CBF0.c)
 *     ??$_Parse_fp_with_locale@$0A@@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@CA?AU_Num_get_parse_result@1@QEADHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@1@1AEBVlocale@1@@Z @ 0x1800121B0 (--$_Parse_fp_with_locale@$0A@@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@.c)
 *     sub_180031350 @ 0x180031350 (sub_180031350.c)
 * Callees:
 *     sub_18001E300 @ 0x18001E300 (sub_18001E300.c)
 *     sub_180029F54 @ 0x180029F54 (sub_180029F54.c)
 *     sub_180048714 @ 0x180048714 (sub_180048714.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800D76E0 @ 0x1800D76E0 (sub_1800D76E0.c)
 *     sub_1800DC0A4 @ 0x1800DC0A4 (sub_1800DC0A4.c)
 *     sub_18011C8E8 @ 0x18011C8E8 (sub_18011C8E8.c)
 */

// Hidden C++ exception states: #wind=6
__int64 sub_1800D672C(_QWORD *a1, unsigned __int16 *a2, __int64 a3, __int128 *a4, ...)
{
  unsigned __int16 *v6; // rbx
  _QWORD *v7; // r12
  _QWORD *v8; // rdi
  int v9; // r15d
  _DWORD *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int16 *v13; // rcx
  __int64 v14; // rdx
  int v15; // ecx
  __int128 *v16; // r15
  unsigned int v17; // r14d
  LPVOID pv[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v20; // [rsp+40h] [rbp-10h] BYREF
  void *v21; // [rsp+90h] [rbp+40h] BYREF
  LPVOID Src; // [rsp+A0h] [rbp+50h] BYREF
  __int128 *v23; // [rsp+A8h] [rbp+58h]
  LPVOID v24; // [rsp+B0h] [rbp+60h] BYREF
  va_list va; // [rsp+B0h] [rbp+60h]
  __int64 v26; // [rsp+B8h] [rbp+68h]
  _QWORD *v27; // [rsp+C0h] [rbp+70h]
  va_list va1; // [rsp+C8h] [rbp+78h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  va_arg(va1, _QWORD);
  v26 = va_arg(va1, _QWORD);
  v27 = va_arg(va1, _QWORD *);
  v23 = a4;
  pv[1] = 0LL;
  v24 = 0LL;
  Src = 0LL;
  v6 = 0LL;
  v21 = 0LL;
  pv[0] = 0LL;
  v7 = v27;
  *v27 = 0LL;
  v8 = (_QWORD *)a1[2];
  v27 = v8;
  (*(void (__fastcall **)(_QWORD *))(*v8 + 8LL))(v8);
  v9 = sub_180048714(a2, pv);
  v10 = pv[0];
  if ( v9 < 0 )
    goto LABEL_22;
  if ( *((_WORD *)pv[0] + 1) > 2u
    && dword_18016D110[(unsigned int)v26]
    && !(*(unsigned int (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1)
    && (unsigned int)sub_180029F54((__int64)a1) == 1 )
  {
    if ( (int)sub_18011C8E8(a1, &Src) < 0 )
      goto LABEL_22;
    if ( *((_WORD *)Src + 1) == 2 )
      goto LABEL_10;
  }
  if ( (int)sub_180048714(a2, &v21) < 0 )
    goto LABEL_21;
  v6 = (unsigned __int16 *)v21;
  v9 = sub_1800DC0A4(v8, v11, v21, 0LL);
  if ( v9 )
  {
LABEL_10:
    if ( (*(int (__fastcall **)(_QWORD *, LPVOID *))(*v8 + 40LL))(v8, (LPVOID *)va) < 0 )
      goto LABEL_22;
    v13 = (unsigned __int16 *)Src;
    if ( !Src )
    {
      if ( (int)sub_18011C8E8(a1, &Src) < 0 )
        goto LABEL_22;
      v13 = (unsigned __int16 *)Src;
    }
    if ( (int)sub_180048714(v13, &v21) >= 0 )
    {
      v6 = (unsigned __int16 *)v21;
      if ( *((_WORD *)v10 + 1) != *((_WORD *)Src + 1) )
      {
        v15 = v10[1];
        *((_DWORD *)v21 + 1) = v15;
        *((_DWORD *)v6 + 2) = v15 * v6[6];
        v9 = sub_1800DC0A4(v8, v14, v6, 0LL);
      }
      goto LABEL_17;
    }
LABEL_21:
    v6 = (unsigned __int16 *)v21;
    goto LABEL_22;
  }
LABEL_17:
  if ( v9 >= 0 )
  {
    v16 = v23;
    v20 = *v23;
    if ( (int)sub_1800D76E0(a1, &v20, v12, v6, v6) >= 0 )
    {
      v20 = *v16;
      if ( !(unsigned int)sub_18001E300((__int64)a1, &v20, 1, v6, (unsigned __int16 *)v10, 0LL) )
        sub_180048714(v6, v7);
    }
  }
LABEL_22:
  v17 = *v7 == 0LL ? 0x88890008 : 0;
  CoTaskMemFree(v10);
  CoTaskMemFree(v6);
  CoTaskMemFree(Src);
  Src = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
  CoTaskMemFree(v24);
  v24 = 0LL;
  CoTaskMemFree(0LL);
  return v17;
}
