/*
 * XREFs of ?GetContainerInfoInputObject@BamoInputSiteElementProxy@@UEAAPEAVBamoContainerInfoInputObjectProxy@@XZ @ 0x180010CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

struct BamoContainerInfoInputObjectProxy *__fastcall BamoInputSiteElementProxy::GetContainerInfoInputObject(
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
    JUMPOUT(0x180055FC6LL);
  }
  return (struct BamoContainerInfoInputObjectProxy *)*((_QWORD *)this + 12);
}
