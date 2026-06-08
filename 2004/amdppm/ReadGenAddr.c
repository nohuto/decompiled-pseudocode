/*
 * XREFs of ReadGenAddr @ 0x1C0002D04
 * Callers:
 *     ReadGenAddrEx @ 0x1C0002D5C (ReadGenAddrEx.c)
 *     ReadGenAddrHidden @ 0x1C0002DB0 (ReadGenAddrHidden.c)
 *     SetPerfStateIO @ 0x1C000BE10 (SetPerfStateIO.c)
 *     C2Idle @ 0x1C000C090 (C2Idle.c)
 *     C3Idle @ 0x1C000C150 (C3Idle.c)
 *     C3IdleCheck @ 0x1C000C230 (C3IdleCheck.c)
 *     IoHaltC1Idle @ 0x1C000C5B0 (IoHaltC1Idle.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C0002E70 (ReadIoMemRaw.c)
 */

unsigned __int64 __fastcall ReadGenAddr(__int64 a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 IoMemRaw; // rax
  __int64 v4; // r10
  char v5; // cl
  unsigned __int8 v6; // cl

  if ( !a1 )
    return 0LL;
  if ( *(_BYTE *)a1 == 126 )
    return *(unsigned int *)(a1 + 4);
  IoMemRaw = ReadIoMemRaw(a1);
  v2 = IoMemRaw;
  if ( IoMemRaw )
  {
    v5 = *(_BYTE *)(v4 + 2);
    if ( v5 )
      v2 = IoMemRaw >> v5;
    v6 = *(_BYTE *)(v4 + 1);
    if ( v6 < 0x40u )
      v2 &= (1LL << v6) - 1;
  }
  return v2;
}
