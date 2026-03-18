/*
 * XREFs of ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageReport@1@@Z @ 0x180024620
 * Callers:
 *     ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024520 (-ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@CAXPEAU_TP_CALLBACK_INSTANCE.c)
 * Callees:
 *     ??$_Emplace_reallocate@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@?$vector@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@V?$allocator@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800249A4 (--$_Emplace_reallocate@V-$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResource.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@443444444@Z @ 0x180024C10 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U1@U2@U2@U2@U2@U2@U2@@-$_tlgWri.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ?IsLessThan@ResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@SA_NAEBV?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@_K@Z @ 0x1800E17C8 (-IsLessThan@ResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@SA_NA.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ??$?4U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@$0A@@?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801AED8C (--$-4U-$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionRep.c)
 */

void __fastcall CProcessResourceAttributionReporter::ReportHighResourceUsageWorker(
        CProcessResourceAttributionReporter *this,
        struct CProcessResourceAttributionReporter::HighResourceUsageReport *a2)
{
  int *v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rsi
  int v8; // r10d
  int v9; // r11d
  int v10; // esi
  int v11; // r15d
  int v12; // r12d
  int v13; // r13d
  _DWORD *v14; // r9
  char v15; // al
  _QWORD *v16; // rsi
  _QWORD *v17; // rdi
  _QWORD *v18; // rax
  void *v19; // rcx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  int v23; // r10d
  int v24; // r11d
  _DWORD *v25; // rax
  _DWORD *v26; // r8
  _QWORD *v27; // rcx
  void *v28; // rcx
  int v29; // ecx
  int v30; // r8d
  _QWORD *v31; // rsi
  __int64 v32; // rax
  _QWORD *v33; // rcx
  int v34; // [rsp+80h] [rbp-29h] BYREF
  int v35; // [rsp+84h] [rbp-25h] BYREF
  int v36; // [rsp+88h] [rbp-21h] BYREF
  int v37; // [rsp+8Ch] [rbp-1Dh] BYREF
  int v38; // [rsp+90h] [rbp-19h] BYREF
  int v39; // [rsp+94h] [rbp-15h] BYREF
  int v40; // [rsp+98h] [rbp-11h] BYREF
  int v41; // [rsp+9Ch] [rbp-Dh] BYREF
  void *v42; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v44; // [rsp+B0h] [rbp+7h] BYREF
  int *v45; // [rsp+B8h] [rbp+Fh]
  char *v46; // [rsp+C0h] [rbp+17h]
  _DWORD *v47; // [rsp+C8h] [rbp+1Fh] BYREF
  char v48; // [rsp+118h] [rbp+6Fh]
  int v49; // [rsp+120h] [rbp+77h]
  int v50; // [rsp+128h] [rbp+7Fh]

