/*
 * XREFs of RtlFindCharInUnicodeString @ 0x18001D390
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001A9E0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18001C2B4 (sxsisol_SearchActCtxForDllName.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008914C (RtlpQueryPseudoEnvironmentVariable.c)
 * Callees:
 *     NLS_DOWNCASE @ 0x18007BE10 (NLS_DOWNCASE.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 */

__int64 __fastcall RtlFindCharInUnicodeString(int a1, __int16 *a2, __int64 a3, _WORD *a4)
{
  unsigned __int16 v4; // bx
  _WORD *v5; // rbp
  char v7; // si
  __int64 result; // rax
  unsigned __int16 v9; // dx
  unsigned __int16 v10; // dx
  unsigned __int16 v11; // r13
  char *v12; // r14
  __int16 *v13; // r11
  unsigned __int16 v14; // r9
  unsigned __int16 v15; // r10
  int v16; // ecx
  _BOOL8 v17; // r12
  __int16 v18; // ax
  int v19; // esi
  __int16 v20; // r9
  int v21; // esi
  __int16 v22; // dx
  unsigned __int16 v23; // cx
  __int64 v24; // rdi
  signed __int64 v25; // r14
  _WORD *v26; // rbx
  int v27; // esi
  __int16 v28; // r8
  unsigned __int16 v29; // r10
  __int64 v30; // r11
  unsigned __int16 i; // dx
  unsigned __int16 j; // cx
  int v33; // esi
  __int16 v34; // bp
  unsigned __int16 v35; // r10
  __int64 v36; // r11
  unsigned __int16 v37; // r10
  int v38; // [rsp+20h] [rbp-98h]
  unsigned __int16 v39; // [rsp+24h] [rbp-94h]
  _WORD v41[32]; // [rsp+30h] [rbp-88h] BYREF

  v4 = 0;
  v5 = a4;
  v7 = a1;
  if ( a4 )
    *a4 = 0;
  if ( (a1 & 0xFFFFFFF8) != 0 || !a4 )
    return 3221225485LL;
  result = 0LL;
  if ( a2 )
  {
    if ( (*(_BYTE *)a2 & 1) != 0
      || (v9 = a2[1], (v9 & 1) != 0)
      || (unsigned __int16)*a2 > v9
      || v9 == 0xFFFF
      || !*((_QWORD *)a2 + 1) && (*a2 || v9) )
    {
      result = 3221225485LL;
    }
  }
  if ( (int)result >= 0 )
  {
    result = 0LL;
    if ( a3 )
    {
      if ( (*(_BYTE *)a3 & 1) != 0
        || (v10 = *(_WORD *)(a3 + 2), (v10 & 1) != 0)
        || *(_WORD *)a3 > v10
        || v10 == 0xFFFF
        || !*(_QWORD *)(a3 + 8) && (*(_WORD *)a3 || v10) )
      {
        result = 3221225485LL;
      }
    }
    if ( (int)result >= 0 )
    {
      v11 = *a2;
      v12 = *(char **)(a3 + 8);
      v13 = (__int16 *)*((_QWORD *)a2 + 1);
      v14 = v11 >> 1;
      v15 = *(_WORD *)a3 >> 1;
      v16 = a1 & 1;
      v39 = v11;
      v38 = v7 & 1;
      if ( (v7 & 1) != 0 )
        v13 = &v13[v14 - 1];
      v17 = !(v7 & 1);
      if ( (v7 & 4) == 0 )
      {
        if ( v15 == 1 )
        {
          v18 = *(_WORD *)v12;
          v19 = v7 & 2;
          if ( v14 )
          {
            if ( v19 )
            {
              do
              {
                if ( *v13 != v18 )
                  break;
                v13 = &v13[2 * v17 - 1];
                --v14;
              }
              while ( v14 );
            }
            else
            {
              do
              {
                if ( *v13 == v18 )
                  break;
                v13 = &v13[2 * v17 - 1];
                --v14;
              }
              while ( v14 );
            }
            goto LABEL_27;
          }
        }
        else if ( v14 )
        {
          v21 = v7 & 2;
          while ( 1 )
          {
            v22 = *v13;
            v23 = 0;
            if ( v21 )
            {
              if ( v15 )
              {
                do
                {
                  if ( v22 == *(_WORD *)&v12[2 * v23] )
                    break;
                  ++v23;
                }
                while ( v23 < v15 );
              }
              if ( v23 == v15 )
                goto LABEL_41;
            }
            else
            {
              if ( v15 )
              {
                do
                {
                  if ( v22 == *(_WORD *)&v12[2 * v23] )
                    break;
                  ++v23;
                }
                while ( v23 < v15 );
              }
              if ( v23 != v15 )
                goto LABEL_41;
            }
            v13 = &v13[2 * v17 - 1];
            if ( !--v14 )
              goto LABEL_41;
          }
        }
        return 3221226021LL;
      }
      if ( v15 <= 0x20u )
      {
        if ( v15 )
        {
          v24 = v15;
          v25 = v12 - (char *)v41;
          v26 = v41;
          do
          {
            *v26 = NLS_DOWNCASE(*(unsigned __int16 *)((char *)v26 + v25));
            ++v26;
            --v24;
          }
          while ( v24 );
        }
        if ( v14 )
        {
          v27 = v7 & 2;
          while ( 1 )
          {
            v28 = NLS_DOWNCASE((unsigned __int16)*v13);
            if ( v27 )
            {
              for ( i = 0; i < v29; ++i )
              {
                if ( v28 == v41[i] )
                  break;
              }
              if ( i == v29 )
                goto LABEL_41;
            }
            else
            {
              for ( j = 0; j < v29; ++j )
              {
                if ( v28 == v41[j] )
                  break;
              }
              if ( j != v29 )
                goto LABEL_41;
            }
            v13 = (__int16 *)(v30 + 4 * v17 - 2);
            if ( !--v14 )
              goto LABEL_41;
          }
        }
        return 3221226021LL;
      }
      if ( v14 )
      {
        v33 = v7 & 2;
        while ( 1 )
        {
          v34 = NLS_DOWNCASE((unsigned __int16)*v13);
          if ( v33 )
          {
            do
            {
              if ( v34 == (unsigned __int16)NLS_DOWNCASE(*(unsigned __int16 *)&v12[2 * v4]) )
                break;
              ++v4;
            }
            while ( v4 < v35 );
            v11 = v39;
            if ( v4 == v35 )
              goto LABEL_72;
          }
          else
          {
            do
            {
              if ( v34 == (unsigned __int16)NLS_DOWNCASE(*(unsigned __int16 *)&v12[2 * v4]) )
                break;
              ++v4;
            }
            while ( v4 < v37 );
            v11 = v39;
            if ( v4 != v37 )
            {
LABEL_72:
              v5 = a4;
LABEL_41:
              v16 = v38;
LABEL_27:
              if ( v14 )
              {
                v20 = 2 * v14 - 2;
                if ( !v16 )
                  v20 = v11 - v20;
                *v5 = v20;
                return 0LL;
              }
              return 3221226021LL;
            }
          }
          v4 = 0;
          v13 = (__int16 *)(v36 + 4 * v17 - 2);
          if ( !--v14 )
            goto LABEL_72;
        }
      }
      return 3221226021LL;
    }
  }
  return result;
}
