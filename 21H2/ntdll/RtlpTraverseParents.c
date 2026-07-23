/*
 * XREFs of RtlpTraverseParents @ 0x18005884C
 * Callers:
 *     RtlpIsQualifiedLanguage @ 0x180058730 (RtlpIsQualifiedLanguage.c)
 *     RtlpTraverseParents @ 0x18005884C (RtlpTraverseParents.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800EED00 (LdrpMergeParentBaseLanguagesToList.c)
 * Callees:
 *     RtlpTraverseParents @ 0x18005884C (RtlpTraverseParents.c)
 *     LdrpGetMUILangConfigNode @ 0x1800EEC28 (LdrpGetMUILangConfigNode.c)
 */

char __fastcall RtlpTraverseParents(_WORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  char v6; // bl
  char v11; // r12
  unsigned int v12; // r8d
  int v13; // r9d
  int v14; // ecx
  int v16; // ecx
  int v17; // ebp
  __int64 v18; // r14
  __int16 v19; // r8
  _WORD *v20; // rdx
  int v21; // ebp
  __int16 v22; // dx
  __int16 v23; // cx
  __int16 v24; // ax
  __int16 v25; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0;
  v25 = -1;
  v11 = 0;
  if ( !a1 )
    return 0;
  if ( !a2 )
    return 0;
  if ( !a3 )
    return 0;
  v12 = a5;
  if ( a5 > 4 )
    return 0;
  v13 = a6;
  if ( a6 <= 1 )
    return 0;
  v14 = (*a1 & 7) - 1;
  if ( !v14 )
  {
    *(_DWORD *)(a2 + 4) = 1;
    v6 = 1;
    *(_WORD *)a2 = a1[2];
    *(_WORD *)(a2 + 2) = a1[3];
    return v6;
  }
  v16 = v14 - 1;
  if ( !v16 || v16 == 2 )
  {
    if ( !a4 )
      goto LABEL_20;
    if ( (int)LdrpGetMUILangConfigNode(a1, a3, a4, &v25) < 0 )
      goto LABEL_19;
    v17 = 0;
    v18 = *(_QWORD *)(a4 + 8) + 12LL * v25;
    while ( 1 )
    {
      v19 = (*(_WORD *)(v18 + 2) >> (2 * v17)) & 3;
      if ( v19 )
      {
        v20 = (_WORD *)(a2 + 8);
        if ( v19 != 2 )
        {
          if ( v19 == 1 )
          {
            v23 = *(_WORD *)(v18 + 2LL * v17 + 6);
            *(_WORD *)(a2 + 10) = -1;
            *v20 = v23;
            *(_DWORD *)(a2 + 12) = 1;
          }
          else
          {
            v11 = 1;
            *v20 = 0;
            *(_WORD *)(a2 + 10) = *(_WORD *)(v18 + 2LL * v17 + 6);
            *(_DWORD *)(a2 + 12) = 1;
LABEL_19:
            v12 = a5;
            v13 = a6;
LABEL_20:
            v21 = 0;
            if ( !v11 )
            {
              while ( v21 < 4 )
              {
                v22 = (a1[4] >> (2 * v21)) & 3;
                if ( v22 == 2 )
                {
                  if ( (unsigned __int8)RtlpTraverseParents(
                                          *(_DWORD *)(*(_QWORD *)(a3 + 24) + 16LL) + 28 * (__int16)a1[v21 + 6],
                                          (int)a2 + 8,
                                          a3,
                                          a4,
                                          v12 + 1,
                                          v13 - 1) )
                    goto LABEL_33;
                }
                else if ( ((v22 - 1) & 0xFFFD) == 0 )
                {
                  v24 = a1[v21 + 6];
                  if ( v22 == 1 )
                    *(_WORD *)(a2 + 8) = v24;
                  else
                    *(_WORD *)(a2 + 10) = v24;
                  *(_DWORD *)(a2 + 12) = 1;
                  goto LABEL_33;
                }
                v12 = a5;
                ++v21;
                v13 = a6;
              }
              return v6;
            }
          }
LABEL_33:
          *(_DWORD *)(a2 + 4) = 1;
          v6 = 1;
          *(_WORD *)a2 = a1[2];
          *(_WORD *)(a2 + 2) = a1[3];
          return v6;
        }
        if ( (unsigned __int8)RtlpTraverseParents(
                                *(_DWORD *)(*(_QWORD *)(a3 + 24) + 16LL) + 28 * *(__int16 *)(v18 + 2LL * v17 + 6),
                                (_DWORD)v20,
                                a3,
                                a4,
                                a5 + 1,
                                a6 - 1) )
          goto LABEL_33;
      }
      if ( ++v17 >= 3 )
        goto LABEL_19;
    }
  }
  return v6;
}
