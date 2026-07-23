/*
 * XREFs of _RtlpGetCustomCultureDataFromFile@20 @ 0x4B363239
 * Callers:
 *     _RtlpGetCustomCultureData@16 @ 0x4B3631F6 (_RtlpGetCustomCultureData@16.c)
 * Callees:
 *     _RtlpInitUnicodeStringUsingBuffer@16 @ 0x4B2D5B73 (_RtlpInitUnicodeStringUsingBuffer@16.c)
 */

int __fastcall RtlpGetCustomCultureDataFromFile(
        unsigned int *a1,
        unsigned int a2,
        char a3,
        char a4,
        _UNICODE_STRING *a5)
{
  unsigned int v6; // eax
  char *v7; // ebx
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // eax
  char *v11; // ebx
  unsigned int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // edi
  int v15; // esi

  if ( a2 >= 0x19C )
  {
    v6 = *a1;
    if ( *a1 )
    {
      if ( v6 + 68 <= a2 && v6 + 68 >= v6 )
      {
        v7 = (char *)a1 + v6;
        if ( (((_BYTE)v6 + (_BYTE)a1) & 1) == 0 )
        {
          v8 = *((_DWORD *)v7 + 7);
          if ( v8 )
          {
            if ( (v8 & 1) == 0 )
            {
              v9 = v8 + *((unsigned __int16 *)v7 + 13);
              if ( v9 <= a2 && v9 >= v8 )
              {
                v10 = *((_DWORD *)v7 + 14);
                if ( v10 <= a2 && v10 && (a3 || *(unsigned int *)((char *)a1 + v8 + 156)) )
                {
                  if ( !a5 )
                    return 0;
                  v11 = (char *)a1 + v10;
                  if ( (((_BYTE)v10 + (_BYTE)a1) & 1) == 0 )
                  {
                    v12 = *(unsigned int *)((char *)a1 + v8 + 184);
                    v13 = (a2 - v10) >> 1;
                    if ( v12 + 2 <= v13 && v12 + 2 >= v12 )
                    {
                      v14 = *(unsigned __int16 *)&v11[2 * v12];
                      v15 = v14 + v12;
                      if ( v14 + v12 + 2 <= v13 && !*(_WORD *)&v11[2 * v15 + 2] )
                        return RtlpInitUnicodeStringUsingBuffer((const WCHAR *)&v11[2 * v12 + 2], a4, v15, v14, a5);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return -1073741823;
}
