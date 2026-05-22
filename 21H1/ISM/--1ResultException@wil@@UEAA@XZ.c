/*
 * XREFs of ??1ResultException@wil@@UEAA@XZ @ 0x180064B3C
 * Callers:
 *     ??_GResultException@wil@@UEAAPEAXI@Z @ 0x180064F10 (--_GResultException@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18006857C (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::ResultException::~ResultException(wil::ResultException *this)
{
  wil::details::shared_buffer::reset((wil::ResultException *)((char *)this + 184));
  wil::details::shared_buffer::reset((wil::ResultException *)((char *)this + 168));
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0();
}
