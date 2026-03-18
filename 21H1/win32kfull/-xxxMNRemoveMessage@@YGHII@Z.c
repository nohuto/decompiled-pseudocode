/*
 * XREFs of ?xxxMNRemoveMessage@@YGHII@Z @ 0x1951DC
 * Callers:
 *     _xxxHandleMenuMessages@12 @ 0x195390 (_xxxHandleMenuMessages@12.c)
 * Callees:
 *     _xxxInternalGetMessage@24 @ 0xA199C (_xxxInternalGetMessage@24.c)
 */

int __fastcall xxxMNRemoveMessage(struct tagMSG *a1, struct tagMSG *a2)
{
  struct tagMSG *v5[7]; // [esp+Ch] [ebp-1Ch] BYREF

  memset(v5, 0, sizeof(v5));
  if ( !xxxInternalGetMessage(v5, 0, 0, 2u, 0) || v5[1] != a1 && v5[1] != a2 )
    return 0;
  xxxInternalGetMessage(v5, v5[1], (unsigned int)v5[1], 1u, 0);
  return 1;
}
