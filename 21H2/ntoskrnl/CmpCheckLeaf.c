/*
 * XREFs of CmpCheckLeaf @ 0x1406DB680
 * Callers:
 *     CmpCheckKey @ 0x1406E0950 (CmpCheckKey.c)
 * Callees:
 *     SetFailureLocation @ 0x140242D88 (SetFailureLocation.c)
 *     NLS_UPCASE @ 0x1402AB420 (NLS_UPCASE.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     CmpGenerateFastLeafHintForUnicodeString @ 0x14060E4C0 (CmpGenerateFastLeafHintForUnicodeString.c)
 *     CmpHashUnicodeComponent @ 0x14065F044 (CmpHashUnicodeComponent.c)
 *     HvpMarkCellDirty @ 0x14071F800 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpCheckLeaf(ULONG_PTR BugCheckParameter2, int a2, _WORD *a3, int a4, __int64 a5)
{
  int v6; // ebx
  __int16 v8; // dx
  char v9; // r15
  int v11; // esi
  unsigned int v12; // r12d
  __int64 v13; // r9
  _WORD *v14; // rbp
  bool v15; // zf
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  int *v19; // rax
  int v20; // r8d
  int v21; // eax
  unsigned int v22; // r8d
  unsigned int v23; // edx
  __int64 v24; // r9
  bool v25; // bl
  __int64 v26; // rax
  unsigned int v27; // ecx
  unsigned int v28; // r10d
  unsigned __int8 *v29; // r9
  __int16 v30; // cx
  unsigned __int16 v31; // ax
  int FastLeafHintForUnicodeString; // eax
  unsigned int v34; // eax
  __int64 v35; // [rsp+30h] [rbp-58h] BYREF
  __m128i v36; // [rsp+38h] [rbp-50h] BYREF
  __int64 v37; // [rsp+A0h] [rbp+18h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+A8h] [rbp+20h]

  LODWORD(BugCheckParameter3) = a4;
  v6 = 0;
  v35 = 0LL;
  v8 = *a3 - 26220;
  LODWORD(v35) = -1;
  v9 = 0;
  v36 = 0LL;
  if ( (v8 & 0xFDFF) != 0 )
    return 0LL;
  v11 = 0;
  if ( !a3[1] )
    return 0LL;
  v12 = -1073741492;
  while ( 1 )
  {
    v13 = *(unsigned int *)&a3[4 * v11 + 2];
    v14 = &a3[4 * v11];
    v37 = 0LL;
    v15 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) == 0;
    LODWORD(v37) = -1;
    if ( !v15 )
      goto LABEL_20;
    if ( ((unsigned int)v13 & 0x7FFFFFFF) < *(_DWORD *)(632 * ((unsigned __int64)(unsigned int)v13 >> 31)
                                                      + BugCheckParameter2
                                                      + 272)
      && (v13 & 7) == 0 )
    {
      v16 = (unsigned int)v13 >> 31;
      if ( (unsigned int)(v13 + ((_DWORD)v16 << 31)) < *(_DWORD *)(632 * v16 + BugCheckParameter2 + 272) )
      {
        v17 = *(_QWORD *)(*(_QWORD *)(632 * v16 + BugCheckParameter2 + 280) + 8LL * (((unsigned int)v13 >> 21) & 0x3FF))
            + 24 * (((unsigned __int64)(unsigned int)v13 >> 12) & 0x1FF);
        if ( v17 )
        {
          if ( (*(_BYTE *)(v17 + 8) & 2) == 0 )
          {
            v18 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
                    BugCheckParameter2,
                    (unsigned int)v13,
                    &v37);
            if ( !v18 )
              goto LABEL_19;
            v19 = (int *)(v18 - 4);
            if ( !v19 )
              goto LABEL_19;
            v20 = (int)v19;
            v21 = *v19;
            v22 = v20 - (*(_DWORD *)(v17 + 8) & 0xFFFFFFF0);
            v23 = -v21;
            v25 = 0;
            if ( v21 < 0 && v23 - 8 <= 0xFFFF8 )
            {
              v24 = *(unsigned int *)((*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0uLL) + 8);
              if ( v23 <= (unsigned __int64)(v24 - 32) && v22 - v21 <= (unsigned int)v24 && v22 >= 0x20 )
                v25 = 1;
            }
            (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v37);
            if ( v25 )
            {
LABEL_19:
              v6 = 0;
LABEL_20:
              v26 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *, __int64))(BugCheckParameter2 + 8))(
                      BugCheckParameter2,
                      *((unsigned int *)v14 + 1),
                      &v35,
                      v13);
              if ( !v26 )
              {
                SetFailureLocation(a5, 0, 23, 0xC000009A, 0);
                return 3221225626LL;
              }
              v27 = -4 - *(_DWORD *)(v26 - 4);
              if ( v27 < 0x4C || (v28 = *(unsigned __int16 *)(v26 + 72), v28 > v27 - 76) )
              {
LABEL_29:
                (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v35);
                goto LABEL_30;
              }
              v29 = (unsigned __int8 *)(v26 + 76);
              v30 = *(_WORD *)(v26 + 2) & 0x20;
              v36.m128i_i16[1] = *(_WORD *)(v26 + 72);
              v36.m128i_i16[0] = v28;
              v36.m128i_i64[1] = v26 + 76;
              if ( *a3 == 26732 )
              {
                if ( v30 )
                {
                  for ( ; v28; --v28 )
                  {
                    v31 = *v29;
                    if ( (unsigned __int8)v31 >= 0x61u )
                    {
                      if ( (unsigned __int8)v31 > 0x7Au )
                        v31 = NLS_UPCASE(*v29);
                      else
                        v31 -= 32;
                    }
                    ++v29;
                    v6 = v31 + 37 * v6;
                  }
LABEL_28:
                  if ( *((_DWORD *)v14 + 2) != v6 )
                  {
                    v9 = 1;
                    if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
                    {
                      v34 = 16;
                      goto LABEL_56;
                    }
                    SetFailureLocation(a5, 1, 23, 0xC000014C, 0x20u);
                    if ( !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3) )
                    {
                      v34 = 48;
                      v12 = -1073741443;
LABEL_56:
                      SetFailureLocation(a5, 0, 23, v12, v34);
                      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v35);
                      return v12;
                    }
                    *((_DWORD *)v14 + 2) = v6;
                    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
                  }
                  goto LABEL_29;
                }
                FastLeafHintForUnicodeString = CmpHashUnicodeComponent(&v36);
              }
              else
              {
                if ( v30 )
                {
                  LODWORD(v37) = 0;
                  if ( v28 < 4 )
                  {
                    if ( !v28 )
                      goto LABEL_28;
                  }
                  else
                  {
                    v28 = 4;
                  }
                  memmove(&v37, v29, v28);
                  v6 = v37;
                  goto LABEL_28;
                }
                FastLeafHintForUnicodeString = CmpGenerateFastLeafHintForUnicodeString((unsigned __int16 *)&v36);
              }
              v6 = FastLeafHintForUnicodeString;
              goto LABEL_28;
            }
          }
        }
      }
    }
LABEL_30:
    if ( ++v11 >= (unsigned int)(unsigned __int16)a3[1] )
      break;
    v6 = 0;
  }
  if ( !v9 )
    return 0LL;
  return 2147483690LL;
}
