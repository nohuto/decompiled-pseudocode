/*
 * XREFs of ?GetActivationPropertySet@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@5@@Z @ 0x18022C1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::GetActivationPropertySet(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this,
        struct Windows::Foundation::Collections::IPropertySet **a2)
{
  RTL_SRWLOCK *v2; // rsi

  *a2 = 0LL;
  v2 = (RTL_SRWLOCK *)((char *)this + 200);
  AcquireSRWLockShared((PSRWLOCK)this + 25);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 70);
  *a2 = (struct Windows::Foundation::Collections::IPropertySet *)*((_QWORD *)this + 70);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return 0LL;
}
