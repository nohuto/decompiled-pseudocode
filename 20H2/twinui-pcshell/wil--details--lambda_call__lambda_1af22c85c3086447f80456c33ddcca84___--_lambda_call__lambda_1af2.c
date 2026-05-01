/*
 * XREFs of wil::details::lambda_call__lambda_1af22c85c3086447f80456c33ddcca84___::_lambda_call__lambda_1af22c85c3086447f80456c33ddcca84___ @ 0x1801E2298
 * Callers:
 *     __lambda_98c1f1c5cf1ecd7152756a5091f202b2_::operator()_::_1_::dtor$1 @ 0x1801E2873 (__lambda_98c1f1c5cf1ecd7152756a5091f202b2_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_1af22c85c3086447f80456c33ddcca84___::_lambda_call__lambda_1af22c85c3086447f80456c33ddcca84___(
        __int64 *a1)
{
  __int64 v1; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    v1 = *a1;
    *((_BYTE *)a1 + 16) = 0;
    *(_BYTE *)(v1 + 800) = 0;
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 1);
}
