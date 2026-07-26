/*
 * XREFs of ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1C0127A18
 * Callers:
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1C003414C (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     ndisIfCreateCompartment @ 0x1C00B2058 (ndisIfCreateCompartment.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     WPP_RECORDER_SF__guid_L @ 0x1C00B1DD4 (WPP_RECORDER_SF__guid_L.c)
 *     WPP_RECORDER_SF__guid_LL @ 0x1C00B511C (WPP_RECORDER_SF__guid_LL.c)
 */

__int64 __fastcall ndisIfCreateNetwork(struct _GUID *a1, int a2, int a3)
{
  __int64 v5; // rdx
  unsigned int v6; // esi
  __int64 v7; // r8
  __int64 v8; // r9
  int v10; // [rsp+20h] [rbp-E0h]
  __int64 v12; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+48h] [rbp-B8h]
  const NPI_MODULEID *v14; // [rsp+50h] [rbp-B0h]
  __int64 v15; // [rsp+58h] [rbp-A8h]
  int v16; // [rsp+60h] [rbp-A0h]
  int v17; // [rsp+64h] [rbp-9Ch]
  struct _GUID *v18; // [rsp+68h] [rbp-98h]
  __int64 v19; // [rsp+70h] [rbp-90h]
  _DWORD *v20; // [rsp+78h] [rbp-88h]
  __int64 v21; // [rsp+80h] [rbp-80h]
  _DWORD v22[132]; // [rsp+90h] [rbp-70h] BYREF

  HIDWORD(v13) = 0;
  HIDWORD(v15) = 0;
  HIDWORD(v19) = 0;
  HIDWORD(v21) = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_L(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      a3,
      0x1Au,
      (struct _GUID *)&WPP_26d5752112ac3cd786e6296fc2fada98_Traceguids,
      (__int64)a1,
      a2);
  v13 = 0LL;
  v15 = 6LL;
  v19 = 16LL;
  v21 = 528LL;
  memset(&v22[2], 0, 0x208uLL);
  v12 = 0LL;
  v14 = &NPI_MS_NDIS_MODULEID;
  v16 = 2;
  v20 = v22;
  v17 = 1;
  v18 = a1;
  v22[0] = 34603436;
  v22[1] = a2;
  v6 = NsiSetAllParametersEx(&v12);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_LL(*((_QWORD *)WPP_GLOBAL_Control + 8), v5, v7, v8, v10, (__int64)a1);
  return v6;
}
