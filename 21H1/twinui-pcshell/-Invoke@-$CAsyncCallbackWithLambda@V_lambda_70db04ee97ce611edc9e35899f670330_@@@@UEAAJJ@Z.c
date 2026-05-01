/*
 * XREFs of ?Invoke@?$CAsyncCallbackWithLambda@V_lambda_70db04ee97ce611edc9e35899f670330_@@@@UEAAJJ@Z @ 0x1801F3D50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1801EFB94 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda<_lambda_70db04ee97ce611edc9e35899f670330_>::Invoke(__int64 a1, void *a2)
{
  wil::details **v3; // rcx
  wil::details *v4; // rcx

  v3 = *(wil::details ***)(a1 + 56);
  if ( v3 )
  {
    v4 = *v3;
    if ( v4 )
      wil::details::SetEvent(v4, a2);
  }
  Sleep(*(_DWORD *)(a1 + 48));
  return 0LL;
}
