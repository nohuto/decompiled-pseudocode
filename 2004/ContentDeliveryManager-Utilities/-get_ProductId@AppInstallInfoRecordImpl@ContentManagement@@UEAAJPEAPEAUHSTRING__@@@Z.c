/*
 * XREFs of ?get_ProductId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180024B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::AppInstallInfoRecordImpl::get_ProductId(
        ContentManagement::AppInstallInfoRecordImpl *this,
        HSTRING *a2)
{
  RTL_SRWLOCK *v2; // rsi
  unsigned int v5; // ebx

  v2 = (RTL_SRWLOCK *)((char *)this + 24);
  AcquireSRWLockShared((PSRWLOCK)this + 3);
  v5 = WindowsDuplicateString(*((HSTRING *)this + 4), a2);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v5;
}
