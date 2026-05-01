/*
 * XREFs of sub_18002E6AC @ 0x18002E6AC
 * Callers:
 *     sub_18002E618 @ 0x18002E618 (sub_18002E618.c)
 * Callees:
 *     sub_18002E750 @ 0x18002E750 (sub_18002E750.c)
 */

__int64 __fastcall sub_18002E6AC(void *a1, int a2, __int64 a3)
{
  int WnfStateName; // ebx

  WnfStateName = sub_18002E750(a1);
  if ( WnfStateName >= 0 )
  {
    WnfStateName = NtCreateWnfStateName(a3, 3LL, 0LL, 0LL, 0LL, a2, 0LL);
    if ( WnfStateName >= 0 )
      return 0;
  }
  return (unsigned int)WnfStateName;
}
