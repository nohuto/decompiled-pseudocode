/*
 * XREFs of ?DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEAPEAU3@@Z @ 0x1800D70AC
 * Callers:
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800D6998 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180049004 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18004C418 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     ?ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x1800D6258 (-ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?InitWaveFormatEx@@YAXPEAUWAVEFORMATEXTENSIBLE@@_NHHHHK@Z @ 0x1800D81BC (-InitWaveFormatEx@@YAXPEAUWAVEFORMATEXTENSIBLE@@_NHHHHK@Z.c)
 */

__int64 __fastcall DeriveConnectorFormatWithHighestBitDepthFromStreamFormat(
        struct CEndpointCharacteristics *a1,
        unsigned int a2,
        struct tWAVEFORMATEX *a3,
        struct _GUID *a4,
        struct tWAVEFORMATEX **a5)
{
  struct tWAVEFORMATEX **v5; // rsi
  unsigned int v10; // r14d
  int v11; // edi
  __int64 v12; // rdx
  DWORD nSamplesPerSec; // r8d
  unsigned __int16 *v15; // r12
  unsigned int v16; // r15d
  int v17; // ebx
  __int64 v18; // rdx
  int nChannels; // [rsp+28h] [rbp-69h]
  struct _GUID v21; // [rsp+50h] [rbp-41h] BYREF
  struct _GUID *v22; // [rsp+60h] [rbp-31h]
  struct tWAVEFORMATEX **v23; // [rsp+68h] [rbp-29h]
  struct WAVEFORMATEXTENSIBLE Src; // [rsp+70h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+57h]

  v5 = a5;
  v22 = a4;
  v23 = a5;
  if ( a3->wFormatTag == 0xFFFE )
    v10 = *(_DWORD *)&a3[1].nChannels;
  else
    v10 = 0;
  *a5 = 0LL;
  v11 = ValidateUncompressedWaveFormatEx(a3);
  if ( v11 < 0 )
  {
    v12 = 1487LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  if ( v11 )
  {
    v21 = *a4;
    v11 = ConnectorSupportsFormat(a1, a2, a3, &v21);
    if ( v11 < 0 )
    {
      v12 = 1514LL;
      goto LABEL_6;
    }
    v17 = CloneWaveFormat(a3, a5);
    if ( v17 < 0 )
    {
      v18 = 1515LL;
      goto LABEL_16;
    }
  }
  else
  {
    nSamplesPerSec = a3->nSamplesPerSec;
    nChannels = a3->nChannels;
    memset(&Src, 0, sizeof(Src));
    InitWaveFormatEx(&Src, 1, nSamplesPerSec, 32, 32, nChannels, v10);
    v21 = *a4;
    v11 = ConnectorSupportsFormat(a1, a2, &Src.Format, &v21);
    if ( v11 < 0 )
    {
      v15 = (unsigned __int16 *)&unk_1801717A0;
      v16 = 0;
      do
      {
        if ( v16 >= 5 )
          break;
        InitWaveFormatEx(&Src, 0, a3->nSamplesPerSec, *v15, v15[1], a3->nChannels, v10);
        v21 = *v22;
        ++v16;
        v15 += 2;
        v11 = ConnectorSupportsFormat(a1, a2, &Src.Format, &v21);
      }
      while ( v11 < 0 );
      v5 = v23;
      if ( v11 < 0 )
      {
        v12 = 1507LL;
        goto LABEL_6;
      }
    }
    v17 = CloneWaveFormat(&Src.Format, v5);
    if ( v17 < 0 )
    {
      v18 = 1509LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v17);
      return (unsigned int)v17;
    }
  }
  return 0LL;
}
