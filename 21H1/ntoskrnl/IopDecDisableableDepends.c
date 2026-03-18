/*
 * XREFs of IopDecDisableableDepends @ 0x1407BF168
 * Callers:
 *     PiProcessQueryDeviceState @ 0x14072E914 (PiProcessQueryDeviceState.c)
 *     IopRemoveDevice @ 0x140734134 (IopRemoveDevice.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14072B6D0 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall IopDecDisableableDepends(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rdx

  if ( a1 )
  {
    v1 = a1;
    do
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 600), 0xFFFFFFFF);
      if ( (_DWORD)result != 1 )
        break;
      v3 = *(_QWORD *)(v1 + 48);
      if ( v3 )
        result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v3, 11);
      v1 = *(_QWORD *)(v1 + 16);
    }
    while ( v1 );
  }
  return result;
}
