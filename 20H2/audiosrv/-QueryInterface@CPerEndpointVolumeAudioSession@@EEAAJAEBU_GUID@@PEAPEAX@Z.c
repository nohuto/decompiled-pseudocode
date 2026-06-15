/*
 * XREFs of ?QueryInterface@CPerEndpointVolumeAudioSession@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CA120
 * Callers:
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@G7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074330 (-QueryInterface@CPerEndpointVolumeAudioSession@@G7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@GBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074340 (-QueryInterface@CPerEndpointVolumeAudioSession@@GBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@GBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074350 (-QueryInterface@CPerEndpointVolumeAudioSession@@GBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@GCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074360 (-QueryInterface@CPerEndpointVolumeAudioSession@@GCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@GDNI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074370 (-QueryInterface@CPerEndpointVolumeAudioSession@@GDNI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?QueryInterface@CAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180005200 (-QueryInterface@CAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::QueryInterface(
        CPerEndpointVolumeAudioSession *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // r9d
  __int64 v5; // rcx

  v3 = 0;
  if ( a3 )
  {
    v5 = *(_QWORD *)&IID_IAudioEndpointVolumeCallback.Data1 - *(_QWORD *)&a2->Data1;
    if ( *(_QWORD *)&IID_IAudioEndpointVolumeCallback.Data1 == *(_QWORD *)&a2->Data1 )
      v5 = *(_QWORD *)IID_IAudioEndpointVolumeCallback.Data4 - *(_QWORD *)a2->Data4;
    if ( v5 )
    {
      return (unsigned int)CAudioSession::QueryInterface(this, a2, a3);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)this + 10);
      *a3 = (void *)(((unsigned __int64)this + 984) & -(__int64)(this != 0LL));
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
