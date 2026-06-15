/*
 * XREFs of ?reset@?$unique_ptr@MU?$function_deleter@P6AXPEAX@Z$1?_freea@@YAX0@Z@wil@@@wistd@@QEAAXPEAM@Z @ 0x1800465F8
 * Callers:
 *     _lambda_eb7b93c79ee7a0b64d2291cc6159d2b2_::operator() @ 0x18006D7EC (_lambda_eb7b93c79ee7a0b64d2291cc6159d2b2_--operator().c)
 * Callees:
 *     _freea @ 0x1800470A0 (_freea.c)
 */

void __fastcall wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::reset(
        void **a1,
        void *a2)
{
  void *v2; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    freea(v2);
}
