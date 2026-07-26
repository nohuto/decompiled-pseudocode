/*
 * XREFs of ??3@YAXPEAX@Z @ 0x1C003EDAC
 * Callers:
 *     NdisMRegisterWdiMiniportDriver @ 0x1C0125E40 (NdisMRegisterWdiMiniportDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall operator delete(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
