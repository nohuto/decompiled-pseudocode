/*
 * XREFs of ?HrFindInterface@CColorKeyBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180265100
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180031E90 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?HrFindInterface@CMILCOMBase@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077300 (-HrFindInterface@CMILCOMBase@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorKeyBitmap::HrFindInterface(CColorKeyBitmap *this, const struct _GUID *a2, void **a3)
{
  char *v3; // rbx
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  int (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v6 = -2147024809;
  if ( a3 )
  {
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data4;
    if ( v7 )
    {
      v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8.Data1 )
        v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8.Data4;
      if ( v8 )
      {
        return (unsigned int)CMILCOMBase::HrFindInterface(this, a2, a3);
      }
      else
      {
        v9 = *((_QWORD *)this + 5);
        v12 = 0LL;
        if ( v9
          && (v10 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(v9 + 8 + *(int *)(*(_QWORD *)(v9 + 8) + 4LL)),
              (**v10)(v10, &GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8, &v12) >= 0) )
        {
          v6 = 0;
          v3 = (char *)this + 32;
        }
        else
        {
          v6 = -2147467262;
        }
        *a3 = v3;
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v12);
      }
    }
    else
    {
      v6 = 0;
      *a3 = (void *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
    }
  }
  return v6;
}
