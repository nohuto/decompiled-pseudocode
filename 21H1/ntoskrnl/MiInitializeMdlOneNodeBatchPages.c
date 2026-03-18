/*
 * XREFs of MiInitializeMdlOneNodeBatchPages @ 0x140345564
 * Callers:
 *     MiInitializeMdlBatchPages @ 0x140342FCC (MiInitializeMdlBatchPages.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x1402931D0 (MiSearchNumaNodeTable.c)
 *     MiZeroInParallel @ 0x1402C9D34 (MiZeroInParallel.c)
 *     MiCreateColorAnchors @ 0x14031ECF0 (MiCreateColorAnchors.c)
 *     MiDeleteColorAnchors @ 0x1403432AC (MiDeleteColorAnchors.c)
 *     MiInsertMdlPageNeedsZero @ 0x1403452D0 (MiInsertMdlPageNeedsZero.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1403454FC (MiPageAttributeBatchChangeNeeded.c)
 *     MiPfnZeroingNeeded @ 0x140349390 (MiPfnZeroingNeeded.c)
 *     MiZeroAndConvertPage @ 0x140349894 (MiZeroAndConvertPage.c)
 *     MiChangePageAttributeBatch @ 0x1403530A0 (MiChangePageAttributeBatch.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

void __fastcall MiInitializeMdlOneNodeBatchPages(__int64 a1, _QWORD *a2, __int64 a3)
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
  __int64 v15; // r9
  __int64 v16; // rax
  _QWORD *v17; // rax
  int v18; // eax
  char v19; // [rsp+20h] [rbp-A8h]
  int v20; // [rsp+24h] [rbp-A4h]
  __int64 *v21; // [rsp+28h] [rbp-A0h]
  __int64 v22; // [rsp+30h] [rbp-98h]
  __int64 v23; // [rsp+38h] [rbp-90h]
  __int128 v24; // [rsp+50h] [rbp-78h] BYREF
  __int128 v25; // [rsp+60h] [rbp-68h]
  __int128 v26; // [rsp+70h] [rbp-58h]

  v3 = *(int *)(a1 + 60);
  v4 = a2;
  v21 = a2;
  v5 = *(_DWORD *)(a1 + 8);
  v6 = 0LL;
  v23 = a3;
  v7 = 0LL;
  v19 = v5;
  v8 = 0LL;
  v22 = 0LL;
  v9 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( !a3 )
    goto LABEL_11;
  v10 = 0xFFFFFA8000000000uLL;
  v11 = v5 & 1;
  v20 = v11;
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
    if ( (_DWORD)v25 )
      goto LABEL_14;
    v17 = MiSearchNumaNodeTable((__int64)(v13 - v10) / 48);
    if ( (unsigned int)MiCreateColorAnchors((__int64)&v24, *((_DWORD *)v17 + 2)) )
    {
      v18 = 3;
      if ( (v19 & 8) != 0 )
        v18 = 7;
      *((_QWORD *)&v24 + 1) = __PAIR64__(v3, v18);
      v15 = *v21;
LABEL_14:
      MiInsertMdlPageNeedsZero((__int64)&v24, v15, 1LL);
      ++v22;
      v12 = 1;
LABEL_15:
      if ( (_DWORD)v3 == 3 && v12 == 1 )
      {
        if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v13, 1LL) == 1 )
        {
          v16 = v6;
          v6 = v13;
        }
        else
        {
          v16 = v7;
          v7 = v13;
        }
        *(_QWORD *)(v13 + 16) = v16;
      }
      else if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v13, (unsigned int)v3) == 1 )
      {
        if ( !v12 || dword_140C4DED8[4 * ((unsigned __int64)*(unsigned __int8 *)(v13 + 34) >> 6) + v3] == (_DWORD)v3 )
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
    MiZeroAndConvertPage(v13, 3LL, (unsigned int)v3, 2LL);
LABEL_19:
    v10 = 0xFFFFFA8000000000uLL;
LABEL_5:
    v11 = v20;
    v4 = v21 + 1;
    v14 = v23-- == 1;
    ++v21;
  }
  while ( !v14 );
  if ( v8 )
    MiChangePageAttributeBatch(v8, (unsigned int)v3, 0LL);
  if ( v6 )
    MiChangePageAttributeBatch(v6, 1LL, -1LL);
  if ( v22 )
  {
    MiZeroInParallel((__int64 *)&v24);
    if ( v6 )
      MiChangePageAttributeBatch(v6, 3LL, 0LL);
    if ( v7 )
      MiChangePageAttributeBatch(v7, 3LL, 0LL);
    if ( v9 )
      MiChangePageAttributeBatch(v9, (unsigned int)v3, 0LL);
  }
LABEL_11:
  MiDeleteColorAnchors((__int64)&v24);
}
