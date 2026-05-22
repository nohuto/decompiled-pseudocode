/*
 * XREFs of ?TryCreateAndInitialize@HidLampArrayAttributesReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800A9BE0
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800A7734 (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x1800283CC (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??0HidLampArrayAttributesReportParser@@AEAA@XZ @ 0x1800A9828 (--0HidLampArrayAttributesReportParser@@AEAA@XZ.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800AC738 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

__int64 __fastcall HidLampArrayAttributesReportParser::TryCreateAndInitialize(
        const struct ParsedHidReportDescriptor *a1,
        struct HidLampArrayAttributesReportParser **a2)
{
  HidLampArrayAttributesReportParser *v4; // rax
  HidLampArrayAttributesReportParser *v5; // rdi
  HidLampArrayAttributesReportParser *v6; // rbx
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
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v4 = (HidLampArrayAttributesReportParser *)RefCountedObject::operator new(0x1C8uLL);
  if ( v4 )
    v5 = HidLampArrayAttributesReportParser::HidLampArrayAttributesReportParser(v4);
  else
    v5 = 0LL;
  v6 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(HidLampArrayAttributesReportParser *))(*(_QWORD *)v5 + 8LL))(v5);
    *((_BYTE *)v5 + 16) = *((_BYTE *)a1 + 4);
    if ( *(_DWORD *)a1 == 2 )
    {
      *((_BYTE *)v5 + 17) = 2;
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 2); i = (unsigned int)(i + 1) )
      {
        v8 = *((_QWORD *)a1 + 2);
        if ( *(_WORD *)(v8 + 72 * i + 18) == 2 && *(_WORD *)(v8 + 72 * i + 16) == 89 )
        {
          v9 = *(_WORD *)(v8 + 72 * i + 10);
          switch ( v9 )
          {
            case 3:
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
            case 4:
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
            case 5:
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
            case 6:
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
            case 7:
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
            default:
              if ( v9 == 8 && *(_WORD *)(v8 + 72 * i + 8) == 89 )
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
          }
        }
      }
    }
    v34 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 2) + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1) + 4)
                       + *(_DWORD *)(*((_QWORD *)a1 + 2) + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1))
                       + 7) >> 3;
    *((_DWORD *)v5 + 5) = v34;
    if ( *((_BYTE *)v5 + 17) == 2
      && HidChannelValueInfo::IsValid((HidLampArrayAttributesReportParser *)((char *)v5 + 24), v34, 0x7FFFFFFFLL)
      && HidChannelValueInfo::IsValid((HidLampArrayAttributesReportParser *)((char *)v5 + 96), v35, v36)
      && HidChannelValueInfo::IsValid((HidLampArrayAttributesReportParser *)((char *)v5 + 168), v37, v38)
      && HidChannelValueInfo::IsValid((HidLampArrayAttributesReportParser *)((char *)v5 + 240), v39, v40)
      && HidChannelValueInfo::IsValid((HidLampArrayAttributesReportParser *)((char *)v5 + 312), v41, v42)
      && HidChannelValueInfo::IsValid((HidLampArrayAttributesReportParser *)((char *)v5 + 384), v43, v44) )
    {
      v6 = 0LL;
      *a2 = v5;
    }
    if ( v6 )
      (*(void (__fastcall **)(HidLampArrayAttributesReportParser *))(*(_QWORD *)v6 + 16LL))(v6);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparrayattributesreportparser.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
