/*
 * XREFs of XmOutOp @ 0x140393120
 * Callers:
 *     XmEmulateStream @ 0x140393D08 (XmEmulateStream.c)
 * Callees:
 *     XmSetSourceValue @ 0x140393A08 (XmSetSourceValue.c)
 *     x86BiosWriteIoSpace @ 0x1403960A0 (x86BiosWriteIoSpace.c)
 *     longjmp @ 0x1403CC230 (longjmp.c)
 */

__int64 __fastcall XmOutOp(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // r9
  __int64 v4; // rcx

  if ( (unsigned int)(*(_DWORD *)(a1 + 120) + *(_DWORD *)(a1 + 108)) > 0xFFFF )
    longjmp((_JBTYPE *)(a1 + 160), 9);
  XmSetSourceValue(a1, a1 + 24, a3, *(unsigned __int16 *)(a1 + 108));
  return x86BiosWriteIoSpace(*(unsigned int *)(v4 + 120), v3, *(unsigned int *)(v4 + 108));
}
