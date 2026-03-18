/*
 * XREFs of ??1?$com_ptr_t@VBamoPrincipalImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026978
 * Callers:
 *     ?OnItemMessage@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIPEBX0I@Z @ 0x180026890 (-OnItemMessage@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIPEBX0I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<Microsoft::BamoImpl::BamoPrincipalImpl,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::BamoPrincipalImpl,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
