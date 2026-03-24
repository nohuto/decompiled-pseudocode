/*
 * XREFs of ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageReport@1@@Z @ 0x1800EADAC
 * Callers:
 *     ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800DF120 (-ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@CAXPEAU_TP_CALLBACK_INSTANCE.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180062598 (--2@YAPEAX_K@Z.c)
 *     ?IsLessThan@ResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@SA_NAEBV?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@_K@Z @ 0x1800CDC38 (-IsLessThan@ResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@SA_NA.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@443444444@Z @ 0x180153228 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U1@U2@U2@U2@U2@U2@U2@@-$_tlgWri.c)
 *     ??$emplace@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@?$vector@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@V?$allocator@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@std@@@std@@@1@$$QEAV?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@1@@Z @ 0x1801534E8 (--$emplace@V-$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionR.c)
 *     ??1?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@QEAA@XZ @ 0x1801535AC (--1-$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@.c)
 *     ??4?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180153694 (--4-$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@.c)
 */

void __fastcall CProcessResourceAttributionReporter::ReportHighResourceUsageWorker(
        CProcessResourceAttributionReporter *this,
        struct CProcessResourceAttributionReporter::HighResourceUsageReport *a2,
        _DWORD *a3)
{
  CProcessResourceAttributionReporter *v3; // r14
  int *v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // edx
  int v10; // r9d
  int v11; // edi
  int v12; // r15d
  int v13; // r12d
  int v14; // r13d
  __int64 v15; // r10
  char v16; // al
  _DWORD *v18; // rax
  _DWORD *v19; // r8
  __int64 v20; // r15
  __int64 v21; // rdi
  int v22; // [rsp+80h] [rbp-29h] BYREF
  int v23; // [rsp+84h] [rbp-25h] BYREF
  int v24; // [rsp+88h] [rbp-21h] BYREF
  int v25; // [rsp+8Ch] [rbp-1Dh] BYREF
  int v26; // [rsp+90h] [rbp-19h] BYREF
  int v27; // [rsp+94h] [rbp-15h] BYREF
  int v28; // [rsp+98h] [rbp-11h] BYREF
  int v29; // [rsp+9Ch] [rbp-Dh] BYREF
  _DWORD *v30; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v32; // [rsp+B0h] [rbp+7h] BYREF
  int *v33; // [rsp+B8h] [rbp+Fh]
  char v34[64]; // [rsp+C0h] [rbp+17h] BYREF
  char v35; // [rsp+118h] [rbp+6Fh]
  int v36; // [rsp+120h] [rbp+77h]
  int v37; // [rsp+128h] [rbp+7Fh]

  v3 = this;
  v4 = (int *)*((_QWORD *)a2 + 2);
  v33 = (int *)*((_QWORD *)a2 + 3);
  if ( v4 != v33 )
  {
    v5 = (__int64 *)((char *)this + 32);
    do
    {
      v6 = *v5;
      v7 = *((_QWORD *)v3 + 5);
      v35 = 0;
      v8 = (v7 - v6) >> 3;
      if ( v8 > 0 )
      {
        do
        {
          if ( CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber::IsLessThan(
                 (unsigned __int64 **)(v6 + 8 * (v8 >> 1)),
                 *((_QWORD *)v4 + 1)) )
          {
            v6 += 8 * (v8 >> 1) + 8;
            v8 += -1 - (v8 >> 1);
          }
          else
          {
            v8 >>= 1;
          }
        }
        while ( v8 > 0 );
        v7 = *((_QWORD *)v3 + 5);
      }
      v9 = v4[19];
      v10 = v4[22];
      v11 = v4[21];
      v12 = v4[24];
      v13 = v4[20];
      v14 = v4[23];
      v36 = v9;
      v37 = v10;
      if ( v6 == v7 || (a3 = *(_DWORD **)v6, v15 = *((_QWORD *)v4 + 1), **(_QWORD **)v6 != v15) )
      {
        if ( !v4[25] )
        {
          if ( (unsigned int)dword_180344E80 > 5
            && (qword_180344E90 & 0x400000000000LL) != 0
            && (qword_180344E98 & 0x400000000000LL) == qword_180344E98 )
          {
            v32 = *((_QWORD *)v4 + 1);
            v24 = *v4;
            v23 = v24;
            v22 = v24;
            v29 = v9;
            LODWORD(v30) = v10;
            v28 = v14;
            v27 = v13;
            v26 = v12;
            v25 = v11;
            v31 = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (_DWORD)this,
              (unsigned int)&unk_1802E3A9D,
              (_DWORD)a3,
              v10,
              (__int64)&v31,
              (__int64)&v22,
              (__int64)&v23,
              (__int64)&v24,
              (__int64)&v32,
              (__int64)&v25,
              (__int64)&v26,
              (__int64)&v27,
              (__int64)&v28,
              (__int64)&v29,
              (__int64)&v30);
          }
          v18 = operator new(0x20uLL);
          v19 = v18;
          if ( v18 )
          {
            *(_QWORD *)v18 = 0LL;
            v18[2] = 5000;
            v18[3] = 1000;
            v18[7] = 1000;
            v18[4] = 10000;
            v18[5] = 200;
            v18[6] = 500;
          }
          else
          {
            v19 = 0LL;
          }
          *(_QWORD *)v19 = *((_QWORD *)v4 + 1);
          v30 = v19;
          v19[2] = 5000
                 * (((int)((unsigned __int64)(1759218605LL * v11) >> 32) >> 11)
                  + 1
                  + ((unsigned int)((unsigned __int64)(1759218605LL * v11) >> 32) >> 31));
          v19[3] = 1000
                 * (((int)((unsigned __int64)(274877907LL * v12) >> 32) >> 6)
                  + 1
                  + ((unsigned int)((unsigned __int64)(274877907LL * v12) >> 32) >> 31));
          v19[4] = 10000
                 * (((int)((unsigned __int64)(1759218605LL * v13) >> 32) >> 12)
                  + 1
                  + ((unsigned int)((unsigned __int64)(1759218605LL * v13) >> 32) >> 31));
          v19[5] = 200
                 * (((int)((unsigned __int64)(1374389535LL * v14) >> 32) >> 6)
                  + 1
                  + ((unsigned int)((unsigned __int64)(1374389535LL * v14) >> 32) >> 31));
          v19[6] = 500
                 * (((int)((unsigned __int64)(274877907LL * v36) >> 32) >> 5)
                  + 1
                  + ((unsigned int)((unsigned __int64)(274877907LL * v36) >> 32) >> 31));
          v19[7] = 1000
                 * (((int)((unsigned __int64)(274877907LL * v37) >> 32) >> 6)
                  + 1
                  + ((unsigned int)((unsigned __int64)(274877907LL * v37) >> 32) >> 31));
          std::vector<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>::emplace<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>(
            (char *)v3 + 32,
            v34,
            v6,
            &v30);
          std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>::~unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>(&v30);
        }
      }
      else
      {
        v16 = 1;
        v35 = 1;
        if ( v11 <= a3[2] && v12 <= a3[3] && v13 <= a3[4] && v14 <= a3[5] && v9 <= a3[6] && v10 <= a3[7] )
          goto LABEL_35;
        if ( (unsigned int)dword_180344E80 > 5
          && (qword_180344E90 & 0x400000000000LL) != 0
          && (qword_180344E98 & 0x400000000000LL) == qword_180344E98 )
        {
          v28 = *v4;
          v29 = v28;
          LODWORD(v30) = v28;
          v23 = v9;
          v22 = v10;
          v24 = v14;
          v25 = v13;
          v26 = v12;
          v27 = v11;
          v31 = v15;
          v32 = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (_DWORD)this,
            (unsigned int)&unk_1802E3A9D,
            (_DWORD)a3,
            v10,
            (__int64)&v32,
            (__int64)&v30,
            (__int64)&v29,
            (__int64)&v28,
            (__int64)&v31,
            (__int64)&v27,
            (__int64)&v26,
            (__int64)&v25,
            (__int64)&v24,
            (__int64)&v23,
            (__int64)&v22);
          a3 = *(_DWORD **)v6;
          v10 = v37;
        }
        a3[2] = 5000
              * (((int)((unsigned __int64)(1759218605LL * v11) >> 32) >> 11)
               + 1
               + ((unsigned int)((unsigned __int64)(1759218605LL * v11) >> 32) >> 31));
        *(_DWORD *)(*(_QWORD *)v6 + 12LL) = 1000
                                          * (((int)((unsigned __int64)(274877907LL * v12) >> 32) >> 6)
                                           + 1
                                           + ((unsigned int)((unsigned __int64)(274877907LL * v12) >> 32) >> 31));
        *(_DWORD *)(*(_QWORD *)v6 + 16LL) = 10000
                                          * (((int)((unsigned __int64)(1759218605LL * v13) >> 32) >> 12)
                                           + 1
                                           + ((unsigned int)((unsigned __int64)(1759218605LL * v13) >> 32) >> 31));
        *(_DWORD *)(*(_QWORD *)v6 + 20LL) = 200
                                          * (((int)((unsigned __int64)(1374389535LL * v14) >> 32) >> 6)
                                           + 1
                                           + ((unsigned int)((unsigned __int64)(1374389535LL * v14) >> 32) >> 31));
        *(_DWORD *)(*(_QWORD *)v6 + 24LL) = 500
                                          * (((int)((unsigned __int64)(274877907LL * v36) >> 32) >> 5)
                                           + 1
                                           + ((unsigned int)((unsigned __int64)(274877907LL * v36) >> 32) >> 31));
        LODWORD(this) = 1000
                      * (((int)((unsigned __int64)(274877907LL * v10) >> 32) >> 6)
                       + ((unsigned int)((unsigned __int64)(274877907LL * v10) >> 32) >> 31)
                       + 1);
        *(_DWORD *)(*(_QWORD *)v6 + 28LL) = (_DWORD)this;
      }
      v16 = v35;
LABEL_35:
      if ( v4[25] && v16 )
      {
        v20 = *((_QWORD *)v3 + 5);
        v21 = v6 + 8;
        if ( v6 + 8 != v20 )
        {
          do
          {
            std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>::operator=(
              v21 - 8,
              v21);
            v21 += 8LL;
          }
          while ( v21 != v20 );
          v20 = *((_QWORD *)v3 + 5);
        }
        std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>::~unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>(v20 - 8);
        *((_QWORD *)v3 + 5) -= 8LL;
      }
      v4 += 26;
      v5 = (__int64 *)((char *)v3 + 32);
    }
    while ( v4 != v33 );
  }
}
