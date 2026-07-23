/*
 * XREFs of PsspHandleDumper @ 0x180116080
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800A4480 (memmove.c)
 */

char __fastcall PsspHandleDumper(
        __int64 *a1,
        __int64 a2,
        int a3,
        char a4,
        unsigned __int16 *a5,
        unsigned __int16 *a6,
        __int64 a7,
        void *Src,
        size_t Size)
{
  _WORD *v10; // r10
  void *v11; // r11
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r12
  char v15; // cl
  __int64 v16; // r12
  _WORD *v17; // r9
  void *v18; // rax
  unsigned int v19; // eax
  char result; // al
  _WORD *v21; // [rsp+20h] [rbp-58h]
  char *v22; // [rsp+28h] [rbp-50h]
  _WORD *v23; // [rsp+30h] [rbp-48h]
  void *v24; // [rsp+38h] [rbp-40h]
  __int64 v25; // [rsp+80h] [rbp+8h]
  char v26; // [rsp+98h] [rbp+20h]

  v26 = a4;
  v25 = 0LL;
  v21 = 0LL;
  v10 = 0LL;
  v22 = 0LL;
  v11 = 0LL;
  v23 = 0LL;
  v12 = 16;
  v13 = *a1;
  v14 = 0LL;
  v24 = 0LL;
  v15 = 0;
  if ( a5 && *((_QWORD *)a5 + 1) )
  {
    v10 = (_WORD *)(v13 + 16);
    v11 = (void *)(v13 + 18);
    v12 = *a5 + 20;
    v25 = v13 + 18;
    v15 = 1;
  }
  if ( a6 && *((_QWORD *)a6 + 1) )
  {
    v15 |= 2u;
    v21 = (_WORD *)(v13 + v12);
    v22 = (char *)(v21 + 1);
    v12 += *a6 + 4;
  }
  if ( a7 )
  {
    v16 = v12;
    v12 += 56;
    v14 = v13 + v16;
    v15 |= 4u;
  }
  if ( Src && (_DWORD)Size )
  {
    v17 = (_WORD *)(v13 + v12);
    v12 += Size + 2;
    v23 = v17;
    v15 |= 8u;
    v18 = v17 + 1;
    a4 = v26;
    v24 = v18;
  }
  v19 = *((_DWORD *)a1 + 3);
  if ( v19 + v12 < v19 || v19 + v12 > *((_DWORD *)a1 + 2) )
    return 0;
  *(_DWORD *)v13 = a3;
  *(_BYTE *)(v13 + 4) = v15;
  *(_BYTE *)(v13 + 5) = a4;
  *(_QWORD *)(v13 + 8) = MEMORY[0x7FFE0014];
  if ( a5 && *((_QWORD *)a5 + 1) )
  {
    *v10 = *a5 + 2;
    memmove(v11, *((const void **)a5 + 1), *a5);
    *(_WORD *)(*a5 + v25) = 0;
  }
  if ( a6 && *((_QWORD *)a6 + 1) )
  {
    *v21 = *a6 + 2;
    memmove(v22, *((const void **)a6 + 1), *a6);
    *(_WORD *)&v22[*a6] = 0;
  }
  if ( a7 )
  {
    *(_OWORD *)v14 = *(_OWORD *)a7;
    *(_OWORD *)(v14 + 16) = *(_OWORD *)(a7 + 16);
    *(_OWORD *)(v14 + 32) = *(_OWORD *)(a7 + 32);
    *(_QWORD *)(v14 + 48) = *(_QWORD *)(a7 + 48);
  }
  if ( Src )
  {
    if ( (_DWORD)Size )
    {
      *v23 = Size;
      memmove(v24, Src, (unsigned int)Size);
    }
  }
  *((_DWORD *)a1 + 3) += v12;
  result = 1;
  *a1 += v12;
  ++*((_DWORD *)a1 + 4);
  return result;
}
