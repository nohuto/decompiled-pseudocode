/*
 * XREFs of ?TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800AAE64
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800A7BF4 (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002836C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??0HidLampAttributesResponseReportParser@@AEAA@XZ @ 0x1800AA734 (--0HidLampAttributesResponseReportParser@@AEAA@XZ.c)
 *     ?IsParserValid@HidLampAttributesResponseReportParser@@CA_NPEBV1@@Z @ 0x1800AAB28 (-IsParserValid@HidLampAttributesResponseReportParser@@CA_NPEBV1@@Z.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800ACBF8 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

__int64 __fastcall HidLampAttributesResponseReportParser::TryCreateAndInitialize(
        const struct ParsedHidReportDescriptor *a1,
        struct HidLampAttributesResponseReportParser **a2)
{
  HidLampAttributesResponseReportParser *v4; // rax
  struct HidLampAttributesResponseReportParser *v5; // rdi
  struct HidLampAttributesResponseReportParser *v6; // rbx
  __int64 i; // r8
  __int64 v8; // rax
  __int16 v9; // dx
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __int128 v12; // xmm4
  __int64 v13; // xmm0_8
  __int128 v14; // xmm2
  __int128 v15; // xmm3
  __int128 v16; // xmm4
  __int64 v17; // xmm0_8
  __int128 v18; // xmm2
  __int128 v19; // xmm3
  __int128 v20; // xmm4
  __int64 v21; // xmm0_8
  __int128 v22; // xmm2
  __int128 v23; // xmm3
  __int128 v24; // xmm4
  __int64 v25; // xmm0_8
  __int128 v26; // xmm2
  __int128 v27; // xmm3
  __int128 v28; // xmm4
  __int64 v29; // xmm0_8
  __int128 v30; // xmm2
  __int128 v31; // xmm3
  __int128 v32; // xmm4
  __int64 v33; // xmm0_8
  __int128 v34; // xmm2
  __int128 v35; // xmm3
  __int128 v36; // xmm4
  __int64 v37; // xmm0_8
  __int128 v38; // xmm2
  __int128 v39; // xmm3
  __int128 v40; // xmm4
  __int64 v41; // xmm0_8
  __int128 v42; // xmm2
  __int128 v43; // xmm3
  __int128 v44; // xmm4
  __int64 v45; // xmm0_8
  __int128 v46; // xmm2
  __int128 v47; // xmm3
  __int128 v48; // xmm4
  __int64 v49; // xmm0_8
  __int128 v50; // xmm2
  __int128 v51; // xmm3
  __int128 v52; // xmm4
  __int64 v53; // xmm0_8
  __int128 v54; // xmm2
  __int128 v55; // xmm3
  __int128 v56; // xmm4
  __int64 v57; // xmm0_8
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // rdx
  __int64 v66; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v4 = (HidLampAttributesResponseReportParser *)RefCountedObject::operator new(0x380uLL);
  if ( v4 )
    v5 = HidLampAttributesResponseReportParser::HidLampAttributesResponseReportParser(v4);
  else
    v5 = 0LL;
  v6 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(struct HidLampAttributesResponseReportParser *))(*(_QWORD *)v5 + 8LL))(v5);
    *((_BYTE *)v5 + 16) = *((_BYTE *)a1 + 4);
    if ( *(_DWORD *)a1 == 2 )
    {
      *((_BYTE *)v5 + 17) = 2;
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 2); i = (unsigned int)(i + 1) )
      {
        v8 = *((_QWORD *)a1 + 2);
        if ( *(_WORD *)(v8 + 72 * i + 18) == 34 && *(_WORD *)(v8 + 72 * i + 16) == 89 )
        {
          v9 = *(_WORD *)(v8 + 72 * i + 10);
          switch ( v9 )
          {
            case '!':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                v10 = *(_OWORD *)(v8 + 72 * i + 16);
                v11 = *(_OWORD *)(v8 + 72 * i + 32);
                v12 = *(_OWORD *)(v8 + 72 * i + 48);
                v13 = *(_QWORD *)(v8 + 72 * i + 64);
                *(_OWORD *)((char *)v5 + 24) = *(_OWORD *)(v8 + 72 * i);
                *(_OWORD *)((char *)v5 + 40) = v10;
                *(_OWORD *)((char *)v5 + 56) = v11;
                *(_OWORD *)((char *)v5 + 72) = v12;
                *((_QWORD *)v5 + 11) = v13;
              }
              break;
            case '#':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                v14 = *(_OWORD *)(v8 + 72 * i + 16);
                v15 = *(_OWORD *)(v8 + 72 * i + 32);
                v16 = *(_OWORD *)(v8 + 72 * i + 48);
                v17 = *(_QWORD *)(v8 + 72 * i + 64);
                *((_OWORD *)v5 + 6) = *(_OWORD *)(v8 + 72 * i);
                *((_OWORD *)v5 + 7) = v14;
                *((_OWORD *)v5 + 8) = v15;
                *((_OWORD *)v5 + 9) = v16;
                *((_QWORD *)v5 + 20) = v17;
              }
              break;
            case '$':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                v18 = *(_OWORD *)(v8 + 72 * i + 16);
                v19 = *(_OWORD *)(v8 + 72 * i + 32);
                v20 = *(_OWORD *)(v8 + 72 * i + 48);
                v21 = *(_QWORD *)(v8 + 72 * i + 64);
                *(_OWORD *)((char *)v5 + 168) = *(_OWORD *)(v8 + 72 * i);
                *(_OWORD *)((char *)v5 + 184) = v18;
                *(_OWORD *)((char *)v5 + 200) = v19;
                *(_OWORD *)((char *)v5 + 216) = v20;
                *((_QWORD *)v5 + 29) = v21;
              }
              break;
            case '%':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                v22 = *(_OWORD *)(v8 + 72 * i + 16);
                v23 = *(_OWORD *)(v8 + 72 * i + 32);
                v24 = *(_OWORD *)(v8 + 72 * i + 48);
                v25 = *(_QWORD *)(v8 + 72 * i + 64);
                *((_OWORD *)v5 + 15) = *(_OWORD *)(v8 + 72 * i);
                *((_OWORD *)v5 + 16) = v22;
                *((_OWORD *)v5 + 17) = v23;
                *((_OWORD *)v5 + 18) = v24;
                *((_QWORD *)v5 + 38) = v25;
              }
              break;
            case '\'':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                v26 = *(_OWORD *)(v8 + 72 * i + 16);
                v27 = *(_OWORD *)(v8 + 72 * i + 32);
                v28 = *(_OWORD *)(v8 + 72 * i + 48);
                v29 = *(_QWORD *)(v8 + 72 * i + 64);
                *(_OWORD *)((char *)v5 + 312) = *(_OWORD *)(v8 + 72 * i);
                *(_OWORD *)((char *)v5 + 328) = v26;
                *(_OWORD *)((char *)v5 + 344) = v27;
                *(_OWORD *)((char *)v5 + 360) = v28;
                *((_QWORD *)v5 + 47) = v29;
              }
              break;
            case '&':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                v30 = *(_OWORD *)(v8 + 72 * i + 16);
                v31 = *(_OWORD *)(v8 + 72 * i + 32);
                v32 = *(_OWORD *)(v8 + 72 * i + 48);
                v33 = *(_QWORD *)(v8 + 72 * i + 64);
                *((_OWORD *)v5 + 24) = *(_OWORD *)(v8 + 72 * i);
                *((_OWORD *)v5 + 25) = v30;
                *((_OWORD *)v5 + 26) = v31;
                *((_OWORD *)v5 + 27) = v32;
                *((_QWORD *)v5 + 56) = v33;
              }
              break;
            case '(':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                v34 = *(_OWORD *)(v8 + 72 * i + 16);
                v35 = *(_OWORD *)(v8 + 72 * i + 32);
                v36 = *(_OWORD *)(v8 + 72 * i + 48);
                v37 = *(_QWORD *)(v8 + 72 * i + 64);
                *(_OWORD *)((char *)v5 + 600) = *(_OWORD *)(v8 + 72 * i);
                *(_OWORD *)((char *)v5 + 616) = v34;
                *(_OWORD *)((char *)v5 + 632) = v35;
                *(_OWORD *)((char *)v5 + 648) = v36;
                *((_QWORD *)v5 + 83) = v37;
              }
              break;
            case ')':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                v38 = *(_OWORD *)(v8 + 72 * i + 16);
                v39 = *(_OWORD *)(v8 + 72 * i + 32);
                v40 = *(_OWORD *)(v8 + 72 * i + 48);
                v41 = *(_QWORD *)(v8 + 72 * i + 64);
                *((_OWORD *)v5 + 42) = *(_OWORD *)(v8 + 72 * i);
                *((_OWORD *)v5 + 43) = v38;
                *((_OWORD *)v5 + 44) = v39;
                *((_OWORD *)v5 + 45) = v40;
                *((_QWORD *)v5 + 92) = v41;
              }
              break;
            case '*':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                v42 = *(_OWORD *)(v8 + 72 * i + 16);
                v43 = *(_OWORD *)(v8 + 72 * i + 32);
                v44 = *(_OWORD *)(v8 + 72 * i + 48);
                v45 = *(_QWORD *)(v8 + 72 * i + 64);
                *(_OWORD *)((char *)v5 + 744) = *(_OWORD *)(v8 + 72 * i);
                *(_OWORD *)((char *)v5 + 760) = v42;
                *(_OWORD *)((char *)v5 + 776) = v43;
                *(_OWORD *)((char *)v5 + 792) = v44;
                *((_QWORD *)v5 + 101) = v45;
              }
              break;
            case '+':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                v46 = *(_OWORD *)(v8 + 72 * i + 16);
                v47 = *(_OWORD *)(v8 + 72 * i + 32);
                v48 = *(_OWORD *)(v8 + 72 * i + 48);
                v49 = *(_QWORD *)(v8 + 72 * i + 64);
                *((_OWORD *)v5 + 51) = *(_OWORD *)(v8 + 72 * i);
                *((_OWORD *)v5 + 52) = v46;
                *((_OWORD *)v5 + 53) = v47;
                *((_OWORD *)v5 + 54) = v48;
                *((_QWORD *)v5 + 110) = v49;
              }
              break;
            case ',':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                v50 = *(_OWORD *)(v8 + 72 * i + 16);
                v51 = *(_OWORD *)(v8 + 72 * i + 32);
                v52 = *(_OWORD *)(v8 + 72 * i + 48);
                v53 = *(_QWORD *)(v8 + 72 * i + 64);
                *(_OWORD *)((char *)v5 + 456) = *(_OWORD *)(v8 + 72 * i);
                *(_OWORD *)((char *)v5 + 472) = v50;
                *(_OWORD *)((char *)v5 + 488) = v51;
                *(_OWORD *)((char *)v5 + 504) = v52;
                *((_QWORD *)v5 + 65) = v53;
              }
              break;
            default:
              if ( v9 == 45 && *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                v54 = *(_OWORD *)(v8 + 72 * i + 16);
                v55 = *(_OWORD *)(v8 + 72 * i + 32);
                v56 = *(_OWORD *)(v8 + 72 * i + 48);
                v57 = *(_QWORD *)(v8 + 72 * i + 64);
                *((_OWORD *)v5 + 33) = *(_OWORD *)(v8 + 72 * i);
                *((_OWORD *)v5 + 34) = v54;
                *((_OWORD *)v5 + 35) = v55;
                *((_OWORD *)v5 + 36) = v56;
                *((_QWORD *)v5 + 74) = v57;
              }
              break;
          }
        }
      }
    }
    v58 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 2) + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1) + 4)
                       + 7
                       + *(_DWORD *)(*((_QWORD *)a1 + 2) + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1))) >> 3;
    *((_DWORD *)v5 + 5) = v58;
    *((_BYTE *)v5 + 888) = HidChannelValueInfo::IsValid(
                             (struct HidLampAttributesResponseReportParser *)((char *)v5 + 600),
                             v58,
                             255LL);
    *((_BYTE *)v5 + 889) = HidChannelValueInfo::IsValid(
                             (struct HidLampAttributesResponseReportParser *)((char *)v5 + 672),
                             v59,
                             v60);
    *((_BYTE *)v5 + 890) = HidChannelValueInfo::IsValid(
                             (struct HidLampAttributesResponseReportParser *)((char *)v5 + 744),
                             v61,
                             v62);
    *((_BYTE *)v5 + 891) = HidChannelValueInfo::IsValid(
                             (struct HidLampAttributesResponseReportParser *)((char *)v5 + 816),
                             v63,
                             v64);
    *((_BYTE *)v5 + 892) = HidChannelValueInfo::IsValid(
                             (struct HidLampAttributesResponseReportParser *)((char *)v5 + 528),
                             v65,
                             0x7FFFFFFFLL);
    if ( HidLampAttributesResponseReportParser::IsParserValid(v5, v66) )
    {
      v6 = 0LL;
      *a2 = v5;
    }
    if ( v6 )
      (*(void (__fastcall **)(struct HidLampAttributesResponseReportParser *))(*(_QWORD *)v6 + 16LL))(v6);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampattributesresponsereportparser.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
