/*
 * XREFs of _RotateHTPat45 @ 0x1BC418
 * Callers:
 *     _Generate_HTSC_WORD @ 0x1BC242 (_Generate_HTSC_WORD.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall RotateHTPat45(unsigned __int8 *a1, _WORD *a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  unsigned int v7; // edx
  unsigned int v8; // esi
  int v9; // ecx
  int v10; // edi
  unsigned int result; // eax
  _WORD *v12; // edi
  unsigned int v13; // esi
  unsigned int v14; // ecx
  _WORD *v15; // edx
  int v16; // [esp+Ch] [ebp-20h]
  int v17; // [esp+10h] [ebp-1Ch]
  unsigned int v20; // [esp+38h] [ebp+Ch]
  unsigned int v21; // [esp+3Ch] [ebp+10h]
  _WORD *v22; // [esp+40h] [ebp+14h]

  v7 = a3;
  v21 = 2 * a5;
  v8 = a4 >> 1;
  v9 = 6 * a6;
  v10 = 6 * ((a3 >> 1) + a6 * (a4 >> 1));
  result = 6 * a3;
  v17 = 6 * a6;
  v16 = v10;
  while ( v8 )
  {
    v12 = (_WORD *)((char *)a2 + v10);
    v22 = a2;
    --v8;
    a2 = (_WORD *)((char *)a2 + v9);
    v20 = v8;
    if ( v7 )
    {
      v13 = v7;
      do
      {
        --v13;
        v14 = a5 + 8190 * *a1++;
        v15 = v22;
        v22 += 3;
        *v15 = v14 / v21;
        result = (v14 - 4095) / v21;
        *v12 = result;
        v12 += 3;
        if ( v13 == a3 >> 1 )
          v12 -= 3 * a3;
      }
      while ( v13 );
      v8 = v20;
      v7 = a3;
      v9 = v17;
    }
    v10 = v16;
  }
  return result;
}
