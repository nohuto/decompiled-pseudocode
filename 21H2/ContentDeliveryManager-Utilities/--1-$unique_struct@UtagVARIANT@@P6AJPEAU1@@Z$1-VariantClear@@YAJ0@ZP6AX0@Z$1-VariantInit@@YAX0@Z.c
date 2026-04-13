/*
 * XREFs of ??1?$unique_struct@UtagVARIANT@@P6AJPEAU1@@Z$1?VariantClear@@YAJ0@ZP6AX0@Z$1?VariantInit@@YAX0@Z@wil@@QEAA@XZ @ 0x18001687C
 * Callers:
 *     __lambda_353eed16ddc6ae5524b08f91443a76fa_::operator()_::_1_::dtor$8 @ 0x1800D1675 (__lambda_353eed16ddc6ae5524b08f91443a76fa_--operator()_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall wil::unique_struct<tagVARIANT,long (*)(tagVARIANT *),&long VariantClear(tagVARIANT *),void (*)(tagVARIANT *),&void VariantInit(tagVARIANT *)>::~unique_struct<tagVARIANT,long (*)(tagVARIANT *),&long VariantClear(tagVARIANT *),void (*)(tagVARIANT *),&void VariantInit(tagVARIANT *)>(
        VARIANTARG *pvarg)
{
  return VariantClear(pvarg);
}
