/*
 * XREFs of ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01632C0
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C013DB84 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00055D4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??$_BmlFillOnePathModalityFromVidPn@UD3DKMT_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C01634D4 (--$_BmlFillOnePathModalityFromVidPn@UD3DKMT_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPAT.c)
 */

__int64 __fastcall BmlFillPathModalityFromVidPn(const struct DMMVIDPN *a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  __int64 v2; // r13
  const struct DMMVIDPN *v3; // r8
  char *v4; // rbp
  struct D3DKMT_GETPATHSMODALITY *v5; // r14
  char *v6; // r12
  bool v7; // cf
  unsigned int v8; // ebx
  char *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  char v13; // r15
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  char *v22; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // [rsp+64h] [rbp+Ch]

  v2 = *((_QWORD *)a1 + 6);
  v3 = (const struct DMMVIDPN *)*((_QWORD *)a1 + 15);
  v4 = 0LL;
  v5 = a2;
  if ( v3 != (const struct DMMVIDPN *)((char *)a1 + 120) )
    v4 = (char *)v3 - 8;
  if ( v4 )
  {
    v6 = (char *)a1 + 120;
    do
    {
      v7 = *((_WORD *)v5 + 10) != 0;
      v8 = 0;
      while ( v7 )
      {
        v9 = (char *)v5 + 272 * v8;
        if ( (*((_QWORD *)v9 + 6) & 0x700000000000LL) == 0x700000000000LL )
        {
          v10 = *(_QWORD *)(v2 + 8);
          if ( !v10 )
          {
            v24 = WdLogNewEntry5_WdAssertion(0x700000000000LL, a2);
            WdLogEvent5_WdAssertion(v24);
            v10 = *(_QWORD *)(v2 + 8);
          }
          v11 = *(_QWORD *)(v10 + 16);
          if ( *((_DWORD *)v9 + 16) == *(_DWORD *)(v11 + 316)
            && *((_DWORD *)v9 + 17) == *(_DWORD *)(v11 + 320)
            && *((_DWORD *)v9 + 18) == *(_DWORD *)(*((_QWORD *)v4 + 11) + 24LL)
            && *((_DWORD *)v9 + 19) == *(_DWORD *)(*((_QWORD *)v4 + 12) + 24LL) )
          {
            LODWORD(v12) = 0;
            v26 = 0;
            v13 = 0;
            if ( (*((_BYTE *)v5 + 24) & 1) != 0 && (*((_QWORD *)v9 + 6) & 0x100LL) != 0 )
            {
              v12 = *((_QWORD *)v9 + 18);
              v13 = 1;
              v26 = HIDWORD(v12);
            }
            _BmlFillOnePathModalityFromVidPn<D3DKMT_PATHMODALITY_DESCRIPTOR>(v4, v9 + 48);
            v14 = *((_QWORD *)v4 + 11);
            v15 = *(_QWORD *)(v14 + 104);
            if ( v15 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v15 + 96));
              v16 = *(_QWORD *)(v14 + 104);
            }
            else
            {
              v16 = 0LL;
            }
            v17 = *(_QWORD *)(v16 + 144);
            if ( v17 )
              v9[176] = (unsigned int)(*(_DWORD *)(v17 + 72) - 3) <= 1;
            v18 = *((_QWORD *)v4 + 12);
            v19 = *(_QWORD *)(v18 + 104);
            if ( v19 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v19 + 96));
              v20 = *(_QWORD *)(v18 + 104);
            }
            else
            {
              v20 = 0LL;
            }
            a2 = *(struct D3DKMT_GETPATHSMODALITY **)(v20 + 144);
            if ( a2 )
            {
              *((_DWORD *)v9 + 63) = *((_DWORD *)a2 + 33);
              v21 = *((_DWORD *)a2 + 34);
              *((_QWORD *)v9 + 6) |= 8uLL;
            }
            else
            {
              *((_DWORD *)v9 + 63) = 0;
              v21 = 4;
            }
            *((_DWORD *)v9 + 64) = v21;
            if ( v13 && *((_QWORD *)v9 + 18) != __PAIR64__(v26, v12) )
              *((_QWORD *)v9 + 6) &= ~0x20000uLL;
            if ( v20 )
              ReferenceCounted::Release((ReferenceCounted *)(v20 + 88), (__int64)a2);
            if ( v16 )
              ReferenceCounted::Release((ReferenceCounted *)(v16 + 88), (__int64)a2);
            break;
          }
        }
        else
        {
          v25 = WdLogNewEntry5_WdWarning(0x700000000000LL, a2, v3);
          *(_QWORD *)(v25 + 24) = v8;
          *(_QWORD *)(v25 + 32) = v5;
          WdLogEvent5_WdWarning(v25);
        }
        v7 = ++v8 < *((unsigned __int16 *)v5 + 10);
      }
      v22 = (char *)*((_QWORD *)v4 + 1);
      v4 = v22 - 8;
      if ( v22 == v6 )
        v4 = 0LL;
    }
    while ( v4 );
  }
  return 0LL;
}
