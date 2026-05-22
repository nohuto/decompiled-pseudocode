/*
 * XREFs of ?TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800AA550
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800A7BF4 (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002836C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800A4980 (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogUnexpectedUsage@LampArrayTelemetry@@QEAAXGG@Z @ 0x1800A4B88 (-LogUnexpectedUsage@LampArrayTelemetry@@QEAAXGG@Z.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800ACBF8 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

__int64 __fastcall HidLampAttributesRequestReportParser::TryCreateAndInitialize(
        const struct ParsedHidReportDescriptor *a1,
        struct HidLampAttributesRequestReportParser **a2)
{
  char *v4; // rax
  char *v5; // rdi
  char *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int i; // r14d
  __int64 v11; // rax
  __int128 v12; // xmm2
  __int128 v13; // xmm3
  __int128 v14; // xmm4
  __int64 v15; // xmm0_8
  LampArrayTelemetry *v16; // rcx
  __int64 v17; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

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
    (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))(v5);
    v5[16] = *((_BYTE *)a1 + 4);
    if ( *(_DWORD *)a1 == 2 )
    {
      v5[17] = 2;
      for ( i = 0; i < *((_DWORD *)a1 + 2); ++i )
      {
        v11 = *((_QWORD *)a1 + 2);
        if ( *(_WORD *)(v11 + 72LL * i + 18) == 32 && *(_WORD *)(v11 + 72LL * i + 16) == 89 )
        {
          if ( *(_WORD *)(v11 + 72LL * i + 10) == 33 && *(_WORD *)(v11 + 72LL * i + 8) == 89 )
          {
            v12 = *(_OWORD *)(v11 + 72LL * i + 16);
            v13 = *(_OWORD *)(v11 + 72LL * i + 32);
            v14 = *(_OWORD *)(v11 + 72LL * i + 48);
            v15 = *(_QWORD *)(v11 + 72LL * i + 64);
            *(_OWORD *)(v5 + 24) = *(_OWORD *)(v11 + 72LL * i);
            *(_OWORD *)(v5 + 40) = v12;
            *(_OWORD *)(v5 + 56) = v13;
            *(_OWORD *)(v5 + 72) = v14;
            *((_QWORD *)v5 + 11) = v15;
          }
          else
          {
            LampArrayTelemetry::GetInstance(v8, v7, v9);
            LampArrayTelemetry::LogUnexpectedUsage(v16);
          }
        }
      }
    }
    v17 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 2) + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1) + 4)
                       + *(_DWORD *)(*((_QWORD *)a1 + 2) + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1))
                       + 7) >> 3;
    *((_DWORD *)v5 + 5) = v17;
    if ( v5[17] == 2 && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v5 + 24), v17, 0x7FFFFFFFLL) )
    {
      v6 = 0LL;
      *a2 = (struct HidLampAttributesRequestReportParser *)v5;
    }
    if ( v6 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 16LL))(v6);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampattributesrequestreportparser.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
