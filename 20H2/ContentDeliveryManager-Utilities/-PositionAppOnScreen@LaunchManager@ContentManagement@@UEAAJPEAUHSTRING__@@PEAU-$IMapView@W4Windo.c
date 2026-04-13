/*
 * XREFs of ?PositionAppOnScreen@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAU?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@I@Z @ 0x18000FA50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::LaunchManager::PositionAppOnScreen(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v7; // rbx
  HRESULT v8; // eax
  int v9; // edi
  LPVOID v10; // rcx
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  LPVOID v14; // rcx
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // eax
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h]
  __int64 v21; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  LPVOID v23; // [rsp+80h] [rbp+30h] BYREF

  v21 = -2LL;
  v7 = 0LL;
  v20 = 0LL;
  v23 = 0LL;
  v8 = CoCreateInstance(
         &GUID_228826af_02e1_4226_a9e0_99a855e455a6,
         0LL,
         0x404u,
         &GUID_9767060c_9476_42e2_8f7b_2f10fd13765c,
         &v23);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x194,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v8);
LABEL_3:
    v10 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v11 = 0LL;
    goto LABEL_12;
  }
  v19 = 0LL;
  v12 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(*(_QWORD *)v23 + 96LL))(
          v23,
          &GUID_db147050_dcbf_4699_abaf_273e512e2a91,
          &GUID_ae8be46e_c53f_4d3c_bca2_52b917ba6d04,
          &v19);
  v9 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x196,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v12);
    v13 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    goto LABEL_3;
  }
  v7 = v19;
  v11 = v19;
  v19 = 0LL;
  v20 = v11;
  v14 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v9 = 0;
LABEL_12:
  if ( v9 >= 0 )
  {
    v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v7 + 48LL))(v7, a2, a3, a4);
    v9 = v17;
    if ( v17 >= 0 )
      goto LABEL_17;
    v15 = (unsigned int)v17;
    v16 = 343LL;
  }
  else
  {
    v15 = (unsigned int)v9;
    v16 = 342LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)v15);
LABEL_17:
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v9;
}
