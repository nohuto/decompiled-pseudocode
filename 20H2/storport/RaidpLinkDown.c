/*
 * XREFs of RaidpLinkDown @ 0x1C0037D8C
 * Callers:
 *     StorPortNotification @ 0x1C000E7E0 (StorPortNotification.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0037010 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     StorPortPause @ 0x1C0039780 (StorPortPause.c)
 */

__int64 __fastcall RaidpLinkDown(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // [rsp+20h] [rbp-18h]
  int v6; // [rsp+28h] [rbp-10h]

  if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
  {
    v6 = *(_DWORD *)(a1 + 2216);
    v5 = *(_DWORD *)(a1 + 56);
    McTemplateK0pqq_EtwWriteTransfer(a1, &EventLinkDown, a3, *(_QWORD *)(a1 + 560) + 16LL, v5, v6);
  }
  result = StorPortPause(*(_QWORD *)(a1 + 560) + 16LL, *(unsigned int *)(a1 + 2216));
  if ( (_BYTE)result )
    _InterlockedExchange((volatile __int32 *)(a1 + 2220), 0);
  return result;
}
