/*
 * XREFs of ?LogExclusiveModeListenerRunning@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z @ 0x18010CA18
 * Callers:
 *     ?RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ @ 0x18010D868 (-RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ.c)
 *     ?Shutdown@CExclusiveModeListener@@AEAAXXZ @ 0x18010DEEC (-Shutdown@CExclusiveModeListener@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x18010BBD0 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_G_ea_18010BBD0.c)
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::LogExclusiveModeListenerRunning(
        const CHAR *this,
        int a2,
        __int64 a3,
        __int64 a4)
{
  const CHAR *v4; // rax
  const CHAR *v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = this;
  if ( (unsigned int)dword_18019C350 > 4 )
  {
    v4 = "Started";
    if ( !a2 )
      v4 = "Shutdown";
    v5 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (__int64)&dword_18019C350,
      byte_18016976B,
      a3,
      a4,
      &v5);
  }
}
