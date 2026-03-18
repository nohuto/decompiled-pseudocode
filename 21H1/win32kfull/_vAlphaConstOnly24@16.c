/*
 * XREFs of _vAlphaConstOnly24@16 @ 0x22B77F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __stdcall vAlphaConstOnly24(int a1, unsigned __int8 *a2, int a3, unsigned int a4)
{
  unsigned __int8 *v4; // esi
  unsigned int result; // eax
  unsigned __int8 *v6; // ebx
  _BYTE *v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // ecx
  unsigned __int8 *v13; // [esp+14h] [ebp+Ch]
  int v14; // [esp+18h] [ebp+10h]
  _BYTE *v15; // [esp+1Ch] [ebp+14h]

  v4 = a2;
  result = HIWORD(a4);
  v13 = &a2[3 * a3];
  if ( v4 != v13 )
  {
    v14 = BYTE2(a4);
    v6 = &v4[-a1];
    v7 = (_BYTE *)(a1 + 2);
    v15 = (_BYTE *)(a1 + 2);
    do
    {
      v8 = (unsigned __int8)*(v7 - 2);
      v9 = (unsigned __int8)*(v7 - 1);
      v10 = *v4;
      v4 += 3;
      v11 = v14 * ((v6[(_DWORD)v15 - 1] | (v10 << 16)) - (v9 | (v8 << 16))) + 8388736 + 255 * (v9 | (v8 << 16));
      v12 = 255 * (unsigned __int8)*v15 + 128 + v14 * (v6[(_DWORD)v15] - (unsigned __int8)*v15);
      *(v15 - 2) = (((v11 + ((v11 >> 8) & 0xFF00FF)) >> 8) & 0xFF00FF) >> 16;
      *(v15 - 1) = (unsigned __int16)(v11 + BYTE1(v11)) >> 8;
      result = (v12 + (unsigned int)BYTE1(v12)) >> 8;
      *v15 = result;
      v7 = v15 + 3;
      v15 += 3;
    }
    while ( v4 != v13 );
  }
  return result;
}
