/*
 * XREFs of ??$PutVisibility@PEBGIAEAEAEA_NAEA_NAEAH@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEAIAEAEAEA_N3AEAH@Z @ 0x1800A9570
 * Callers:
 *     ?put_Visibility@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z @ 0x180256CB0 (-put_Visibility@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U3@U3@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@554AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180001410 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U3@U3@U2@U-$_tlgWrap.c)
 *     ?Provider@Win32BackedViewHostItemTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x180250C5C (-Provider@Win32BackedViewHostItemTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *__fastcall Win32BackedViewHostItemTelemetry::PutVisibility<unsigned short const *,unsigned int,unsigned char &,bool &,bool &,int &>(
        __int64 *a1,
        _DWORD *a2,
        _BYTE *a3,
        char *a4,
        char *a5,
        int *a6)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v11; // r9
  int v12; // ebx
  char v13; // cl
  bool v14; // zf
  __int64 v15; // rax
  char v16; // dl
  int v17; // r11d
  char v18; // [rsp+60h] [rbp-20h] BYREF
  char v19; // [rsp+61h] [rbp-1Fh] BYREF
  bool v20; // [rsp+62h] [rbp-1Eh] BYREF
  int v21; // [rsp+64h] [rbp-1Ch] BYREF
  __int64 v22; // [rsp+68h] [rbp-18h] BYREF
  __int64 v23; // [rsp+70h] [rbp-10h] BYREF
  __int64 v24; // [rsp+78h] [rbp-8h] BYREF

  result = Win32BackedViewHostItemTelemetryProvider::Provider();
  v12 = (int)result;
  if ( *(_DWORD *)result > 5u )
  {
    v13 = *a4;
    v14 = *a3 == 0;
    LODWORD(v22) = *a2;
    v15 = *a1;
    v20 = !v14;
    v16 = *a5;
    v17 = *a6;
    v24 = v15;
    v18 = v16;
    v19 = v13;
    v23 = 0x2000000LL;
    v21 = v17;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                                            v12,
                                            (int)&dword_18050A0F9,
                                            (__int64)a5,
                                            v11,
                                            (const WCHAR **)&v24,
                                            (__int64)&v22,
                                            (__int64)&v20,
                                            (__int64)&v19,
                                            (__int64)&v18,
                                            (__int64)&v21,
                                            (__int64)&v23);
  }
  return result;
}
