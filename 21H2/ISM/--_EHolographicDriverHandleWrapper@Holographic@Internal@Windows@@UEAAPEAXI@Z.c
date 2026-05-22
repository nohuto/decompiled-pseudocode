/*
 * XREFs of ??_EHolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x180159060
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ @ 0x180157D14 (--1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ.c)
 */

Windows::Internal::Holographic::HolographicDriverHandleWrapper *__fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::`vector deleting destructor'(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this,
        char a2)
{
  Windows::Internal::Holographic::HolographicDriverHandleWrapper::~HolographicDriverHandleWrapper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB0);
  return this;
}
