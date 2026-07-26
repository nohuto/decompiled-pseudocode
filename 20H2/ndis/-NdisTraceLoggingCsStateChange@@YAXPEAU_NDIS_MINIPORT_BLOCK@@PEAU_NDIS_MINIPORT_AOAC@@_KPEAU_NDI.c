/*
 * XREFs of ?NdisTraceLoggingCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@_KPEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@5@Z @ 0x1C008B460
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x1C005B448 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0023344 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U3@U3@U3@U2@U3@U2@U2@U3@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U_tlgWrapperPtrSize@@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@455545445AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@555555555555AEBU_tlgWrapperPtrSize@@77@Z @ 0x1C008A598 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U3@U3@U.c)
 */

void __fastcall NdisTraceLoggingCsStateChange(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_AOAC *a2,
        __int64 a3,
        struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS *a4,
        struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX *a5,
        struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *a6,
        struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *a7)
{
  _QWORD *v11; // rcx
  __int64 v12; // r8
  __int64 *v13; // rdx
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  __int64 v19; // r8
  unsigned __int64 v20; // r9
  int v21; // [rsp+100h] [rbp-80h] BYREF
  int v22; // [rsp+104h] [rbp-7Ch] BYREF
  int v23; // [rsp+108h] [rbp-78h] BYREF
  int v24; // [rsp+10Ch] [rbp-74h] BYREF
  unsigned int IfIndex; // [rsp+110h] [rbp-70h] BYREF
  __int64 v26; // [rsp+118h] [rbp-68h] BYREF
  __int64 v27; // [rsp+120h] [rbp-60h] BYREF
  __int64 v28; // [rsp+128h] [rbp-58h] BYREF
  __int64 v29; // [rsp+130h] [rbp-50h] BYREF
  __int64 v30; // [rsp+138h] [rbp-48h] BYREF
  __int64 v31; // [rsp+140h] [rbp-40h] BYREF
  __int64 v32; // [rsp+148h] [rbp-38h] BYREF
  __int64 v33; // [rsp+150h] [rbp-30h] BYREF
  __int64 v34; // [rsp+158h] [rbp-28h] BYREF
  __int64 v35; // [rsp+160h] [rbp-20h] BYREF
  __int64 v36; // [rsp+168h] [rbp-18h] BYREF
  __int64 v37; // [rsp+170h] [rbp-10h] BYREF
  _UNICODE_STRING *pAdapterInstanceName; // [rsp+178h] [rbp-8h] BYREF
  __int64 v39; // [rsp+180h] [rbp+0h] BYREF
  __int64 v40; // [rsp+188h] [rbp+8h] BYREF
  __int64 v41; // [rsp+190h] [rbp+10h] BYREF
  unsigned __int64 v42; // [rsp+198h] [rbp+18h] BYREF
  __int64 v43; // [rsp+1A0h] [rbp+20h] BYREF
  _NET_LUID_LH v44; // [rsp+1A8h] [rbp+28h] BYREF
  _GUID *p_InterfaceGuid; // [rsp+1B0h] [rbp+30h] BYREF
  _BYTE *v46; // [rsp+1B8h] [rbp+38h] BYREF
  int v47; // [rsp+1C0h] [rbp+40h]
  __int64 v48; // [rsp+1C8h] [rbp+48h] BYREF
  int v49; // [rsp+1D0h] [rbp+50h]
  _OWORD *v50; // [rsp+1D8h] [rbp+58h] BYREF
  int v51; // [rsp+1E0h] [rbp+60h]
  _OWORD v52[3]; // [rsp+1F0h] [rbp+70h] BYREF
  int v53; // [rsp+220h] [rbp+A0h]
  __int128 v54; // [rsp+224h] [rbp+A4h]
  int v55; // [rsp+234h] [rbp+B4h]
  _BYTE v56[144]; // [rsp+240h] [rbp+C0h] BYREF

  memset(&v56[8], 0, 0x80uLL);
  if ( MEMORY[0xFFFFF78000000008] - ndisLastCsEntryTime >= 0x165A0BC00LL )
  {
    v11 = v56;
    v12 = 17LL;
    v13 = (__int64 *)((char *)a2 + 568);
    do
    {
      v14 = *v13;
      v13 += 2;
      *v11++ = v14;
      --v12;
    }
    while ( v12 );
    v15 = *(_OWORD *)a4;
    v16 = *((_OWORD *)a4 + 1);
    v53 = *((_DWORD *)a4 + 12);
    v52[0] = v15;
    v17 = *((_OWORD *)a4 + 2);
    v52[1] = v16;
    v52[2] = v17;
    v18 = *(_OWORD *)a5;
    v55 = *((_DWORD *)a5 + 4);
    v54 = v18;
    if ( (unsigned int)dword_1C00E3108 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C00E3108, 0x400000000000LL) )
      {
        v46 = v56;
        v48 = (__int64)a2 + 500;
        v50 = v52;
        v26 = *((_QWORD *)a7 + 5);
        v27 = *((_QWORD *)a7 + 4);
        v28 = *((_QWORD *)a7 + 3);
        v29 = *((_QWORD *)a7 + 2);
        v30 = *((_QWORD *)a7 + 1);
        v31 = *(_QWORD *)a7;
        v47 = 136;
        v49 = 68;
        v32 = *((_QWORD *)a6 + 5);
        v33 = *((_QWORD *)a6 + 4);
        v34 = *((_QWORD *)a6 + 3);
        v35 = *((_QWORD *)a6 + 2);
        v36 = *((_QWORD *)a6 + 1);
        v37 = *(_QWORD *)a6;
        pAdapterInstanceName = a1->pAdapterInstanceName;
        v21 = *((_DWORD *)a2 + 221);
        v22 = *((_DWORD *)a2 + 220);
        v40 = *((_QWORD *)a2 + 107);
        v23 = *((_DWORD *)a2 + 210);
        v41 = *((_QWORD *)a2 + 106);
        v43 = *((unsigned int *)a2 + 95);
        v24 = *((_DWORD *)a2 + 94);
        v44.Value = (ULONG64)a1->NetLuid;
        IfIndex = a1->IfIndex;
        p_InterfaceGuid = &a1->InterfaceGuid;
        v51 = 72;
        v39 = a3;
        v42 = v20 / 0x2710;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
          (__int64)a6,
          byte_1C00CF7BE,
          v19,
          v20,
          (__int64 *)&p_InterfaceGuid,
          (__int64)&IfIndex,
          (__int64)&v44,
          (__int64)&v24,
          (__int64)&v43,
          (__int64)&v42,
          (__int64)&v41,
          (__int64)&v23,
          (__int64)&v40,
          (__int64)&v22,
          (__int64)&v21,
          (__int64)&v39,
          (unsigned __int16 **)&pAdapterInstanceName,
          (__int64)&v37,
          (__int64)&v36,
          (__int64)&v35,
          (__int64)&v34,
          (__int64)&v33,
          (__int64)&v32,
          (__int64)&v31,
          (__int64)&v30,
          (__int64)&v29,
          (__int64)&v28,
          (__int64)&v27,
          (__int64)&v26,
          (__int64 *)&v50,
          &v48,
          (__int64 *)&v46);
      }
    }
  }
}
