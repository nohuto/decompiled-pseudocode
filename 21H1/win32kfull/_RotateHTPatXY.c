/*
 * XREFs of _RotateHTPatXY @ 0x1BC4D1
 * Callers:
 *     _Generate_HTSC_WORD @ 0x1BC242 (_Generate_HTSC_WORD.c)
 * Callees:
 *     <none>
 */

int __fastcall RotateHTPatXY(int a1, _WORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  int v8; // ecx
  int v9; // esi
  int v10; // eax
  __int16 *v11; // ebx
  int result; // eax
  int v13; // edi
  __int16 *v14; // ecx
  int i; // esi
  __int16 v16; // ax
  __int16 *v17; // ecx
  int j; // esi
  __int16 v19; // ax
  int v20; // edi
  int v21; // [esp+Ch] [ebp-8h]
  _WORD *v22; // [esp+10h] [ebp-4h]
  int v23; // [esp+1Ch] [ebp+8h]
  int v24; // [esp+24h] [ebp+10h]
  int v25; // [esp+2Ch] [ebp+18h]

  v22 = a2;
  v8 = a4;
  v9 = 6 * a5;
  v10 = 6 * (a6 + a7 * a5);
  v24 = 6 * a5;
  v11 = (__int16 *)(v10 + a1);
  result = a3;
  v21 = 6 * a3;
  v13 = a7;
  if ( a4 )
  {
    result = a3 - a6;
    v23 = a3 - a6;
    do
    {
      v22 = (_WORD *)((char *)v22 + v9);
      v25 = v8 - 1;
      v14 = v11;
      v11 = (__int16 *)((char *)v11 + v9);
      for ( i = result; i; --i )
      {
        v16 = *v14;
        v14 += 3;
        *a2 = v16;
        a2 += 3;
      }
      v17 = &v14[v21 / 0xFFFFFFFE];
      for ( j = a6; j; --j )
      {
        v19 = *v17;
        v17 += 3;
        *a2 = v19;
        a2 += 3;
      }
      v9 = v24;
      v20 = v13 + 1;
      if ( v20 == a4 )
        v11 = (__int16 *)((char *)v11 - v24 * a4);
      result = v23;
      a2 = v22;
      v13 = a4 != v20 ? v20 : 0;
      v8 = v25;
    }
    while ( v25 );
  }
  return result;
}
