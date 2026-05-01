/*
 * XREFs of ??1?$ComPtr@VCClassicWindowExternal@@@WRL@Microsoft@@QEAA@XZ @ 0x18013E464
 * Callers:
 *     __lambda_2dd20bac4e5d2f5df658143d4108a795_::operator()_::_1_::dtor$0 @ 0x1800DF7FA (__lambda_2dd20bac4e5d2f5df658143d4108a795_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindowExternal@@UIClassicWindowContainer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180086720 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindowEx.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CClassicWindowExternal>::~ComPtr<CClassicWindowExternal>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindowExternal,IClassicWindowContainer,Microsoft::WRL::FtmBase>::Release(
             result,
             a2);
  }
  return result;
}
