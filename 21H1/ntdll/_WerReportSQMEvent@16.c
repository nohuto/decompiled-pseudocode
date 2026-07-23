/*
 * XREFs of _WerReportSQMEvent@16 @ 0x4B33BAB0
 * Callers:
 *     _ShipAssert@8 @ 0x4B33B510 (_ShipAssert@8.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _WerEscalationLazyInit@0 @ 0x4B33B780 (_WerEscalationLazyInit@0.c)
 */

NTSTATUS __stdcall WerReportSQMEvent(int a1, int a2, unsigned int a3, int a4)
{
  NTSTATUS result; // eax
  unsigned int v5; // ecx
  char *v6; // edx
  unsigned int v7; // esi
  char v8; // [esp+44h] [ebp-70h] BYREF

  result = WerEscalationLazyInit();
  if ( result >= 0 )
  {
    if ( g_disableEscalation )
      return 0;
    if ( a1 )
    {
      if ( a1 != 1 )
        return -1073741811;
      v5 = a3;
      if ( a3 != 3 )
        return -1073741811;
    }
    else
    {
      v5 = a3;
      if ( a3 != 6 )
        return -1073741811;
    }
    v6 = &v8;
    v7 = 0;
    do
    {
      ++v7;
      *((_DWORD *)v6 - 1) = 16;
      *(_DWORD *)v6 = 1;
      v6 += 16;
    }
    while ( v7 < v5 );
    return 0;
  }
  return result;
}
