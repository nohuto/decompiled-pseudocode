/*
 * XREFs of DebugOutPort @ 0x1C00675C0
 * Callers:
 *     DebugO @ 0x1C0067560 (DebugO.c)
 *     DebugOD @ 0x1C0067580 (DebugOD.c)
 *     DebugOW @ 0x1C00675A0 (DebugOW.c)
 * Callees:
 *     WriteSystemIO @ 0x1C001B580 (WriteSystemIO.c)
 *     _strtoui64_0 @ 0x1C002F1E9 (_strtoui64_0.c)
 *     IsNumber @ 0x1C0067AC4 (IsNumber.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall DebugOutPort(const char *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // esi

  v2 = 0;
  if ( !a1 )
  {
    if ( dword_1C0082B14 == 2 )
    {
LABEL_9:
      dword_1C0082B14 = 0;
      return v2;
    }
LABEL_8:
    PrintDebugMessage(224, 0, 0, 0, 0LL);
    v2 = -2;
    goto LABEL_9;
  }
  v5 = strtoui64_0(a1, 0LL, 16);
  if ( ++dword_1C0082B14 > 2 || !(unsigned __int8)IsNumber(a1, 16LL) )
    goto LABEL_8;
  if ( dword_1C0082B14 == 1 )
    dword_1C008289C = v5;
  else
    WriteSystemIO(dword_1C008289C, a2, v5);
  return v2;
}
