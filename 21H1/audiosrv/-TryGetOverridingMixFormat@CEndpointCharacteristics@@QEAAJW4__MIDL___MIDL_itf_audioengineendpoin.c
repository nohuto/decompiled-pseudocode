/*
 * XREFs of ?TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180012BA0
 * Callers:
 *     AudioServerGetMixFormat @ 0x180012120 (AudioServerGetMixFormat.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18001E950 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?UseAutoConvertPCMForLoopbackStreams@CEndpointCharacteristics@@QEAA_NXZ @ 0x1801207A4 (-UseAutoConvertPCMForLoopbackStreams@CEndpointCharacteristics@@QEAA_NXZ.c)
 * Callees:
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180047D20 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180048FB8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18004C3C8 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D6F0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800BD18C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x18011EE94 (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 *     ?Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ @ 0x18011EED0 (-Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::TryGetOverridingMixFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  unsigned int v8; // esi
  struct _RTL_CRITICAL_SECTION *v9; // rbp
  unsigned int i; // edx
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v16; // r8d
  const char *v17; // r9
  BYTE *pData; // rbx
  int v19; // eax
  int v20; // eax
  unsigned int v21; // [rsp+20h] [rbp-A8h]
  char *v22; // [rsp+28h] [rbp-A0h]
  struct tagPROPVARIANT pvar; // [rsp+40h] [rbp-88h] BYREF
  __int128 v24; // [rsp+60h] [rbp-68h]
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+70h] [rbp-58h]
  __int128 v26; // [rsp+78h] [rbp-50h] BYREF
  unsigned int v27; // [rsp+88h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v8 = 0;
  *a4 = 0LL;
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8688);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8688));
  v25 = v9;
  v24 = (__int128)*a3;
  for ( i = 0; i < 9; ++i )
  {
    v11 = qword_18019E7F0[2 * i] - v24;
    if ( !v11 )
      v11 = qword_18019E7F0[2 * i + 1] - *((_QWORD *)&v24 + 1);
    if ( !v11 )
    {
      v26 = PKEY_AudioEngine_SignalProcessingMode_Specific_OverridingMixFormat;
      v12 = 2;
      if ( a2 == eKeywordDetectorConnector )
        v12 = 602;
      v27 = i + v12;
      memset(&pvar, 0, sizeof(pvar));
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, struct tagPROPVARIANT *, _QWORD *))(**((_QWORD **)this + 5)
                                                                                             + 40LL))(
              *((_QWORD *)this + 5),
              &v26,
              &pvar,
              qword_18019E7F0);
      if ( v13 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1AF6,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v13,
          v21);
      }
      else if ( pvar.vt )
      {
        if ( pvar.vt == 65 )
        {
          if ( (unsigned int)IsValidWfxBlob(&pvar) )
          {
            pData = pvar.bstrblobVal.pData;
            if ( pvar.bstrblobVal.pData )
            {
              v19 = ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData);
              if ( !v19 )
              {
                v20 = CloneWaveFormat((const struct tWAVEFORMATEX *)pData, a4);
                v14 = v20;
                if ( v20 >= 0 )
                  goto LABEL_11;
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x1B1C,
                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                  (const char *)(unsigned int)v20,
                  v21);
LABEL_10:
                v8 = v14;
LABEL_11:
                PropVariantClear((PROPVARIANT *)&pvar);
                goto LABEL_12;
              }
              LODWORD(v22) = v19;
              v8 = -2004287480;
              wil::details::in1diag3::Return_HrMsg(
                retaddr,
                (void *)0x1B1A,
                (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                (const char *)0x88890008LL,
                (int)"ValidateUncompressedWaveFormatEx returned 0x%08x",
                v22);
            }
          }
          else
          {
            wil::details::in1diag3::Log_Win32(retaddr, (void *)0x1B03, v16, v17, v21);
          }
        }
        else
        {
          LODWORD(v22) = pvar.vt;
          wil::details::in1diag3::Log_Win32Msg(
            retaddr,
            (void *)0x1B10,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0xD,
            (unsigned int)"unexpected vartype %d (0x%x)",
            v22,
            pvar.vt);
        }
      }
      v14 = v8;
      goto LABEL_10;
    }
  }
  v8 = -2147023728;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1AF1,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)0x80070490LL,
    v21);
LABEL_12:
  if ( v9 )
    LeaveCriticalSection(v9);
  return v8;
}
