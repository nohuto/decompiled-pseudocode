/*
 * XREFs of ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C0028B3C
 * Callers:
 *     rimDoRimDevChange @ 0x1C002575C (rimDoRimDevChange.c)
 *     _lambda_d1874fae19b79ef5393f0e0766cf3e96_::_lambda_invoker_cdecl_ @ 0x1C0151370 (_lambda_d1874fae19b79ef5393f0e0766cf3e96_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C003468C (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$00@@U6@U6@U1@U?$_tlgWrapperByVal@$03@@U7@U7@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$00@@883AEBU?$_tlgWrapperByVal@$03@@9933@Z @ 0x1C0151454 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U2@U.c)
 *     ?RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C0152368 (-RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?RimDeviceFlags@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C01523B0 (-RimDeviceFlags@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDeviceHidData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0152770 (-RimDeviceHidData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDeviceMonitorMapping@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C01527F0 (-RimDeviceMonitorMapping@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0152934 (-RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 */

void __fastcall InputTraceLogging::RIM::RimDevice(const struct RIMDEV *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  __int64 v5; // r8
  int v6; // r9d
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // r8
  int v10; // ecx
  const char *v11; // rax
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  const char *v16; // rax
  unsigned int v17; // ecx
  char v18; // [rsp+B0h] [rbp-80h] BYREF
  int v19; // [rsp+B4h] [rbp-7Ch] BYREF
  int v20; // [rsp+B8h] [rbp-78h] BYREF
  int v21; // [rsp+BCh] [rbp-74h] BYREF
  __int64 v22; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v23; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v24; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v29; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v30; // [rsp+100h] [rbp-30h] BYREF
  __int64 v31; // [rsp+108h] [rbp-28h] BYREF
  __int64 v32; // [rsp+110h] [rbp-20h] BYREF
  __int64 v33; // [rsp+140h] [rbp+10h] BYREF
  __int64 v34; // [rsp+148h] [rbp+18h] BYREF

  if ( (unsigned __int8)InputTraceLogging::Enabled(0LL, a2, a3, (unsigned int)a2) )
  {
    if ( (unsigned int)dword_1C0244A70 > 4
      && (unsigned __int8)tlgKeywordOn(
                            &dword_1C0244A70,
                            256LL,
                            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                            v4) )
    {
      v7 = *((_DWORD *)a1 + 532);
      v8 = v5 - *((_QWORD *)a1 + 9);
      v9 = v5 - *((_QWORD *)a1 + 8);
      v22 = v8;
      v19 = *((_DWORD *)a1 + 38);
      v20 = *((_DWORD *)a1 + 68);
      v21 = *((_DWORD *)a1 + 72);
      v24 = *((_QWORD *)a1 + 31);
      LOBYTE(v33) = *((_BYTE *)a1 + 206);
      LOBYTE(v34) = *((_BYTE *)a1 + 205);
      v18 = *((_BYTE *)a1 + 204);
      v25 = *((_QWORD *)a1 + 24);
      v26 = (__int64)a1 + 2132;
      v27 = (__int64)a1 + 2112;
      v23 = v9;
      if ( v7 )
      {
        v10 = v7 - 1;
        if ( v10 )
        {
          if ( v10 == 1 )
            v11 = "Unknown";
          else
            v11 = "UNKNOWN";
        }
        else
        {
          v11 = "External";
        }
      }
      else
      {
        v11 = "Integrated";
      }
      v28 = (__int64)v11;
      v29 = (__int64)a1 + 208;
      v12 = v6 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( v15 )
            {
              if ( v15 == 1 )
                v16 = "Reset";
              else
                v16 = (const char *)&unk_1C021E1A8;
            }
            else
            {
              v16 = "Destroyed";
            }
          }
          else
          {
            v16 = "Closed";
          }
        }
        else
        {
          v16 = "Opened";
        }
      }
      else
      {
        v16 = "Created";
      }
      v17 = *((unsigned __int8 *)a1 + 48);
      v30 = (__int64)v16;
      v31 = (__int64)InputTraceLogging::RimDevTypeToString(v17);
      v32 = (__int64)a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (int)&dword_1C0244A70,
        (int)&dword_1C0214278,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v18,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v24,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v23,
        (__int64)&v22);
    }
    InputTraceLogging::RIM::RimDeviceFlags(a1);
    if ( (*((_DWORD *)a1 + 50) & 0x80u) == 0 )
    {
      if ( *((_BYTE *)a1 + 48) == 2 )
        InputTraceLogging::RIM::RimDeviceHidData(a1);
    }
    else
    {
      InputTraceLogging::RIM::RimDevicePointerData(a1);
    }
    if ( *((_DWORD *)a1 + 336) )
      InputTraceLogging::RIM::RimDeviceMonitorMapping(a1);
  }
}
