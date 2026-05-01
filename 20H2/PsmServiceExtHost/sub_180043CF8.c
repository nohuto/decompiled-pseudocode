/*
 * XREFs of sub_180043CF8 @ 0x180043CF8
 * Callers:
 *     sub_18002B3C0 @ 0x18002B3C0 (sub_18002B3C0.c)
 * Callees:
 *     sub_18002BF9C @ 0x18002BF9C (sub_18002BF9C.c)
 *     sub_18003CE80 @ 0x18003CE80 (sub_18003CE80.c)
 *     memcpy @ 0x180046822 (memcpy.c)
 */

__int64 __fastcall sub_180043CF8(char *CallerContext, void *a2)
{
  char *v2; // rsi
  NTSTATUS v5; // eax
  int v6; // ebx
  unsigned int v7; // eax

  v2 = CallerContext + 56;
  *((_QWORD *)CallerContext + 5) = CallerContext + 56;
  v5 = NotifyUnicastIpAddressChange(
         0,
         (PUNICAST_IPADDRESS_CHANGE_CALLBACK)Callback,
         CallerContext,
         0,
         (HANDLE *)CallerContext + 8);
  v6 = v5;
  if ( v5 )
  {
    if ( v5 > 0 )
      return (unsigned __int16)v5 | 0xC0070000;
  }
  else
  {
    NotifyIpInterfaceChange(0, (PIPINTERFACE_CHANGE_CALLBACK)Callback, CallerContext, 0, (HANDLE *)CallerContext + 9);
    v6 = sub_18003CE80((void **)CallerContext);
    if ( v6 >= 0 )
    {
      v7 = sub_18002BF9C(*(_DWORD *)CallerContext);
      memcpy(a2, v2, v7);
    }
  }
  return (unsigned int)v6;
}
