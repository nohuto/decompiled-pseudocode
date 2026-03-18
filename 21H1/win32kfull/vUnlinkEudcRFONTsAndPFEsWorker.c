/*
 * XREFs of vUnlinkEudcRFONTsAndPFEsWorker @ 0x1F9240
 * Callers:
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1F9197 (vUnlinkEudcRFONTsAndPFEs.c)
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     vMakeInactiveHelper @ 0x1F90C7 (vMakeInactiveHelper.c)
 */

void __fastcall vUnlinkEudcRFONTsAndPFEsWorker(_DWORD *a1, int a2, int a3)
{
  int v3; // ebx
  int v4; // edi
  _DWORD *v5; // esi
  unsigned int v6; // ebx
  int v7; // edx
  unsigned int v8; // eax
  struct RFONT **v9; // ecx
  struct RFONT *v10; // edx
  int v11; // edx
  int v12; // edi
  PATHOBJ *v13; // ecx
  unsigned int v14; // ecx
  int v15; // edx
  int v16; // [esp+Ch] [ebp-10h] BYREF
  _DWORD *v17; // [esp+10h] [ebp-Ch]
  int v18; // [esp+14h] [ebp-8h]
  int v19; // [esp+18h] [ebp-4h]

  v3 = a2;
  v17 = a1;
  v4 = a3;
  v19 = a2;
  while ( v4 )
  {
    if ( (*(_BYTE *)(v4 + 32) & 8) == 0 )
    {
      v5 = *(_DWORD **)(v4 + 52);
      if ( v5 )
      {
        v16 = 0;
        while ( 1 )
        {
          v6 = v5[195];
          v7 = 1;
          v8 = 0;
          v18 = 1;
          if ( v6 )
            break;
LABEL_12:
          v13 = (PATHOBJ *)v5[182];
          if ( v13 && v7 )
            goto LABEL_14;
LABEL_17:
          v5[177] = 0;
          v5 = (_DWORD *)v5[136];
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16);
          if ( !v5 )
          {
            v4 = a3;
            v3 = v19;
            goto LABEL_19;
          }
        }
        v9 = (struct RFONT **)v5[182];
        while ( 1 )
        {
          v10 = *v9;
          if ( *v9 )
          {
            v18 = 0;
            v11 = *((_DWORD *)v10 + 20);
            v12 = v19;
            if ( v11 == *v17 )
              break;
            v12 = v19;
            if ( v11 == v17[1] )
              break;
          }
          ++v8;
          ++v9;
          if ( v8 >= v6 )
            goto LABEL_11;
        }
        vMakeInactiveHelper(v9);
        if ( *(_DWORD *)(v5[20] + 76) != v12 )
        {
LABEL_11:
          v7 = v18;
          goto LABEL_12;
        }
        v13 = (PATHOBJ *)v5[182];
LABEL_14:
        if ( v13 != (PATHOBJ *)(v5 + 183) )
          Win32FreePool(v13);
        v5[182] = 0;
        v5[195] = 0;
        v5[193] = 0;
        v5[194] = 0;
        goto LABEL_17;
      }
LABEL_19:
      v14 = 0;
      if ( *(_DWORD *)(v4 + 124) )
      {
        v15 = v4 + 132;
        do
        {
          if ( *(_DWORD *)(*(_DWORD *)v15 + 76) == v3 )
            *(_DWORD *)(*(_DWORD *)v15 + 76) = 0;
          ++v14;
          v15 += 4;
        }
        while ( v14 < *(_DWORD *)(v4 + 124) );
      }
    }
    v4 = *(_DWORD *)(v4 + 4);
    a3 = v4;
  }
}
