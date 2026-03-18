/*
 * XREFs of IoCompleteRequest @ 0x140500560
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x140284EB0 (IofCompleteRequest.c)
 */

void __fastcall IoCompleteRequest(IRP *a1, CCHAR a2)
{
  IofCompleteRequest(a1, a2);
}
