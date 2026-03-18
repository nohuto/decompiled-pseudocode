/*
 * XREFs of _FixupGrayScan @ 0x1C4E1F
 * Callers:
 *     _GetFixupScan @ 0x1C5128 (_GetFixupScan.c)
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void *__fastcall FixupGrayScan(unsigned int *a1, void *a2)
{
  unsigned int v3; // eax
  char *v4; // esi
  char *v5; // ecx
  void *v6; // eax
  unsigned __int8 *v7; // edi
  void *v8; // esi
  unsigned __int8 *v9; // edx
  unsigned int v10; // ebx
  unsigned __int8 *v11; // edx
  bool v12; // zf
  unsigned int v13; // edi
  _BYTE *v14; // esi
  unsigned __int8 *v15; // ecx
  unsigned int v16; // eax
  void *result; // eax
  void **v18; // [esp+10h] [ebp-88h]
  size_t v19; // [esp+14h] [ebp-84h]
  int v20; // [esp+18h] [ebp-80h]
  int v21; // [esp+1Ch] [ebp-7Ch]
  unsigned int v22; // [esp+20h] [ebp-78h]
  int v23; // [esp+24h] [ebp-74h]
  int v24; // [esp+28h] [ebp-70h]
  int v25; // [esp+2Ch] [ebp-6Ch]
  int v26; // [esp+30h] [ebp-68h]
  void *v27; // [esp+34h] [ebp-64h]
  int v28; // [esp+38h] [ebp-60h]
  int v29; // [esp+3Ch] [ebp-5Ch]
  int v30; // [esp+40h] [ebp-58h]
  int v31; // [esp+44h] [ebp-54h]
  unsigned int v32; // [esp+48h] [ebp-50h]
  void *v33[8]; // [esp+4Ch] [ebp-4Ch] BYREF
  int v34; // [esp+6Ch] [ebp-2Ch]
  unsigned int v35; // [esp+70h] [ebp-28h]
  unsigned int v36; // [esp+74h] [ebp-24h]
  unsigned int v37; // [esp+78h] [ebp-20h]
  unsigned __int8 *v38; // [esp+7Ch] [ebp-1Ch]
  _BYTE *v39; // [esp+80h] [ebp-18h]
  unsigned __int8 *v40; // [esp+84h] [ebp-14h]
  _BYTE *v41; // [esp+88h] [ebp-10h]
  unsigned int v42; // [esp+8Ch] [ebp-Ch]
  unsigned __int64 v43; // [esp+90h] [ebp-8h]

  v27 = a2;
  v38 = (unsigned __int8 *)a1[8];
  v19 = (size_t)v38;
  v18 = (void **)(a1 + 73);
  v3 = *a1;
  qmemcpy(v33, a1 + 73, sizeof(v33));
  v4 = (char *)v33[7];
  if ( (v3 & 0x20) != 0 )
  {
    v5 = (char *)v33[4];
    *a1 = v3 & 0xFFFFFFDF;
    ++v4;
  }
  else if ( (int)v33[7] > 1 )
  {
    v6 = v33[0];
    v35 = (unsigned int)v33[0];
    qmemcpy(v33, &v33[1], 0x14u);
    v33[5] = v6;
    memcpy(v6, v33[2], (size_t)v33[6]);
    v7 = (unsigned __int8 *)v33[1];
    v8 = v33[3];
    if ( (int)a1[9] <= 0 )
    {
      memcpy(v33[3], v33[1], (size_t)v33[6]);
      v9 = v38;
    }
    else
    {
      ((void (__cdecl *)(unsigned int *))a1[4])(a1 + 2);
      v9 = v38;
      *(_BYTE *)v8 = *((_BYTE *)v8 + 2);
      v9[(_DWORD)v8 + 1] = v9[(_DWORD)v8 - 1];
    }
    v10 = v7[1];
    v42 = *v7;
    v32 = v10;
    HIDWORD(v43) = *(unsigned __int8 *)v33[2];
    LODWORD(v43) = *((unsigned __int8 *)v33[2] + 1);
    v37 = v7[2];
    v36 = *((unsigned __int8 *)v33[2] + 2);
    v5 = (char *)v33[4];
    v11 = v9 - 1;
    if ( v11 )
    {
      v39 = (char *)v33[4] + 1;
      v41 = (_BYTE *)(v35 + 1);
      v40 = (unsigned __int8 *)v33[3] + 2;
      v38 = (unsigned __int8 *)v33[2] + 3;
      v26 = (char *)v7 - (char *)v33[2];
      v24 = (char *)v33[0] - (char *)v33[3];
      v20 = (char *)v7 - (char *)v33[3];
      v34 = (char *)v33[4] - (char *)v33[3];
      v23 = (char *)v33[0] - (char *)v7;
      v25 = (char *)v7 - (char *)v33[4];
      do
      {
        v12 = v10 == v37;
        v35 = v42;
        v30 = HIDWORD(v43);
        v43 = __PAIR64__(v43, v36);
        v42 = v10;
        v10 = v37;
        v13 = v38[v26];
        v36 = *v38;
        v37 = v13;
        v22 = v32;
        v14 = v41;
        v32 = v10;
        if ( !v12 && v43 == __PAIR64__(v10, v42) )
        {
          if ( v42 ^ v37 | v10 ^ v35 | HIDWORD(v43) ^ v36 | (unsigned int)v43 ^ v30
            && (v29 = v40[v24],
                v28 = *v40,
                v31 = *(v40 - 1),
                v21 = (unsigned __int8)v39[v25 + v23],
                v14 = v41,
                v42 ^ v31 | HIDWORD(v43) ^ v21 | v10 ^ v28 | (unsigned int)v43 ^ v29) )
          {
            if ( v22 < v10 )
            {
              v40[v34] = (v42 + 8 + (_DWORD)v43 + v35 + v28 + 12 * v40[v34]) >> 4;
              v14 = v41;
              *v41 = (v42 + 8 + (_DWORD)v43 + v21 + v36 + 12 * (unsigned __int8)*v41) >> 4;
            }
            else
            {
              *v39 = (v10 + HIDWORD(v43) + v37 + v31 + 12 * (unsigned __int8)*v39 + 8) >> 4;
              v14[1] = (v10 + HIDWORD(v43) + v29 + v30 + 12 * (unsigned __int8)v14[1] + 8) >> 4;
            }
          }
          else
          {
            v15 = v40;
            v16 = (v40[v20] + 1 + (unsigned int)(unsigned __int8)v39[v25]) >> 1;
            v14[1] = v16;
            *v14 = v16;
            v15[v34] = v16;
            v14 = v41;
            *v39 = v16;
          }
        }
        ++v38;
        ++v40;
        ++v39;
        v41 = v14 + 1;
        --v11;
      }
      while ( v11 );
      v5 = (char *)v33[4];
    }
    v4 = (char *)v33[7];
    a2 = v27;
  }
  else
  {
    v5 = (char *)v33[5];
  }
  if ( a2 )
  {
    memcpy(a2, v5 + 1, v19);
    a2 = v27;
  }
  v33[7] = v4 - 1;
  result = a2;
  qmemcpy(v18, v33, 0x20u);
  return result;
}
