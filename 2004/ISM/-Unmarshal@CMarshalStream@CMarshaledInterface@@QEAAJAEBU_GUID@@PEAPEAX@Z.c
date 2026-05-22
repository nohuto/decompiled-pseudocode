/*
 * XREFs of ?Unmarshal@CMarshalStream@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180118D90
 * Callers:
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180119A44 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CMarshaledInterface::CMarshalStream::Unmarshal(
        CMarshaledInterface::CMarshalStream *this,
        const struct _GUID *a2,
        void **a3)
{
  HRESULT result; // eax
  __int64 v5; // rcx
  IStream *v6; // rcx

  result = 0;
  *a3 = 0LL;
  if ( *((_DWORD *)this + 6) == 2 )
  {
    if ( *((_QWORD *)this + 4) )
    {
      v5 = *((_QWORD *)this + 4);
      if ( v5 )
        return (*(__int64 (__fastcall **)(__int64, const struct _GUID *, void **, CMarshaledInterface::CMarshalStream *))(*(_QWORD *)v5 + 24LL))(
                 v5,
                 a2,
                 a3,
                 this);
    }
    else
    {
      return -2147024809;
    }
  }
  else
  {
    v6 = (IStream *)*((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = 0LL;
    return CoGetInterfaceAndReleaseStream(v6, a2, a3);
  }
  return result;
}
