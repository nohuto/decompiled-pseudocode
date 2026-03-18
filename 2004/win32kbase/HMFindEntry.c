/*
 * XREFs of HMFindEntry @ 0x1C011B0D0
 * Callers:
 *     LookForMatchingBaseWindowPHE @ 0x1C013D640 (LookForMatchingBaseWindowPHE.c)
 *     UserDeleteBaseWindowHandle @ 0x1C013D920 (UserDeleteBaseWindowHandle.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall HMFindEntry(__int64 a1, unsigned int (__fastcall *a2)(__int64, char *))
{
  unsigned int v4; // edi
  char *v5; // rbx

  v4 = 0;
  while ( 1 )
  {
    v5 = (char *)qword_1C024AD48 + 32 * v4;
    if ( v5[24] )
    {
      if ( a2(a1, (char *)qword_1C024AD48 + 32 * v4) )
        break;
    }
    if ( ++v4 > giheLast )
      return 0LL;
  }
  return v5;
}
