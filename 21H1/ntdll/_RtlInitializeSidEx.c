/*
 * XREFs of _RtlInitializeSidEx @ 0x4B2D8830
 * Callers:
 *     _RtlCheckTokenMembershipEx@16 @ 0x4B2D5F50 (_RtlCheckTokenMembershipEx@16.c)
 * Callees:
 *     _RtlInitializeSid@12 @ 0x4B2D82C0 (_RtlInitializeSid@12.c)
 */

int __cdecl RtlInitializeSidEx(int a1, int a2, unsigned __int8 a3)
{
  int result; // eax
  int v4; // ecx
  unsigned __int8 *v5; // edx
  _DWORD *v6; // esi

  result = RtlInitializeSid(a1, a2, a3);
  if ( result >= 0 )
  {
    v4 = a3;
    if ( a3 )
    {
      v5 = &a3;
      v6 = (_DWORD *)(a1 + 8);
      do
      {
        v5 += 4;
        *v6++ = *(_DWORD *)v5;
        --v4;
      }
      while ( v4 );
    }
    return 0;
  }
  return result;
}
