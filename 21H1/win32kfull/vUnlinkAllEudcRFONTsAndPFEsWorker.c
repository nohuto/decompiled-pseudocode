/*
 * XREFs of vUnlinkAllEudcRFONTsAndPFEsWorker @ 0xCE802
 * Callers:
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0xCE766 (vUnlinkAllEudcRFONTsAndPFEs.c)
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     vMakeInactiveHelper @ 0x1F90C7 (vMakeInactiveHelper.c)
 */

void __fastcall vUnlinkAllEudcRFONTsAndPFEsWorker(int a1, int a2, int a3)
{
  int v3; // ebx
  int v5; // eax
  int *v6; // edx
  unsigned int v7; // ecx
  _DWORD *v8; // esi
  _DWORD *v9; // ecx
  unsigned int v10; // ebx
  int v12; // [esp+14h] [ebp-4h] BYREF

  v3 = a2;
  while ( a3 )
  {
    if ( (*(_BYTE *)(a3 + 32) & 8) == 0 )
    {
      v8 = *(_DWORD **)(a3 + 52);
      if ( v8 )
      {
        v12 = 0;
        do
        {
          vMakeInactiveHelper(v8 + 180);
          if ( v8[181] )
            vMakeInactiveHelper(v8 + 181);
          if ( v3 )
          {
            v9 = (_DWORD *)v8[182];
            if ( v9 )
            {
              v10 = 0;
              if ( v8[195] )
              {
                do
                  vMakeInactiveHelper(v8[182] + 4 * v10++);
                while ( v10 < v8[195] );
                v9 = (_DWORD *)v8[182];
              }
              if ( v9 != v8 + 183 )
                Win32FreePool(v9);
              v3 = a2;
              v8[195] = 0;
              v8[182] = 0;
              v8[193] = 0;
              v8[194] = 0;
            }
          }
          v8[177] = 0;
          v8 = (_DWORD *)v8[136];
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
        }
        while ( v8 );
      }
      if ( v3 )
      {
        v7 = 0;
        if ( *(_DWORD *)(a3 + 124) )
        {
          v6 = (int *)(a3 + 132);
          do
          {
            v5 = *v6++;
            *(_DWORD *)(v5 + 76) = 0;
            ++v7;
          }
          while ( v7 < *(_DWORD *)(a3 + 124) );
        }
      }
    }
    a3 = *(_DWORD *)(a3 + 4);
  }
}
