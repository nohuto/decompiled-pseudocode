/*
 * XREFs of ?cjGetBrushOrPen@@YGJPAXH0@Z @ 0x1FD0B9
 * Callers:
 *     _GreExtGetObjectW@12 @ 0x4B144 (_GreExtGetObjectW@12.c)
 * Callees:
 *     ?RestoreAttributes@XEBRUSHOBJ@@IAEXXZ @ 0xA9338 (-RestoreAttributes@XEBRUSHOBJ@@IAEXXZ.c)
 *     ??0BRUSHSELOBJ@@QAE@PAUHBRUSH__@@@Z @ 0xA9368 (--0BRUSHSELOBJ@@QAE@PAUHBRUSH__@@@Z.c)
 *     _ftoef_c@8 @ 0xEEEB1 (_ftoef_c@8.c)
 *     _eftol_c@12 @ 0xEEF16 (_eftol_c@12.c)
 *     ?bSyncBrushObj@@YGHPAVBRUSH@@@Z @ 0x1FF612 (-bSyncBrushObj@@YGHPAVBRUSH@@@Z.c)
 */

int __userpurge cjGetBrushOrPen@<eax>(unsigned int a1@<edx>, HBRUSH a2@<ecx>, _DWORD *a3, int a4, void *a5)
{
  int v6; // edi
  _DWORD *v7; // esi
  int v8; // eax
  int v9; // edx
  unsigned int v10; // ecx
  int *v12; // edi
  int *v13; // edx
  int v14; // eax
  int v15; // eax
  int v17; // [esp-4h] [ebp-28h]
  struct BRUSH *v18; // [esp+0h] [ebp-24h]
  _DWORD v19[2]; // [esp+Ch] [ebp-18h] BYREF
  int v20; // [esp+14h] [ebp-10h]
  int v21; // [esp+18h] [ebp-Ch] BYREF
  int v22; // [esp+1Ch] [ebp-8h]
  unsigned int v23; // [esp+20h] [ebp-4h]
  int *v24; // [esp+2Ch] [ebp+8h]

  v6 = 0;
  v22 = a1;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v19, a2);
  v7 = (_DWORD *)v19[0];
  if ( !v19[0] )
  {
    EngSetLastError(0x57u);
    goto LABEL_42;
  }
  v8 = *(_DWORD *)(v19[0] + 24);
  if ( (v8 & 0x800) != 0 )
  {
    bSyncBrushObj(v18);
    if ( a3 )
    {
      if ( a1 < 0x10 )
        goto LABEL_42;
      if ( a1 == 28 && v7[31] == 5 )
      {
        *a3 = 5;
        a3[1] = 0;
        a3[2] = 0;
        a3[3] = 0;
        a3[4] = 0;
        a3[5] = 0;
        v17 = 28;
        goto LABEL_40;
      }
      *a3 = v7[31];
      a3[1] = v7[29];
      a3[2] = 0;
      a3[3] = v7[13];
    }
    v17 = 16;
LABEL_40:
    v6 = v17;
    goto LABEL_42;
  }
  if ( (v8 & 0x400) == 0 )
  {
    if ( !a3 )
    {
LABEL_39:
      v17 = 12;
      goto LABEL_40;
    }
    if ( (unsigned int)v22 < 0xC )
      goto LABEL_42;
    bSyncBrushObj(v18);
    v14 = v7[6];
    if ( (v14 & 0x10) != 0 )
    {
      *a3 = 0;
      a3[1] = v7[13];
LABEL_34:
      a3[2] = 0;
      goto LABEL_39;
    }
    if ( (v14 & 0x40) != 0 )
    {
      *a3 = 3;
      a3[1] = 0;
    }
    else
    {
      if ( (v14 & 0x20) != 0 )
      {
        *a3 = 2;
        a3[1] = v7[13];
        v15 = v7[14];
LABEL_38:
        a3[2] = v15;
        goto LABEL_39;
      }
      if ( (v14 & 0x100) != 0 )
      {
        *a3 = 1;
        a3[1] = 0;
        goto LABEL_34;
      }
      if ( (v14 & 0x80u) == 0 )
        goto LABEL_39;
      *a3 = 5;
      a3[1] = v7[13];
    }
    v15 = v7[5];
    goto LABEL_38;
  }
  v9 = *(_DWORD *)(v19[0] + 124);
  if ( (*(_BYTE *)(v19[0] + 124) & 0xF) == 7 )
  {
    v10 = *(_DWORD *)(v19[0] + 128);
    v23 = v10;
  }
  else
  {
    v10 = 0;
    v23 = 0;
  }
  v20 = 4 * v10 + 24;
  if ( a3 )
  {
    if ( v22 >= (int)(4 * v10 + 24) )
    {
      *a3 = v9;
      a3[1] = v7[29];
      a3[5] = v10;
      if ( v10 )
      {
        v12 = (int *)v7[27];
        v13 = a3 + 6;
        v24 = a3 + 6;
        do
        {
          if ( ((unsigned int)&loc_F0000 & v7[31]) != 0 )
          {
            ftoef_c(v10, (int)v13, *v12, &v21);
            eftol_c(&v21, v24, 1);
            v10 = v23;
            v13 = v24;
          }
          else
          {
            *v13 = *v12;
          }
          ++v13;
          ++v12;
          --v10;
          v24 = v13;
          v23 = v10;
        }
        while ( v10 );
      }
      v6 = v20;
      a3[2] = v7[34];
      a3[3] = v7[13];
      a3[4] = v7[28];
    }
  }
  else
  {
    v6 = 4 * v10 + 24;
  }
LABEL_42:
  if ( v7 )
  {
    XEBRUSHOBJ::RestoreAttributes((XEBRUSHOBJ *)v19);
    DEC_SHARE_REF_CNT(v19[0]);
  }
  return v6;
}
