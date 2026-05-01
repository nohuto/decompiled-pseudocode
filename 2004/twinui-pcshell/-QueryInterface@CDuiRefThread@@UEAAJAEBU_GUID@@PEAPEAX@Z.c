/*
 * XREFs of ?QueryInterface@CDuiRefThread@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180215A40
 * Callers:
 *     ?QueryInterface@CDuiRefThread@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F3B50 (-QueryInterface@CDuiRefThread@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?QueryInterface@CRefThread@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180215AA0 (-QueryInterface@CRefThread@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

HRESULT __fastcall CDuiRefThread::QueryInterface(CDuiRefThread *this, const struct _GUID *a2, void **a3)
{
  HRESULT result; // eax

  result = QISearch(this, &`CDuiRefThread::QueryInterface'::`2'::qit, a2, a3);
  if ( result == -2147467262 )
    return CRefThread::QueryInterface(this, a2, a3);
  return result;
}
