/*
 * XREFs of RtlpMergeSecurityAttributeInformation @ 0x180083D30
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 *     RtlpIsAttributeAceInSacl @ 0x1800EA5D0 (RtlpIsAttributeAceInSacl.c)
 */

__int64 __fastcall RtlpMergeSecurityAttributeInformation(__int64 a1, __int64 a2, unsigned __int16 **a3, char a4)
{
  unsigned __int16 *v4; // rbx
  char v5; // si
  unsigned __int16 **v6; // rax
  unsigned __int16 *Heap; // rdi
  unsigned int v10; // r12d
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  _BYTE *v14; // r15
  _BYTE *v15; // rsi
  unsigned int i; // r14d
  _BYTE *v17; // rsi
  unsigned int j; // r14d
  unsigned int v19; // eax
  _WORD *v20; // r14
  _BYTE *v21; // rsi
  unsigned int v22; // esi
  _WORD *v23; // rsi
  unsigned int k; // r14d
  __int64 v26; // r8
  char IsAttributeAceInSacl; // al
  char v28; // al
  __int64 v29; // rax
  _BYTE v30[4]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v31; // [rsp+24h] [rbp-44h]
  unsigned int v32; // [rsp+28h] [rbp-40h]

  v4 = 0LL;
  v5 = a4;
  v30[0] = 0;
  v6 = a3;
  Heap = 0LL;
  v10 = 0;
  if ( !a3 )
  {
    v10 = -1073741811;
    goto LABEL_28;
  }
  if ( a1 )
  {
    v11 = *(unsigned __int16 *)(a1 + 2);
    goto LABEL_4;
  }
  if ( a2 )
  {
    v11 = 0;
LABEL_4:
    if ( a2 )
      v12 = *(unsigned __int16 *)(a2 + 2);
    else
      v12 = 0;
    v13 = v12 + v11;
    v31 = v13;
    if ( v13 < 8 )
    {
LABEL_76:
      v10 = -1073741705;
    }
    else
    {
      Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v13);
      if ( Heap )
      {
        v14 = Heap + 4;
        *(_QWORD *)Heap = 0LL;
        *(_BYTE *)Heap = 2;
        Heap[1] = 8;
        if ( a1 )
        {
          v15 = (_BYTE *)(a1 + 8);
          for ( i = 0; i < *(unsigned __int16 *)(a1 + 4); v15 += *((unsigned __int16 *)v15 + 1) )
          {
            if ( *v15 == 18 && (v15[1] & 0x10) == 0 && !(unsigned __int8)RtlpIsAttributeAceInSacl(v15, Heap, 0LL, v30) )
            {
              if ( !a2 || a4 )
              {
                IsAttributeAceInSacl = 0;
              }
              else
              {
                LOBYTE(v26) = 1;
                IsAttributeAceInSacl = RtlpIsAttributeAceInSacl(v15, a2, v26, v30);
              }
              if ( IsAttributeAceInSacl && v30[0] )
              {
                Heap[1] += *((_WORD *)v15 + 1);
                if ( Heap[1] > v31 )
                  goto LABEL_75;
                memmove(v14, v15, *((unsigned __int16 *)v15 + 1));
                ++Heap[2];
                v14[1] |= 0x10u;
              }
              else
              {
                Heap[1] += *((_WORD *)v15 + 1);
                if ( Heap[1] > v31 )
                {
LABEL_75:
                  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
                  goto LABEL_76;
                }
                memmove(v14, v15, *((unsigned __int16 *)v15 + 1));
                ++Heap[2];
              }
              v14 += *((unsigned __int16 *)v15 + 1);
            }
            ++i;
          }
          v5 = a4;
        }
        if ( a2 )
        {
          if ( v5 )
          {
            v17 = (_BYTE *)(a2 + 8);
            for ( j = 0; j < *(unsigned __int16 *)(a2 + 4); v17 += *((unsigned __int16 *)v17 + 1) )
            {
              if ( *v17 == 18 && (v17[1] & 0x10) == 0 && !(unsigned __int8)RtlpIsAttributeAceInSacl(v17, Heap, 0LL, v30) )
              {
                Heap[1] += *((_WORD *)v17 + 1);
                if ( Heap[1] > v31 )
                  goto LABEL_75;
                memmove(v14, v17, *((unsigned __int16 *)v17 + 1));
                ++Heap[2];
                v14 += *((unsigned __int16 *)v17 + 1);
              }
              ++j;
            }
          }
        }
        if ( a1 )
        {
          LOWORD(v19) = *(_WORD *)(a1 + 4);
          v20 = (_WORD *)(a1 + 8);
          v32 = 0;
          v21 = (_BYTE *)(a1 + 8);
          if ( (_WORD)v19 )
          {
            do
            {
              if ( *v21 == 18 && (v21[1] & 0x10) != 0 && !(unsigned __int8)RtlpIsAttributeAceInSacl(v21, Heap, 0LL, v30) )
              {
                if ( a2 )
                  v28 = RtlpIsAttributeAceInSacl(v21, a2, 1LL, v30);
                else
                  v28 = 0;
                if ( v28 && v30[0] )
                {
                  Heap[1] += *((_WORD *)v21 + 1);
                  if ( Heap[1] > v31 )
                    goto LABEL_75;
                  memmove(v14, v21, *((unsigned __int16 *)v21 + 1));
                  ++Heap[2];
                  v14[1] |= 0x10u;
                }
                else
                {
                  Heap[1] += *((_WORD *)v21 + 1);
                  if ( Heap[1] > v31 )
                    goto LABEL_75;
                  memmove(v14, v21, *((unsigned __int16 *)v21 + 1));
                  ++Heap[2];
                  v14[1] &= ~0x10u;
                }
                v14 += *((unsigned __int16 *)v21 + 1);
              }
              v29 = *((unsigned __int16 *)v21 + 1);
              ++v32;
              v21 += v29;
              v19 = *(unsigned __int16 *)(a1 + 4);
            }
            while ( v32 < v19 );
          }
          v22 = 0;
          if ( (_WORD)v19 )
          {
            do
            {
              if ( *(_BYTE *)v20 != 18 )
              {
                Heap[1] += v20[1];
                if ( Heap[1] > v31 )
                  goto LABEL_75;
                memmove(v14, v20, (unsigned __int16)v20[1]);
                ++Heap[2];
                v14 += (unsigned __int16)v20[1];
              }
              ++v22;
              v20 = (_WORD *)((char *)v20 + (unsigned __int16)v20[1]);
            }
            while ( v22 < *(unsigned __int16 *)(a1 + 4) );
          }
        }
        if ( a2 )
        {
          if ( a4 )
          {
            v23 = (_WORD *)(a2 + 8);
            for ( k = 0; k < *(unsigned __int16 *)(a2 + 4); v23 = (_WORD *)((char *)v23 + (unsigned __int16)v23[1]) )
            {
              if ( *(_BYTE *)v23 != 18 )
              {
                Heap[1] += v23[1];
                if ( Heap[1] > v31 )
                  goto LABEL_75;
                memmove(v14, v23, (unsigned __int16)v23[1]);
                ++Heap[2];
                v14 += (unsigned __int16)v23[1];
              }
              ++k;
            }
          }
        }
        v6 = a3;
        goto LABEL_27;
      }
      v10 = -1073741801;
    }
    v6 = a3;
    goto LABEL_28;
  }
LABEL_27:
  v4 = Heap;
LABEL_28:
  *v6 = v4;
  return v10;
}
