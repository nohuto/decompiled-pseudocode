/*
 * XREFs of IsTrustletCreateAttributeWellFormed @ 0x140582C5C
 * Callers:
 *     PspBuildCreateProcessContext @ 0x1406986F4 (PspBuildCreateProcessContext.c)
 * Callees:
 *     <none>
 */

char __fastcall IsTrustletCreateAttributeWellFormed(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned int v3; // r8d
  unsigned int v4; // r11d
  unsigned int v5; // eax
  __int64 *v6; // rbx
  unsigned int i; // edx

  if ( a2 != 8 )
  {
    if ( (a2 & 7) != 0 || (unsigned __int64)(a2 - 24) > 0x70 || !*a1 )
      return 0;
    v2 = 0LL;
    v3 = (unsigned int)(a2 - 8) >> 3;
    v4 = 0;
    if ( v3 )
    {
      while ( 1 )
      {
        v5 = HIDWORD(a1[v2 + 1]);
        if ( (_BYTE)v5 || v5 >= 0x100 || (a1[v2 + 1] & 0xF0000000LL) != 0 )
          return 0;
        v6 = `IsTrustletCreateAttributeWellFormed'::`2'::KnownAttributeTypes;
        for ( i = 0; i < 4; ++i )
        {
          if ( LODWORD(a1[v2 + 1]) == *(_DWORD *)*v6 )
            break;
          ++v6;
        }
        if ( i == 4 )
          return 0;
        ++v4;
        v2 = (unsigned int)BYTE1(a1[v2 + 1]) + (_DWORD)v2 + 1;
        if ( (unsigned int)v2 >= v3 )
        {
          if ( v4 > 4 )
            return 0;
          break;
        }
      }
    }
    if ( (_DWORD)v2 != v3 )
      return 0;
  }
  return 1;
}
