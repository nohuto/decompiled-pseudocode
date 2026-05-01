/*
 * XREFs of ?Release@?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@UEAAKXZ @ 0x180089640
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CRefCountedObject<WindowEventDispatcher::PendingActivationData>::Release(void *a1)
{
  unsigned __int32 v2; // edi
  HSTRING v4; // rcx

  v2 = _InterlockedDecrement((volatile signed __int32 *)a1 + 10);
  if ( !v2 && a1 )
  {
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)a1 + 4);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)a1 + 3);
    v4 = (HSTRING)*((_QWORD *)a1 + 2);
    if ( v4 )
      WindowsDeleteString(v4);
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  }
  return v2;
}
