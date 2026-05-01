/*
 * XREFs of ??1ResultException@wil@@UEAA@XZ @ 0x180114084
 * Callers:
 *     ??_GResultException@wil@@UEAAPEAXI@Z @ 0x1801144F0 (--_GResultException@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x1800727A0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::ResultException::~ResultException(volatile signed __int32 **this)
{
  wil::details::shared_buffer::reset(this + 23);
  wil::details::shared_buffer::reset(this + 21);
  *this = (volatile signed __int32 *)&std::exception::`vftable';
  o___std_exception_destroy_0((__int64)(this + 1));
}
