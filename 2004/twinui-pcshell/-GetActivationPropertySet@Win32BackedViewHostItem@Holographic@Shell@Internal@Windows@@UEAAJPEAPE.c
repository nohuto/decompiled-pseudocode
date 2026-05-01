/*
 * XREFs of ?GetActivationPropertySet@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@5@@Z @ 0x18024E840
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::GetActivationPropertySet(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this,
        struct Windows::Foundation::Collections::IPropertySet **a2)
{
  RTL_SRWLOCK *v2; // rsi

  *a2 = 0LL;
  v2 = (RTL_SRWLOCK *)((char *)this + 208);
  AcquireSRWLockShared((PSRWLOCK)this + 26);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 71);
  *a2 = (struct Windows::Foundation::Collections::IPropertySet *)*((_QWORD *)this + 71);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return 0LL;
}
