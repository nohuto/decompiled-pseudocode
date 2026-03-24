/*
 * XREFs of ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z @ 0x1802380E4
 * Callers:
 *     ?CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180224830 (-CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800656F0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800D3644 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D44F4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x1801D73A0 (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     _anonymous_namespace_::BypassGestureTargeting @ 0x18023751C (_anonymous_namespace_--BypassGestureTargeting.c)
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x180237D94 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 */

__int64 __fastcall CGestureTargetingManager::ProcessInteractions(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 (__fastcall ***v5)(_QWORD); // rbx
  __int64 v6; // rax
  __int64 (__fastcall ***v7)(_QWORD); // rax
  int v8; // eax
  __int64 (__fastcall ***v9)(_QWORD); // rbx
  __int64 v10; // rax
  void (__fastcall *v11)(__int64 *, BOOL *); // rbx
  int v13; // [rsp+50h] [rbp-B0h] BYREF
  __int64 (__fastcall ***v14)(_QWORD); // [rsp+58h] [rbp-A8h] BYREF
  BOOL v15; // [rsp+60h] [rbp-A0h] BYREF
  __int64 (__fastcall ***v16)(_QWORD); // [rsp+68h] [rbp-98h] BYREF
  __int64 (__fastcall ***v17)(_QWORD); // [rsp+70h] [rbp-90h] BYREF
  __int64 (__fastcall ***v18)(_QWORD); // [rsp+78h] [rbp-88h] BYREF
  __int64 (__fastcall **v19)(_QWORD); // [rsp+80h] [rbp-80h] BYREF
  __int128 v20; // [rsp+88h] [rbp-78h] BYREF
  __int64 v21; // [rsp+98h] [rbp-68h]
  int v22; // [rsp+A0h] [rbp-60h]
  __int16 v23; // [rsp+A8h] [rbp-58h] BYREF
  char v24; // [rsp+AAh] [rbp-56h]
  __int128 v25; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v26; // [rsp+C0h] [rbp-40h]
  int v27; // [rsp+C8h] [rbp-38h]
  __int128 v28; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v29; // [rsp+E0h] [rbp-20h]
  int v30; // [rsp+E8h] [rbp-18h]
  __int128 v31; // [rsp+F0h] [rbp-10h] BYREF

  v2 = *a1;
  v14 = 0LL;
  v17 = 0LL;
  v18 = (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64 *))(v2 + 112))(a1);
  v5 = v18;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v18);
  *(_QWORD *)((char *)&v31 + 4) = 0LL;
  HIDWORD(v31) = 0;
  v25 = 0LL;
  LOWORD(v31) = 0;
  v20 = 0LL;
  v26 = 0LL;
  v28 = 0LL;
  v27 = 0;
  v23 = 0;
  v24 = 0;
  v21 = 0LL;
  v22 = 0;
  LOWORD(v19) = 0;
  BYTE2(v19) = 0;
  v29 = 0LL;
  v30 = 0;
  v13 = 3;
  if ( anonymous_namespace_::BypassGestureTargeting(a1, a2) )
  {
    v6 = *a1;
    v13 = 2;
    v7 = (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64 *))(v6 + 16))(a1);
    Microsoft::WRL::ComPtr<CManipulationContext>::operator=(&v14, v7);
  }
  v8 = v13;
  if ( v13 != 3 )
    goto LABEL_6;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v17);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v14);
  if ( (int)CGestureTargetingManager::ProcessInteractionTree(
              (__int64)a1,
              v5,
              a2,
              (__int64)&v23,
              &v19,
              (__int64)&v28,
              &v31,
              &v13,
              &v14,
              &v17) >= 0 )
  {
    v8 = v13;
    if ( v13 == 3 )
    {
LABEL_11:
      v10 = *a1;
      v15 = 1;
      v16 = v17;
      v11 = *(void (__fastcall **)(__int64 *, BOOL *))(v10 + 104);
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v16);
      v11(a1, &v15);
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v16);
      goto LABEL_12;
    }
LABEL_6:
    if ( v8 != 4 )
    {
      v16 = v14;
      v15 = v8 != 1;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v16);
      if ( v13 == 2 )
      {
        v9 = v14;
        if ( v9 == (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64 *))(*a1 + 112))(a1) )
          Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v16);
      }
      (*(void (__fastcall **)(__int64 *, BOOL *))(*a1 + 88))(a1, &v15);
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v16);
    }
    goto LABEL_11;
  }
LABEL_12:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v28);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v20);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v25);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v18);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v17);
  return Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v14);
}