  v3 = (int *)*((_QWORD *)a2 + 2);
  v45 = (int *)*((_QWORD *)a2 + 3);
  if ( v3 != v45 )
  {
    v4 = (_QWORD *)((char *)this + 32);
    do
    {
      v5 = (_QWORD *)*v4;
      v6 = (_QWORD *)*((_QWORD *)this + 5);
      v48 = 0;
      v7 = v6 - v5;
      if ( v7 > 0 )
      {
        do
        {
          if ( (unsigned __int8)CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber::IsLessThan(
                                  &v5[(unsigned __int64)v7 >> 1],
                                  *((_QWORD *)v3 + 1)) )
          {
            v5 += ((unsigned __int64)v7 >> 1) + 1;
            v7 += -1LL - ((unsigned __int64)v7 >> 1);
          }
          else
          {
            v7 = (unsigned __int64)v7 >> 1;
          }
        }
        while ( v7 > 0 );
        v6 = (_QWORD *)*((_QWORD *)this + 5);
      }
      v8 = v3[19];
      v9 = v3[22];
      v10 = v3[21];
      v11 = v3[24];
      v12 = v3[20];
      v13 = v3[23];
      v49 = v8;
      v50 = v9;
      if ( v5 == v6 || (v14 = (_DWORD *)*v5, *(_QWORD *)*v5 != *((_QWORD *)v3 + 1)) )
      {
        if ( !v3[25] )
        {
          if ( (unsigned int)dword_1803D1270 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1803D1270, 0x400000000000LL) )
          {
            v44 = *((_QWORD *)v3 + 1);
            v36 = *v3;
            v35 = v36;
            v34 = v36;
            LODWORD(v42) = v24;
            v41 = v23;
            v40 = v13;
            v39 = v12;
            v38 = v11;
            v37 = v10;
            v43 = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v20,
              (unsigned int)&unk_18036B737,
              v21,
              v22,
              (__int64)&v43,
              (__int64)&v34,
              (__int64)&v35,
              (__int64)&v36,
              (__int64)&v44,
              (__int64)&v37,
              (__int64)&v38,
              (__int64)&v39,
              (__int64)&v40,
              (__int64)&v41,
              (__int64)&v42);
          }
          v25 = operator new(0x20uLL);
          v26 = v25;
          if ( v25 )
          {
            *(_QWORD *)v25 = 0LL;
            v25[2] = 5000;
            v25[3] = 1000;
            v25[7] = 1000;
            v25[4] = 10000;
            v25[5] = 200;
            v25[6] = 500;
          }
          else
          {
            v26 = 0LL;
          }
          *(_QWORD *)v26 = *((_QWORD *)v3 + 1);
          v42 = v26;
          v26[2] = 5000
                 * (((int)((unsigned __int64)(1759218605LL * v10) >> 32) >> 11)
                  + 1
                  + ((unsigned int)((unsigned __int64)(1759218605LL * v10) >> 32) >> 31));
          v26[3] = 1000
                 * (((int)((unsigned __int64)(274877907LL * v11) >> 32) >> 6)
                  + 1
                  + ((unsigned int)((unsigned __int64)(274877907LL * v11) >> 32) >> 31));
          v26[4] = 10000
                 * (((int)((unsigned __int64)(1759218605LL * v12) >> 32) >> 12)
                  + 1
                  + ((unsigned int)((unsigned __int64)(1759218605LL * v12) >> 32) >> 31));
          v26[5] = 200
                 * (((int)((unsigned __int64)(1374389535LL * v13) >> 32) >> 6)
                  + 1
                  + ((unsigned int)((unsigned __int64)(1374389535LL * v13) >> 32) >> 31));
          v26[6] = 500
                 * (((int)((unsigned __int64)(274877907LL * v49) >> 32) >> 5)
                  + 1
                  + ((unsigned int)((unsigned __int64)(274877907LL * v49) >> 32) >> 31));
          v26[7] = 1000
                 * (((int)((unsigned __int64)(274877907LL * v50) >> 32) >> 6)
                  + ((unsigned int)((unsigned __int64)(274877907LL * v50) >> 32) >> 31)
                  + 1);
          v27 = (_QWORD *)*((_QWORD *)this + 5);
          if ( v27 == *((_QWORD **)this + 6) )
          {
            std::vector<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>::_Emplace_reallocate<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>(
              (char *)this + 32,
              v5,
              &v42);
            v28 = v42;
            goto LABEL_34;
          }
          if ( v5 != v27 )
          {
            v47 = v26;
            v31 = v27 - 1;
            v46 = (char *)this + 32;
            v32 = *(v27 - 1);
            *(v27 - 1) = 0LL;
            *v27 = v32;
            *((_QWORD *)this + 5) += 8LL;
            while ( v31 != v5 )
            {
              v33 = v31--;
              std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>::operator=<std::default_delete<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>,0>(
                v33,
                v31);
            }
            std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>::operator=<std::default_delete<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>,0>(
              v5,
              &v47);
            v28 = v47;
LABEL_34:
            if ( v28 )
              operator delete(v28, 0x20uLL);
            goto LABEL_20;
          }
          *v27 = v26;
          *((_QWORD *)this + 5) += 8LL;
        }
      }
      else
      {
        v15 = 1;
        v48 = 1;
        if ( v10 <= v14[2] && v11 <= v14[3] && v12 <= v14[4] && v13 <= v14[5] && v8 <= v14[6] && v9 <= v14[7] )
          goto LABEL_16;
        if ( (unsigned int)dword_1803D1270 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1803D1270, 0x400000000000LL) )
        {
          v43 = *((_QWORD *)v3 + 1);
          v40 = *v3;
          v41 = v40;
          LODWORD(v42) = v40;
          v34 = v9;
          v35 = v8;
          v36 = v13;
          v37 = v12;
          v38 = v11;
          v39 = v10;
          v44 = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v29,
            (unsigned int)&unk_18036B737,
            v30,
            (_DWORD)v14,
            (__int64)&v44,
            (__int64)&v42,
            (__int64)&v41,
            (__int64)&v40,
            (__int64)&v43,
            (__int64)&v39,
            (__int64)&v38,
            (__int64)&v37,
            (__int64)&v36,
            (__int64)&v35,
            (__int64)&v34);
          v14 = (_DWORD *)*v5;
          v8 = v49;
          v9 = v50;
        }
        v14[2] = 5000
               * (((int)((unsigned __int64)(1759218605LL * v10) >> 32) >> 11)
                + 1
                + ((unsigned int)((unsigned __int64)(1759218605LL * v10) >> 32) >> 31));
        *(_DWORD *)(*v5 + 12LL) = 1000
                                * (((int)((unsigned __int64)(274877907LL * v11) >> 32) >> 6)
                                 + 1
                                 + ((unsigned int)((unsigned __int64)(274877907LL * v11) >> 32) >> 31));
        *(_DWORD *)(*v5 + 16LL) = 10000
                                * (((int)((unsigned __int64)(1759218605LL * v12) >> 32) >> 12)
                                 + 1
                                 + ((unsigned int)((unsigned __int64)(1759218605LL * v12) >> 32) >> 31));
        *(_DWORD *)(*v5 + 20LL) = 200
                                * (((int)((unsigned __int64)(1374389535LL * v13) >> 32) >> 6)
                                 + 1
                                 + ((unsigned int)((unsigned __int64)(1374389535LL * v13) >> 32) >> 31));
        *(_DWORD *)(*v5 + 24LL) = 500
                                * (((int)((unsigned __int64)(274877907LL * v8) >> 32) >> 5)
                                 + 1
                                 + ((unsigned int)((unsigned __int64)(274877907LL * v8) >> 32) >> 31));
        *(_DWORD *)(*v5 + 28LL) = 1000
                                * (((int)((unsigned __int64)(274877907LL * v9) >> 32) >> 6)
                                 + ((unsigned int)((unsigned __int64)(274877907LL * v9) >> 32) >> 31)
                                 + 1);
      }
LABEL_20:
      v15 = v48;
LABEL_16:
      if ( v3[25] && v15 )
      {
        v16 = (_QWORD *)*((_QWORD *)this + 5);
        v17 = v5 + 1;
        v18 = v16;
        if ( v17 != v16 )
        {
          do
          {
            std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>::operator=<std::default_delete<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>,0>(
              v17 - 1,
              v17);
            ++v17;
          }
          while ( v17 != v16 );
          v16 = (_QWORD *)*((_QWORD *)this + 5);
          v18 = v16;
        }
        v19 = (void *)*(v16 - 1);
        if ( v19 )
        {
          operator delete(v19, 0x20uLL);
          v18 = (_QWORD *)*((_QWORD *)this + 5);
        }
        *((_QWORD *)this + 5) = v18 - 1;
      }
      v3 += 26;
      v4 = (_QWORD *)((char *)this + 32);
    }
    while ( v3 != v45 );
  }
}
