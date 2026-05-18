/*
 * XREFs of sub_1800F53F4 @ 0x1800F53F4
 * Callers:
 *     sub_1800AA2C4 @ 0x1800AA2C4 (sub_1800AA2C4.c)
 * Callees:
 *     ?getTemplateNonTypeArgument@UnDecorator@@CA?AVDName@@XZ @ 0x1800F51CC (-getTemplateNonTypeArgument@UnDecorator@@CA-AVDName@@XZ.c)
 */

__int64 __fastcall sub_1800F53F4(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 112) )
    return UnDecorator::getTemplateNonTypeArgument(a1);
  return result;
}
