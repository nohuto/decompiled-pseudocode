/*
 * XREFs of _RtlpValidAttribute@4 @ 0x4B34CA83
 * Callers:
 *     _RtlpValidAttributeInfo@4 @ 0x4B34CC0F (_RtlpValidAttributeInfo@4.c)
 * Callees:
 *     _RtlStringCchLengthW@12 @ 0x4B2D415E (_RtlStringCchLengthW@12.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

char __thiscall RtlpValidAttribute(int *this)
{
  int v2; // ecx
  unsigned int v3; // edi
  int v4; // ecx
  unsigned int v5; // eax
  unsigned int m; // eax
  unsigned int k; // edx
  unsigned int j; // eax
  unsigned int i; // eax
  int v11; // [esp+10h] [ebp-20h] BYREF
  unsigned int v12; // [esp+14h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h]

  v11 = 0;
  ms_exc.registration.TryLevel = 0;
  if ( this )
  {
    v2 = *this;
    if ( *this )
    {
      if ( RtlStringCchLengthW(v2, 0xFFFFu, &v11) >= 0 )
      {
        if ( v11 )
        {
          if ( !*((_WORD *)this + 3) && (this[2] & 0xFFC0) == 0 )
          {
            v3 = this[3];
            if ( v3 )
            {
              v4 = this[4];
              if ( v4 )
              {
                v5 = *((unsigned __int16 *)this + 2);
                if ( (_WORD)v5 )
                {
                  if ( v5 <= 2 )
                  {
LABEL_37:
                    ms_exc.registration.TryLevel = -2;
                    return 1;
                  }
                  switch ( v5 )
                  {
                    case 3u:
                      for ( i = 0; ; ++i )
                      {
                        v12 = i;
                        if ( i >= v3 )
                          break;
                        if ( !*(_DWORD *)(v4 + 4 * i) )
                          return 0;
                      }
                      goto LABEL_37;
                    case 5u:
                      for ( j = 0; ; ++j )
                      {
                        v12 = j;
                        if ( j >= v3 )
                          break;
                        if ( !*(_DWORD *)(v4 + 8 * j) || !*(_DWORD *)(v4 + 8 * j + 4) )
                          return 0;
                      }
                      goto LABEL_37;
                    case 6u:
                      for ( k = 0; ; ++k )
                      {
                        v12 = k;
                        if ( k >= v3 )
                          break;
                        if ( *(_QWORD *)(v4 + 8 * k) && (*(_DWORD *)(v4 + 8 * k) != 1 || *(_DWORD *)(v4 + 8 * k + 4)) )
                          return 0;
                      }
                      goto LABEL_37;
                  }
                  if ( *((_WORD *)this + 2) == 16 )
                  {
                    for ( m = 0; ; ++m )
                    {
                      v12 = m;
                      if ( m >= v3 )
                        break;
                      if ( *(_DWORD *)(v4 + 8 * m) )
                      {
                        if ( !*(_DWORD *)(v4 + 8 * m + 4) )
                          return 0;
                      }
                      else if ( *(_DWORD *)(v4 + 8 * m + 4) )
                      {
                        return 0;
                      }
                    }
                    goto LABEL_37;
                  }
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
