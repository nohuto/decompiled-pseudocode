/*
 * XREFs of _RtlpWalkCallbackRoutine@8 @ 0x4B338140
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpCommitQueryDebugInfo@8 @ 0x4B3378A8 (_RtlpCommitQueryDebugInfo@8.c)
 */

int __stdcall RtlpWalkCallbackRoutine(_DWORD *a1, int a2)
{
  char *v2; // ecx
  int v3; // eax
  int v4; // eax
  __int16 v5; // ax
  unsigned int i; // edx
  __int16 v7; // ax
  char *v8; // ecx
  int v9; // eax
  char *DebugInfo; // ecx
  int v12; // eax
  int v13; // edx

  switch ( *a1 )
  {
    case 2:
      v13 = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 12) = (v13 << 6) + *(_DWORD *)(a2 + 4) + 4;
      *(_DWORD *)(a2 + 8) = v13 + 1;
      break;
    case 3:
      DebugInfo = RtlpCommitQueryDebugInfo(*(_DWORD **)a2, 0x10u);
      if ( DebugInfo )
      {
        v12 = *(_DWORD *)(a2 + 12);
        if ( !*(_DWORD *)(v12 + 60) )
          *(_DWORD *)(v12 + 60) = DebugInfo;
        *(_DWORD *)DebugInfo = 0;
        *((_DWORD *)DebugInfo + 1) = 0;
        *((_DWORD *)DebugInfo + 2) = 0;
        *((_DWORD *)DebugInfo + 3) = 0;
        ++*(_DWORD *)(*(_DWORD *)(a2 + 12) + 24);
        *((_WORD *)DebugInfo + 2) = 2;
        *((_DWORD *)DebugInfo + 3) = a1[2];
        *(_DWORD *)DebugInfo = a1[3];
        *((_DWORD *)DebugInfo + 2) = a1[4];
        return 0;
      }
      return -1073741801;
    case 4:
      if ( a1[4] == 2 )
      {
        v8 = RtlpCommitQueryDebugInfo(*(_DWORD **)a2, 0x10u);
        if ( v8 )
        {
          v9 = *(_DWORD *)(a2 + 12);
          if ( !*(_DWORD *)(v9 + 60) )
            *(_DWORD *)(v9 + 60) = v8;
          *(_DWORD *)v8 = 0;
          *((_DWORD *)v8 + 1) = 0;
          *((_DWORD *)v8 + 2) = 0;
          *((_DWORD *)v8 + 3) = 0;
          ++*(_DWORD *)(*(_DWORD *)(a2 + 12) + 24);
          *((_WORD *)v8 + 2) = 4096;
          *(_DWORD *)v8 = a1[3];
          return 0;
        }
        return -1073741801;
      }
      break;
    default:
      if ( *a1 == 5 && (*(_BYTE *)(*(_DWORD *)a2 + 32) & 0x10) != 0 )
      {
        v2 = RtlpCommitQueryDebugInfo(*(_DWORD **)a2, 0x10u);
        if ( v2 )
        {
          v3 = *(_DWORD *)(a2 + 12);
          if ( !*(_DWORD *)(v3 + 60) )
            *(_DWORD *)(v3 + 60) = v2;
          *(_DWORD *)v2 = 0;
          *((_DWORD *)v2 + 1) = 0;
          *((_DWORD *)v2 + 2) = 0;
          *((_DWORD *)v2 + 3) = 0;
          ++*(_DWORD *)(*(_DWORD *)(a2 + 12) + 24);
          *(_DWORD *)v2 = a1[4] + a1[5];
          v4 = a1[3];
          if ( (v4 & 1) != 0 )
          {
            *((_WORD *)v2 + 2) = 1;
            v4 = a1[3];
          }
          if ( (v4 & 8) != 0 )
          {
            v5 = 0x8000;
          }
          else
          {
            if ( (v4 & 4) == 0 )
              goto LABEL_16;
            v5 = 0x4000;
          }
          *((_WORD *)v2 + 2) |= v5;
LABEL_16:
          if ( (a1[3] & 2) != 0 )
          {
            for ( i = (unsigned int)(a1 + 7); ; i = (*(_DWORD *)(i + 8) + i + 3) & 0xFFFFFFFC )
            {
              if ( *(_DWORD *)(i + 4) == 1 )
              {
                v7 = *(_WORD *)(i + 18);
                *((_WORD *)v2 + 2) |= 0x10u;
                *((_WORD *)v2 + 3) = v7;
                *((_DWORD *)v2 + 2) = *(_DWORD *)(i + 12);
                *((_DWORD *)v2 + 3) = *(unsigned __int16 *)(i + 16);
              }
              if ( !*(_BYTE *)i )
                break;
            }
          }
          return 0;
        }
        return -1073741801;
      }
      break;
  }
  return 0;
}
