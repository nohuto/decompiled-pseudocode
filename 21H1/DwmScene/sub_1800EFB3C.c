/*
 * XREFs of sub_1800EFB3C @ 0x1800EFB3C
 * Callers:
 *     sub_18008C954 @ 0x18008C954 (sub_18008C954.c)
 *     sub_18008CA54 @ 0x18008CA54 (sub_18008CA54.c)
 *     sub_18008D290 @ 0x18008D290 (sub_18008D290.c)
 *     sub_1800EC774 @ 0x1800EC774 (sub_1800EC774.c)
 *     sub_1800ECEEC @ 0x1800ECEEC (sub_1800ECEEC.c)
 *     sub_1800EF670 @ 0x1800EF670 (sub_1800EF670.c)
 *     ?getTemplateNonTypeArgument@UnDecorator@@CA?AVDName@@XZ @ 0x1800EF8FC (-getTemplateNonTypeArgument@UnDecorator@@CA-AVDName@@XZ.c)
 *     sub_18010D300 @ 0x18010D300 (sub_18010D300.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800EFB3C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 24);
  }
  *a2 = *(_QWORD *)(a1 + 16);
  result = a2;
  a2[1] = v2;
  return result;
}
