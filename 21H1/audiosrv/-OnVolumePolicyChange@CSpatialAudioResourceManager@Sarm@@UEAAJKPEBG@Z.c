/*
 * XREFs of ?OnVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@UEAAJKPEBG@Z @ 0x180108440
 * Callers:
 *     <none>
 * Callees:
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1801091C8 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18010A390 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU__ea_18010A390.c)
 */

__int64 __fastcall Sarm::CSpatialAudioResourceManager::OnVolumePolicyChange(
        Sarm::CSpatialAudioResourceManager *this,
        int a2,
        const unsigned __int16 *a3)
{
  __int128 v6; // [rsp+30h] [rbp-50h]
  __int64 (__fastcall **v7)(); // [rsp+40h] [rbp-40h] BYREF
  __int128 v8; // [rsp+48h] [rbp-38h]
  __int64 (__fastcall ***v9)(); // [rsp+78h] [rbp-8h]

  if ( (unsigned int)dword_18019D350 > 5 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      this,
      &unk_18016A264);
  DWORD2(v6) = a2;
  *(_QWORD *)&v6 = (char *)this - 8;
  v7 = off_180156870;
  v9 = &v7;
  v8 = v6;
  return CWorkFifo::ScheduleWorkItem((Sarm::CSpatialAudioResourceManager *)((char *)this + 336));
}
