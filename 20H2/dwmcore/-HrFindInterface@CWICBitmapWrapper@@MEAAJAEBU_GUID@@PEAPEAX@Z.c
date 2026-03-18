/*
 * XREFs of ?HrFindInterface@CWICBitmapWrapper@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CEC20
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180073E80 (-HrFindInterface@CBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWICBitmapWrapper::HrFindInterface(CWICBitmapWrapper *this, const struct _GUID *a2, void **a3)
{
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rax
  int (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v10; // rcx
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v5 = -2147024809;
  if ( a3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data4;
    if ( v6 )
    {
      v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IWICDecoderBitmapSource.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IWICDecoderBitmapSource.Data1 )
        v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IWICDecoderBitmapSource.Data4;
      if ( v7 )
      {
        CBitmap::HrFindInterface(this, a2, a3);
      }
      else
      {
        v11 = 0LL;
        v9 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 33);
        if ( v9 && (**v9)(v9, &IID_IWICDecoderBitmapSource, &v11) >= 0 )
        {
          v10 = v11;
          v5 = 0;
          *a3 = (char *)this + 256;
          if ( v10 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        else
        {
          return (unsigned int)-2147467262;
        }
      }
    }
    else
    {
      *a3 = (void *)(((unsigned __int64)this + 240) & -(__int64)(this != 0LL));
      return 0;
    }
  }
  return v5;
}
