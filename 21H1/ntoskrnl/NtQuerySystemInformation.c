/*
 * XREFs of NtQuerySystemInformation @ 0x1405E5C70
 * Callers:
 *     HalpTimerConfigureQpcBypass @ 0x1403C99A4 (HalpTimerConfigureQpcBypass.c)
 *     AlpcpInitSystem @ 0x1407B838C (AlpcpInitSystem.c)
 * Callees:
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 */

__int64 __fastcall NtQuerySystemInformation(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int16 *p_Group; // r10
  __int64 v6; // r8
  __int16 Group; // [rsp+40h] [rbp+8h] BYREF

  p_Group = 0LL;
  Group = 0;
  if ( (int)a1 < 74 || (int)a1 >= 83 )
  {
    switch ( (int)a1 )
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
        goto LABEL_8;
      case 73:
LABEL_8:
        p_Group = &Group;
        v6 = 2LL;
        return ExpQuerySystemInformation(a1, p_Group, v6, a2, a3, a4);
      case 107:
      case 121:
      case 180:
      case 210:
      case 211:
        return 3221225475LL;
      default:
        break;
    }
  }
  v6 = 0LL;
  return ExpQuerySystemInformation(a1, p_Group, v6, a2, a3, a4);
}
