/*
 * XREFs of _RtlWalkFrameChain@12 @ 0x4B2DC050
 * Callers:
 *     _RtlCaptureStackBackTrace@16 @ 0x4B2DBFD0 (_RtlCaptureStackBackTrace@16.c)
 *     _EtwpGetStackExtendedHeaderItem@8 @ 0x4B3817C8 (_EtwpGetStackExtendedHeaderItem@8.c)
 * Callees:
 *     _RtlpStkIsPointerInDllRange@4 @ 0x4B307021 (_RtlpStkIsPointerInDllRange@4.c)
 */

ULONG __cdecl RtlWalkFrameChain(PVOID *Callers, ULONG Count, ULONG Flags)
{
  int *StackBase; // ecx
  int *v4; // esi
  char v5; // al
  ULONG i; // edi
  int *v7; // ebx
  int *v8; // eax
  int *v10; // [esp+20h] [ebp-24h]
  int *v11; // [esp+24h] [ebp-20h]
  int savedregs; // [esp+44h] [ebp+0h] BYREF
  ULONG Flagsa; // [esp+54h] [ebp+10h]

  if ( (Flags & 0xFFFF00FF) != 0 )
    return 0;
  Flagsa = Flags >> 8;
  StackBase = (int *)NtCurrentTeb()->NtTib.StackBase;
  v10 = StackBase;
  v4 = &savedregs;
  v5 = 1;
  for ( i = 0; i < Count && v4 < StackBase; ++i )
  {
    if ( v5 )
    {
      if ( v4 < &savedregs )
        return i;
    }
    else if ( v4 <= &savedregs )
    {
      return i;
    }
    if ( (unsigned int)((char *)StackBase - (char *)v4) < 8 )
      break;
    v7 = (int *)*v4;
    v8 = (int *)v4[1];
    v11 = v8;
    if ( v8 < StackBase && &savedregs <= v8 )
      break;
    if ( !(unsigned __int8)RtlpStkIsPointerInDllRange(v8) )
      break;
    if ( i >= Flagsa )
      Callers[i - Flagsa] = v11;
    if ( v4 >= v7 )
      return ++i;
    StackBase = v10;
    if ( v7 >= v10 )
      return ++i;
    v4 = v7;
    v5 = 0;
  }
  return i;
}
