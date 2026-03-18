/*
 * XREFs of DebugOutPort @ 0x1C0066180
 * Callers:
 *     DebugO @ 0x1C0066120 (DebugO.c)
 *     DebugOD @ 0x1C0066140 (DebugOD.c)
 *     DebugOW @ 0x1C0066160 (DebugOW.c)
 * Callees:
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 *     _strtoui64_0 @ 0x1C0031AC9 (_strtoui64_0.c)
 *     IsNumber @ 0x1C0066694 (IsNumber.c)
 *     WriteSystemIO @ 0x1C0067E7C (WriteSystemIO.c)
 */

__int64 __fastcall DebugOutPort(const char *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // esi

  v2 = 0;
  if ( !a1 )
  {
    if ( dword_1C0083484 == 2 )
    {
LABEL_9:
      dword_1C0083484 = 0;
      return v2;
    }
LABEL_8:
    PrintDebugMessage(224, 0LL, 0LL, 0LL, 0LL);
    v2 = -2;
    goto LABEL_9;
  }
  v5 = strtoui64_0(a1, 0LL, 16);
  if ( ++dword_1C0083484 > 2 || !(unsigned __int8)IsNumber(a1, 16LL) )
    goto LABEL_8;
  if ( dword_1C0083484 == 1 )
    dword_1C008320C = v5;
  else
    WriteSystemIO((unsigned int)dword_1C008320C, a2, v5);
  return v2;
}
