/*
 * XREFs of CEndpointCharacteristics::GetDeviceFormatInternal__lambda_c3615feb6884e65459670eec2aeca07c___ @ 0x180118AB4
 * Callers:
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_f36e01949351335f5e9acafaa1161a48___ @ 0x180117238 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_f36e01949351335f5e9acafaa1161a48.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180020540 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180047D20 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180048FB8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18004CAE4 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D6F0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c___ @ 0x180118510 (CEndpointCharacteristics--GetDefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c___.c)
 *     _lambda_f36e01949351335f5e9acafaa1161a48_::operator() @ 0x18011A62C (_lambda_f36e01949351335f5e9acafaa1161a48_--operator().c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x18011EE94 (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 *     ?Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ @ 0x18011EED0 (-Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::GetDeviceFormatInternal__lambda_c3615feb6884e65459670eec2aeca07c___(
        CEndpointCharacteristics *this,
        char a2,
        unsigned __int8 a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        __int128 *a5,
        struct tWAVEFORMATEX **a6)
{
  int v7; // r12d
  int DefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c; // ebx
  void *v10; // rcx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  const PROPERTYKEY *v13; // rax
  int v14; // eax
  unsigned int v15; // r8d
  const char *v16; // r9
  BYTE *pData; // rbx
  struct tWAVEFORMATEX *v18; // rcx
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  struct tWAVEFORMATEX *v21; // rcx
  int updated; // eax
  struct tWAVEFORMATEX *v23; // rsi
  int v24; // eax
  struct tWAVEFORMATEX *v25; // rcx
  unsigned int v27; // [rsp+20h] [rbp-A9h]
  char *v28; // [rsp+28h] [rbp-A1h]
  _BYTE v29[8]; // [rsp+40h] [rbp-89h] BYREF
  struct tWAVEFORMATEX *v30; // [rsp+48h] [rbp-81h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+50h] [rbp-79h] BYREF
  struct tWAVEFORMATEX **v32; // [rsp+68h] [rbp-61h]
  struct tWAVEFORMATEX *v33; // [rsp+70h] [rbp-59h] BYREF
  char v34; // [rsp+78h] [rbp-51h]
  __int128 v35; // [rsp+80h] [rbp-49h] BYREF
  __int128 v36; // [rsp+90h] [rbp-39h]
  __int128 v37; // [rsp+A0h] [rbp-29h]
  __int128 v38; // [rsp+B0h] [rbp-19h]
  __int64 v39; // [rsp+C0h] [rbp-9h]
  GUID fmtid; // [rsp+D0h] [rbp+7h] BYREF
  DWORD pid; // [rsp+E0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+4Fh]

  v7 = a3;
  *a6 = 0LL;
  v30 = 0LL;
  if ( !a2 )
  {
    v13 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
    if ( a4 != eKeywordDetectorConnector )
      v13 = &PKEY_AudioEngine_DeviceFormat;
    fmtid = v13->fmtid;
    pid = v13->pid;
    memset(&pvar, 0, sizeof(pvar));
    v14 = (*(__int64 (__fastcall **)(_QWORD, GUID *, struct tagPROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
            *((_QWORD *)this + 5),
            &fmtid,
            &pvar);
    if ( v14 >= 0 )
    {
      if ( pvar.vt )
      {
        if ( pvar.vt == 65 )
        {
          if ( IsValidWfxBlob(&pvar) )
          {
            pData = pvar.bstrblobVal.pData;
            v29[0] = 0;
            lambda_f36e01949351335f5e9acafaa1161a48_::operator()(a5, pvar.bstrblobVal.pData, v29);
            if ( v29[0] )
            {
              v32 = &v30;
              v33 = 0LL;
              v34 = 1;
              DefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c = CloneWaveFormat(
                                                                         (const struct tWAVEFORMATEX *)pData,
                                                                         &v33);
              if ( v34 )
              {
                v18 = *v32;
                *v32 = v33;
                if ( v18 )
                  CoTaskMemFree(v18);
              }
              if ( DefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c < 0 )
              {
                v19 = (unsigned int)DefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c;
                v20 = 6566LL;
LABEL_30:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v20,
                  (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                  (const char *)v19);
                PropVariantClear((PROPVARIANT *)&pvar);
LABEL_35:
                v25 = v30;
                goto LABEL_37;
              }
            }
          }
          else
          {
            wil::details::in1diag3::Log_Win32(retaddr, (void *)0x19AB, v15, v16, v27);
          }
        }
        else
        {
          LODWORD(v28) = pvar.vt;
          wil::details::in1diag3::Log_Win32Msg(
            retaddr,
            (void *)0x19B7,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0xD,
            (unsigned int)"Unexpected vartype %d (0x%08x)",
            v28,
            pvar.vt);
        }
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        6554LL,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v14);
    }
    if ( !v30 )
    {
      v32 = &v30;
      v33 = 0LL;
      v34 = 1;
      v35 = *a5;
      v36 = a5[1];
      v37 = a5[2];
      v38 = a5[3];
      v39 = *((_QWORD *)a5 + 8);
      DefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c = CEndpointCharacteristics::GetDefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c___(
                                                                 this,
                                                                 v7,
                                                                 a4,
                                                                 (__int64)&v35,
                                                                 &v33);
      if ( v34 )
      {
        v21 = *v32;
        *v32 = v33;
        if ( v21 )
          CoTaskMemFree(v21);
      }
      if ( DefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c < 0 )
      {
        v19 = (unsigned int)DefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c;
        v20 = 6590LL;
        goto LABEL_30;
      }
      updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty((const unsigned __int16 **)this, v7, a4, v30);
      DefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c = updated;
      if ( updated < 0 )
      {
        v19 = (unsigned int)updated;
        v20 = 6593LL;
        goto LABEL_30;
      }
    }
    PropVariantClear((PROPVARIANT *)&pvar);
    goto LABEL_32;
  }
  *(_QWORD *)&pvar.vt = &v30;
  pvar.hVal.QuadPart = 0LL;
  *((_BYTE *)&pvar.decVal + 16) = 1;
  v35 = *a5;
  v36 = a5[1];
  v37 = a5[2];
  v38 = a5[3];
  v39 = *((_QWORD *)a5 + 8);
  DefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c = CEndpointCharacteristics::GetDefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c___(
                                                             this,
                                                             a3,
                                                             a4,
                                                             (__int64)&v35,
                                                             (struct tWAVEFORMATEX **)&pvar.hVal.QuadPart);
  if ( *((_BYTE *)&pvar.decVal + 16) )
  {
    v10 = **(void ***)&pvar.vt;
    **(_QWORD **)&pvar.vt = pvar.hVal.QuadPart;
    if ( v10 )
      CoTaskMemFree(v10);
  }
  if ( DefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c < 0 )
  {
    v11 = (unsigned int)DefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c;
    v12 = 6545LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v11);
    goto LABEL_35;
  }
LABEL_32:
  v23 = v30;
  v24 = ValidateWaveFormatEx(v30);
  DefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c = v24;
  if ( v24 < 0 )
  {
    v11 = (unsigned int)v24;
    v12 = 6598LL;
    goto LABEL_34;
  }
  v25 = 0LL;
  *a6 = v23;
  DefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c = 0;
LABEL_37:
  v30 = 0LL;
  if ( v25 )
    CoTaskMemFree(v25);
  return (unsigned int)DefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c;
}
