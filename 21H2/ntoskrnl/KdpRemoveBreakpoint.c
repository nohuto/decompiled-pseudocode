/*
 * XREFs of KdpRemoveBreakpoint @ 0x1409BB520
 * Callers:
 *     KdpLowWriteContent @ 0x1409BB450 (KdpLowWriteContent.c)
 *     KdpSetOwedBreakpoints @ 0x1409BB5E0 (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KdpWriteInstructionBuffer @ 0x1405121A4 (KdpWriteInstructionBuffer.c)
 *     KdpCopyCodeStream @ 0x1409BAA9C (KdpCopyCodeStream.c)
 */

__int64 __fastcall KdpRemoveBreakpoint(__int64 a1, _BYTE *a2)
{
  __int64 v3; // rax
  __int64 v4; // r10
  int v5; // ecx
  int v7; // eax
  int v8; // eax

  KdpWriteInstructionBuffer(a2, *(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 36));
  v5 = KdpCopyCodeStream(
         (PVOID)(v3 & ~(unsigned __int64)*(unsigned __int8 *)(a1 + 37)),
         v4,
         *(unsigned __int8 *)(a1 + 36),
         5);
  if ( v5 < 0 )
    return 0LL;
  v7 = *(_DWORD *)(a1 + 32);
  if ( (v7 & 4) != 0 )
    v8 = v7 | 5;
  else
    v8 = 0;
  *(_DWORD *)(a1 + 32) = v8;
  if ( v5 == 259 )
    *(_DWORD *)(a1 + 32) = v8 | 9;
  return 1LL;
}
