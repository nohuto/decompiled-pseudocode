/*
 * XREFs of IopIncDisableableDepends @ 0x1407B3798
 * Callers:
 *     PiProcessQueryDeviceState @ 0x14072A788 (PiProcessQueryDeviceState.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140726510 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

void __fastcall IopIncDisableableDepends(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx

  if ( a1 )
  {
    v1 = a1;
    do
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)(v1 + 600)) != 1 )
        break;
      v2 = *(_QWORD *)(v1 + 48);
      if ( v2 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v2, 11);
      v1 = *(_QWORD *)(v1 + 16);
    }
    while ( v1 );
  }
}
