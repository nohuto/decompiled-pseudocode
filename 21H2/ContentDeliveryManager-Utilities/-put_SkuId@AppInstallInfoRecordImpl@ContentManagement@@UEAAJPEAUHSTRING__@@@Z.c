/*
 * XREFs of ?put_SkuId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180025490
 * Callers:
 *     ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x18005C308 (-ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU-$IVectorView@PEAVInstallAppInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::AppInstallInfoRecordImpl::put_SkuId(
        ContentManagement::AppInstallInfoRecordImpl *this,
        HSTRING a2)
{
  RTL_SRWLOCK *v2; // rdi
  unsigned int v5; // ebp

  v2 = (RTL_SRWLOCK *)((char *)this + 24);
  AcquireSRWLockExclusive((PSRWLOCK)this + 3);
  v5 = 0;
  if ( !a2 || a2 != *((HSTRING *)this + 5) )
  {
    WindowsDeleteString(*((HSTRING *)this + 5));
    *((_QWORD *)this + 5) = 0LL;
    v5 = WindowsDuplicateString(a2, (HSTRING *)this + 5);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return v5;
}
