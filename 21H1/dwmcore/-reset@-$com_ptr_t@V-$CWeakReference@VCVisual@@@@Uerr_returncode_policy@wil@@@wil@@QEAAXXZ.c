/*
 * XREFs of ?reset@?$com_ptr_t@V?$CWeakReference@VCVisual@@@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CE9D8
 * Callers:
 *     ?Initialize@CExcludeVisualReference@@IEAAJPEAVCVisual@@@Z @ 0x1800DB010 (-Initialize@CExcludeVisualReference@@IEAAJPEAVCVisual@@@Z.c)
 *     ?RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z @ 0x1800DB158 (-RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ?UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ @ 0x1800DBF30 (-UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<CWeakReference<CVisual>,wil::err_returncode_policy>::reset(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
