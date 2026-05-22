/*
 * XREFs of ?SetResult@AsyncPVPrincipal@@UEAAJPEAVBamoAsyncResult_PROPVARIANT_Stub@@AEBUtagPROPVARIANT@@@Z @ 0x18011AE20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AsyncPVPrincipal::SetResult(
        AsyncPVPrincipal *this,
        struct BamoAsyncResult_PROPVARIANT_Stub *a2,
        const struct tagPROPVARIANT *a3)
{
  __int64 v3; // rcx

  *((_BYTE *)this + 184) = 0;
  v3 = *((_QWORD *)this + 14);
  if ( !v3 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, const struct tagPROPVARIANT *))(*(_QWORD *)v3 + 16LL))(v3, a3);
  return 0LL;
}
