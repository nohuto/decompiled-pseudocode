/*
 * XREFs of ?HrFindInterface@CHolographicInteropTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A0B20
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B33F0 (-HrFindInterface@CRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CHolographicInteropTarget::HrFindInterface(
        CHolographicInteropTarget *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data4;
    if ( v4 )
    {
      return CRenderTarget::HrFindInterface(this, a2, a3);
    }
    else
    {
      *a3 = (void *)(((unsigned __int64)this + 144) & -(__int64)(this != 0LL));
      return 0LL;
    }
  }
  return result;
}
