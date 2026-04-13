/*
 * XREFs of ?put_ProductId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180024BC0
 * Callers:
 *     ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x18005BC88 (-ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU-$IVectorView@PEAVInstallAppInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::AppInstallInfoRecordImpl::put_ProductId(
        ContentManagement::AppInstallInfoRecordImpl *this,
        HSTRING a2)
{
  RTL_SRWLOCK *v2; // rdi
  unsigned int v5; // ebp

  v2 = (RTL_SRWLOCK *)((char *)this + 24);
  AcquireSRWLockExclusive((PSRWLOCK)this + 3);
  v5 = 0;
  if ( !a2 || a2 != *((HSTRING *)this + 4) )
  {
    WindowsDeleteString(*((HSTRING *)this + 4));
    *((_QWORD *)this + 4) = 0LL;
    v5 = WindowsDuplicateString(a2, (HSTRING *)this + 4);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return v5;
}
