/*
 * XREFs of ??1?$unique_struct@UtagVARIANT@@P6AJPEAU1@@Z$1?VariantClear@@YAJ0@ZP6AX0@Z$1?VariantInit@@YAX0@Z@wil@@QEAA@XZ @ 0x18001666C
 * Callers:
 *     __lambda_760a63f25e541b58840fe190f8bb149e_::operator()_::_1_::dtor$8 @ 0x1800CF56B (__lambda_760a63f25e541b58840fe190f8bb149e_--operator()_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall wil::unique_struct<tagVARIANT,long (*)(tagVARIANT *),&long VariantClear(tagVARIANT *),void (*)(tagVARIANT *),&void VariantInit(tagVARIANT *)>::~unique_struct<tagVARIANT,long (*)(tagVARIANT *),&long VariantClear(tagVARIANT *),void (*)(tagVARIANT *),&void VariantInit(tagVARIANT *)>(
        VARIANTARG *pvarg)
{
  return VariantClear(pvarg);
}
