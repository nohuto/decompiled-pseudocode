/*
 * XREFs of PiPnpRtlObjectEventDispatch @ 0x1406A5E50
 * Callers:
 *     PiPnpRtlEndOperation @ 0x1406A5E98 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlObjectEventWorker @ 0x14072EEE0 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     PiDcHandleObjectEvent @ 0x1407411A4 (PiDcHandleObjectEvent.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x14074FED8 (PiDqObjectManagerHandleObjectEvent.c)
 *     PiDqGetObjectManagerForPnpObjectType @ 0x14074FFE4 (PiDqGetObjectManagerForPnpObjectType.c)
 */

__int64 __fastcall PiPnpRtlObjectEventDispatch(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 4);
  if ( (result & 0xB) != 0 || *(_DWORD *)(a1 + 76) )
  {
    PiDcHandleObjectEvent();
    result = PiDqGetObjectManagerForPnpObjectType(*(unsigned int *)(*(_QWORD *)(a1 + 8) + 28LL));
    if ( result )
      return PiDqObjectManagerHandleObjectEvent(result, a1);
  }
  return result;
}
