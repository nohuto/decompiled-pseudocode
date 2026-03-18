/*
 * XREFs of EtwpCompleteBuffer @ 0x140798BE4
 * Callers:
 *     EtwpCompressPendingBuffers @ 0x140634D24 (EtwpCompressPendingBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x14079885C (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x1409E971C (EtwpBufferingModeFlush.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x1402E1AB0 (EtwpEnqueueAvailableBuffer.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EtwpCompleteBuffer(__int64 a1, __int64 a2, unsigned int a3)
{
  bool v3; // zf

  v3 = *(_WORD *)(a2 + 54) == 5;
  *(_WORD *)(a2 + 52) = 0;
  if ( v3 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a2 + 56))(a3, a2, *(_QWORD *)(a2 + 64));
  else
    return EtwpEnqueueAvailableBuffer(a1, (unsigned int *)a2, 0);
}
