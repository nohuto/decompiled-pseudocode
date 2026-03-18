/*
 * XREFs of ?vOrClearTypeGlyph@@YGXPAU_GLYPHBITS@@IPAEI@Z @ 0x1D50BD
 * Callers:
 *     _draw_clrt_f_ntb_o_to_temp_start@28 @ 0x1D5452 (_draw_clrt_f_ntb_o_to_temp_start@28.c)
 * Callees:
 *     <none>
 */

void __userpurge vOrClearTypeGlyph(
        int a1@<edx>,
        int a2@<ecx>,
        struct _GLYPHBITS *a3,
        unsigned int a4,
        unsigned __int8 *a5,
        unsigned int a6)
{
  int v6; // eax
  struct _GLYPHBITS *v7; // esi
  int v8; // edx
  struct _GLYPHBITS *v9; // edi
  unsigned int v10; // ecx
  struct _GLYPHBITS *v11; // ebx
  unsigned int v12; // eax
  unsigned __int8 *v13; // esi
  unsigned __int8 v14; // dl
  unsigned int v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  struct _GLYPHBITS *v20; // [esp+Ch] [ebp-20h]
  unsigned int v21; // [esp+10h] [ebp-1Ch]
  int v22; // [esp+14h] [ebp-18h]
  int v23; // [esp+18h] [ebp-14h]
  int v24; // [esp+1Ch] [ebp-10h]
  unsigned int v25; // [esp+20h] [ebp-Ch]
  unsigned int v26; // [esp+24h] [ebp-8h]
  unsigned __int8 x; // [esp+2Bh] [ebp-1h]

  v6 = *(_DWORD *)(a2 + 8);
  v7 = a3;
  v8 = a2 + 16;
  v22 = v6;
  v24 = a2 + 16;
  v9 = (struct _GLYPHBITS *)((char *)a3 + a4 * *(_DWORD *)(a2 + 12));
  v20 = v9;
  if ( a3 < v9 )
  {
    do
    {
      v10 = 0;
      v23 = 0;
      v11 = v7;
      v12 = (struct _GLYPHBITS *)((char *)v7 + v6) >= v7 ? v22 : 0;
      v21 = v12;
      if ( v12 )
      {
        v13 = (unsigned __int8 *)off_266024;
        do
        {
          v14 = *(_BYTE *)(v10 + v24);
          x = v11->ptlOrigin.x;
          if ( LOBYTE(v11->ptlOrigin.x) )
          {
            if ( v14 )
            {
              v26 = v13[4 * x] + v13[4 * v14];
              v25 = v13[4 * x + 1] + v13[4 * v14 + 1];
              v15 = v13[4 * x + 2] + v13[4 * v14 + 2];
              v16 = v26;
              if ( v26 > 6 )
                v16 = 6;
              v17 = v25;
              if ( v25 > 6 )
                v17 = 6;
              if ( v15 > 6 )
                v15 = 6;
              v18 = v17 + 7 * v16;
              v10 = v23;
              LOBYTE(v11->ptlOrigin.x) = *((_BYTE *)&gajStorage1 + 7 * v18 + v15);
              v12 = v21;
            }
          }
          else
          {
            LOBYTE(v11->ptlOrigin.x) = v14;
          }
          v11 = (struct _GLYPHBITS *)((char *)v11 + 1);
          v23 = ++v10;
        }
        while ( v10 < v12 );
        v7 = a3;
        v9 = v20;
        v8 = v24;
      }
      v7 = (struct _GLYPHBITS *)((char *)v7 + a4);
      v8 += a1;
      v6 = v22;
      a3 = v7;
      v24 = v8;
    }
    while ( v7 < v9 );
  }
}
