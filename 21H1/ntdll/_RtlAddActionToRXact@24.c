/*
 * XREFs of _RtlAddActionToRXact@24 @ 0x4B345590
 * Callers:
 *     <none>
 * Callees:
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _RtlAddAttributeActionToRXact@32 @ 0x4B3455D0 (_RtlAddAttributeActionToRXact@32.c)
 */

int __stdcall RtlAddActionToRXact(int a1, int a2, int a3, int a4, void *Src, size_t Size)
{
  UNICODE_STRING DestinationString; // [esp+0h] [ebp-8h] BYREF

  RtlInitUnicodeString(&DestinationString, 0);
  return RtlAddAttributeActionToRXact(a1, a2, a3, -1, (int)&DestinationString, a4, Src, Size);
}
