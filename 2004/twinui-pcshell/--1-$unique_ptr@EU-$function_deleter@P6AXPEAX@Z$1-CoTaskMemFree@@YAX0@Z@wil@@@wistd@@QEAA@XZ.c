/*
 * XREFs of ??1?$unique_ptr@EU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180098EAC
 * Callers:
 *     _wil::make_unique_cotaskmem_unsigned_char_[0]__::_1_::dtor$0 @ 0x180098B22 (_wil--make_unique_cotaskmem_unsigned_char_[0]__--_1_--dtor$0.c)
 *     __lambda_ad1c2e3ff12b6fb3c427626c13364f68_::operator()_::_1_::dtor$0 @ 0x18026B6AE (__lambda_ad1c2e3ff12b6fb3c427626c13364f68_--operator()_--_1_--dtor$0.c)
 *     _DeserializePropertySet_::_1_::dtor$0 @ 0x1802BDA97 (_DeserializePropertySet_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(
        void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    CoTaskMemFree(v1);
}
