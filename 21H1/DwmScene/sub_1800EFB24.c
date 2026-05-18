/*
 * XREFs of sub_1800EFB24 @ 0x1800EFB24
 * Callers:
 *     sub_1800A49F4 @ 0x1800A49F4 (sub_1800A49F4.c)
 * Callees:
 *     ?getTemplateNonTypeArgument@UnDecorator@@CA?AVDName@@XZ @ 0x1800EF8FC (-getTemplateNonTypeArgument@UnDecorator@@CA-AVDName@@XZ.c)
 */

__int64 __fastcall sub_1800EFB24(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 112) )
    return UnDecorator::getTemplateNonTypeArgument(a1);
  return result;
}
