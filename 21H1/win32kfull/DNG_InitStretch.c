/*
 * XREFs of DNG_InitStretch @ 0x52622
 * Callers:
 *     RenderNineGridInternal @ 0x50CC0 (RenderNineGridInternal.c)
 * Callees:
 *     __aulldiv @ 0xF91F1 (__aulldiv.c)
 */

unsigned int *__fastcall DNG_InitStretch(int a1, unsigned int a2, unsigned int a3, int a4, int a5)
{
  int v5; // ecx
  unsigned __int64 v6; // kr00_8
  unsigned __int64 v7; // rax
  unsigned int v8; // edi
  unsigned int *result; // eax
  unsigned int v10; // ebx
  int v11; // edx
  __int64 v12; // rdi
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  bool v15; // cf
  unsigned __int64 v16; // [esp-10h] [ebp-28h]
  int v18; // [esp+28h] [ebp+10h]

  *(_DWORD *)(a1 + 28) = a5;
  *(_DWORD *)(a1 + 24) = a4;
  HIDWORD(v16) = a3 - 1;
  LODWORD(v16) = -1;
  v6 = v16 / a2 + 1;
  v5 = v6;
  v18 = v16 / a2 + 1;
  v7 = __PAIR64__(a3, 0) / a2;
  v8 = v7;
  result = (unsigned int *)a1;
  v10 = HIDWORD(v7);
  v11 = a4;
  LODWORD(v12) = __PAIR64__(v10, v8) >> 1;
  *(_QWORD *)(a1 + 8) = v6;
  v13 = v10 >> 1;
  if ( a4 > 5 )
  {
    HIDWORD(v12) = (a4 * (unsigned __int64)(unsigned int)v6) >> 32;
    v12 += (unsigned int)(v6 * a4);
    v13 += HIDWORD(v12) + a4 * HIDWORD(v6);
LABEL_7:
    result = (unsigned int *)a1;
    goto LABEL_3;
  }
  if ( a4 > 0 )
  {
    do
    {
      v14 = v12 + v5;
      v15 = v14 < (unsigned int)v12;
      LODWORD(v12) = v14;
      v5 = v18;
      v13 += HIDWORD(v6) + v15;
      --v11;
    }
    while ( v11 );
    goto LABEL_7;
  }
LABEL_3:
  result[1] = v12;
  *result = v13;
  return result;
}
