/*
 * XREFs of ?GetMPCInputObject@BamoInputSiteElementProxy@@UEAAPEAVBamoMPCInputObjectProxy@@XZ @ 0x180010A00
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

struct BamoMPCInputObjectProxy *__fastcall BamoInputSiteElementProxy::GetMPCInputObject(
        BamoInputSiteElementProxy *this)
{
  __int64 v2; // rdi
  DWORD CurrentThreadId; // eax
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL);
  CurrentThreadId = GetCurrentThreadId();
  if ( *(_DWORD *)(v2 + 168) != CurrentThreadId && *(_DWORD *)(v2 + 24) != CurrentThreadId )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x63D,
      (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      v4);
    JUMPOUT(0x180055E9ELL);
  }
  return (struct BamoMPCInputObjectProxy *)*((_QWORD *)this + 21);
}
