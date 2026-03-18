/*
 * XREFs of ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1C0181A1C
 * Callers:
 *     ?ClearSession@DeadzonePalmTelemetry@@QEAAXXZ @ 0x1C0181140 (-ClearSession@DeadzonePalmTelemetry@@QEAAXXZ.c)
 *     ?UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z @ 0x1C018139C (-UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C012D098 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?RtlStringCchLengthA@@YAJPEBD_KPEA_K@Z @ 0x1C01811D4 (-RtlStringCchLengthA@@YAJPEBD_KPEA_K@Z.c)
 *     ?RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1C0181234 (-RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     ApiSetGetUserHandedness @ 0x1C01CBA50 (ApiSetGetUserHandedness.c)
 */

void __fastcall DeadzonePalmTelemetry::_UploadTelemetryData(DeadzonePalmTelemetry *this, int a2)
{
  const char *v2; // r14
  int v4; // r13d
  unsigned __int64 v5; // rbp
  unsigned int v6; // eax
  unsigned int v7; // r12d
  unsigned __int64 v8; // r15
  char *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rbx
  int UserHandedness; // eax
  __int64 v14; // rdx
  int v15; // ebp
  unsigned __int64 v16; // [rsp+80h] [rbp+8h] BYREF
  __int64 v17; // [rsp+90h] [rbp+18h] BYREF
  __int64 v18; // [rsp+98h] [rbp+20h] BYREF

  v16 = 0LL;
  v2 = (char *)this + 12;
  v4 = 0;
  v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v18 = v5;
  if ( a2 || (unsigned int)(v5 - *((_DWORD *)this + 2)) >= 0x2710 )
  {
    v6 = *((_DWORD *)this + 1);
    if ( v6 > 0x280 )
      v6 = 640;
    v7 = 0;
    *((_DWORD *)this + 1) = v6;
    if ( v6 )
    {
      v8 = v16;
      v9 = (char *)this + 12;
      do
      {
        v10 = v7 % 0x280;
        v11 = 2 * v10;
        v12 = 2 * (v10 + 129);
        UserHandedness = ApiSetGetUserHandedness();
        RtlStringCchPrintfA(
          v9,
          2048 - v8,
          "%lu,%d,%lu,%lu,%lu;",
          UserHandedness,
          *((_DWORD *)this + 2 * v11 + 515),
          *((_DWORD *)this + 2 * v12),
          *((_DWORD *)this + 2 * v11 + 517),
          *((_DWORD *)this + 2 * v11 + 518));
        RtlStringCchLengthA(v2, v14, &v16);
        v8 = v16;
        if ( v16 + 32 >= 0x800 )
        {
          if ( (unsigned int)dword_1C02451A8 > 5 && tlgKeywordOn((__int64)&dword_1C02451A8, 0x400000000000LL) )
          {
            v17 = (__int64)v2;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
              (__int64)&dword_1C02451A8,
              byte_1C0218815,
              0LL,
              0LL,
              (void **)&v17);
          }
          v8 = 0LL;
          v16 = 0LL;
          v4 = 1;
          memset((char *)this + 13, 0, 0x7FFuLL);
          *v2 = 0;
        }
        ++v7;
        v9 = (char *)&v2[v8];
      }
      while ( v7 < *((_DWORD *)this + 1) );
      v15 = v18;
      if ( v8 )
      {
        if ( (unsigned int)dword_1C02451A8 > 5 && tlgKeywordOn((__int64)&dword_1C02451A8, 0x400000000000LL) )
        {
          v18 = (__int64)v2;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
            (__int64)&dword_1C02451A8,
            byte_1C0218815,
            0LL,
            0LL,
            (void **)&v18);
        }
        v4 = 1;
      }
      if ( v4 )
      {
        *((_DWORD *)this + 1) = 0;
        memset((char *)this + 2060, 0, 0x2800uLL);
        memset((char *)this + 13, 0, 0x7FFuLL);
        *v2 = 0;
        *((_DWORD *)this + 2) = v15;
      }
    }
  }
}
