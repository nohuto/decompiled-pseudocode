/*
 * XREFs of ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E0BC8
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
 *     ?Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@Z @ 0x1C005C8B4 (-Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZ.c)
 */

__int64 __fastcall VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  _QWORD *v8; // rdx
  __int64 v9; // rsi
  __int64 (__fastcall ***v10)(_QWORD, __int64); // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 (__fastcall ***v15)(_QWORD, __int64); // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  SIZE_T v22; // r8
  _QWORD *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int8 v31; // di
  __int64 v32; // rcx
  unsigned __int8 *v33; // rdx
  unsigned __int8 v34; // r8
  unsigned __int8 *v35; // rsi
  __int64 v36; // rbx
  _QWORD *v37; // rax
  __int64 v38; // rax
  _QWORD v39[2]; // [rsp+20h] [rbp-40h] BYREF
  int v40; // [rsp+30h] [rbp-30h]
  _QWORD v41[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v42; // [rsp+48h] [rbp-18h]
  int v43; // [rsp+50h] [rbp-10h]
  __int64 v44; // [rsp+58h] [rbp-8h]
  __int64 (__fastcall ***v45)(_QWORD, __int64); // [rsp+98h] [rbp+38h] BYREF

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v6 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v6);
    }
    v40 = 0;
    v39[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v7 = *(_QWORD *)(a1 + 24);
    v39[1] = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
    v41[1] = v41;
    v8 = v41;
    v42 = 0LL;
    v41[0] = v41;
    v43 = 2;
    v44 = 0LL;
    if ( v7 == a1 + 24 || (v9 = v7 - 8) == 0 )
    {
LABEL_16:
      v21 = 1LL;
      if ( *(_QWORD *)(a1 + 40) > 1uLL )
        v21 = *(_QWORD *)(a1 + 40);
      v22 = 28 * v21 - 20;
      if ( v8 != v41 )
      {
        v23 = v8 - 1;
        while ( v23 )
        {
          v26 = (_QWORD *)v23[1];
          v22 += v23[5];
          v23 = v26 - 1;
          if ( v26 == v41 )
            v23 = 0LL;
        }
      }
      v27 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v22);
      v19 = v27;
      if ( v27 >= 0 )
      {
        v31 = 0;
        **(_BYTE **)(a2 + 32) = v42;
        v32 = 1LL;
        v33 = *(unsigned __int8 **)(a2 + 32);
        v34 = *v33;
        if ( *v33 > 1u )
          v32 = *v33;
        v35 = &v33[4 * (unsigned __int8)v32 + 4];
        if ( (_QWORD *)v41[0] == v41 )
          v36 = 0LL;
        else
          v36 = v41[0] - 8LL;
        if ( v36 )
        {
          do
          {
            *(_DWORD *)(*(_QWORD *)(a2 + 32) + 4LL * v31 + 4) = (_DWORD)v35 - *(_DWORD *)(a2 + 32);
            memmove(v35, *(const void **)(v36 + 32), *(_QWORD *)(v36 + 40));
            v35 += *(_QWORD *)(v36 + 40);
            v32 = (__int64)v41;
            v37 = *(_QWORD **)(v36 + 8);
            v36 = (__int64)(v37 - 1);
            if ( v37 == v41 )
              v36 = 0LL;
            ++v31;
          }
          while ( v36 );
          v34 = **(_BYTE **)(a2 + 32);
        }
        if ( v31 != v34 )
        {
          v38 = WdLogNewEntry5_WdAssertion(v32, v33);
          WdLogEvent5_WdAssertion(v38);
        }
        LODWORD(v19) = 0;
      }
      else
      {
        v30 = WdLogNewEntry5_WdError(v29, v28);
        *(_QWORD *)(v30 + 24) = v19;
        WdLogEvent5_WdError(v30);
      }
    }
    else
    {
      while ( 1 )
      {
        v10 = (__int64 (__fastcall ***)(_QWORD, __int64))operator new[](0x38uLL, 0x4E506456u, PagedPool);
        v15 = v10;
        if ( v10 )
        {
          v10[1] = 0LL;
          v10[2] = 0LL;
          *v10 = (__int64 (__fastcall **)(_QWORD, __int64))&DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>::`vftable'{for `SetElement'};
          v10[3] = (__int64 (__fastcall **)(_QWORD, __int64))&DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
          v10[4] = 0LL;
          v10[5] = 0LL;
          *((_DWORD *)v10 + 12) = 3;
        }
        else
        {
          v15 = 0LL;
        }
        v45 = v15;
        if ( !v15 )
          break;
        v16 = VIDPN_MGR::COMMITVIDPNREQUEST::Serialize(v9, (__int64)v15);
        v19 = v16;
        if ( v16 < 0 )
        {
          v24 = WdLogNewEntry5_WdError(v18, v17);
          *(_QWORD *)(v24 + 24) = v9;
          *(_QWORD *)(v24 + 32) = v19;
          WdLogEvent5_WdError(v24);
          goto LABEL_22;
        }
        v45 = 0LL;
        Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v39, (__int64)v15);
        auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v45);
        v20 = *(_QWORD *)(v9 + 8);
        v9 = v20 - 8;
        if ( v20 == a1 + 24 )
          v9 = 0LL;
        if ( !v9 )
        {
          v8 = (_QWORD *)v41[0];
          goto LABEL_16;
        }
      }
      v25 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
      *(_QWORD *)(v25 + 24) = 56LL;
      *(_QWORD *)(v25 + 32) = v9;
      WdLogEvent5_WdLowResource(v25);
      LODWORD(v19) = -1073741801;
LABEL_22:
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v45);
    }
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v39);
    return (unsigned int)v19;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(a1, 0LL);
    *(_QWORD *)(v4 + 24) = 0LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
}
