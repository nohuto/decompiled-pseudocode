/*
 * XREFs of CitDisplayRequestChange @ 0x1C00B9C78
 * Callers:
 *     UserPowerInfoCallout @ 0x1C002A474 (UserPowerInfoCallout.c)
 * Callees:
 *     ?OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z @ 0x1C00B9D24 (-OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z.c)
 */

char __fastcall CitDisplayRequestChange(unsigned int a1)
{
  struct _CIT_IMPACT_CONTEXT *v1; // rbx
  bool v3; // si
  char result; // al

  v1 = xmmword_1C024E4A0;
  if ( xmmword_1C024E4A0 )
  {
    v3 = a1 != 0;
    result = *((_BYTE *)xmmword_1C024E4A0 + 112) & 1;
    if ( (a1 != 0) != result )
    {
      if ( a1 )
      {
        if ( (unsigned int)dword_1C024331C < MEMORY[0xFFFFF7800000037C] )
          EtwTelemetryCoverageReport(&off_1C0243310);
      }
      CIT_USER_ACTIVE_TRACKER::OnDisplayRequiredChange(
        (struct _CIT_IMPACT_CONTEXT *)((char *)v1 + 228),
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
        a1);
      result = v3 | *((_BYTE *)v1 + 112) & 0xFE;
      *((_BYTE *)v1 + 112) = result;
    }
  }
  return result;
}
