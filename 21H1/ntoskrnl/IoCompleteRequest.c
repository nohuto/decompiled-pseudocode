/*
 * XREFs of IoCompleteRequest @ 0x1404FFF10
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x140248710 (IofCompleteRequest.c)
 */

void __fastcall IoCompleteRequest(IRP *a1, CCHAR a2)
{
  IofCompleteRequest(a1, a2);
}
