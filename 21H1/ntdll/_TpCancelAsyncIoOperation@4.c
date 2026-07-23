/*
 * XREFs of _TpCancelAsyncIoOperation@4 @ 0x4B2E7040
 * Callers:
 *     <none>
 * Callees:
 *     _TppBarrierAdjust@12 @ 0x4B2DDB10 (_TppBarrierAdjust@12.c)
 *     _TppIopValidateIo@12 @ 0x4B2E70F8 (_TppIopValidateIo@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

void __cdecl TpCancelAsyncIoOperation(PTP_IO Io)
{
  signed __int32 v1; // edx
  signed __int32 v2; // ecx

  if ( TppIopValidateIo(0) )
  {
    v1 = *((_DWORD *)Io + 42);
    while ( v1 > 0 )
    {
      v2 = v1;
      v1 = _InterlockedCompareExchange((volatile signed __int32 *)Io + 42, v1 - 1, v1);
      if ( v1 == v2 )
      {
        TppBarrierAdjust((signed __int64 *)Io + 4, -1, 0);
        break;
      }
    }
    if ( !_InterlockedDecrement((volatile signed __int32 *)Io) )
      (**((void (__thiscall ***)(_DWORD, PTP_IO))Io + 1))(**((_DWORD **)Io + 1), Io);
  }
}
