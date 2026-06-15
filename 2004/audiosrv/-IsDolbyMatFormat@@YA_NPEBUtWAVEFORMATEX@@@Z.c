/*
 * XREFs of ?IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x18001FE10
 * Callers:
 *     ?DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180049750 (-DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MID.c)
 *     std::_Func_impl_no_alloc__lambda_cc7043d9a598c166c40b04e724fa0d9a__bool_WAVEFORMATEXTENSIBLE_const___::_Do_call @ 0x18004BBC0 (std--_Func_impl_no_alloc__lambda_cc7043d9a598c166c40b04e724fa0d9a__bool_WAVEFORMATEXTENSIBLE_con.c)
 *     std::_Func_impl_no_alloc__lambda_64ebcd876265745cd6de26faffeb735b__bool_WAVEFORMATEXTENSIBLE_const___::_Do_call @ 0x180066070 (std--_Func_impl_no_alloc__lambda_64ebcd876265745cd6de26faffeb735b__bool_WAVEFORMATE_ea_180066070.c)
 *     _lambda_edd11abfd7fb8004be40d25e4712f682_::operator() @ 0x180066B74 (_lambda_edd11abfd7fb8004be40d25e4712f682_--operator().c)
 *     _lambda_1cae16f642e2019a980ae53ef80da94f_::operator() @ 0x180119C10 (_lambda_1cae16f642e2019a980ae53ef80da94f_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_3d65a50f10c769ac06d6234efb7a29ec__bool_WAVEFORMATEXTENSIBLE_const___::_Do_call @ 0x180120AB0 (std--_Func_impl_no_alloc__lambda_3d65a50f10c769ac06d6234efb7a29ec__bool_WAVEFORMATE_ea_180120AB0.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsDolbyMatFormat(const struct tWAVEFORMATEX *a1)
{
  int nChannels; // r11d
  DWORD nSamplesPerSec; // r10d
  DWORD nAvgBytesPerSec; // r9d
  int nBlockAlign; // ebx
  WORD cbSize; // dx
  WORD wFormatTag; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  WORD v10; // ax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v15; // rax
  WORD wBitsPerSample; // ax

  if ( !a1 )
    return 0;
  nChannels = a1->nChannels;
  if ( !(_WORD)nChannels )
    return 0;
  nSamplesPerSec = a1->nSamplesPerSec;
  if ( !nSamplesPerSec )
    return 0;
  nAvgBytesPerSec = a1->nAvgBytesPerSec;
  if ( !nAvgBytesPerSec )
    return 0;
  nBlockAlign = a1->nBlockAlign;
  if ( !(_WORD)nBlockAlign )
    return 0;
  cbSize = a1->cbSize;
  if ( cbSize > 0x400u )
    return 0;
  wFormatTag = a1->wFormatTag;
  if ( ((a1->wFormatTag - 1) & 0xFFFD) == 0 )
  {
    if ( !cbSize
      && (a1->wBitsPerSample & 7) == 0
      && (unsigned __int16)nChannels <= 2u
      && nAvgBytesPerSec == (nSamplesPerSec * a1->wBitsPerSample * nChannels) >> 3 )
    {
      goto LABEL_21;
    }
    return 0;
  }
  if ( wFormatTag != 0xFFFE || cbSize < 0x16u )
    return 0;
  v7 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
  if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) )
    v7 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
  if ( !v7 )
    goto LABEL_13;
  v15 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
  if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) )
    v15 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
  if ( !v15 )
  {
LABEL_13:
    v8 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
    if ( !v8 )
      v8 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
    if ( v8 )
    {
      wBitsPerSample = a1->wBitsPerSample;
      LOWORD(v9) = wBitsPerSample;
      if ( wBitsPerSample != 32 && wBitsPerSample != 64 )
        return 0;
    }
    else
    {
      v9 = a1->wBitsPerSample;
      if ( (((_WORD)v9 - 8) & 0xFFE7) != 0 )
        return 0;
    }
    v10 = a1[1].wFormatTag;
    if ( v10
      && (unsigned __int16)v9 >= v10
      && nAvgBytesPerSec == (nSamplesPerSec * (unsigned __int16)v9 * nChannels) >> 3
      && nBlockAlign == (unsigned __int16)v9 * nChannels / 8 )
    {
      goto LABEL_21;
    }
    return 0;
  }
LABEL_21:
  if ( wFormatTag != 0xFFFE )
    return 0;
  v11 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000000c_0cea_0010_8000_00aa00389b71.Data1;
  if ( !v11 )
    v11 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000000c_0cea_0010_8000_00aa00389b71.Data4;
  if ( v11 )
  {
    v12 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000010c_0cea_0010_8000_00aa00389b71.Data1;
    if ( !v12 )
      v12 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000010c_0cea_0010_8000_00aa00389b71.Data4;
    if ( v12 )
    {
      v13 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000030c_0cea_0010_8000_00aa00389b71.Data1;
      if ( !v13 )
        v13 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000030c_0cea_0010_8000_00aa00389b71.Data4;
      if ( v13 )
        return 0;
    }
  }
  return nSamplesPerSec == 192000 && nChannels == 8 && a1->wBitsPerSample == 16;
}
