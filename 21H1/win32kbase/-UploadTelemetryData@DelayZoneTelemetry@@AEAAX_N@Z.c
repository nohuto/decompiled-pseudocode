/*
 * XREFs of ?UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z @ 0x1C01C012C
 * Callers:
 *     ?ClearSession@DelayZoneTelemetry@@QEAAXXZ @ 0x1C01BFCFC (-ClearSession@DelayZoneTelemetry@@QEAAXXZ.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x1C01BFE10 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 *     ?UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@K@Z @ 0x1C01BFF70 (-UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemet.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0133088 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?RtlStringCchLengthA@@YAJPEBD_KPEA_K@Z @ 0x1C0186ED4 (-RtlStringCchLengthA@@YAJPEBD_KPEA_K@Z.c)
 *     ?RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1C0186F34 (-RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 */

void __fastcall DelayZoneTelemetry::UploadTelemetryData(DelayZoneTelemetry *this, char a2)
{
  const char *v2; // rdi
  char v4; // r15
  char *v5; // r10
  unsigned __int64 v6; // rbp
  unsigned int v7; // eax
  unsigned int v8; // r14d
  unsigned __int64 v9; // rsi
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned __int64 v13; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v14; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v15; // [rsp+D8h] [rbp+20h] BYREF

  v13 = 0LL;
  v2 = (char *)this + 16;
  v4 = 0;
  v5 = (char *)this + 16;
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( a2 || (unsigned int)(v6 - *((_DWORD *)this + 3)) >= 0x2710 )
  {
    v7 = *((_DWORD *)this + 2);
    if ( v7 > 0xD5 )
      v7 = 213;
    v8 = 0;
    *((_DWORD *)this + 2) = v7;
    if ( v7 )
    {
      v9 = v13;
      do
      {
        if ( !*v2 )
        {
          RtlStringCchPrintfA(v5, 2048 - v9, "%lu,%lu_", *(_DWORD *)this, *((_DWORD *)this + 1));
          RtlStringCchLengthA(v2, v11, &v13);
          v9 = v13;
          v5 = (char *)&v2[v13];
        }
        v10 = v8 % 0xD5;
        RtlStringCchPrintfA(
          v5,
          2048 - v9,
          "%d,%ld,%ld,%d,%lu,0x%x,%d,%d,%d,%ld,%ld,%lu;",
          *((_DWORD *)this + 12 * v10 + 516),
          *((_DWORD *)this + 12 * v10 + 517),
          *((_DWORD *)this + 12 * v10 + 518),
          *((_DWORD *)this + 12 * v10 + 519),
          *((_DWORD *)this + 12 * v10 + 520),
          *((_DWORD *)this + 12 * v10 + 521),
          *((_DWORD *)this + 12 * v10 + 522),
          *((_DWORD *)this + 12 * v10 + 523),
          *((_DWORD *)this + 12 * v10 + 524),
          *((_DWORD *)this + 12 * v10 + 525),
          *((_DWORD *)this + 12 * v10 + 526),
          *((_DWORD *)this + 12 * v10 + 527));
        RtlStringCchLengthA(v2, v12, &v13);
        v9 = v13;
        if ( v13 + 96 >= 0x800 )
        {
          if ( (unsigned int)dword_1C024B250 > 5 && tlgKeywordOn((__int64)&dword_1C024B250, 0x400000000000LL) )
          {
            v14 = (__int64)v2;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
              (__int64)&dword_1C024B250,
              byte_1C0220F3E,
              0LL,
              0LL,
              (void **)&v14);
          }
          v9 = 0LL;
          v13 = 0LL;
          v4 = 1;
          memset((char *)this + 17, 0, 0x7FFuLL);
          *v2 = 0;
        }
        ++v8;
        v5 = (char *)&v2[v9];
      }
      while ( v8 < *((_DWORD *)this + 2) );
      if ( v9 )
      {
        if ( (unsigned int)dword_1C024B250 > 5 && tlgKeywordOn((__int64)&dword_1C024B250, 0x400000000000LL) )
        {
          v15 = (__int64)v2;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
            (__int64)&dword_1C024B250,
            byte_1C0220F3E,
            0LL,
            0LL,
            (void **)&v15);
        }
        v4 = 1;
      }
      if ( v4 )
      {
        *((_DWORD *)this + 2) = 0;
        memset((char *)this + 2064, 0, 0x27F0uLL);
        memset((char *)this + 17, 0, 0x7FFuLL);
        *v2 = 0;
        *((_DWORD *)this + 3) = v6;
      }
    }
  }
}
