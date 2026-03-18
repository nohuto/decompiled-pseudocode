/*
 * XREFs of ?AddRef@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800F7B40
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180177B90 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::AddRef(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
  if ( (_DWORD)result == 1 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x107,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
      a4);
  return result;
}
