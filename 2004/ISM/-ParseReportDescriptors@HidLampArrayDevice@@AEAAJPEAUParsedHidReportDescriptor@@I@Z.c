/*
 * XREFs of ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800A7734
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800A6DAC (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ @ 0x1800A85F0 (-ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ.c)
 *     ?TryCreateAndInitialize@HidLampArrayAttributesReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800A9BE0 (-TryCreateAndInitialize@HidLampArrayAttributesReportParser@@SAJPEBUParsedHidReportDescriptor@@PE.c)
 *     ?TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800AA090 (-TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@.c)
 *     ?TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800AA9A4 (-TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBUParsedHidReportDescriptor@.c)
 *     ?TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800AB864 (-TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEA.c)
 *     ?TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800ABFE8 (-TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEA.c)
 *     ?TryCreateAndInitialize@HidLampArrayControlReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800AC464 (-TryCreateAndInitialize@HidLampArrayControlReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPE.c)
 */

__int64 __fastcall HidLampArrayDevice::ParseReportDescriptors(
        HidLampArrayDevice *this,
        struct ParsedHidReportDescriptor *a2,
        unsigned int a3)
{
  unsigned int i; // r14d
  int v7; // ebx
  struct HidLampArrayAttributesReportParser *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rsi
  struct HidLampArrayAttributesReportParser *v11; // rbx
  __int64 v12; // rcx
  const struct ParsedHidReportDescriptor *v13; // rsi
  struct HidLampArrayAttributesReportParser *v14; // rbx
  __int64 v15; // rcx
  struct HidLampArrayAttributesReportParser *v16; // rbx
  __int64 v17; // rcx
  struct HidLampArrayAttributesReportParser *v18; // rbx
  __int64 v19; // rcx
  struct HidLampArrayAttributesReportParser *v20; // rbx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  struct HidLampArrayAttributesReportParser *v26; // [rsp+68h] [rbp+48h] BYREF

  for ( i = 0; i < a3; ++i )
  {
    if ( *((_QWORD *)this + 72) )
      goto LABEL_8;
    v26 = 0LL;
    v7 = HidLampArrayAttributesReportParser::TryCreateAndInitialize(
           (struct ParsedHidReportDescriptor *)((char *)a2 + 24 * i),
           &v26);
    if ( v7 < 0 )
    {
      v23 = 648LL;
      goto LABEL_42;
    }
    v8 = v26;
    if ( !v26 )
    {
LABEL_8:
      v10 = 24LL * i;
      if ( *((_QWORD *)this + 74) )
        goto LABEL_14;
      v26 = 0LL;
      v7 = HidLampAttributesRequestReportParser::TryCreateAndInitialize(
             (struct ParsedHidReportDescriptor *)((char *)a2 + v10),
             &v26);
      if ( v7 < 0 )
      {
        v23 = 662LL;
        goto LABEL_42;
      }
      v11 = v26;
      if ( !v26 )
      {
LABEL_14:
        v13 = (struct ParsedHidReportDescriptor *)((char *)a2 + v10);
        if ( *((_QWORD *)this + 75) )
          goto LABEL_53;
        v26 = 0LL;
        v7 = HidLampAttributesResponseReportParser::TryCreateAndInitialize(v13, &v26);
        if ( v7 < 0 )
        {
          v23 = 676LL;
          goto LABEL_42;
        }
        v14 = v26;
        if ( !v26 )
        {
LABEL_53:
          if ( *((_QWORD *)this + 76) )
            goto LABEL_54;
          v26 = 0LL;
          v7 = HidLampMultiUpdateReportParser::TryCreateAndInitialize(v13, &v26);
          if ( v7 < 0 )
          {
            v23 = 690LL;
            goto LABEL_42;
          }
          v16 = v26;
          if ( !v26 )
          {
LABEL_54:
            if ( *((_QWORD *)this + 77) )
              goto LABEL_55;
            v26 = 0LL;
            v7 = HidLampRangeUpdateReportParser::TryCreateAndInitialize(v13, &v26);
            if ( v7 < 0 )
            {
              v23 = 704LL;
              goto LABEL_42;
            }
            v18 = v26;
            if ( !v26 )
            {
LABEL_55:
              if ( !*((_QWORD *)this + 73) )
              {
                v26 = 0LL;
                v7 = HidLampArrayControlReportParser::TryCreateAndInitialize(v13, &v26);
                if ( v7 < 0 )
                {
                  v23 = 718LL;
LABEL_42:
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v23,
                    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
                    (const char *)(unsigned int)v7);
                  if ( v26 )
                    (*(void (__fastcall **)(struct HidLampArrayAttributesReportParser *))(*(_QWORD *)v26 + 16LL))(v26);
                  return (unsigned int)v7;
                }
                v20 = v26;
                if ( v26 )
                {
                  v21 = *((_QWORD *)this + 73);
                  if ( v21 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
                  *((_QWORD *)this + 73) = v20;
                }
              }
            }
            else
            {
              v19 = *((_QWORD *)this + 77);
              if ( v19 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
              *((_QWORD *)this + 77) = v18;
            }
          }
          else
          {
            v17 = *((_QWORD *)this + 76);
            if ( v17 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
            *((_QWORD *)this + 76) = v16;
          }
        }
        else
        {
          v15 = *((_QWORD *)this + 75);
          if ( v15 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          *((_QWORD *)this + 75) = v14;
        }
      }
      else
      {
        v12 = *((_QWORD *)this + 74);
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        *((_QWORD *)this + 74) = v11;
      }
    }
    else
    {
      v9 = *((_QWORD *)this + 72);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      *((_QWORD *)this + 72) = v8;
    }
  }
  v22 = HidLampArrayDevice::ValidateReportParsers(this);
  v7 = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v22);
    return (unsigned int)v7;
  }
  return 0LL;
}
