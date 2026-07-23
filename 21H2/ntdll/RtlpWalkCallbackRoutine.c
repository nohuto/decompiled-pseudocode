/*
 * XREFs of RtlpWalkCallbackRoutine @ 0x1800D9540
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCommitQueryDebugInfo @ 0x1800D89F8 (RtlpCommitQueryDebugInfo.c)
 */

__int64 __fastcall RtlpWalkCallbackRoutine(__int64 a1, __int64 a2)
{
  char *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  __int16 v7; // ax
  unsigned __int64 i; // rdx
  __int16 v9; // ax
  char *v10; // rcx
  __int64 v11; // rax
  char *DebugInfo; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax

  switch ( *(_DWORD *)a1 )
  {
    case 2:
      v15 = *(unsigned int *)(a2 + 16);
      v16 = *(_QWORD *)(a2 + 8) + 8LL;
      *(_DWORD *)(a2 + 16) = v15 + 1;
      *(_QWORD *)(a2 + 24) = v16 + 88 * v15;
      break;
    case 3:
      DebugInfo = RtlpCommitQueryDebugInfo(*(_QWORD **)a2, 0x20u);
      if ( DebugInfo )
      {
        v14 = *(_QWORD *)(a2 + 24);
        if ( !*(_QWORD *)(v14 + 80) )
          *(_QWORD *)(v14 + 80) = DebugInfo;
        *(_OWORD *)DebugInfo = 0LL;
        *((_OWORD *)DebugInfo + 1) = 0LL;
        ++*(_DWORD *)(*(_QWORD *)(a2 + 24) + 36LL);
        *((_WORD *)DebugInfo + 4) = 2;
        *((_QWORD *)DebugInfo + 3) = *(_QWORD *)(a1 + 16);
        *(_QWORD *)DebugInfo = *(_QWORD *)(a1 + 24);
        *((_QWORD *)DebugInfo + 2) = *(_QWORD *)(a1 + 32);
        return 0LL;
      }
      return 3221225495LL;
    case 4:
      if ( *(_DWORD *)(a1 + 32) == 2 )
      {
        v10 = RtlpCommitQueryDebugInfo(*(_QWORD **)a2, 0x20u);
        if ( v10 )
        {
          v11 = *(_QWORD *)(a2 + 24);
          if ( !*(_QWORD *)(v11 + 80) )
            *(_QWORD *)(v11 + 80) = v10;
          *(_OWORD *)v10 = 0LL;
          *((_OWORD *)v10 + 1) = 0LL;
          ++*(_DWORD *)(*(_QWORD *)(a2 + 24) + 36LL);
          *((_WORD *)v10 + 4) = 4096;
          *(_QWORD *)v10 = *(_QWORD *)(a1 + 24);
          return 0LL;
        }
        return 3221225495LL;
      }
      break;
    default:
      if ( *(_DWORD *)a1 == 5 && (*(_BYTE *)(*(_QWORD *)a2 + 64LL) & 0x10) != 0 )
      {
        v4 = RtlpCommitQueryDebugInfo(*(_QWORD **)a2, 0x20u);
        if ( v4 )
        {
          v5 = *(_QWORD *)(a2 + 24);
          if ( !*(_QWORD *)(v5 + 80) )
            *(_QWORD *)(v5 + 80) = v4;
          *(_OWORD *)v4 = 0LL;
          *((_OWORD *)v4 + 1) = 0LL;
          ++*(_DWORD *)(*(_QWORD *)(a2 + 24) + 36LL);
          *(_QWORD *)v4 = *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 40);
          v6 = *(_DWORD *)(a1 + 24);
          if ( (v6 & 1) != 0 )
          {
            *((_WORD *)v4 + 4) = 1;
            v6 = *(_DWORD *)(a1 + 24);
          }
          if ( (v6 & 8) != 0 )
          {
            v7 = 0x8000;
          }
          else
          {
            if ( (v6 & 4) == 0 )
              goto LABEL_16;
            v7 = 0x4000;
          }
          *((_WORD *)v4 + 4) |= v7;
LABEL_16:
          if ( (*(_BYTE *)(a1 + 24) & 2) != 0 )
          {
            for ( i = a1 + 56; ; i = (*(_QWORD *)(i + 8) + i + 7) & 0xFFFFFFFFFFFFFFF8uLL )
            {
              if ( *(_DWORD *)(i + 4) == 1 )
              {
                v9 = *(_WORD *)(i + 26);
                *((_WORD *)v4 + 4) |= 0x10u;
                *((_WORD *)v4 + 5) = v9;
                *((_QWORD *)v4 + 2) = *(_QWORD *)(i + 16);
                *((_DWORD *)v4 + 6) = *(unsigned __int16 *)(i + 24);
              }
              if ( !*(_BYTE *)i )
                break;
            }
          }
          return 0LL;
        }
        return 3221225495LL;
      }
      break;
  }
  return 0LL;
}
