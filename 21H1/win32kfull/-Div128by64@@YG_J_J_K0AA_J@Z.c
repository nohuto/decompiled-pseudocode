/*
 * XREFs of ?Div128by64@@YG_J_J_K0AA_J@Z @ 0x156DE4
 * Callers:
 *     ??KPrediction@@YG?AVCFixPred@0@ABV10@0@Z @ 0x156AFF (--KPrediction@@YG-AVCFixPred@0@ABV10@0@Z.c)
 * Callees:
 *     ?uDiv128by64@@YG_K_K00AA_K@Z @ 0x158D5A (-uDiv128by64@@YG_K_K00AA_K@Z.c)
 */

int __userpurge Div128by64@<eax>(_DWORD *a1@<ecx>, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 *a5)
{
  unsigned int v5; // edx
  int v6; // ebx
  unsigned int v7; // ecx
  unsigned __int64 v8; // rdi
  bool v9; // cf
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax
  int v12; // ebx
  unsigned __int64 *v14; // [esp+0h] [ebp-24h]
  int v15; // [esp+1Ch] [ebp-8h]
  int v17; // [esp+38h] [ebp+14h]
  unsigned int v18; // [esp+38h] [ebp+14h]
  unsigned int v19; // [esp+40h] [ebp+1Ch]

  v5 = HIDWORD(a2);
  v6 = a3;
  if ( a2 >= 0 )
  {
    v7 = a2;
    v15 = HIDWORD(a3);
  }
  else
  {
    v6 = ~(_DWORD)a3;
    v15 = ~HIDWORD(a3);
    v7 = -(a2 + (a3 != -1LL));
    v5 = (unsigned __int64)-(a2 + (a3 != -1LL)) >> 32;
  }
  v17 = HIDWORD(a4) ^ (SHIDWORD(a4) >> 31);
  v8 = SHIDWORD(a4) >> 31;
  v9 = ((unsigned int)a4 ^ (SHIDWORD(a4) >> 31)) < SHIDWORD(a4) >> 31;
  v19 = abs64(a4);
  v18 = v17 - (v9 + (_DWORD)v8);
  if ( v5 > v18 || v5 >= v18 && v7 >= v19 )
    goto LABEL_11;
  v10 = (SHIDWORD(a2) >> 31) ^ v8;
  v11 = uDiv128by64(__PAIR64__(v5, v7), __PAIR64__(v15, v6), __PAIR64__(v18, v19), v14);
  HIDWORD(v11) = (__PAIR64__((unsigned int)v10 ^ HIDWORD(v11), HIDWORD(v10) ^ (unsigned int)v11)
                - __PAIR64__(v10, HIDWORD(v10))) >> 32;
  v12 = (HIDWORD(v10) ^ v11) - HIDWORD(v10);
  if ( a2 < 0 )
  {
    *a1 = 0;
    a1[1] = 0;
  }
  if ( ((HIDWORD(v11) ^ v10) & 0x80000000) != 0LL && HIDWORD(v11) | ((HIDWORD(v10) ^ (unsigned int)v11) - HIDWORD(v10)) )
  {
LABEL_11:
    *a1 = 0;
    v12 = 0;
    a1[1] = 0x80000000;
  }
  return v12;
}
