/*
 * XREFs of ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E7CA0
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02D92F4 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02D9E14 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C004C4D0 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C0059FEC (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C005B03C (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C005B484 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C02E78F8 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 */

__int64 __fastcall DMMVIDPN::SerializeVidPns(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  _QWORD *v7; // r15
  _QWORD *v8; // rcx
  _QWORD *v9; // rsi
  __int64 v10; // rsi
  __int64 (__fastcall ***v11)(_QWORD, __int64); // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 (__fastcall ***v16)(_QWORD, __int64); // rbx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  _QWORD *v21; // rax
  __int64 v22; // rax
  SIZE_T v23; // rdx
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int8 v32; // di
  __int64 v33; // rcx
  unsigned __int8 *v34; // rdx
  unsigned __int8 v35; // r8
  unsigned __int8 *v36; // rsi
  __int64 v37; // rbx
  _QWORD *v38; // rax
  __int64 v39; // rax
  _QWORD v40[2]; // [rsp+20h] [rbp-40h] BYREF
  int v41; // [rsp+30h] [rbp-30h]
  _QWORD v42[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v43; // [rsp+48h] [rbp-18h]
  int v44; // [rsp+50h] [rbp-10h]
  __int64 v45; // [rsp+58h] [rbp-8h]
  __int64 (__fastcall ***v46)(_QWORD, __int64); // [rsp+98h] [rbp+38h] BYREF

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdError(a1, 0LL);
    *(_QWORD *)(v4 + 24) = 0LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(a2 + 32) )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v6);
  }
  v41 = 0;
  v7 = (_QWORD *)(a1 + 24);
  v40[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
  v43 = 0LL;
  v40[1] = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
  v8 = v42;
  v42[0] = v42;
  v9 = (_QWORD *)*v7;
  v42[1] = v42;
  v44 = 2;
  v45 = 0LL;
  if ( v9 == v7 )
    goto LABEL_16;
  v10 = (__int64)(v9 - 1);
  if ( !v10 )
    goto LABEL_16;
  do
  {
    v11 = (__int64 (__fastcall ***)(_QWORD, __int64))operator new[](0x38uLL, 0x4E506456u, PagedPool);
    v16 = v11;
    if ( v11 )
    {
      v11[1] = 0LL;
      v11[2] = 0LL;
      *v11 = (__int64 (__fastcall **)(_QWORD, __int64))&DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
      v11[3] = (__int64 (__fastcall **)(_QWORD, __int64))&DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
      v11[4] = 0LL;
      v11[5] = 0LL;
      *((_DWORD *)v11 + 12) = 3;
    }
    else
    {
      v16 = 0LL;
    }
    v46 = v16;
    if ( !v16 )
    {
      v31 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
      *(_QWORD *)(v31 + 24) = 56LL;
      *(_QWORD *)(v31 + 32) = v10;
      WdLogEvent5_WdLowResource(v31);
      LODWORD(v20) = -1073741801;
      goto LABEL_26;
    }
    v17 = DMMVIDPN::Serialize(v10, (__int64)v16);
    v20 = v17;
    if ( v17 < 0 )
    {
      v30 = WdLogNewEntry5_WdError(v19, v18);
      *(_QWORD *)(v30 + 24) = v10;
      *(_QWORD *)(v30 + 32) = v20;
      WdLogEvent5_WdError(v30);
LABEL_26:
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v46);
      goto LABEL_40;
    }
    v46 = 0LL;
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v40, (__int64)v16);
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v46);
    v21 = *(_QWORD **)(v10 + 8);
    v10 = (__int64)(v21 - 1);
    if ( v21 == v7 )
      v10 = 0LL;
  }
  while ( v10 );
  v22 = v43;
  v8 = (_QWORD *)v42[0];
  if ( v43 > 1 )
    goto LABEL_17;
LABEL_16:
  v22 = 1LL;
LABEL_17:
  v23 = 4 * v22 + 4;
  if ( v8 != v42 )
  {
    v24 = v8 - 1;
    while ( v24 )
    {
      v23 += v24[5];
      v25 = (_QWORD *)v24[1];
      v24 = v25 - 1;
      if ( v25 == v42 )
        v24 = 0LL;
    }
  }
  v26 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v23);
  v20 = v26;
  if ( v26 >= 0 )
  {
    v32 = 0;
    **(_BYTE **)(a2 + 32) = v43;
    v33 = 1LL;
    v34 = *(unsigned __int8 **)(a2 + 32);
    v35 = *v34;
    if ( *v34 > 1u )
      v33 = *v34;
    v36 = &v34[4 * (unsigned __int8)v33 + 4];
    if ( (_QWORD *)v42[0] == v42 )
      v37 = 0LL;
    else
      v37 = v42[0] - 8LL;
    if ( v37 )
    {
      do
      {
        *(_DWORD *)(*(_QWORD *)(a2 + 32) + 4LL * v32 + 4) = (_DWORD)v36 - *(_DWORD *)(a2 + 32);
        memmove(v36, *(const void **)(v37 + 32), *(_QWORD *)(v37 + 40));
        v36 += *(_QWORD *)(v37 + 40);
        v33 = (__int64)v42;
        v38 = *(_QWORD **)(v37 + 8);
        v37 = (__int64)(v38 - 1);
        if ( v38 == v42 )
          v37 = 0LL;
        ++v32;
      }
      while ( v37 );
      v35 = **(_BYTE **)(a2 + 32);
    }
    if ( v32 != v35 )
    {
      v39 = WdLogNewEntry5_WdAssertion(v33, v34);
      WdLogEvent5_WdAssertion(v39);
    }
    LODWORD(v20) = 0;
  }
  else
  {
    v29 = WdLogNewEntry5_WdError(v28, v27);
    *(_QWORD *)(v29 + 24) = v20;
    WdLogEvent5_WdError(v29);
  }
LABEL_40:
  Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v40);
  return (unsigned int)v20;
}
