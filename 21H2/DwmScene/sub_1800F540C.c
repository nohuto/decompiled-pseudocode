/*
 * XREFs of sub_1800F540C @ 0x1800F540C
 * Callers:
 *     sub_180092224 @ 0x180092224 (sub_180092224.c)
 *     sub_180092324 @ 0x180092324 (sub_180092324.c)
 *     sub_180092B60 @ 0x180092B60 (sub_180092B60.c)
 *     sub_1800F2044 @ 0x1800F2044 (sub_1800F2044.c)
 *     sub_1800F27BC @ 0x1800F27BC (sub_1800F27BC.c)
 *     sub_1800F4F40 @ 0x1800F4F40 (sub_1800F4F40.c)
 *     ?getTemplateNonTypeArgument@UnDecorator@@CA?AVDName@@XZ @ 0x1800F51CC (-getTemplateNonTypeArgument@UnDecorator@@CA-AVDName@@XZ.c)
 *     sub_180112BD0 @ 0x180112BD0 (sub_180112BD0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800F540C(__int64 a1, _QWORD *a2)
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
