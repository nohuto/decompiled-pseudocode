/*
 * XREFs of ?HrFindInterface@CLegacyRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B30A0
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B33F0 (-HrFindInterface@CRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CLegacyRenderTarget::HrFindInterface(CLegacyRenderTarget *this, const struct _GUID *a2, void **a3)
{
  unsigned int v4; // ecx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_8ddf9ce7_e3f9_4bcf_983c_9c1b1b407c97.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_8ddf9ce7_e3f9_4bcf_983c_9c1b1b407c97.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_8ddf9ce7_e3f9_4bcf_983c_9c1b1b407c97.Data4;
    if ( !v5 )
      goto LABEL_8;
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data4;
    if ( v6 )
    {
      return (unsigned int)CRenderTarget::HrFindInterface(this, a2, a3);
    }
    else
    {
LABEL_8:
      *a3 = (void *)(((unsigned __int64)this + 144) & -(__int64)(this != 0LL));
      return 0;
    }
  }
  return v4;
}
