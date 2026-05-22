/*
 * XREFs of ?TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800AC4A8
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800A7BF4 (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002836C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??0HidLampRangeUpdateReportParser@@AEAA@XZ @ 0x1800AC00C (--0HidLampRangeUpdateReportParser@@AEAA@XZ.c)
 *     ?IsParserValid@HidLampRangeUpdateReportParser@@CA_NPEBV1@@Z @ 0x1800AC420 (-IsParserValid@HidLampRangeUpdateReportParser@@CA_NPEBV1@@Z.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800ACBF8 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

__int64 __fastcall HidLampRangeUpdateReportParser::TryCreateAndInitialize(
        const struct ParsedHidReportDescriptor *a1,
        struct HidLampRangeUpdateReportParser **a2)
{
  HidLampRangeUpdateReportParser *v4; // rax
  struct HidLampRangeUpdateReportParser *updated; // rdi
  struct HidLampRangeUpdateReportParser *v6; // rbx
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
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v4 = (HidLampRangeUpdateReportParser *)RefCountedObject::operator new(0x218uLL);
  if ( v4 )
    updated = HidLampRangeUpdateReportParser::HidLampRangeUpdateReportParser(v4);
  else
    updated = 0LL;
  v6 = updated;
  if ( updated )
  {
    (*(void (__fastcall **)(struct HidLampRangeUpdateReportParser *))(*(_QWORD *)updated + 8LL))(updated);
    *((_BYTE *)updated + 16) = *((_BYTE *)a1 + 4);
    if ( *(_DWORD *)a1 == 2 )
    {
      *((_BYTE *)updated + 17) = 2;
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 2); i = (unsigned int)(i + 1) )
      {
        v8 = *((_QWORD *)a1 + 2);
        if ( *(_WORD *)(v8 + 72 * i + 18) == 96 && *(_WORD *)(v8 + 72 * i + 16) == 89 )
        {
          v9 = *(_WORD *)(v8 + 72 * i + 10);
          switch ( v9 )
          {
            case 'U':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                v10 = *(_OWORD *)(v8 + 72 * i + 16);
                v11 = *(_OWORD *)(v8 + 72 * i + 32);
                v12 = *(_OWORD *)(v8 + 72 * i + 48);
                v13 = *(_QWORD *)(v8 + 72 * i + 64);
                *(_OWORD *)((char *)updated + 24) = *(_OWORD *)(v8 + 72 * i);
                *(_OWORD *)((char *)updated + 40) = v10;
                *(_OWORD *)((char *)updated + 56) = v11;
                *(_OWORD *)((char *)updated + 72) = v12;
                *((_QWORD *)updated + 11) = v13;
              }
              break;
            case 'a':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                v14 = *(_OWORD *)(v8 + 72 * i + 16);
                v15 = *(_OWORD *)(v8 + 72 * i + 32);
                v16 = *(_OWORD *)(v8 + 72 * i + 48);
                v17 = *(_QWORD *)(v8 + 72 * i + 64);
                *((_OWORD *)updated + 6) = *(_OWORD *)(v8 + 72 * i);
                *((_OWORD *)updated + 7) = v14;
                *((_OWORD *)updated + 8) = v15;
                *((_OWORD *)updated + 9) = v16;
                *((_QWORD *)updated + 20) = v17;
              }
              break;
            case 'b':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                v18 = *(_OWORD *)(v8 + 72 * i + 16);
                v19 = *(_OWORD *)(v8 + 72 * i + 32);
                v20 = *(_OWORD *)(v8 + 72 * i + 48);
                v21 = *(_QWORD *)(v8 + 72 * i + 64);
                *(_OWORD *)((char *)updated + 168) = *(_OWORD *)(v8 + 72 * i);
                *(_OWORD *)((char *)updated + 184) = v18;
                *(_OWORD *)((char *)updated + 200) = v19;
                *(_OWORD *)((char *)updated + 216) = v20;
                *((_QWORD *)updated + 29) = v21;
              }
              break;
            case 'Q':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                v22 = *(_OWORD *)(v8 + 72 * i + 16);
                v23 = *(_OWORD *)(v8 + 72 * i + 32);
                v24 = *(_OWORD *)(v8 + 72 * i + 48);
                v25 = *(_QWORD *)(v8 + 72 * i + 64);
                *((_OWORD *)updated + 15) = *(_OWORD *)(v8 + 72 * i);
                *((_OWORD *)updated + 16) = v22;
                *((_OWORD *)updated + 17) = v23;
                *((_OWORD *)updated + 18) = v24;
                *((_QWORD *)updated + 38) = v25;
              }
              break;
            case 'R':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                v26 = *(_OWORD *)(v8 + 72 * i + 16);
                v27 = *(_OWORD *)(v8 + 72 * i + 32);
                v28 = *(_OWORD *)(v8 + 72 * i + 48);
                v29 = *(_QWORD *)(v8 + 72 * i + 64);
                *(_OWORD *)((char *)updated + 312) = *(_OWORD *)(v8 + 72 * i);
                *(_OWORD *)((char *)updated + 328) = v26;
                *(_OWORD *)((char *)updated + 344) = v27;
                *(_OWORD *)((char *)updated + 360) = v28;
                *((_QWORD *)updated + 47) = v29;
              }
              break;
            case 'S':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                v30 = *(_OWORD *)(v8 + 72 * i + 16);
                v31 = *(_OWORD *)(v8 + 72 * i + 32);
                v32 = *(_OWORD *)(v8 + 72 * i + 48);
                v33 = *(_QWORD *)(v8 + 72 * i + 64);
                *((_OWORD *)updated + 24) = *(_OWORD *)(v8 + 72 * i);
                *((_OWORD *)updated + 25) = v30;
                *((_OWORD *)updated + 26) = v31;
                *((_OWORD *)updated + 27) = v32;
                *((_QWORD *)updated + 56) = v33;
              }
              break;
            default:
              if ( v9 == 84 && *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                v34 = *(_OWORD *)(v8 + 72 * i + 16);
                v35 = *(_OWORD *)(v8 + 72 * i + 32);
                v36 = *(_OWORD *)(v8 + 72 * i + 48);
                v37 = *(_QWORD *)(v8 + 72 * i + 64);
                *(_OWORD *)((char *)updated + 456) = *(_OWORD *)(v8 + 72 * i);
                *(_OWORD *)((char *)updated + 472) = v34;
                *(_OWORD *)((char *)updated + 488) = v35;
                *(_OWORD *)((char *)updated + 504) = v36;
                *((_QWORD *)updated + 65) = v37;
              }
              break;
          }
        }
      }
    }
    v38 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 2) + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1) + 4)
                       + 7
                       + *(_DWORD *)(*((_QWORD *)a1 + 2) + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1))) >> 3;
    *((_DWORD *)updated + 5) = v38;
    *((_BYTE *)updated + 528) = HidChannelValueInfo::IsValid(
                                  (struct HidLampRangeUpdateReportParser *)((char *)updated + 240),
                                  v38,
                                  255LL);
    *((_BYTE *)updated + 529) = HidChannelValueInfo::IsValid(
                                  (struct HidLampRangeUpdateReportParser *)((char *)updated + 312),
                                  v39,
                                  v40);
    *((_BYTE *)updated + 530) = HidChannelValueInfo::IsValid(
                                  (struct HidLampRangeUpdateReportParser *)((char *)updated + 384),
                                  v41,
                                  v42);
    *((_BYTE *)updated + 531) = HidChannelValueInfo::IsValid(
                                  (struct HidLampRangeUpdateReportParser *)((char *)updated + 456),
                                  v43,
                                  v44);
    if ( HidLampRangeUpdateReportParser::IsParserValid(updated) )
    {
      v6 = 0LL;
      *a2 = updated;
    }
    if ( v6 )
      (*(void (__fastcall **)(struct HidLampRangeUpdateReportParser *))(*(_QWORD *)v6 + 16LL))(v6);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamprangeupdatereportparser.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
