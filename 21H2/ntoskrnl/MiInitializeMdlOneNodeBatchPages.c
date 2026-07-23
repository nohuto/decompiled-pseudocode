/*
 * XREFs of MiInitializeMdlOneNodeBatchPages @ 0x140295074
 * Callers:
 *     MiInitializeMdlBatchPages @ 0x140294C34 (MiInitializeMdlBatchPages.c)
 * Callees:
 *     MiZeroAndConvertPage @ 0x1402352B0 (MiZeroAndConvertPage.c)
 *     MiCreateColorAnchors @ 0x1402936E4 (MiCreateColorAnchors.c)
 *     MiZeroInParallel @ 0x1402940B0 (MiZeroInParallel.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x140295330 (MiPageAttributeBatchChangeNeeded.c)
 *     MiInsertMdlPageNeedsZero @ 0x140295398 (MiInsertMdlPageNeedsZero.c)
 *     MiDeleteColorAnchors @ 0x1402953FC (MiDeleteColorAnchors.c)
 *     MiPfnZeroingNeeded @ 0x1402DD3B0 (MiPfnZeroingNeeded.c)
 *     MiChangePageAttributeBatch @ 0x14030E2F0 (MiChangePageAttributeBatch.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall MiInitializeMdlOneNodeBatchPages(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rsi
  _QWORD *v4; // rax
  int v5; // edx
  __int64 v6; // rbp
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // r14
  unsigned __int64 v10; // r8
  int v11; // ecx
  char v12; // r15
  __int64 v13; // rdi
  bool v14; // zf
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // eax
  char v20; // [rsp+20h] [rbp-A8h]
  int v21; // [rsp+24h] [rbp-A4h]
  __int64 *v22; // [rsp+28h] [rbp-A0h]
  __int64 v23; // [rsp+30h] [rbp-98h]
  __int64 v24; // [rsp+38h] [rbp-90h]
  __int128 v25; // [rsp+50h] [rbp-78h] BYREF
  __int128 v26; // [rsp+60h] [rbp-68h]
  __int128 v27; // [rsp+70h] [rbp-58h]

  v3 = *(int *)(a1 + 60);
  v4 = a2;
  v22 = a2;
  v5 = *(_DWORD *)(a1 + 8);
  v6 = 0LL;
  v24 = a3;
  v7 = 0LL;
  v20 = v5;
  v8 = 0LL;
  v23 = 0LL;
  v9 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( !a3 )
    return MiDeleteColorAnchors(&v25);
  v10 = 0xFFFFFA8000000000uLL;
  v11 = v5 & 1;
  v21 = v11;
  do
  {
    v12 = 0;
    v13 = v10 + 48LL * *v4;
    if ( v11 || !(unsigned int)MiPfnZeroingNeeded(v10 + 48LL * *v4, (unsigned int)v3) )
    {
      if ( *(unsigned __int8 *)(v13 + 34) >> 6 == (_DWORD)v3 )
        goto LABEL_5;
      goto LABEL_15;
    }
    if ( (_DWORD)v26 )
      goto LABEL_14;
    v18 = MiSearchNumaNodeTable((__int64)(v13 - v10) / 48);
    if ( (unsigned int)MiCreateColorAnchors((__int64)&v25, *(_DWORD *)(v18 + 8)) )
    {
      v19 = 3;
      if ( (v20 & 8) != 0 )
        v19 = 7;
      *((_QWORD *)&v25 + 1) = __PAIR64__(v3, v19);
      v16 = *v22;
LABEL_14:
      MiInsertMdlPageNeedsZero(&v25, v16, 1LL);
      ++v23;
      v12 = 1;
LABEL_15:
      if ( (_DWORD)v3 == 3 && v12 == 1 )
      {
        if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v13) == 1 )
        {
          v17 = v6;
          v6 = v13;
        }
        else
        {
          v17 = v7;
          v7 = v13;
        }
        *(_QWORD *)(v13 + 16) = v17;
      }
      else if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v13) == 1 )
      {
        if ( !v12 || dword_140C4DFD8[4 * ((unsigned __int64)*(unsigned __int8 *)(v13 + 34) >> 6) + v3] == (_DWORD)v3 )
        {
          *(_QWORD *)(v13 + 16) = v8;
          v8 = v13;
        }
        else
        {
          *(_QWORD *)(v13 + 16) = v9;
          v9 = v13;
        }
      }
      goto LABEL_19;
    }
    MiZeroAndConvertPage(v13, 3u, v3, 2);
LABEL_19:
    v10 = 0xFFFFFA8000000000uLL;
LABEL_5:
    v11 = v21;
    v4 = v22 + 1;
    v14 = v24-- == 1;
    ++v22;
  }
  while ( !v14 );
  if ( v8 )
    MiChangePageAttributeBatch(v8, (unsigned int)v3, 0LL);
  if ( v6 )
    MiChangePageAttributeBatch(v6, 1LL, -1LL);
  if ( v23 )
  {
    MiZeroInParallel((__int64 *)&v25);
    if ( v6 )
      MiChangePageAttributeBatch(v6, 3LL, 0LL);
    if ( v7 )
      MiChangePageAttributeBatch(v7, 3LL, 0LL);
    if ( v9 )
      MiChangePageAttributeBatch(v9, (unsigned int)v3, 0LL);
  }
  return MiDeleteColorAnchors(&v25);
}
