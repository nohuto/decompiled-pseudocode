/*
 * XREFs of ?SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@KAEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1C0196EDC
 * Callers:
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C018BBE0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C003468C (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1C016F1C4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U1@U1@U?$_tlgWrapperByRef@$0BA@@@U2@U1@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444433AEBU?$_tlgWrapperByRef@$0BA@@@43444444@Z @ 0x1C01848DC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U1@U1@U-$_tlgWra.c)
 */

void __fastcall InputTraceLogging::Pointer::SendFrameToUserMode(
        const struct CPointerInputFrame *a1,
        __int64 a2,
        const struct tagMANIPULATION_INPUT_INFO *a3)
{
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // r10d
  unsigned int v7; // edi
  __int128 *v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // [rsp+C0h] [rbp-80h] BYREF
  __int64 v26; // [rsp+C8h] [rbp-78h] BYREF
  __int32 v27; // [rsp+D0h] [rbp-70h] BYREF
  __int32 v28; // [rsp+D4h] [rbp-6Ch] BYREF
  int v29; // [rsp+D8h] [rbp-68h] BYREF
  int v30; // [rsp+DCh] [rbp-64h] BYREF
  int v31; // [rsp+E0h] [rbp-60h] BYREF
  int v32; // [rsp+E4h] [rbp-5Ch] BYREF
  int v33; // [rsp+E8h] [rbp-58h] BYREF
  int v34; // [rsp+ECh] [rbp-54h] BYREF
  int v35; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v36; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v37; // [rsp+100h] [rbp-40h] BYREF
  __int64 v38; // [rsp+108h] [rbp-38h] BYREF
  __int64 v39; // [rsp+110h] [rbp-30h] BYREF
  __int64 v40; // [rsp+118h] [rbp-28h] BYREF
  __int64 v41; // [rsp+120h] [rbp-20h] BYREF
  __int64 v42; // [rsp+128h] [rbp-18h] BYREF
  __int128 v43; // [rsp+130h] [rbp-10h]
  __int128 v44; // [rsp+140h] [rbp+0h]
  __int128 v45; // [rsp+150h] [rbp+10h]
  __int128 v46; // [rsp+160h] [rbp+20h]
  __int128 v47; // [rsp+170h] [rbp+30h]
  __int128 v48; // [rsp+180h] [rbp+40h]
  __int128 v49; // [rsp+190h] [rbp+50h]
  __int128 v50; // [rsp+1A0h] [rbp+60h]
  __int128 v51; // [rsp+1B0h] [rbp+70h]
  __int128 v52; // [rsp+1C0h] [rbp+80h]
  __int128 v53; // [rsp+1D0h] [rbp+90h]
  __int128 v54; // [rsp+1E0h] [rbp+A0h] BYREF
  __int128 v55; // [rsp+1F0h] [rbp+B0h]
  __m256i v56; // [rsp+200h] [rbp+C0h]

  if ( InputTraceLogging::Enabled(0, a2, (__int64)a3, (__int64)a1) )
  {
    if ( (unsigned int)dword_1C0244A70 > 4 && tlgKeywordOn((__int64)&dword_1C0244A70, 32LL) )
    {
      LODWORD(v25) = *((_DWORD *)a3 + 12);
      HIDWORD(v25) = *((_DWORD *)a3 + 11);
      HIDWORD(v26) = *(_DWORD *)(v5 + 40);
      v37 = *(_QWORD *)(v5 + 72);
      v36 = *(_QWORD *)(v5 + 112);
      LODWORD(v26) = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C0244A70,
        byte_1C0217C23,
        v4,
        v5,
        (__int64)&v36,
        (__int64)&v37,
        (__int64)&v26 + 4,
        (__int64)&v26,
        (__int64)&v25 + 4,
        (__int64)&v25);
    }
    v7 = 0;
    if ( *((_DWORD *)a3 + 11) )
    {
      do
      {
        v8 = (__int128 *)((char *)a3 + 240 * v7);
        v9 = *(__int128 *)((char *)v8 + 72);
        v43 = *(__int128 *)((char *)v8 + 56);
        v10 = *(__int128 *)((char *)v8 + 88);
        v44 = v9;
        v11 = *(__int128 *)((char *)v8 + 104);
        v45 = v10;
        v12 = *(__int128 *)((char *)v8 + 120);
        v46 = v11;
        v13 = *(__int128 *)((char *)v8 + 136);
        v47 = v12;
        v14 = *(__int128 *)((char *)v8 + 152);
        v48 = v13;
        v15 = *(__int128 *)((char *)v8 + 168);
        v8 = (__int128 *)((char *)v8 + 184);
        v49 = v14;
        v16 = *v8;
        v50 = v15;
        v17 = v8[1];
        v51 = v16;
        v18 = v8[2];
        v52 = v17;
        v19 = v8[3];
        v53 = v18;
        v20 = v8[4];
        v54 = v19;
        v21 = v8[5];
        v55 = v20;
        v22 = v8[6];
        *(_OWORD *)v56.m256i_i8 = v21;
        *(_OWORD *)&v56.m256i_u64[2] = v22;
        if ( (unsigned int)dword_1C0244A70 > 4 && tlgKeywordOn((__int64)&dword_1C0244A70, 32LL) )
        {
          v26 = *(__int64 *)((char *)&v56.m256i_i64[2] + 4);
          v25 = *(__int64 *)((char *)&v56.m256i_i64[1] + 4);
          v27 = v56.m256i_i32[2];
          v28 = v56.m256i_i32[0];
          v38 = *((_QWORD *)&v55 + 1);
          v29 = v55;
          v39 = (__int64)&v54;
          v40 = *((_QWORD *)&v53 + 1);
          v41 = v53;
          v30 = HIDWORD(v52);
          v31 = DWORD2(v52);
          v32 = DWORD1(v52);
          v33 = v52;
          v34 = DWORD1(v45);
          v35 = v45;
          LODWORD(v36) = HIDWORD(v43);
          LODWORD(v37) = DWORD1(v43);
          v42 = v48;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1C0244A70,
            byte_1C0217AEA,
            v23,
            v24,
            (__int64)&v42,
            (__int64)&v37,
            (__int64)&v36,
            (__int64)&v35,
            (__int64)&v34,
            (__int64)&v33,
            (__int64)&v32,
            (__int64)&v31,
            (__int64)&v30,
            (__int64)&v41,
            (__int64)&v40,
            &v39,
            (__int64)&v29,
            (__int64)&v38,
            (__int64)&v28,
            (__int64)&v27,
            (__int64)&v25,
            (__int64)&v25 + 4,
            (__int64)&v26,
            (__int64)&v26 + 4);
        }
        ++v7;
      }
      while ( v7 != *((_DWORD *)a3 + 11) );
    }
  }
}
