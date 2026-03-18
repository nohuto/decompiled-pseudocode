/*
 * XREFs of ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x1800D254C
 * Callers:
 *     ?GetUniqueId@BamoDataSourceProxy@@UEAAAEBU_LUID@@XZ @ 0x1800D2520 (-GetUniqueId@BamoDataSourceProxy@@UEAAAEBU_LUID@@XZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180150424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  DWORD CurrentThreadId; // eax
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  CurrentThreadId = GetCurrentThreadId();
  if ( *((_DWORD *)this + 42) != CurrentThreadId && *((_DWORD *)this + 6) != CurrentThreadId )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x63D,
      (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      v3);
    JUMPOUT(0x18014C72CLL);
  }
}
