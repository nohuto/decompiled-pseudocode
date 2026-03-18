/*
 * XREFs of EtwSendTraceBuffer @ 0x1405A0370
 * Callers:
 *     VslpFlushBufferArray @ 0x1404F8270 (VslpFlushBufferArray.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140236140 (ObGetCurrentIrql.c)
 *     EtwpGetLoggerTimeStamp @ 0x140240C58 (EtwpGetLoggerTimeStamp.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KeInsertQueueDpc @ 0x14026DC50 (KeInsertQueueDpc.c)
 *     EtwpOpenLogger @ 0x1402D6EF8 (EtwpOpenLogger.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpCloseLogger @ 0x140377084 (EtwpCloseLogger.c)
 */

__int64 __fastcall EtwSendTraceBuffer(unsigned __int16 a1, signed __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // esi
  unsigned int v6; // r14d
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  int v16; // ecx
  bool v17; // zf
  signed __int64 v18; // rcx
  char v19; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  v6 = a1;
  v19 = 0;
  if ( (unsigned int)a1 >= *(_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 108) + 16LL) )
    return 3221225480LL;
  v11 = EtwpOpenLogger(v6, EtwpHostSiloState, 0, &v19);
  v15 = v11;
  if ( !v11 )
    return 3221226134LL;
  if ( *(_DWORD *)(v11 + 336) )
  {
    if ( (*(_DWORD *)(v11 + 12) & 0x40000) != 0 )
    {
      if ( a3 )
        _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 256), a3);
      v16 = *(_DWORD *)(a2 + 48);
      *(_DWORD *)(a2 + 4) = v16;
      v17 = (*(_BYTE *)(a2 + 52) & 0x20) == 0;
      *(_DWORD *)(a2 + 8) = *(_DWORD *)a2 + v16;
      *(_DWORD *)(a2 + 44) = 3;
      *(_WORD *)(a2 + 54) = 5;
      if ( v17 )
        *(_WORD *)(a2 + 40) = *(unsigned __int8 *)(a2 + 40);
      *(_QWORD *)(a2 + 64) = a5;
      *(_QWORD *)(a2 + 56) = a4;
      *(LARGE_INTEGER *)(a2 + 16) = EtwpGetLoggerTimeStamp(v11, v12, v13, v14);
      do
      {
        v18 = *(_QWORD *)(v15 + 144);
        *(_QWORD *)(a2 + 32) = v18;
      }
      while ( v18 != _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 144), a2, v18) );
      if ( !v18 )
      {
        if ( ObGetCurrentIrql() > 2u )
        {
          if ( !_interlockedbittestandset((volatile signed __int32 *)(v15 + 836), 8u) )
            KeInsertQueueDpc((PRKDPC)(v15 + 584), 0LL, 0LL);
        }
        else
        {
          KeSetEvent((PRKEVENT)(v15 + 496), 0, 0);
        }
      }
    }
    else
    {
      v5 = -1073741816;
    }
  }
  else
  {
    v5 = -1073741054;
  }
  EtwpCloseLogger(v6, EtwpHostSiloState, v19);
  return v5;
}
