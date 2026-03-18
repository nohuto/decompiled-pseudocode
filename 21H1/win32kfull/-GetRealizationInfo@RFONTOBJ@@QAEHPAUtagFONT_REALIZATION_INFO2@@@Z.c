/*
 * XREFs of ?GetRealizationInfo@RFONTOBJ@@QAEHPAUtagFONT_REALIZATION_INFO2@@@Z @ 0x619DC
 * Callers:
 *     _GreGetRealizationInfo@8 @ 0xF6E26 (_GreGetRealizationInfo@8.c)
 * Callees:
 *     ?IsVariableFont@@YG_NPAU_IFIMETRICS@@@Z @ 0x89762 (-IsVariableFont@@YG_NPAU_IFIMETRICS@@@Z.c)
 */

int __userpurge RFONTOBJ::GetRealizationInfo@<eax>(
        RFONTOBJ *this@<ecx>,
        struct _IFIMETRICS *a2@<edi>,
        struct tagFONT_REALIZATION_INFO2 *a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  char v7; // al
  struct tagFONT_REALIZATION_INFO2 *v8; // ebx
  __int16 v10; // di
  int v11; // edx
  _DWORD *v12; // edx
  unsigned int v13; // eax
  int v14; // ecx
  RFONTOBJ *v15; // esi
  int v16; // edi
  bool v17; // al
  unsigned int v18; // edx
  int v19; // ecx
  _DWORD *v20; // ecx
  _DWORD *v21; // edi
  _DWORD *v22; // esi
  int v23; // esi
  char *v24; // edx
  char *v25; // ebx
  _DWORD *v26; // ebx
  _DWORD *v27; // esi
  int v29; // [esp+8h] [ebp-Ch]
  unsigned int v31; // [esp+Ch] [ebp-8h]
  _DWORD *v32; // [esp+10h] [ebp-4h]
  __int16 v33; // [esp+10h] [ebp-4h]

  v4 = *(_DWORD *)this;
  v5 = *(_DWORD *)(*(_DWORD *)this + 84);
  v6 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 80) + 20) + 48);
  if ( (v6 & 2) != 0 )
    v7 = 1;
  else
    v7 = ((v6 & 4) == 0) | 2;
  v8 = a3;
  *((_BYTE *)a3 + 4) = v7;
  *((_DWORD *)a3 + 2) = **(_DWORD **)this;
  *((_DWORD *)a3 + 3) = *(_DWORD *)(v5 + 88);
  *((_WORD *)a3 + 3) = 0;
  *((_BYTE *)a3 + 5) = ((*(_DWORD *)(*(_DWORD *)this + 12) & 0x40000000) != 0) + 1;
  v29 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 != 16 )
  {
    v32 = *(_DWORD **)this;
    v10 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)this + 80) + 4);
    v11 = (unsigned __int16)(v10 - 1);
    if ( v10 != 1 )
    {
      v19 = v32[21] + 132 + 4 * v11;
      do
      {
        if ( (*(_DWORD *)(*(_DWORD *)v19 + 8) & 0x100) != 0 )
          --v10;
        v11 += 0xFFFF;
        v19 -= 4;
      }
      while ( (_WORD)v11 );
    }
    v12 = *(_DWORD **)this;
    v13 = v32[3];
    v14 = (v13 >> 13) & 1;
    v33 = v14;
    v15 = this;
    if ( (v13 & 0x4000) != 0 )
      v33 = v14 | 2;
    *((_DWORD *)a3 + 4) = *(_DWORD *)(v12[21] + 20);
    *((_WORD *)a3 + 10) = v10 - 1;
    *((_WORD *)a3 + 11) = v33;
    if ( v29 != 24 )
    {
      v16 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 80) + 20);
      v17 = IsVariableFont(a2);
      v18 = 0;
      if ( v17 )
      {
        v20 = (_DWORD *)(v16 + *(_DWORD *)(v16 + 196));
        *((_DWORD *)a3 + 7) = v20[1];
        if ( v20[1] )
        {
          v21 = (_DWORD *)((char *)a3 + 32);
          v22 = v20 + 2;
          do
          {
            ++v18;
            *v21++ = *v22++;
          }
          while ( v18 < v20[1] );
          v15 = this;
          v18 = 0;
        }
        v31 = 0;
        v23 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v15 + 80) + 20)
            + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v15 + 80) + 20) + 200);
        *((_DWORD *)a3 + 25) = *(_DWORD *)(v23 + 4);
        if ( *(_DWORD *)(v23 + 4) )
        {
          v24 = (char *)a3 + 104;
          v25 = (char *)(v23 + 8);
          do
          {
            qmemcpy(v24, v25, 0x28u);
            v25 += 40;
            v24 += 40;
            ++v31;
          }
          while ( v31 < *(_DWORD *)(v23 + 4) );
          v8 = a3;
          v18 = 0;
        }
        *((_DWORD *)v8 + 186) = v20[18];
        if ( v20[1] )
        {
          v26 = (_DWORD *)((char *)v8 + 748);
          v27 = v20 + 19;
          do
          {
            ++v18;
            *v26++ = *v27++;
          }
          while ( v18 < v20[1] );
        }
      }
      else
      {
        *((_DWORD *)a3 + 7) = 0;
        *((_DWORD *)a3 + 25) = 0;
        *((_DWORD *)a3 + 186) = 0;
      }
    }
  }
  return 1;
}
