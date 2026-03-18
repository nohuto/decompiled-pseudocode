/*
 * XREFs of PiPnpRtlObjectEventDispatch @ 0x14064137C
 * Callers:
 *     PiPnpRtlEndOperation @ 0x14064120C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlObjectEventWorker @ 0x140745470 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     PiDcHandleObjectEvent @ 0x140751904 (PiDcHandleObjectEvent.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x1407631A8 (PiDqObjectManagerHandleObjectEvent.c)
 *     PiDqGetObjectManagerForPnpObjectType @ 0x1407632B4 (PiDqGetObjectManagerForPnpObjectType.c)
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
