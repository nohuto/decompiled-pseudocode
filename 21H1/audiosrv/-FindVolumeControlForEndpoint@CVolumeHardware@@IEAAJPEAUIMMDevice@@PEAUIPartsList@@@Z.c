/*
 * XREFs of ?FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18005EB24
 * Callers:
 *     ?Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x1800607BC (-Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002C164 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800BE26C (WPP_SF_q.c)
 *     WPP_SF_qS @ 0x1800BE2B0 (WPP_SF_qS.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVolumeHardware::FindVolumeControlForEndpoint(
        CVolumeHardware *this,
        struct IUnknown *a2,
        struct IPartsList *a3)
{
  struct IUnknown *v6; // rcx
  int v7; // ebx
  CAudioSessionManager *v8; // rcx
  struct IUnknown *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  LPVOID pv; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v14; // [rsp+38h] [rbp-8h]
  int v15; // [rsp+78h] [rbp+38h] BYREF
  struct IUnknown *v16; // [rsp+88h] [rbp+48h] BYREF

  v6 = 0LL;
  v16 = 0LL;
  v15 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 33LL, &WPP_0837af417b5438e10b8c3569af41ec07_Traceguids, this);
    v6 = v16;
  }
  if ( a2 )
  {
    v14 = 0LL;
    pv = 0LL;
    v7 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64))a2->lpVtbl[1].QueryInterface)(
           a2,
           &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
           23LL);
    if ( v7 < 0 )
      goto LABEL_36;
    v7 = ((__int64 (__fastcall *)(struct IUnknown *, LPVOID *))a2->lpVtbl[1].Release)(a2, &pv);
    if ( v7 < 0 )
      goto LABEL_36;
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
    {
      if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qS(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          34,
          (unsigned int)&WPP_0837af417b5438e10b8c3569af41ec07_Traceguids,
          (_DWORD)this,
          (__int64)pv);
        v8 = WPP_GLOBAL_Control;
      }
      if ( v8 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v8 + 7) & 0x10000) != 0
        && *((_BYTE *)v8 + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)v8 + 2), 35LL, &WPP_0837af417b5438e10b8c3569af41ec07_Traceguids, this);
      }
    }
    v9 = v16;
    if ( v16 != a2 )
    {
      ATL::AtlComQIPtrAssign(&v16, a2, &GUID_c537ee8d_5574_454a_9354_aaa4e421d31e);
      v9 = v16;
    }
    if ( v9 )
    {
      v7 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v9->lpVtbl[3].Release)(v9, &v15);
      if ( v7 < 0 )
        goto LABEL_36;
    }
    v10 = *v14;
    v11 = v15
        ? (*(__int64 (__fastcall **)(__int64 *, struct IPartsList *, GUID *, GUID *, char *))(v10 + 72))(
            v14,
            a3,
            &GUID_35caf6e4_f3b3_4168_bb4b_55e77a461c7e,
            &GUID_7fb7b48f_531d_44a2_bcb3_5ad5a134b3dc,
            (char *)this + 248)
        : (*(unsigned __int64 (__fastcall **)(__int64 *, struct IPartsList *, GUID *, char *))(v10 + 32))(
            v14,
            a3,
            &GUID_7fb7b48f_531d_44a2_bcb3_5ad5a134b3dc,
            (char *)this + 248);
    v7 = v11;
    if ( v11 < 0 )
      goto LABEL_36;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 36LL, &WPP_0837af417b5438e10b8c3569af41ec07_Traceguids, this);
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, GUID *, char *))(**((_QWORD **)this + 31) + 104LL))(
           *((_QWORD *)this + 31),
           23LL,
           &GUID_7fb7b48f_531d_44a2_bcb3_5ad5a134b3dc,
           (char *)this + 256);
    if ( v7 < 0 )
LABEL_36:
      AudSrvTraceLoggingErrorHelper("CVolumeHardware::FindVolumeControlForEndpoint", 0x527u, v7);
    CoTaskMemFree(pv);
    pv = 0LL;
    if ( v14 )
      (*(void (__fastcall **)(__int64 *))(*v14 + 16))(v14);
    v6 = v16;
  }
  else
  {
    v7 = -2147467261;
  }
  if ( v6 )
    ((void (__fastcall *)(struct IUnknown *))v6->lpVtbl->Release)(v6);
  return (unsigned int)v7;
}
