/*
 * XREFs of HalpSendPccCommand @ 0x14086226C
 * Callers:
 *     HalpChannelPowerRequest @ 0x140861FD8 (HalpChannelPowerRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     HalpStartPccCommand @ 0x1408622D8 (HalpStartPccCommand.c)
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
    *(_DWORD *)(qword_140C48C40 + 12) = v3;
    *(_DWORD *)qword_140C48C40 = *(_DWORD *)(a2 + 4);
    if ( *(_DWORD *)(a2 + 4) == 2 )
      *(_DWORD *)(qword_140C48C40 + 8) = *(_DWORD *)(a2 + 16);
    LOBYTE(v5) = 3;
    return (*((__int64 (__fastcall **)(_QWORD, __int64))&xmmword_140C48C20 + 1))(
             *((_QWORD *)&xmmword_140C48BF0 + 1),
             v5);
  }
  return result;
}
