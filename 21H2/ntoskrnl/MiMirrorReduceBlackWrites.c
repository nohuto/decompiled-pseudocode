/*
 * XREFs of MiMirrorReduceBlackWrites @ 0x140385DC0
 * Callers:
 *     MiMirrorBlackPhase @ 0x1403F4064 (MiMirrorBlackPhase.c)
 * Callees:
 *     MiIsDecayPfn @ 0x140236E3C (MiIsDecayPfn.c)
 *     MiMirrorNodeLargePages @ 0x140385A5C (MiMirrorNodeLargePages.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140385FAC (MiMirrorOmitPagesFromCopy.c)
 */

unsigned __int64 __fastcall MiMirrorReduceBlackWrites(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r13
  __int64 v4; // rcx
  int v5; // edx
  __int64 v6; // rdi
  unsigned int v7; // r15d
  __int64 v8; // rbp
  __int64 v9; // r14
  ULONG_PTR v10; // r14
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v15; // [rsp+20h] [rbp-58h]
  int v17; // [rsp+88h] [rbp+10h]
  int v18; // [rsp+90h] [rbp+18h]
  __int64 v19; // [rsp+98h] [rbp+20h]

  v2 = *(_DWORD *)(a2 + 8);
  v3 = a1;
  v4 = *(_QWORD *)a2;
  v5 = *(_DWORD *)(a2 + 12);
  v15 = v4;
  v18 = v5;
  if ( (v2 & 8) != 0 )
  {
    v6 = 1LL;
  }
  else
  {
    v6 = 2LL;
    if ( (v2 & 0x400) != 0 )
      v6 = 1LL;
  }
  v7 = 0;
  v17 = 0;
  v8 = 0LL;
LABEL_6:
  v19 = v6;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v6 > 1 )
        v9 = v3 + 40LL * v7 + 2432;
      else
        v9 = *(_QWORD *)(v3 + 8 * v6 + 2176) + 40 * v8;
      v10 = *(_QWORD *)(v9 + 16);
      if ( v10 != 0xFFFFFFFFFLL )
      {
        while ( 1 )
        {
          if ( v6 == 2 && MiIsDecayPfn(v10) )
          {
            v12 = *(_QWORD *)(v11 + 48 * v10 + 16);
            if ( qword_140C4DF80 && (v12 & 0x10) == 0 )
              v12 &= ~qword_140C4DF80;
            v13 = (v12 >> 12) & 0xFFFFFFFFFLL;
            if ( v13 == v10 )
              goto LABEL_21;
            do
            {
              MiMirrorOmitPagesFromCopy(v15, v13, 1LL);
              v13 = *(_QWORD *)(48 * v13 - 0x58000000000LL) & 0xFFFFFFFFFLL;
            }
            while ( v13 != v10 );
            v6 = v19;
          }
          else
          {
            MiMirrorOmitPagesFromCopy(v15, v10, 1LL);
          }
          v11 = 0xFFFFFA8000000000uLL;
LABEL_21:
          v10 = *(_QWORD *)(v11 + 48 * v10) & 0xFFFFFFFFFLL;
          if ( v10 == 0xFFFFFFFFFLL )
          {
            v7 = v17;
            v3 = a1;
            v5 = v18;
            break;
          }
        }
      }
      if ( v6 > 1 )
        break;
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= dword_140C4DF3C )
      {
        v8 = 0LL;
        break;
      }
    }
    if ( !v6 )
      return MiMirrorNodeLargePages(v15, v3, 1);
    if ( v6 == 2 )
    {
      v17 = ++v7;
      if ( v7 != v5 )
        continue;
    }
    --v6;
    goto LABEL_6;
  }
}
