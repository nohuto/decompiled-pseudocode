/*
 * XREFs of ?SetVolumeOnKsTopology@@YAJAEBU_GUID@@KPEAUIKsControl@@PEAUKSPROPERTY_STEPPING_LONG@@M@Z @ 0x180143964
 * Callers:
 *     ?SetCellularVolume@TelephonyController@@UEAAJM@Z @ 0x180143870 (-SetCellularVolume@TelephonyController@@UEAAJM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SetVolumeOnKsTopology(
        const struct _GUID *a1,
        int a2,
        struct IKsControl *a3,
        struct KSPROPERTY_STEPPING_LONG *a4,
        float a5)
{
  int v5; // eax
  struct IKsControlVtbl *lpVtbl; // rax
  HRESULT (__stdcall *KsProperty)(IKsControl *, PKSPROPERTY, ULONG, void *, ULONG, ULONG *); // rax
  int v8; // eax
  unsigned int v9; // ebx
  GUID v11; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+50h] [rbp-18h]
  int v13; // [rsp+54h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  const struct _GUID *v15; // [rsp+70h] [rbp+8h] BYREF
  int v16; // [rsp+78h] [rbp+10h] BYREF

  v16 = a2;
  v15 = a1;
  if ( a4 )
    v5 = (int)((double)(int)((double)(int)(((double)a4->Bounds.SignedMaximum - (double)a4->Bounds.SignedMinimum)
                                         / (double)(int)a4->SteppingDelta)
                           * a5
                           + 0.5)
             * (double)(int)a4->SteppingDelta
             + (double)a4->Bounds.SignedMinimum);
  else
    v5 = (int)(float)(a5 * 65536.0);
  v16 = v5;
  lpVtbl = a3->lpVtbl;
  v12 = 1;
  v13 = 2;
  KsProperty = lpVtbl->KsProperty;
  v11 = GUID_abf25c7e_0e64_4e32_b190_d0f6d7c53e97;
  v8 = ((__int64 (__fastcall *)(struct IKsControl *, GUID *, __int64, int *, int, const struct _GUID **))KsProperty)(
         a3,
         &v11,
         24LL,
         &v16,
         4,
         &v15);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA3,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\telephonycontroller.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
