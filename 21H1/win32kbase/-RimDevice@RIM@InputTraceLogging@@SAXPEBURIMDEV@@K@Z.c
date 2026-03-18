/*
 * XREFs of ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C00A324C
 * Callers:
 *     rimDoRimDevChange @ 0x1C00A3168 (rimDoRimDevChange.c)
 *     _lambda_d1874fae19b79ef5393f0e0766cf3e96_::_lambda_invoker_cdecl_ @ 0x1C0159C20 (_lambda_d1874fae19b79ef5393f0e0766cf3e96_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C006DF40 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$00@@U6@U6@U1@U?$_tlgWrapperByVal@$03@@U7@U7@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$00@@883AEBU?$_tlgWrapperByVal@$03@@9933@Z @ 0x1C0159D04 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U2@U.c)
 *     ?RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C015AC18 (-RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?RimDeviceFlags@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C015AC60 (-RimDeviceFlags@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDeviceHidData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C015B020 (-RimDeviceHidData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDeviceMonitorMapping@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C015B0A0 (-RimDeviceMonitorMapping@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C015B1E4 (-RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 */

void __fastcall InputTraceLogging::RIM::RimDevice(const struct RIMDEV *a1)
{
  __int64 v2; // r8
  int v3; // r9d
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // r8
  int v7; // ecx
  const char *v8; // rax
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  const char *v13; // rax
  unsigned int v14; // ecx
  char v15; // [rsp+B0h] [rbp-80h] BYREF
  int v16; // [rsp+B4h] [rbp-7Ch] BYREF
  int v17; // [rsp+B8h] [rbp-78h] BYREF
  int v18; // [rsp+BCh] [rbp-74h] BYREF
  __int64 v19; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v20; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v21; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v22; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v23; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v24; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v25; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v26; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v27; // [rsp+100h] [rbp-30h] BYREF
  __int64 v28; // [rsp+108h] [rbp-28h] BYREF
  __int64 v29; // [rsp+110h] [rbp-20h] BYREF
  __int64 v30; // [rsp+140h] [rbp+10h] BYREF
  __int64 v31; // [rsp+148h] [rbp+18h] BYREF

  if ( InputTraceLogging::Enabled(0) )
  {
    if ( (unsigned int)dword_1C024C960 > 4 && tlgKeywordOn((__int64)&dword_1C024C960, 256LL) )
    {
      v4 = *((_DWORD *)a1 + 530);
      v5 = v2 - *((_QWORD *)a1 + 9);
      v6 = v2 - *((_QWORD *)a1 + 8);
      v19 = v5;
      v16 = *((_DWORD *)a1 + 38);
      v17 = *((_DWORD *)a1 + 68);
      v18 = *((_DWORD *)a1 + 72);
      v21 = *((_QWORD *)a1 + 31);
      LOBYTE(v30) = *((_BYTE *)a1 + 206);
      LOBYTE(v31) = *((_BYTE *)a1 + 205);
      v15 = *((_BYTE *)a1 + 204);
      v22 = *((_QWORD *)a1 + 24);
      v23 = (__int64)a1 + 2124;
      v24 = (__int64)a1 + 2104;
      v20 = v6;
      if ( v4 )
      {
        v7 = v4 - 1;
        if ( v7 )
        {
          if ( v7 == 1 )
            v8 = "Unknown";
          else
            v8 = "UNKNOWN";
        }
        else
        {
          v8 = "External";
        }
      }
      else
      {
        v8 = "Integrated";
      }
      v25 = (__int64)v8;
      v26 = (__int64)a1 + 208;
      v9 = v3 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              if ( v12 == 1 )
                v13 = "Reset";
              else
                v13 = (const char *)&unk_1C0225CC8;
            }
            else
            {
              v13 = "Destroyed";
            }
          }
          else
          {
            v13 = "Closed";
          }
        }
        else
        {
          v13 = "Opened";
        }
      }
      else
      {
        v13 = "Created";
      }
      v14 = *((unsigned __int8 *)a1 + 48);
      v27 = (__int64)v13;
      v28 = (__int64)InputTraceLogging::RimDevTypeToString(v14);
      v29 = (__int64)a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (int)&dword_1C024C960,
        (int)&dword_1C021BC57,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v15,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v21,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v20,
        (__int64)&v19);
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
    if ( *((_DWORD *)a1 + 334) )
      InputTraceLogging::RIM::RimDeviceMonitorMapping(a1);
  }
}
