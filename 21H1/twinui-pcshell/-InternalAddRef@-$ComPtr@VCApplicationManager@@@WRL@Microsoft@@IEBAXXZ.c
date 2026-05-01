/*
 * XREFs of ?InternalAddRef@?$ComPtr@VCApplicationManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1801292A0
 * Callers:
 *     _lambda_745aa0a15c871b15a946ed0c85a37995_::_lambda_745aa0a15c871b15a946ed0c85a37995_ @ 0x180092574 (_lambda_745aa0a15c871b15a946ed0c85a37995_--_lambda_745aa0a15c871b15a946ed0c85a37995_.c)
 * Callees:
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x18011C540 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

void __fastcall Microsoft::WRL::ComPtr<CApplicationManager>::InternalAddRef(__int64 *a1)
{
  __int64 v1; // rdx
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *(_QWORD *)(v1 + 384);
    while ( v2 >= 0 )
    {
      if ( (_DWORD)v2 != 0x7FFFFFFF )
      {
        v3 = v2;
        v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 384), v2 + 1, v2);
        if ( v3 != v2 )
          continue;
      }
      return;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
      (Microsoft::WRL::Details *)(2 * v2 + 16),
      (volatile int *)v1);
  }
}
