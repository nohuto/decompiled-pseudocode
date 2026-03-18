/*
 * XREFs of NtQuerySystemInformation @ 0x14073D860
 * Callers:
 *     HalpTimerConfigureQpcBypass @ 0x1403BAA84 (HalpTimerConfigureQpcBypass.c)
 *     AlpcpInitSystem @ 0x14085C5A8 (AlpcpInitSystem.c)
 * Callees:
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 */

int __fastcall NtQuerySystemInformation(int a1, unsigned __int64 a2, unsigned int a3, ULONG *a4)
{
  __int16 *p_Group; // r10
  unsigned int v6; // r8d
  __int16 Group; // [rsp+40h] [rbp+8h] BYREF

  p_Group = 0LL;
  Group = 0;
  if ( (a1 >= 83 || a1 < 74) && (a1 < 181 || a1 >= 210) )
  {
    switch ( a1 )
    {
      case 8:
      case 23:
      case 42:
      case 61:
      case 83:
      case 100:
      case 108:
      case 141:
        Group = KeGetCurrentPrcb()->Group;
        goto LABEL_10;
      case 73:
LABEL_10:
        p_Group = &Group;
        v6 = 2;
        return ExpQuerySystemInformation(a1, p_Group, v6, a2, a3, a4);
      case 107:
      case 121:
      case 180:
      case 210:
      case 211:
      case 222:
      case 231:
        return -1073741821;
      default:
        break;
    }
  }
  v6 = 0;
  return ExpQuerySystemInformation(a1, p_Group, v6, a2, a3, a4);
}
