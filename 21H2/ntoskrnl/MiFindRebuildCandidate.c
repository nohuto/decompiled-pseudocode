/*
 * XREFs of MiFindRebuildCandidate @ 0x14055204C
 * Callers:
 *     MiRebuildLargePage @ 0x140552918 (MiRebuildLargePage.c)
 * Callees:
 *     MiCollapseRunTopDown @ 0x14030CDEC (MiCollapseRunTopDown.c)
 *     MiPfnsWorthTrying @ 0x14030CE80 (MiPfnsWorthTrying.c)
 */

__int64 __fastcall MiFindRebuildCandidate(
        __int16 *a1,
        int a2,
        int a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned int *a6)
{
  unsigned int *v7; // rdx
  int v8; // r13d
  __int64 v9; // rsi
  unsigned int *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // r12
  __int64 v14; // r14
  unsigned __int64 v15; // rax
  __int128 v17; // [rsp+30h] [rbp-40h] BYREF
  __int64 v18; // [rsp+40h] [rbp-30h]
  __int64 v19; // [rsp+48h] [rbp-28h]
  __int128 v20; // [rsp+50h] [rbp-20h]
  __int64 v21; // [rsp+60h] [rbp-10h]
  int v23; // [rsp+C0h] [rbp+50h]

  v23 = a3;
  v21 = 0LL;
  v7 = a6;
  v8 = 0x800000;
  v20 = a4;
  v9 = *a6;
  v18 = 0LL;
  v19 = a5;
  v17 = 0LL;
  *((_QWORD *)&v20 + 1) = a4;
  v10 = &a6[4 * v9 + 4];
  if ( a4 == 512 )
  {
    v8 = 41943040;
  }
  else if ( a4 == 16 )
  {
    v8 = 25165824;
  }
  do
  {
LABEL_17:
    if ( !(_DWORD)v9 )
      return -1LL;
    v9 = (unsigned int)(v9 - 1);
  }
  while ( v10[2 * v9] != a2 || v10[2 * v9 + 1] != a3 );
  v11 = *(_QWORD *)&v7[4 * (unsigned int)v9 + 6];
  *(_QWORD *)&v17 = *(_QWORD *)&v7[4 * (unsigned int)v9 + 4];
  for ( *((_QWORD *)&v17 + 1) = v11 + v17; ; *((_QWORD *)&v17 + 1) = v12 - v13 )
  {
    if ( !(unsigned int)MiCollapseRunTopDown((__int64)&v17) )
      goto LABEL_16;
    v12 = *((_QWORD *)&v17 + 1);
    v13 = *((_QWORD *)&v20 + 1);
    LODWORD(a5) = 0;
    v14 = *((_QWORD *)&v17 + 1) - *((_QWORD *)&v20 + 1);
    v15 = MiPfnsWorthTrying(
            a1,
            48LL * (*((_QWORD *)&v17 + 1) - *((_QWORD *)&v20 + 1)) - 0x58000000000LL,
            *((__int64 *)&v20 + 1),
            v8,
            &a5);
    if ( !v15 )
      break;
    if ( v15 > v14 - (__int64)v17 )
    {
      v19 = v12 - v15 - 1;
LABEL_16:
      a3 = v23;
      v7 = a6;
      goto LABEL_17;
    }
    if ( v15 > v13 )
      v13 = v15;
  }
  return v14;
}
