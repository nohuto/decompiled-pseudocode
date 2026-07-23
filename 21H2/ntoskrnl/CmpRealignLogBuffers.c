/*
 * XREFs of CmpRealignLogBuffers @ 0x140875658
 * Callers:
 *     CmpRmReDoPhase @ 0x140875980 (CmpRmReDoPhase.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpRealignLogBuffers(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx

  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 )
  {
    if ( v2 <= 2 )
    {
      v9 = *(unsigned __int16 *)(a1 + 32);
      v4 = a1 + 64;
      *(_WORD *)(a1 + 34) = v9;
      *(_QWORD *)(a1 + 56) = a1 + 64 + v9;
      *(_DWORD *)(a1 + 52) = *(_DWORD *)(a1 + 4) - v9 - 64;
      goto LABEL_15;
    }
    if ( v2 > 5 )
    {
      if ( v2 == 6 || v2 == 7 )
      {
        *(_QWORD *)(a1 + 40) = a1 + 56;
        *(_WORD *)(a1 + 34) = *(_WORD *)(a1 + 32);
        return;
      }
      if ( v2 != 8 )
      {
        if ( v2 == 9 )
        {
          v5 = *(unsigned __int16 *)(a1 + 32);
          v4 = a1 + 64;
          *(_WORD *)(a1 + 34) = v5;
          *(_QWORD *)(a1 + 56) = a1 + 64 + v5;
          *(_WORD *)(a1 + 50) = *(_WORD *)(a1 + 48);
          goto LABEL_15;
        }
        if ( v2 != 10 )
          return;
      }
      v3 = *(unsigned __int16 *)(a1 + 32);
      v4 = a1 + 64;
      *(_WORD *)(a1 + 34) = v3;
      *(_QWORD *)(a1 + 56) = a1 + 64 + v3;
LABEL_15:
      *(_QWORD *)(a1 + 40) = v4;
      return;
    }
    v6 = *(unsigned __int16 *)(a1 + 32);
    *(_QWORD *)(a1 + 40) = a1 + 80;
    v7 = v6 + a1 + 80;
    *(_WORD *)(a1 + 34) = v6;
    v8 = *(unsigned __int16 *)(a1 + 48);
    *(_WORD *)(a1 + 50) = v8;
    *(_QWORD *)(a1 + 56) = v7;
    if ( v2 != 5 )
      *(_QWORD *)(a1 + 72) = v7 + v8;
  }
}
