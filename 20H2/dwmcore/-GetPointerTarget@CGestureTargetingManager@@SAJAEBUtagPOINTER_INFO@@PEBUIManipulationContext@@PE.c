/*
 * XREFs of ?GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x180234A28
 * Callers:
 *     ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x180224C9C (-TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 * Callees:
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x18005B924 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C4C64 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CED94 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CFC44 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180221974 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _anonymous_namespace_::AllSupportedWithSingleTarget @ 0x1802347E4 (_anonymous_namespace_--AllSupportedWithSingleTarget.c)
 */

__int64 __fastcall CGestureTargetingManager::GetPointerTarget(
        const struct tagPOINTER_INFO *a1,
        const struct IManipulationContext *a2,
        struct TargetingInfo *a3)
{
  unsigned int v5; // r13d
  int v6; // eax
  __int64 (__fastcall ***v7)(_QWORD); // rsi
  _DWORD *v8; // rax
  int v9; // ecx
  __int64 *v10; // rax
  unsigned int v11; // edi
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // edx
  unsigned int v15; // eax
  __int64 v16; // r12
  __int64 (__fastcall *v17)(const struct IManipulationContext *, __int64, _QWORD); // rdi
  __int64 v18; // rax
  int v19; // ebx
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(_QWORD); // rbx
  bool v22; // al
  unsigned int v23; // ebx
  struct TargetingInfo *v24; // rcx
  int v26; // [rsp+20h] [rbp-79h]
  __int64 (__fastcall ***v27)(_QWORD); // [rsp+28h] [rbp-71h] BYREF
  int v28; // [rsp+30h] [rbp-69h]
  int v29; // [rsp+38h] [rbp-61h] BYREF
  __int64 (__fastcall ***v30)(_QWORD); // [rsp+40h] [rbp-59h] BYREF
  __int64 v31; // [rsp+48h] [rbp-51h] BYREF
  __int64 (__fastcall ***v32)(_QWORD); // [rsp+50h] [rbp-49h] BYREF
  struct TargetingInfo *v33; // [rsp+58h] [rbp-41h]
  char v34[8]; // [rsp+60h] [rbp-39h] BYREF
  __int64 v35; // [rsp+68h] [rbp-31h] BYREF
  int v36; // [rsp+70h] [rbp-29h] BYREF
  char v37; // [rsp+74h] [rbp-25h]
  char v38; // [rsp+A8h] [rbp+Fh]

  v33 = a3;
  v27 = 0LL;
  v30 = 0LL;
  v29 = 1;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v30);
  v5 = ConvertToInputType(*(_DWORD *)a1, *((_DWORD *)a1 + 3));
  v6 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 64LL))(
         a2,
         *((unsigned int *)a1 + 1),
         &v29);
  v28 = v6;
  if ( v6 < 0 )
  {
    v23 = v6;
    goto LABEL_52;
  }
  if ( (*((_DWORD *)a1 + 3) & 0x40000) != 0 && v29 && v30 && (unsigned int)(*v30)[18](v30) )
  {
    v26 = v29;
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v27, &v30);
    v7 = v27;
  }
  else
  {
    v8 = (_DWORD *)(*(__int64 (__fastcall **)(const struct IManipulationContext *, char *))(*(_QWORD *)a2 + 80LL))(
                     a2,
                     v34);
    v7 = 0LL;
    v9 = *v8;
    v10 = (__int64 *)(v8 + 2);
    v26 = v9;
    if ( &v31 != v10 )
    {
      v7 = (__int64 (__fastcall ***)(_QWORD))*v10;
      *v10 = 0LL;
    }
    v31 = 0LL;
    v27 = v7;
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v31);
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v35);
  }
  if ( v7 )
  {
    v11 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64 (__fastcall ***)(_QWORD), _QWORD))(*(_QWORD *)a2 + 56LL))(
            a2,
            v7,
            v5);
    if ( !v11
      || (v12 = *(_QWORD *)a2,
          v13 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(*(_QWORD *)a2 + 16LL))(a2),
          (*(unsigned int (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(v12 + 56))(a2, v13, v5) > v11) )
    {
      v26 = 0;
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v27);
      v7 = v27;
    }
  }
  v14 = *((_DWORD *)a1 + 3);
  if ( (v14 & 0x40000) != 0 )
  {
    if ( v29 )
    {
      if ( v30 != v7 )
      {
        v15 = ConvertToInputType(*(_DWORD *)a1, v14);
        if ( !anonymous_namespace_::AllSupportedWithSingleTarget((__int64)a2, v15) )
        {
          v26 = 1;
          Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v27);
          v7 = v27;
        }
      }
    }
  }
  if ( (*((_DWORD *)a1 + 3) & 0x40000) != 0 && v29 == 2 && v26 == 1 && v7 )
  {
    v26 = 1;
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v27);
    v7 = v27;
  }
  v16 = (__int64)v30;
  if ( v30 )
  {
    if ( v30 != v7 )
    {
      v17 = *(__int64 (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(*(_QWORD *)a2 + 56LL);
      v18 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(*(_QWORD *)a2 + 16LL))(a2);
      v19 = v17(a2, v18, v5);
      if ( (unsigned int)v17(a2, v16, v5) == v19 )
      {
        if ( ((unsigned int (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD, __int64))(*v30)[10])(v30, v5, 1LL) )
        {
          v20 = (__int64)v30;
          v31 = 0LL;
          v21 = (*v30)[16];
          Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v31);
          if ( ((int (__fastcall *)(__int64, _QWORD, __int64 *))v21)(v20, v5, &v31) >= 0 )
          {
            (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v31 + 40LL))(v31, &v36);
            v22 = v36 == 1 && ((v37 & 1) != 0 || (v37 & 2) != 0);
            if ( ((v38 & 1) == 0 || v22) && (unsigned int)(*v30)[17](v30) )
            {
              Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v27, &v30);
              v7 = v27;
              v26 = v29;
            }
          }
          Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v31);
        }
      }
    }
  }
  if ( !v26 )
  {
    if ( !v29 && (*((_DWORD *)a1 + 3) & 0x40000) == 0 )
      goto LABEL_49;
    v26 = 1;
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v27);
    v7 = v27;
  }
  if ( v26 == 1 && !v7 )
  {
    (*(void (__fastcall **)(const struct IManipulationContext *, __int64 *))(*(_QWORD *)a2 + 96LL))(a2, &v31);
    if ( v32 )
    {
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v27);
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v32);
      v23 = 0;
      v27 = v32;
    }
    else
    {
      v23 = v28;
    }
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v32);
    goto LABEL_50;
  }
LABEL_49:
  v23 = v28;
LABEL_50:
  v24 = v33;
  *(_DWORD *)v33 = v26;
  Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 (__fastcall ****)(_QWORD))v24 + 1, &v27);
LABEL_52:
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v30);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v27);
  return v23;
}
