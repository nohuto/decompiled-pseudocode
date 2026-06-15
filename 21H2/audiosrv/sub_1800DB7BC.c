/*
 * XREFs of sub_1800DB7BC @ 0x1800DB7BC
 * Callers:
 *     sub_18000CBF0 @ 0x18000CBF0 (sub_18000CBF0.c)
 *     ??$_Parse_fp_with_locale@$0A@@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@CA?AU_Num_get_parse_result@1@QEADHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@1@1AEBVlocale@1@@Z @ 0x1800121B0 (--$_Parse_fp_with_locale@$0A@@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@.c)
 * Callees:
 *     sub_180048714 @ 0x180048714 (sub_180048714.c)
 *     sub_18004A758 @ 0x18004A758 (sub_18004A758.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800DB748 @ 0x1800DB748 (sub_1800DB748.c)
 *     sub_1800DD094 @ 0x1800DD094 (sub_1800DD094.c)
 *     sub_1800DD610 @ 0x1800DD610 (sub_1800DD610.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800DB7BC(__int64 a1, __int64 a2, _QWORD *a3, int a4)
{
  unsigned int *v8; // rdi
  int v9; // ebx
  __int64 v10; // rdx
  _DWORD *v11; // rbx
  unsigned int v12; // esi
  unsigned __int64 v13; // rax
  int v14; // r8d
  __int16 v15; // cx
  int v16; // eax
  unsigned int v17; // r11d
  int v18; // r11d
  unsigned int v19; // esi
  unsigned int v20; // r10d
  __int64 *v22; // [rsp+20h] [rbp-50h]
  __int64 v23; // [rsp+40h] [rbp-30h] BYREF
  __int64 v24; // [rsp+48h] [rbp-28h] BYREF
  __int64 v25; // [rsp+50h] [rbp-20h] BYREF
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-18h] BYREF
  _DWORD *v27; // [rsp+68h] [rbp-8h]
  unsigned int *v28; // [rsp+A0h] [rbp+30h] BYREF

  v8 = 0LL;
  v28 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v23 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v27 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, 0LL, &v23);
  if ( v9 < 0 )
    goto LABEL_35;
  v9 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v23 + 40LL))(v23, &unk_180172D18, pvar);
  if ( v9 < 0 )
    goto LABEL_35;
  if ( LOWORD(pvar[0]) != 65 || LODWORD(pvar[1]) < 0x1C )
    goto LABEL_4;
  v11 = v27;
  v12 = v27[2];
  v13 = 16LL * v12;
  if ( v13 > 0xFFFFFFFF || LODWORD(pvar[1]) != (_DWORD)v13 + 12 )
  {
    v9 = -2004287467;
    goto LABEL_35;
  }
  if ( ((unsigned int)sub_1800DD610(*(unsigned int *)(a2 + 4), v10, 0LL) & *v11) == 0 )
    goto LABEL_4;
  v15 = *(_WORD *)(a2 + 14);
  v16 = 8;
  switch ( v15 )
  {
    case 8:
      v16 = 1;
      break;
    case 16:
      v16 = 2;
      break;
    case 24:
      v16 = 4;
      break;
    default:
      if ( v15 != 32 )
        v16 = v14;
      break;
  }
  if ( (v16 & v11[1]) == 0 )
    goto LABEL_4;
  v17 = v14;
  if ( !v12 )
    goto LABEL_4;
  while ( !(unsigned int)sub_1800DB748(a2, (__int64)&v11[4 * v17 + 3]) )
  {
    v17 = v18 + 1;
    if ( v17 >= v12 )
      goto LABEL_4;
  }
  v9 = sub_18004A758((unsigned __int16 *)a2, (__int64 *)&v28);
  if ( v9 < 0
    || (v22 = &v24,
        v9 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a1 + 24LL))(a1, &unk_18015C488, 23LL),
        v9 < 0) )
  {
    v8 = v28;
    goto LABEL_35;
  }
  v19 = 0;
  v8 = v28;
  if ( !dword_18019E43C )
  {
LABEL_4:
    v9 = -2004287480;
    goto LABEL_35;
  }
  while ( 1 )
  {
    *((_OWORD *)v8 + 2) = xmmword_18019E860[v19];
    if ( (unsigned int)sub_1800DD094(v8 + 16) )
      break;
LABEL_29:
    if ( ++v19 >= v20 )
      goto LABEL_4;
  }
  LODWORD(v22) = a4;
  v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)v24 + 80LL))(
         v24,
         v8,
         *v8,
         0LL,
         v22,
         &v25);
  if ( v9 )
  {
    v20 = dword_18019E43C;
    goto LABEL_29;
  }
  if ( a3 )
    v9 = sub_180048714((unsigned __int16 *)v8 + 32, a3);
LABEL_35:
  PropVariantClear(pvar);
  if ( v8 )
    CoTaskMemFree(v8);
  if ( v9 < 0 )
    sub_18005E8F8((__int64)"GetAcceptableSPDIFTypeForDevice", 5537, v9);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  return (unsigned int)v9;
}
