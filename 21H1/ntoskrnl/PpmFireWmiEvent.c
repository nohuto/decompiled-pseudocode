/*
 * XREFs of PpmFireWmiEvent @ 0x140572A68
 * Callers:
 *     PpmEventLegacyProcessorPerfStateChange @ 0x140395B34 (PpmEventLegacyProcessorPerfStateChange.c)
 *     PpmEventDomainPerfStateChange @ 0x140397108 (PpmEventDomainPerfStateChange.c)
 *     PopFireThermalWmiEvent @ 0x140569BE0 (PopFireThermalWmiEvent.c)
 *     PpmEventThermalCapChange @ 0x140574BA8 (PpmEventThermalCapChange.c)
 * Callees:
 *     IoWMIWriteEvent @ 0x14037B8F0 (IoWMIWriteEvent.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     PpmAllocWmiEvent @ 0x1405729C0 (PpmAllocWmiEvent.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmFireWmiEvent(__int64 a1, __int128 *a2, unsigned int a3, const void *a4)
{
  size_t v5; // rsi
  NTSTATUS v6; // ebx
  char *v7; // rax
  char *v8; // rdi

  v5 = a3;
  if ( *(_DWORD *)(a1 + 8) )
  {
    v7 = PpmAllocWmiEvent((PDEVICE_OBJECT)a1, a2, a3);
    v8 = v7;
    if ( v7 )
    {
      if ( a4 )
        memmove(&v7[*((unsigned int *)v7 + 14)], a4, v5);
      v6 = IoWMIWriteEvent(v8);
      if ( v6 >= 0 )
        return 0;
      else
        ExFreePoolWithTag(v8, 0x774D5050u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v6;
}
