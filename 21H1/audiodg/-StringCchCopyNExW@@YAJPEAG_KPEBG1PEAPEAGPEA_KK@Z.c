/*
 * XREFs of ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x140016500
 * Callers:
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000CA20 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000E150 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14003C10C (-CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14003C564 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 * Callees:
 *     memset_0 @ 0x14001DBE8 (memset_0.c)
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
    v4 = (const unsigned __int16 *)&unk_140070AE8;
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
