/*
 * XREFs of Bulk_Stage_ProcessSegment @ 0x1C000E278
 * Callers:
 *     Bulk_Stage_CalculateBytesTransferred @ 0x1C000E20C (Bulk_Stage_CalculateBytesTransferred.c)
 * Callees:
 *     <none>
 */

char __fastcall Bulk_Stage_ProcessSegment(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4, int *a5)
{
  __int64 v5; // rcx
  char v6; // r11
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rdi
  __int64 v9; // r9
  unsigned __int64 v10; // r8
  unsigned __int8 v11; // al

  v5 = *(_QWORD *)(a3 + 16);
  v6 = 0;
  v7 = v5 + 16LL * a4;
  v8 = (*(_DWORD *)(a3 + 44) & 0xFFFFFFF0) + v5 - 16;
  if ( v7 <= v8 )
  {
    v9 = *a2;
    v10 = v7 + *(_QWORD *)(a3 + 24) - v5;
    do
    {
      if ( v10 == v9 )
        v6 = 1;
      switch ( (unsigned __int8)HIBYTE(*(_WORD *)(v7 + 12)) >> 2 )
      {
        case 1:
          if ( v6 )
          {
            v11 = *((_BYTE *)a2 + 11);
            if ( v11 < 2u )
              break;
            if ( v11 == 26 || v11 <= 4u || v11 == 6 )
            {
LABEL_9:
              *a5 += (*(_DWORD *)(v7 + 8) & 0x1FFFF) - (a2[1] & 0xFFFFFF);
              break;
            }
            if ( v11 == 28 )
            {
              *a5 = a2[1] & 0xFFFFFF;
            }
            else if ( v11 == 36 )
            {
              goto LABEL_9;
            }
          }
          else
          {
            *a5 += *(_DWORD *)(v7 + 8) & 0x1FFFF;
          }
          break;
        case 6:
          return v6;
        case 7:
          if ( v6 )
            return v6;
          *a5 = 0;
          goto LABEL_16;
      }
      if ( v6 )
        return v6;
LABEL_16:
      v7 += 16LL;
      v10 += 16LL;
    }
    while ( v7 <= v8 );
  }
  return v6;
}
