/*
 * XREFs of ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x18004A888
 * Callers:
 *     AudioServerIsFormatSupported @ 0x18000CBC0 (AudioServerIsFormatSupported.c)
 *     ?ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x1800D55C8 (-ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x1800DB6AC (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     ?IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEAPEAU3@@Z @ 0x1800DBF94 (-IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     AudioServerGetBufferSizeLimits @ 0x1800DDEB0 (AudioServerGetBufferSizeLimits.c)
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x1801313A4 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 * Callees:
 *     memcpy_0 @ 0x18007418F (memcpy_0.c)
 */

__int64 __fastcall CreateKSFormatFromWFXFormat(const struct tWAVEFORMATEX *Src, struct KSDATAFORMAT_WAVEFORMATEX **a2)
{
  unsigned int v2; // ebx
  struct KSDATAFORMAT_WAVEFORMATEX *v5; // rax
  __int64 v6; // rax

  v2 = 0;
  if ( Src && a2 )
  {
    if ( Src->wFormatTag == 0xFFFE && Src->cbSize < 0x16u )
    {
      return (unsigned int)-2147024809;
    }
    else
    {
      v5 = (struct KSDATAFORMAT_WAVEFORMATEX *)CoTaskMemAlloc(Src->cbSize + 82LL);
      *a2 = v5;
      if ( v5 )
      {
        v5->DataFormat.FormatSize = Src->cbSize + 82;
        (*a2)->DataFormat.Flags = 0;
        (*a2)->DataFormat.SampleSize = 0;
        (*a2)->DataFormat.Reserved = 0;
        (*a2)->DataFormat.MajorFormat = GUID_73647561_0000_0010_8000_00aa00389b71;
        (*a2)->DataFormat.Specifier = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
        memcpy_0(&(*a2)->WaveFormatEx, Src, Src->cbSize + 18LL);
        v6 = (__int64)*a2;
        if ( Src->wFormatTag == 0xFFFE )
        {
          *(_OWORD *)(v6 + 32) = *(_OWORD *)((char *)&Src[1].nSamplesPerSec + 2);
        }
        else
        {
          *(GUID *)(v6 + 32) = GUID_00000000_0000_0010_8000_00aa00389b71;
          (*a2)->DataFormat.SubFormat.Data1 = Src->wFormatTag;
        }
      }
      else
      {
        return (unsigned int)-2147024882;
      }
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
