/*
 * XREFs of ??0ResultException@wil@@QEAA@AEBV01@@Z @ 0x1800B4574
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy_0 @ 0x18006AC22 (_o___std_exception_copy_0.c)
 *     ?assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z @ 0x1800B5D3C (-assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z.c)
 */

wil::ResultException *__fastcall wil::ResultException::ResultException(
        wil::ResultException *this,
        const struct wil::ResultException *a2)
{
  *(_QWORD *)this = &std::logic_error::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy_0();
  *(_QWORD *)this = &wil::ResultException::`vftable';
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 24);
  *(_OWORD *)((char *)this + 40) = *(_OWORD *)((char *)a2 + 40);
  *(_OWORD *)((char *)this + 56) = *(_OWORD *)((char *)a2 + 56);
  *(_OWORD *)((char *)this + 72) = *(_OWORD *)((char *)a2 + 72);
  *(_OWORD *)((char *)this + 88) = *(_OWORD *)((char *)a2 + 88);
  *(_OWORD *)((char *)this + 104) = *(_OWORD *)((char *)a2 + 104);
  *(_OWORD *)((char *)this + 120) = *(_OWORD *)((char *)a2 + 120);
  *(_OWORD *)((char *)this + 136) = *(_OWORD *)((char *)a2 + 136);
  *(_OWORD *)((char *)this + 152) = *(_OWORD *)((char *)a2 + 152);
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  wil::details::shared_buffer::assign(
    (wil::ResultException *)((char *)this + 168),
    *((int **)a2 + 21),
    *((_QWORD *)a2 + 22));
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  wil::details::shared_buffer::assign(
    (wil::ResultException *)((char *)this + 184),
    *((int **)a2 + 23),
    *((_QWORD *)a2 + 24));
  return this;
}
