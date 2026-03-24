/*
 * XREFs of ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E6448
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02DA5F4 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02DB114 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C004D420 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C005AEFC (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C005BF4C (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C005C394 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     MonitorSerializeMonitor @ 0x1C02F4410 (MonitorSerializeMonitor.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  _QWORD *v8; // rcx
  __int64 v9; // rsi
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // r15
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  SIZE_T v29; // rdx
  _QWORD *v30; // rcx
  _QWORD *v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  _QWORD *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // rdi
  __int64 v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  _BYTE *v45; // rsi
  _BYTE *v46; // r8
  unsigned __int8 v47; // di
  char *v48; // r15
  __int64 v49; // rbx
  _QWORD *v50; // rax
  __int64 v51; // rax
  _QWORD v52[2]; // [rsp+20h] [rbp-40h] BYREF
  int v53; // [rsp+30h] [rbp-30h]
  _QWORD v54[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v55; // [rsp+48h] [rbp-18h]
  int v56; // [rsp+50h] [rbp-10h]
  __int64 v57; // [rsp+58h] [rbp-8h]
  SIZE_T v58; // [rsp+A8h] [rbp+48h] BYREF
  __int64 (__fastcall ***v59)(_QWORD, __int64); // [rsp+B0h] [rbp+50h] BYREF

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v6 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v6);
    }
    v53 = 0;
    v52[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v7 = *(_QWORD *)(a1 + 24);
    v52[1] = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
    v54[1] = v54;
    v8 = v54;
    v55 = 0LL;
    v54[0] = v54;
    v56 = 2;
    v57 = 0LL;
    if ( v7 != a1 + 24 )
    {
      v9 = v7 - 8;
      if ( v9 )
      {
        do
        {
          if ( *(_QWORD *)(v9 + 112) )
          {
            v10 = operator new[](0x38uLL, 0x4E506456u, PagedPool);
            v15 = (__int64)v10;
            if ( v10 )
            {
              v10[1] = 0LL;
              v10[2] = 0LL;
              *v10 = &DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>::`vftable'{for `SetElement'};
              v10[3] = &DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
              v10[4] = 0LL;
              v10[5] = 0LL;
              *((_DWORD *)v10 + 12) = 3;
            }
            else
            {
              v15 = 0LL;
            }
            v59 = (__int64 (__fastcall ***)(_QWORD, __int64))v15;
            if ( !v15 )
            {
              v43 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
              *(_QWORD *)(v43 + 24) = 56LL;
              *(_QWORD *)(v43 + 32) = v9;
              WdLogEvent5_WdLowResource(v43);
              LODWORD(v21) = -1073741801;
              goto LABEL_39;
            }
            v16 = *(_QWORD *)(v9 + 112);
            if ( !v16 )
            {
              v17 = WdLogNewEntry5_WdAssertion(v12, v11);
              WdLogEvent5_WdAssertion(v17);
            }
            v58 = 0LL;
            v18 = MonitorSerializeMonitor(v16, &v58, 0LL);
            v20 = 0x80000000LL;
            v21 = v18;
            if ( (int)(v18 + 0x80000000) >= 0 && v18 != -1073741789 )
            {
LABEL_33:
              v37 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19);
              v37[3] = *(_QWORD *)(v9 + 112);
              v38 = *(unsigned int *)(v9 + 24);
              v37[4] = v38;
              v39 = *(_QWORD *)(a1 + 88);
              v40 = *(_QWORD *)(v39 + 8);
              if ( !v40 )
              {
                v41 = WdLogNewEntry5_WdAssertion(v38, v36);
                WdLogEvent5_WdAssertion(v41);
                v40 = *(_QWORD *)(v39 + 8);
              }
              v42 = (__int64)v37;
              v37[5] = *(_QWORD *)(v40 + 16);
              v37[6] = v21;
LABEL_36:
              WdLogEvent5_WdError(v42);
LABEL_39:
              auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v59);
              goto LABEL_53;
            }
            if ( v18 != -1073741789 )
            {
              v22 = WdLogNewEntry5_WdAssertion(0x80000000LL, v19);
              WdLogEvent5_WdAssertion(v22);
            }
            v23 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(v15, v58);
            v21 = v23;
            if ( v23 < 0 )
            {
              v42 = WdLogNewEntry5_WdError(v25, v24);
              *(_QWORD *)(v42 + 24) = v21;
              goto LABEL_36;
            }
            v26 = MonitorSerializeMonitor(v16, &v58, *(_QWORD *)(v15 + 32));
            v21 = v26;
            if ( v26 < 0 )
              goto LABEL_33;
            v59 = 0LL;
            Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v52, v15);
            auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v59);
          }
          v27 = *(_QWORD *)(v9 + 8);
          v9 = v27 - 8;
          if ( v27 == a1 + 24 )
            v9 = 0LL;
        }
        while ( v9 );
        v28 = v55;
        v8 = (_QWORD *)v54[0];
        if ( v55 > 1 )
          goto LABEL_26;
      }
    }
    v28 = 1LL;
LABEL_26:
    v29 = 4 * v28 + 4;
    if ( v8 != v54 )
    {
      v30 = v8 - 1;
      while ( v30 )
      {
        v29 += v30[5];
        v31 = (_QWORD *)v30[1];
        v30 = v31 - 1;
        if ( v31 == v54 )
          v30 = 0LL;
      }
    }
    v32 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v29);
    v21 = v32;
    if ( v32 >= 0 )
    {
      v44 = 1LL;
      v45 = *(_BYTE **)(a2 + 32);
      *v45 = v55;
      v46 = *(_BYTE **)(a2 + 32);
      if ( (unsigned __int8)v55 > 1u )
        v44 = (unsigned __int8)v55;
      v47 = 0;
      v48 = &v46[4 * (unsigned __int8)v44 + 4];
      if ( (_QWORD *)v54[0] == v54 )
        v49 = 0LL;
      else
        v49 = v54[0] - 8LL;
      if ( v49 )
      {
        do
        {
          *(_DWORD *)&v45[4 * v47 + 4] = (_DWORD)v48 - (_DWORD)v45;
          memmove(v48, *(const void **)(v49 + 32), *(_QWORD *)(v49 + 40));
          v48 += *(_QWORD *)(v49 + 40);
          v34 = v54;
          v50 = *(_QWORD **)(v49 + 8);
          v49 = (__int64)(v50 - 1);
          if ( v50 == v54 )
            v49 = 0LL;
          ++v47;
        }
        while ( v49 );
        v46 = *(_BYTE **)(a2 + 32);
      }
      if ( v47 != *v46 )
      {
        v51 = WdLogNewEntry5_WdAssertion(v34, v44);
        WdLogEvent5_WdAssertion(v51);
      }
      LODWORD(v21) = 0;
    }
    else
    {
      v35 = WdLogNewEntry5_WdError(v34, v33);
      *(_QWORD *)(v35 + 24) = v21;
      WdLogEvent5_WdError(v35);
    }
LABEL_53:
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v52);
    return (unsigned int)v21;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(a1, 0LL);
    *(_QWORD *)(v4 + 24) = 0LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
}
