/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_96cb8f9aac58871247b5c84caff3708b_____lambda_96cb8f9aac58871247b5c84caff3708b___ @ 0x18013F55C
 * Callers:
 *     _lambda_37f27d7232610e21b40ee608124aee94_::operator() @ 0x180140108 (_lambda_37f27d7232610e21b40ee608124aee94_--operator().c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002FF10 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800579E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_96cb8f9aac58871247b5c84caff3708b_____lambda_96cb8f9aac58871247b5c84caff3708b___(
        __int64 *a1,
        _BYTE *a2)
{
  char *v4; // rax
  char *v5; // rbx
  volatile int *v6; // rdx
  _QWORD *v7; // rcx

  *a1 = 0LL;
  v4 = (char *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v4);
    v6 = (volatile int *)(v5 + 24);
    v5[16] = *a2;
    v7 = a2 + 8;
    *((_QWORD *)v5 + 3) = 0LL;
    if ( v5 + 24 != a2 + 8 )
    {
      *(_QWORD *)v6 = *v7;
      *v7 = 0LL;
    }
    *(_QWORD *)v5 = off_1804987A0;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
        *a1,
        v6);
    *a1 = (__int64)v5;
  }
  return a1;
}
