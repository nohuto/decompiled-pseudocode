/*
 * XREFs of ExpReturnPoolQuota @ 0x140367DEC
 * Callers:
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     ExReturnPoolQuota @ 0x140367A64 (ExReturnPoolQuota.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PsReturnPoolQuota @ 0x140367E30 (PsReturnPoolQuota.c)
 */

void __fastcall ExpReturnPoolQuota(struct _KPROCESS *Object, ULONG_PTR Amount, char a3, ULONG a4)
{
  PsReturnPoolQuota(Object, (POOL_TYPE)(a3 & 1), Amount);
  ObDereferenceObjectDeferDeleteWithTag(Object, a4);
}
