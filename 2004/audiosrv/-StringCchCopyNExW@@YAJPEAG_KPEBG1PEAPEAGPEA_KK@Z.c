/*
 * XREFs of ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18002A740
 * Callers:
 *     ?RuntimeClassInitialize@CDeviceGraphObjectsStore@@QEAAJPEBG@Z @ 0x18002A67C (-RuntimeClassInitialize@CDeviceGraphObjectsStore@@QEAAJPEBG@Z.c)
 *     ?RuntimeClassInitialize@CAudioSessionStore@@QEAAJPEBG0@Z @ 0x18002AA70 (-RuntimeClassInitialize@CAudioSessionStore@@QEAAJPEBG0@Z.c)
 *     ?GetAuxiliaryInputDescriptor@CSharedStreamGroupProxy@@UEAAJPEAUAuxiliaryInputDescriptor@@@Z @ 0x180045E60 (-GetAuxiliaryInputDescriptor@CSharedStreamGroupProxy@@UEAAJPEAUAuxiliaryInputDescriptor@@@Z.c)
 *     ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x1800594D8 (-GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUI.c)
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180060F5C (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x1800BC340 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?DevQueryResultCallback@@YAXPEAUHDEVQUERY__@@PEAXPEBU_DEV_QUERY_RESULT_ACTION_DATA@@@Z @ 0x1800BC610 (-DevQueryResultCallback@@YAXPEAUHDEVQUERY__@@PEAXPEBU_DEV_QUERY_RESULT_ACTION_DATA@@@Z.c)
 *     ?Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z @ 0x1800C5DE0 (-Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z.c)
 *     ?GetKsMidiDeviceInfo@@YAJPEBGPEAPEAGPEAI@Z @ 0x1800E2AB8 (-GetKsMidiDeviceInfo@@YAJPEBGPEAPEAGPEAI@Z.c)
 *     ?AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@PEBG@Z @ 0x1800E48C0 (-AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@PEBG@Z.c)
 *     ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z @ 0x1800E6ED0 (-RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z.c)
 *     ?CreateInstance@CAecAttributes@@SAJPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4AecParam@@PEAPEAVCStreamGroupAttributes@@@Z @ 0x1800F0698 (-CreateInstance@CAecAttributes@@SAJPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4AecPara.c)
 *     ?GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800F1678 (-GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIA.c)
 *     ?RuntimeClassInitialize@CVirtualAudioStream@@QEAAJPEAUIAudioProcess@@KPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800F7FEC (-RuntimeClassInitialize@CVirtualAudioStream@@QEAAJPEAUIAudioProcess@@KPEBGW4__MIDL___MIDL_itf_mm.c)
 *     ?Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x180130C2C (-Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU.c)
 * Callees:
 *     memset_0 @ 0x18006B69C (memset_0.c)
 */

__int64 __fastcall StringCchCopyNExW(char *a1, unsigned __int64 a2, const unsigned __int16 *a3, unsigned __int64 a4)
{
  const unsigned __int16 *v4; // r10
  int v7; // ebx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rax
  signed __int64 v10; // r10
  unsigned __int16 *v11; // rdx
  __int64 v12; // r8
  unsigned __int16 v13; // cx
  unsigned __int64 v14; // r11

  v4 = a3;
  v7 = 0;
  if ( !a1 && a2 || a2 > 0x7FFFFFFF )
    v7 = -2147024809;
  if ( v7 < 0 )
  {
    if ( !a2 )
      return (unsigned int)v7;
    goto LABEL_28;
  }
  if ( a4 >= 0x7FFFFFFF )
  {
    v7 = -2147024809;
    if ( !a2 )
      return (unsigned int)v7;
LABEL_28:
    *(_WORD *)a1 = 0;
    return (unsigned int)v7;
  }
  if ( !a3 )
  {
    v4 = (const unsigned __int16 *)&unk_18015D734;
    a4 = 0LL;
  }
  v7 = 0;
  if ( a2 )
  {
    v8 = a4 - a2;
    v9 = a2;
    v10 = (char *)v4 - a1;
    v11 = (unsigned __int16 *)a1;
    v12 = 0LL;
    while ( v8 + v9 )
    {
      v13 = *(unsigned __int16 *)((char *)v11 + v10);
      if ( !v13 )
        break;
      *v11 = v13;
      ++v12;
      ++v11;
      if ( !--v9 )
      {
        --v11;
        v7 = -2147024774;
        --v12;
        break;
      }
    }
    v14 = a2 - v12;
    *v11 = 0;
    if ( v7 >= 0 && v14 > 1 && 2 * v14 > 2 )
      memset_0(&a1[2 * v12 + 2], 0, 2 * v14 - 2);
  }
  else if ( a4 )
  {
    if ( *v4 )
    {
      v7 = -2147024774;
      if ( !a1 )
        return (unsigned int)-2147024809;
    }
  }
  return (unsigned int)v7;
}
