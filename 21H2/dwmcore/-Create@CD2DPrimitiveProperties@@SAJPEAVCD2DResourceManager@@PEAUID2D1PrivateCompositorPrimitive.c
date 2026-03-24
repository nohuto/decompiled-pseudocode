/*
 * XREFs of ?Create@CD2DPrimitiveProperties@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitiveProperties@@PEAPEAV1@@Z @ 0x18024B18C
 * Callers:
 *     ?CreatePrimitiveProperties@CD2DContext@@UEAAJPEAPEAVCD2DPrimitiveProperties@@@Z @ 0x18023B7F0 (-CreatePrimitiveProperties@CD2DContext@@UEAAJPEAPEAVCD2DPrimitiveProperties@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025290 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18009F358 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18020FB94 (ModuleFailFastForHRESULT.c)
 *     ??0CD2DPrimitiveProperties@@IEAA@PEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x18024B00C (--0CD2DPrimitiveProperties@@IEAA@PEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitivePro.c)
 */

__int64 __fastcall CD2DPrimitiveProperties::Create(
        struct CD2DResourceManager *a1,
        struct ID2D1PrivateCompositorPrimitiveProperties *a2,
        struct CD2DPrimitiveProperties **a3)
{
  CD2DPrimitiveProperties *v6; // rax
  CD2DPrimitiveProperties *v7; // rax
  __int64 v8; // rcx
  struct CD2DPrimitiveProperties *v9; // rdi
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  const void *retaddr; // [rsp+38h] [rbp+0h]
  CD2DPrimitiveProperties *v15; // [rsp+58h] [rbp+20h] BYREF

  v6 = (CD2DPrimitiveProperties *)DefaultHeap::AllocClear(0x80uLL);
  if ( !v6 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v7 = CD2DPrimitiveProperties::CD2DPrimitiveProperties(v6, a1, a2);
  v15 = v7;
  v9 = v7;
  if ( v7 )
  {
    (*(void (__fastcall **)(CD2DPrimitiveProperties *))(*(_QWORD *)v7 + 8LL))(v7);
    v10 = (*(__int64 (__fastcall **)(struct CD2DPrimitiveProperties *))(*(_QWORD *)v9 + 48LL))(v9);
    v12 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x13u, 0LL);
    }
    else
    {
      v15 = 0LL;
      *a3 = v9;
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x11u, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
  return v12;
}
