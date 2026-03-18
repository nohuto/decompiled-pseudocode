/*
 * XREFs of NVMeHwInitialize @ 0x1C00097C0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerInitPart2 @ 0x1C000C7A0 (NVMeControllerInitPart2.c)
 *     NVMeControllerInitPart3 @ 0x1C000C9E4 (NVMeControllerInitPart3.c)
 */

char __fastcall NVMeHwInitialize(__int64 a1)
{
  int v1; // ebx
  char result; // al

  v1 = a1;
  if ( *(_BYTE *)(a1 + 16) )
  {
    result = NVMeControllerInitPart2(a1);
    if ( result )
      return NVMeControllerInitPart3(v1);
  }
  else
  {
    StorPortNotification(4096LL, a1, NVMeHwPassiveInitialize);
    return 0;
  }
  return result;
}
