/*
 * XREFs of _RtlpValidRelativeAttribute@8 @ 0x4B34CD2B
 * Callers:
 *     _RtlpValidAttributeAce@4 @ 0x4B34CBBA (_RtlpValidAttributeAce@4.c)
 * Callees:
 *     _RtlULongPtrAdd@12 @ 0x4B2A9463 (_RtlULongPtrAdd@12.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _RtlStringCbLengthW@12 @ 0x4B3475AA (_RtlStringCbLengthW@12.c)
 */

char __fastcall RtlpValidRelativeAttribute(unsigned int *a1, unsigned int a2)
{
  unsigned int v2; // esi
  unsigned int v5; // eax
  int v6; // eax
  unsigned int *v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int *v10; // eax
  unsigned int v11; // edx
  unsigned int *v12; // eax
  unsigned int v13; // ecx
  unsigned int *v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int *i; // edi
  unsigned int v19; // [esp+Ch] [ebp-Ch]
  unsigned int v20; // [esp+Ch] [ebp-Ch]
  int *v21; // [esp+10h] [ebp-8h] BYREF
  unsigned int v22; // [esp+14h] [ebp-4h] BYREF

  v2 = 0;
  v21 = 0;
  v22 = 0;
  if ( a1 )
  {
    if ( a2 >= 0x14 && !*((_WORD *)a1 + 3) && (a1[2] & 0xFFC0) == 0 )
    {
      if ( a1[3] )
      {
        v5 = *a1;
        if ( a2 >= *a1
          && a2 - v5 >= 4
          && RtlStringCbLengthW((char *)a1 + v5, &v21) >= 0
          && RtlULongLongToUInt((int *)&v22, 4 * a1[3], (unsigned __int64)a1[3] >> 30) >= 0
          && a2 - 16 >= v22 )
        {
          v6 = *((unsigned __int16 *)a1 + 2);
          if ( (_WORD)v6 )
          {
            if ( (unsigned __int16)v6 <= 2u )
            {
              v16 = a1[3];
              if ( v16 )
              {
                for ( i = a1 + 4; a2 >= *i && a2 - *i >= 8; ++i )
                {
                  if ( ++v2 >= v16 )
                    return 1;
                }
                return 0;
              }
              return 1;
            }
            switch ( v6 )
            {
              case 3:
                if ( a1[3] )
                {
                  v14 = a1 + 4;
                  v22 = (unsigned int)(a1 + 4);
                  while ( 1 )
                  {
                    v15 = *v14;
                    if ( a2 < v15 || a2 - v15 < 2 || RtlStringCbLengthW((char *)a1 + v15, &v21) < 0 )
                      break;
                    ++v2;
                    v14 = (unsigned int *)(v22 + 4);
                    v22 += 4;
                    if ( v2 >= a1[3] )
                      return 1;
                  }
                  return 0;
                }
                return 1;
              case 5:
                if ( a1[3] )
                {
                  v12 = a1 + 4;
                  v21 = (int *)(a1 + 4);
                  while ( 1 )
                  {
                    v13 = *v12;
                    v22 = v13;
                    if ( a2 < v13 )
                      break;
                    if ( a2 - v13 < 4 )
                      break;
                    v20 = *(unsigned int *)((char *)a1 + v13);
                    if ( !v20 || (RtlULongPtrAdd(v13, 4, (int *)&v22) & 0x80000000) != 0 || a2 - v22 < v20 )
                      break;
                    ++v2;
                    v12 = (unsigned int *)++v21;
                    if ( v2 >= a1[3] )
                      return 1;
                  }
                  return 0;
                }
                return 1;
              case 6:
                v9 = 0;
                if ( a1[3] )
                {
                  v10 = a1 + 4;
                  v21 = (int *)(a1 + 4);
                  while ( 1 )
                  {
                    v11 = *v10;
                    if ( a2 < *v10
                      || a2 - v11 < 8
                      || *(_QWORD *)((char *)a1 + v11)
                      && (*(unsigned int *)((char *)a1 + v11) != 1 || *(unsigned int *)((char *)a1 + v11 + 4)) )
                    {
                      break;
                    }
                    ++v9;
                    v10 = (unsigned int *)++v21;
                    if ( v9 >= a1[3] )
                      return 1;
                  }
                  return 0;
                }
                return 1;
            }
            if ( *((_WORD *)a1 + 2) == 16 )
            {
              if ( a1[3] )
              {
                v7 = a1 + 4;
                v21 = (int *)(a1 + 4);
                while ( 1 )
                {
                  v8 = *v7;
                  v22 = v8;
                  if ( a2 < v8 )
                    break;
                  if ( a2 - v8 < 4 )
                    break;
                  v19 = *(unsigned int *)((char *)a1 + v8);
                  if ( (RtlULongPtrAdd(v8, 4, (int *)&v22) & 0x80000000) != 0 || a2 - v22 < v19 )
                    break;
                  ++v2;
                  v7 = (unsigned int *)++v21;
                  if ( v2 >= a1[3] )
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
  return 0;
}
