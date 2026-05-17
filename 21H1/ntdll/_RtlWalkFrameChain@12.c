/*
 * XREFs of _RtlWalkFrameChain@12 @ 0x4B2DC050
 * Callers:
 *     _RtlCaptureStackBackTrace@16 @ 0x4B2DBFD0 (_RtlCaptureStackBackTrace@16.c)
 *     _EtwpGetStackExtendedHeaderItem@8 @ 0x4B3817C8 (_EtwpGetStackExtendedHeaderItem@8.c)
 * Callees:
 *     _RtlpStkIsPointerInDllRange@4 @ 0x4B307021 (_RtlpStkIsPointerInDllRange@4.c)
 */

int __stdcall RtlWalkFrameChain(int a1, unsigned int a2, unsigned int a3)
{
  int *StackBase; // ecx
  int *v4; // esi
  char v5; // al
  unsigned int i; // edi
  int *v7; // ebx
  unsigned int v8; // eax
  int *v10; // [esp+20h] [ebp-24h]
  unsigned int v11; // [esp+24h] [ebp-20h]
  int savedregs; // [esp+44h] [ebp+0h] BYREF
  unsigned int v13; // [esp+54h] [ebp+10h]

  if ( (a3 & 0xFFFF00FF) != 0 )
    return 0;
  v13 = a3 >> 8;
  StackBase = (int *)NtCurrentTeb()->NtTib.StackBase;
  v10 = StackBase;
  v4 = &savedregs;
  v5 = 1;
  for ( i = 0; i < a2 && v4 < StackBase; ++i )
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
    v8 = v4[1];
    v11 = v8;
    if ( v8 < (unsigned int)StackBase && (unsigned int)&savedregs <= v8 )
      break;
    if ( !(unsigned __int8)RtlpStkIsPointerInDllRange(v8) )
      break;
    if ( i >= v13 )
      *(_DWORD *)(a1 + 4 * (i - v13)) = v11;
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
