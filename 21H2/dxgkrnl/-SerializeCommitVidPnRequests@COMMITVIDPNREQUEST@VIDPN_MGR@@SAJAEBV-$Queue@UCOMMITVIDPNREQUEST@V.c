/*
 * XREFs of ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C039E9C8
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C039899C (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C03993EC (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C004ED14 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C0067B00 (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C0068D8C (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x1C0069240 (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ?Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@Z @ 0x1C00696B0 (-Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZ.c)
 */

__int64 __fastcall VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // r14
  _QWORD *v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r15
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  int v19; // eax
  unsigned __int8 v20; // si
  unsigned __int8 v21; // cl
  unsigned __int8 *v22; // rdx
  unsigned __int8 v23; // r8
  unsigned __int8 *v24; // r14
  __int64 v25; // rbx
  _QWORD *v26; // rax
  _QWORD v27[2]; // [rsp+20h] [rbp-40h] BYREF
  int v28; // [rsp+30h] [rbp-30h]
  _QWORD v29[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v30; // [rsp+48h] [rbp-18h]
  int v31; // [rsp+50h] [rbp-10h]
  __int64 v32; // [rsp+58h] [rbp-8h]
  __int64 (__fastcall ***v33)(_QWORD, __int64); // [rsp+98h] [rbp+38h] BYREF

  if ( a2 )
  {
    if ( a2[4] )
      WdLogSingleEntry0(1LL);
    v28 = 0;
    v27[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v7 = *(_QWORD *)(a1 + 24);
    v27[1] = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
    v29[1] = v29;
    v8 = v29;
    v30 = 0LL;
    v29[0] = v29;
    v31 = 2;
    v32 = 0LL;
    if ( v7 == a1 + 24 || (v9 = v7 - 8) == 0 )
    {
LABEL_13:
      v15 = 1LL;
      if ( *(_QWORD *)(a1 + 40) > 1uLL )
        v15 = *(_QWORD *)(a1 + 40);
      v16 = 28 * v15 - 20;
      if ( v8 != v29 )
      {
        v17 = v8 - 1;
        while ( v17 )
        {
          v18 = (_QWORD *)v17[1];
          v16 += v17[5];
          v17 = v18 - 1;
          if ( v18 == v29 )
            v17 = 0LL;
        }
      }
      v19 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a2, v16, v16, a4);
      v13 = v19;
      if ( v19 >= 0 )
      {
        v20 = 0;
        *(_BYTE *)a2[4] = v30;
        v21 = 1;
        v22 = (unsigned __int8 *)a2[4];
        v23 = *v22;
        if ( *v22 > 1u )
          v21 = *v22;
        v24 = &v22[4 * v21 + 4];
        if ( (_QWORD *)v29[0] != v29 )
        {
          v25 = v29[0] - 8LL;
          if ( v29[0] != 8LL )
          {
            do
            {
              *(_DWORD *)(a2[4] + 4LL * v20 + 4) = (_DWORD)v24 - *((_DWORD *)a2 + 8);
              memmove(v24, *(const void **)(v25 + 32), *(_QWORD *)(v25 + 40));
              v24 += *(_QWORD *)(v25 + 40);
              v26 = *(_QWORD **)(v25 + 8);
              v25 = (__int64)(v26 - 1);
              if ( v26 == v29 )
                v25 = 0LL;
              ++v20;
            }
            while ( v25 );
            v23 = *(_BYTE *)a2[4];
          }
        }
        if ( v20 != v23 )
          WdLogSingleEntry0(1LL);
        v13 = 0;
      }
      else
      {
        WdLogSingleEntry1(2LL, v19);
      }
    }
    else
    {
      while ( 1 )
      {
        v10 = operator new[](0x38uLL, 0x4E506456u, 256LL, a4);
        v11 = v10;
        if ( !v10 )
          break;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = 0LL;
        *(_QWORD *)(v10 + 32) = 0LL;
        *(_QWORD *)v10 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
        *(_QWORD *)(v10 + 24) = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
        *(_QWORD *)(v10 + 40) = 0LL;
        *(_QWORD *)(v10 + 48) = 256LL;
        v33 = (__int64 (__fastcall ***)(_QWORD, __int64))v10;
        v12 = VIDPN_MGR::COMMITVIDPNREQUEST::Serialize(v9, (_QWORD *)v10);
        v13 = v12;
        if ( v12 < 0 )
        {
          WdLogSingleEntry2(2LL, v9, v12);
          goto LABEL_19;
        }
        v33 = 0LL;
        Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v27, v11);
        auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v33);
        v14 = *(_QWORD *)(v9 + 8);
        v9 = v14 - 8;
        if ( v14 == a1 + 24 )
          v9 = 0LL;
        if ( !v9 )
        {
          v8 = (_QWORD *)v29[0];
          goto LABEL_13;
        }
      }
      v33 = 0LL;
      WdLogSingleEntry2(6LL, 56LL, v9);
      v13 = -1073741801;
LABEL_19:
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v33);
    }
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v27);
    return v13;
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
}
