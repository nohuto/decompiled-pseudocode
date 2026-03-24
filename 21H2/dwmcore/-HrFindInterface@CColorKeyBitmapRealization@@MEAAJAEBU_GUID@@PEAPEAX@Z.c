/*
 * XREFs of ?HrFindInterface@CColorKeyBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180262920
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025290 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIBitmapRealization@@@Z @ 0x1800504FC (--0-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIBitmapRealizatio.c)
 *     ?HrFindInterface@CMILCOMBase@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006BFF0 (-HrFindInterface@CMILCOMBase@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIGDIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CBA10 (-reset@-$com_ptr_t@VIGDIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorKeyBitmapRealization::HrFindInterface(
        CColorKeyBitmapRealization *this,
        const struct _GUID *a2,
        void **a3)
{
  char *v3; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rax
  char *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  int (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rcx
  bool v13; // sf
  char *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  int (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v19; // [rsp+50h] [rbp+30h] BYREF
  __int64 v20; // [rsp+58h] [rbp+38h] BYREF

  v3 = 0LL;
  v6 = -2147024809;
  if ( a3 )
  {
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_db178a3c_d733_4570_9513_5392d717955f.Data4;
    if ( v7 )
    {
      v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_360f17f1_1aef_46a7_97ac_b5cc426e0309.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_360f17f1_1aef_46a7_97ac_b5cc426e0309.Data1 )
        v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_360f17f1_1aef_46a7_97ac_b5cc426e0309.Data4;
      if ( v9 )
      {
        v16 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8.Data1 )
          v16 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8.Data4;
        if ( v16 )
          return (unsigned int)CMILCOMBase::HrFindInterface(this, a2, a3);
        wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>(
          &v20,
          *(_QWORD *)(*((_QWORD *)this + 13) + 40LL));
        v19 = 0LL;
        if ( v20
          && (v17 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(int *)(*(_QWORD *)(v20 + 8) + 4LL) + v20 + 8),
              (**v17)(v17, &GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8, &v19) >= 0) )
        {
          v6 = 0;
          v3 = (char *)this + 96;
        }
        else
        {
          v6 = -2147467262;
        }
        *a3 = v3;
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v19);
      }
      else
      {
        wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>(
          &v20,
          *(_QWORD *)(*((_QWORD *)this + 13) + 40LL));
        v10 = v20;
        v11 = 0LL;
        v19 = 0LL;
        if ( !v20
          || (wil::com_ptr_t<IGDIBitmapRealization,wil::err_returncode_policy>::reset(&v19),
              v12 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(v10 + *(int *)(*(_QWORD *)(v10 + 8) + 4LL) + 8LL),
              v13 = (**v12)(v12, &GUID_360f17f1_1aef_46a7_97ac_b5cc426e0309, &v19) < 0,
              v11 = v19,
              v13) )
        {
          v6 = -2147467262;
          v14 = 0LL;
        }
        else
        {
          v6 = 0;
          v14 = (char *)this + 80;
        }
        *a3 = v14;
        if ( v11 )
        {
          v15 = *(int *)(*(_QWORD *)(v11 + 8) + 4LL) + v11 + 8;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v20);
    }
    else
    {
      if ( this )
        v8 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16;
      else
        v8 = 0LL;
      *a3 = v8;
      return 0;
    }
  }
  return v6;
}
