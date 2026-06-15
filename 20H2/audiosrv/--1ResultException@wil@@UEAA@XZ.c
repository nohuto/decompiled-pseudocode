/*
 * XREFs of ??1ResultException@wil@@UEAA@XZ @ 0x1800B4788
 * Callers:
 *     ??_GResultException@wil@@UEAAPEAXI@Z @ 0x1800B47D0 (--_GResultException@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x1800B5E80 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::ResultException::~ResultException(wil::ResultException *this)
{
  wil::details::shared_buffer::reset((wil::ResultException *)((char *)this + 184));
  wil::details::shared_buffer::reset((wil::ResultException *)((char *)this + 168));
  *(_QWORD *)this = &std::logic_error::`vftable';
  o___std_exception_destroy_0((__int64)this + 8);
}
