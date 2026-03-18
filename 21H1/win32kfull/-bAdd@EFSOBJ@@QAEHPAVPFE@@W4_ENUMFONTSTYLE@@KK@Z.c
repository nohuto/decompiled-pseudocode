/*
 * XREFs of ?bAdd@EFSOBJ@@QAEHPAVPFE@@W4_ENUMFONTSTYLE@@KK@Z @ 0x88E5A
 * Callers:
 *     ?bScanLists@FHOBJ@@QAEHPAVEFSOBJ@@KPAU_EFFILTER_INFO@@@Z @ 0x88C9C (-bScanLists@FHOBJ@@QAEHPAVEFSOBJ@@KPAU_EFFILTER_INFO@@@Z.c)
 *     ?bScanLists@FHOBJ@@QAEHPAVEFSOBJ@@PBGKPAU_EFFILTER_INFO@@@Z @ 0x89B06 (-bScanLists@FHOBJ@@QAEHPAVEFSOBJ@@PBGKPAU_EFFILTER_INFO@@@Z.c)
 * Callees:
 *     ?WriteEFE@EFSOBJ@@QAEXABU_EFENTRY@@AAVPFEOBJ@@@Z @ 0x88F8C (-WriteEFE@EFSOBJ@@QAEXABU_EFENTRY@@AAVPFEOBJ@@@Z.c)
 */

int __thiscall EFSOBJ::bAdd(EFSOBJ *this, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  unsigned int v6; // ebx
  int v7; // edi
  bool v8; // zf
  char v10; // al
  char *v11; // esi
  char v12; // al
  EFSOBJ *v13; // edi
  char v14; // cl
  unsigned int v15; // ebx
  EFSOBJ *v16; // edi
  unsigned __int8 v17; // cl
  int v18; // [esp+Ch] [ebp-14h] BYREF
  int v19; // [esp+10h] [ebp-10h]
  unsigned int v20; // [esp+14h] [ebp-Ch]
  int v21; // [esp+18h] [ebp-8h]
  EFSOBJ *v22; // [esp+1Ch] [ebp-4h]

  v5 = a2;
  v6 = 0;
  v22 = this;
  v19 = 0;
  v7 = *(_DWORD *)(a2 + 20);
  v21 = *(_DWORD *)(v7 + 40);
  v8 = (a4 & 2) == 0;
  a4 &= 2u;
  v20 = v21 + v7 + 16;
  v18 = a3;
  BYTE1(v19) = a5;
  if ( !v8 )
  {
    LOBYTE(v19) = 2;
    if ( a5 == 1 )
    {
      if ( v21 )
        v10 = *(_BYTE *)(v21 + v7);
      else
        v10 = *(_BYTE *)(v7 + 44);
      BYTE1(v19) = v10;
    }
  }
  EFSOBJ::WriteEFE(this, (const struct _EFENTRY *)&v18, (struct PFEOBJ *)&a2);
  if ( a4 )
  {
    if ( a5 == 1 )
    {
      if ( *(_DWORD *)(*(_DWORD *)(v5 + 20) + 40) )
      {
        v11 = (char *)(v7 + v21 + 1);
        v12 = *v11;
        if ( *v11 != 1 )
        {
          v13 = v22;
          v14 = *v11;
          v15 = v20;
          do
          {
            if ( v14 == -1 )
              break;
            if ( v14 == -2 )
              break;
            if ( (unsigned int)v11 >= v15 )
              break;
            BYTE1(v19) = v12;
            v18 = a3;
            HIWORD(v19) = 0;
            LOBYTE(v19) = 2;
            EFSOBJ::WriteEFE(v13, (const struct _EFENTRY *)&v18, (struct PFEOBJ *)&a2);
            v12 = *++v11;
            v14 = *v11;
          }
          while ( *v11 != 1 );
        }
      }
    }
  }
  else if ( *(_DWORD *)(v5 + 84) )
  {
    v16 = v22;
    do
    {
      v17 = *(_BYTE *)(v5 + v6 + 92);
      v18 = a3;
      HIWORD(v19) = v17;
      LOBYTE(v19) = 3;
      BYTE1(v19) = *((_BYTE *)gpfsTable + 196 * v17 + 128);
      EFSOBJ::WriteEFE(v16, (const struct _EFENTRY *)&v18, (struct PFEOBJ *)&a2);
      ++v6;
    }
    while ( v6 < *(_DWORD *)(v5 + 84) );
  }
  return 1;
}
