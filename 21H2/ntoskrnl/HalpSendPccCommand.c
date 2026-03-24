/*
 * XREFs of HalpSendPccCommand @ 0x140866BBC
 * Callers:
 *     HalpChannelPowerRequest @ 0x140866928 (HalpChannelPowerRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     HalpStartPccCommand @ 0x140866C28 (HalpStartPccCommand.c)
 */

__int64 __fastcall HalpSendPccCommand(unsigned __int16 a1, __int64 a2)
{
  int v3; // edi
  __int64 result; // rax
  __int64 v5; // rdx

  v3 = a1;
  result = HalpStartPccCommand();
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(qword_140C48CC0 + 12) = v3;
    *(_DWORD *)qword_140C48CC0 = *(_DWORD *)(a2 + 4);
    if ( *(_DWORD *)(a2 + 4) == 2 )
      *(_DWORD *)(qword_140C48CC0 + 8) = *(_DWORD *)(a2 + 16);
    LOBYTE(v5) = 3;
    return (*((__int64 (__fastcall **)(_QWORD, __int64))&xmmword_140C48CA0 + 1))(
             *((_QWORD *)&xmmword_140C48C70 + 1),
             v5);
  }
  return result;
}
