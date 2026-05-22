/*
 * XREFs of ?TryCreateAndInitialize@HidLampArrayControlReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800AC924
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800A7BF4 (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002836C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800ACBF8 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

__int64 __fastcall HidLampArrayControlReportParser::TryCreateAndInitialize(
        const struct ParsedHidReportDescriptor *a1,
        struct HidLampArrayControlReportParser **a2)
{
  char *v4; // rax
  _BYTE *v5; // rdi
  _BYTE *v6; // rbx
  unsigned int i; // edx
  __int64 v8; // rax
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  __int128 v11; // xmm4
  __int64 v12; // xmm0_8
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v4 = (char *)RefCountedObject::operator new(0x60uLL);
  v5 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &RefCountedObject::`vftable';
    *((_DWORD *)v4 + 2) = 1;
    *(_QWORD *)v4 = &HidLampArrayControlReportParser::`vftable';
    *((_WORD *)v4 + 8) = 0;
    *(_QWORD *)(v4 + 20) = 0LL;
    *(_QWORD *)(v4 + 28) = 0LL;
    *(_QWORD *)(v4 + 36) = 0LL;
    *((_QWORD *)v4 + 6) = 0LL;
    *((_QWORD *)v4 + 7) = 0LL;
    *((_QWORD *)v4 + 8) = 0LL;
    *((_QWORD *)v4 + 9) = 0LL;
    *((_DWORD *)v4 + 20) = 0;
    v4[84] = 0;
    *((_DWORD *)v4 + 11) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v5 + 8LL))(v5);
    v5[16] = *((_BYTE *)a1 + 4);
    if ( *(_DWORD *)a1 == 2 )
    {
      v5[17] = 2;
      for ( i = 0; i < *((_DWORD *)a1 + 2); ++i )
      {
        v8 = *((_QWORD *)a1 + 2);
        if ( *(_WORD *)(v8 + 72LL * i + 18) == 112
          && *(_WORD *)(v8 + 72LL * i + 16) == 89
          && *(_WORD *)(v8 + 72LL * i + 10) == 113
          && *(_WORD *)(v8 + 72LL * i + 8) == 89 )
        {
          v9 = *(_OWORD *)(v8 + 72LL * i + 16);
          v10 = *(_OWORD *)(v8 + 72LL * i + 32);
          v11 = *(_OWORD *)(v8 + 72LL * i + 48);
          v12 = *(_QWORD *)(v8 + 72LL * i + 64);
          *(_OWORD *)(v5 + 24) = *(_OWORD *)(v8 + 72LL * i);
          *(_OWORD *)(v5 + 40) = v9;
          *(_OWORD *)(v5 + 56) = v10;
          *(_OWORD *)(v5 + 72) = v11;
          *((_QWORD *)v5 + 11) = v12;
        }
      }
    }
    v13 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 2) + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1) + 4)
                       + *(_DWORD *)(*((_QWORD *)a1 + 2) + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1))
                       + 7) >> 3;
    *((_DWORD *)v5 + 5) = v13;
    if ( v5[17] == 2 && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v5 + 24), v13, 1LL) )
    {
      v6 = 0LL;
      *a2 = (struct HidLampArrayControlReportParser *)v5;
    }
    if ( v6 )
      (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v6 + 16LL))(v6);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraycontrolreportparser.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
