/*
 * XREFs of ??1?$unique_ptr@MU?$function_deleter@P6AXPEAX@Z$1?_freea@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1800C6128
 * Callers:
 *     __lambda_eb7b93c79ee7a0b64d2291cc6159d2b2_::operator()_::_1_::dtor$0 @ 0x18006DB4F (__lambda_eb7b93c79ee7a0b64d2291cc6159d2b2_--operator()_--_1_--dtor$0.c)
 *     _CAudioStream::GetChannelPeakValues_::_1_::dtor$1 @ 0x1800D1DB6 (_CAudioStream--GetChannelPeakValues_--_1_--dtor$1.c)
 *     _CAudioStream::GetPeakValue_::_1_::dtor$1 @ 0x1800D2025 (_CAudioStream--GetPeakValue_--_1_--dtor$1.c)
 * Callees:
 *     _freea @ 0x1800470A0 (_freea.c)
 */

void __fastcall wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::~unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>(
        void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    freea(v1);
}
