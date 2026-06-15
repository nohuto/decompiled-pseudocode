/*
 * XREFs of ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x180002DF8
 * Callers:
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180002B80 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x1800C6880 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x1800C84B8 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z.c)
 * Callees:
 *     ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001B590 (-Fork@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 */

const unsigned __int16 *__fastcall CAudioEndpointId::GetBuffer(CAudioEndpointId *this)
{
  const unsigned __int16 *result; // rax
  ATL::CAtlException *v3; // [rsp+20h] [rbp-18h] BYREF

  try
  {
    if ( *(int *)(*(_QWORD *)this - 8LL) > 1 )
      ATL::CSimpleStringT<unsigned short,0>::Fork(this, *(unsigned int *)(*(_QWORD *)this - 16LL));
    result = *(const unsigned __int16 **)this;
  }
  catch ( ATL::CAtlException *v3 )
  {
    if ( *(_DWORD *)v3 == -1073741571 )
      _o__resetstkoflw();
    return 0LL;
  }
  return result;
}
