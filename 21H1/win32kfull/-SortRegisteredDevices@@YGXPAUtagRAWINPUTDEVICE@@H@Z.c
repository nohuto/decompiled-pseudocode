/*
 * XREFs of ?SortRegisteredDevices@@YGXPAUtagRAWINPUTDEVICE@@H@Z @ 0x143F0C
 * Callers:
 *     __GetRegisteredRawInputDevices@8 @ 0x144474 (__GetRegisteredRawInputDevices@8.c)
 * Callees:
 *     <none>
 */

void __fastcall SortRegisteredDevices(unsigned __int16 *a1, int a2)
{
  int v2; // esi
  unsigned __int16 *v3; // edi
  int v4; // ebx
  int v5; // edx
  int v6; // eax
  unsigned __int16 *v7; // ecx
  int v8; // esi
  unsigned __int16 *v9; // edi
  unsigned __int16 *v10; // eax
  _DWORD *v11; // esi
  _DWORD *v12; // edi
  int v13; // esi
  unsigned __int16 *v14; // edi
  int v15; // [esp+8h] [ebp-34h]
  int v16; // [esp+Ch] [ebp-30h]
  int v17; // [esp+10h] [ebp-2Ch]
  int v19; // [esp+18h] [ebp-24h]
  int v21; // [esp+20h] [ebp-1Ch]
  unsigned __int16 *v22; // [esp+24h] [ebp-18h]
  int v23; // [esp+28h] [ebp-14h]
  unsigned __int16 *v24; // [esp+2Ch] [ebp-10h]
  _DWORD *v25; // [esp+30h] [ebp-Ch]
  int v26; // [esp+34h] [ebp-8h]
  unsigned __int16 *v27; // [esp+38h] [ebp-4h]

  v2 = a2;
  v3 = a1;
  if ( a2 > 0 )
  {
    v4 = 1;
    if ( a2 / 9 <= 1 )
      goto LABEL_5;
    do
      v4 = 3 * v4 + 1;
    while ( v4 < a2 / 9 );
    while ( v4 > 0 )
    {
LABEL_5:
      v5 = v4;
      v23 = v4;
      if ( v4 < v2 )
      {
        v6 = 0;
        v21 = 0;
        v27 = v3;
        v19 = 12 * v4;
        v7 = &v3[6 * v4];
        v22 = v7;
        do
        {
          v15 = *(_DWORD *)v7;
          v16 = *((_DWORD *)v7 + 1);
          v17 = *((_DWORD *)v7 + 2);
          v8 = v6;
          v26 = v6;
          if ( v6 >= 0 )
          {
            v9 = v7;
            v24 = v7;
            v10 = v27;
            v25 = v27;
            do
            {
              if ( (v10[1] | (*v10 << 16)) <= (unsigned int)(HIWORD(v15) | ((unsigned __int16)v15 << 16)) )
                break;
              v11 = v25;
              v10 = (unsigned __int16 *)&v25[v19 / 0xFFFFFFFC];
              v25 = (_DWORD *)((char *)v25 - v19);
              *(_DWORD *)v9 = *v11++;
              v12 = v9 + 2;
              *v12 = *v11;
              v12[1] = v11[1];
              v8 = v26 - v4;
              v9 = &v24[v19 / 0xFFFFFFFE];
              v26 = v8;
              v24 = (unsigned __int16 *)((char *)v24 - v19);
            }
            while ( v8 >= 0 );
            v5 = v23;
            v7 = v22;
            v6 = v21;
          }
          v13 = v4 + v8;
          if ( v5 != v13 )
          {
            v14 = &a1[6 * v13];
            *(_DWORD *)v14 = v15;
            v14 += 2;
            *(_DWORD *)v14 = v16;
            *((_DWORD *)v14 + 1) = v17;
          }
          v27 += 6;
          ++v5;
          v2 = a2;
          v7 += 6;
          ++v6;
          v23 = v5;
          v22 = v7;
          v21 = v6;
        }
        while ( v5 < a2 );
        v3 = a1;
      }
      v4 /= 3;
    }
  }
}
