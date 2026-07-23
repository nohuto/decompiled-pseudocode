/*
 * XREFs of RtlpValidRelativeAttribute @ 0x1800EAF08
 * Callers:
 *     RtlpValidAttributeAce @ 0x1800EACFC (RtlpValidAttributeAce.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x180044608 (RtlStringCbLengthW.c)
 */

char __fastcall RtlpValidRelativeAttribute(unsigned int *a1, unsigned int a2)
{
  unsigned int v4; // eax
  int v5; // r11d
  unsigned int v6; // edx
  unsigned __int64 v7; // rcx
  unsigned __int16 v8; // ax
  unsigned int v9; // ebp
  unsigned int *m; // r8
  __int64 v11; // rcx
  unsigned int *k; // rcx
  int v13; // r9d
  unsigned int *j; // r8
  __int64 v15; // rcx
  unsigned int v16; // esi
  int v17; // esi
  __int64 v18; // rcx
  unsigned int *i; // rbx
  __int64 v21; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    if ( a2 >= 0x14 && !*((_WORD *)a1 + 3) && (a1[2] & 0xFFC0) == 0 )
    {
      if ( a1[3] )
      {
        if ( a2 >= *a1 )
        {
          v4 = a2 - *a1;
          if ( v4 >= 4 && (int)RtlStringCbLengthW((unsigned int *)((char *)a1 + *a1), v4, &v21) >= 0 )
          {
            v6 = a1[3];
            v7 = 4LL * v6;
            if ( v7 <= 0xFFFFFFFF && a2 - 16 >= (unsigned int)v7 )
            {
              v8 = *((_WORD *)a1 + 2);
              if ( v8 )
              {
                v9 = v5 + 2;
                if ( v8 <= (unsigned __int16)(v5 + 2) )
                {
                  if ( v6 )
                  {
                    for ( i = a1 + 4; a2 >= *i && a2 - *i >= 8; ++i )
                    {
                      if ( ++v5 >= v6 )
                        return 1;
                    }
                    return 0;
                  }
                  return 1;
                }
                switch ( v8 )
                {
                  case 3u:
                    v17 = v5;
                    if ( v6 )
                    {
                      while ( 1 )
                      {
                        v18 = a1[v17 + 4];
                        if ( a2 < (unsigned int)v18
                          || a2 - (unsigned int)v18 < v9
                          || (int)RtlStringCbLengthW((unsigned int *)((char *)a1 + v18), a2 - (unsigned int)v18, &v21) < 0 )
                        {
                          break;
                        }
                        if ( ++v17 >= a1[3] )
                          return 1;
                      }
                      return 0;
                    }
                    return 1;
                  case 5u:
                    v13 = v5;
                    if ( v6 )
                    {
                      for ( j = a1 + 4; ; ++j )
                      {
                        v15 = *j;
                        if ( a2 < (unsigned int)v15 )
                          break;
                        if ( a2 - (unsigned int)v15 < 4 )
                          break;
                        v16 = *(unsigned int *)((char *)a1 + v15);
                        if ( !v16 || (int)v15 + 4 < (unsigned int)v15 || a2 - ((_DWORD)v15 + 4) < v16 )
                          break;
                        if ( ++v13 >= v6 )
                          return 1;
                      }
                      return 0;
                    }
                    return 1;
                  case 6u:
                    if ( v6 )
                    {
                      for ( k = a1 + 4; a2 >= *k && a2 - *k >= 8 && *(_QWORD *)((char *)a1 + *k) <= 1uLL; ++k )
                      {
                        if ( ++v5 >= v6 )
                          return 1;
                      }
                      return 0;
                    }
                    return 1;
                  case 0x10u:
                    if ( v6 )
                    {
                      for ( m = a1 + 4; ; ++m )
                      {
                        v11 = *m;
                        if ( a2 < (unsigned int)v11
                          || a2 - (unsigned int)v11 < 4
                          || (int)v11 + 4 < (unsigned int)v11
                          || a2 - ((_DWORD)v11 + 4) < *(unsigned int *)((char *)a1 + v11) )
                        {
                          break;
                        }
                        if ( ++v5 >= v6 )
                          return 1;
                      }
                      return 0;
                    }
                    return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
