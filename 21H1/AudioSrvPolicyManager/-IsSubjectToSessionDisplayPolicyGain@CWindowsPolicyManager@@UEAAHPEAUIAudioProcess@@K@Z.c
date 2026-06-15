/*
 * XREFs of ?IsSubjectToSessionDisplayPolicyGain@CWindowsPolicyManager@@UEAAHPEAUIAudioProcess@@K@Z @ 0x18000B8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_30955612@@@details@wil@@QEAA_NXZ @ 0x18000DCCC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_30955612@@@detail.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::IsSubjectToSessionDisplayPolicyGain(
        CWindowsPolicyManager *this,
        struct IAudioProcess *a2,
        unsigned int a3)
{
  void (__fastcall **v3)(struct IAudioProcess *, GUID *, _QWORD *); // rax
  int v5; // esi
  int v6; // r14d
  int v7; // ebp
  int v8; // edi
  int v9; // eax
  bool v10; // zf
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rbx
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v3 = *(void (__fastcall ***)(struct IAudioProcess *, GUID *, _QWORD *))a2;
  v5 = 0;
  v15[0] = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  (*v3)(a2, &GUID_2ea99478_7574_414c_8ba3_0c615b1716a4, v15);
  v16 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v15[0] + 24LL))(v15[0], &v16) >= 0 )
  {
    v6 = *(_DWORD *)(v16 + 492);
    v7 = *(_DWORD *)(v16 + 476);
    v5 = *(_DWORD *)(v16 + 496);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2101c_30955612>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2101c_30955612>::GetImpl'::`2'::impl) )
      v8 = *(_DWORD *)(*(_QWORD *)(v16 + 256) + 208LL) & 0x20;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2101c_30955612>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2101c_30955612>::GetImpl'::`2'::impl) )
  {
    if ( a3 <= 0x13 )
    {
      v9 = 933936;
      if ( _bittest(&v9, a3) )
        goto LABEL_18;
    }
    if ( v6 || v7 || v5 )
      goto LABEL_18;
    v10 = v8 == 0;
  }
  else
  {
    if ( a3 <= 0x13 )
    {
      v11 = 933936;
      if ( _bittest(&v11, a3) )
        goto LABEL_18;
    }
    if ( v6 || v7 )
      goto LABEL_18;
    v10 = v5 == 0;
  }
  if ( !v10 )
  {
LABEL_18:
    v12 = 0;
    goto LABEL_19;
  }
  v12 = 1;
LABEL_19:
  v13 = v16;
  if ( v16 && _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 8), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 24LL))(v13, 1LL);
  }
  if ( v15[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15[0] + 16LL))(v15[0]);
  return v12;
}
