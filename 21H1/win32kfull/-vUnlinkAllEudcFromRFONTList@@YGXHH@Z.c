/*
 * XREFs of ?vUnlinkAllEudcFromRFONTList@@YGXHH@Z @ 0xCE6D4
 * Callers:
 *     bDeleteAllFlEntry @ 0xCD72E (bDeleteAllFlEntry.c)
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     vMakeInactiveHelper @ 0x1F90C7 (vMakeInactiveHelper.c)
 */

void __cdecl vUnlinkAllEudcFromRFONTList()
{
  struct PDEV *v0; // edi
  unsigned int v1; // ebx
  int v2; // ecx
  _DWORD *v3; // esi
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  _DWORD *v6; // ecx
  int v7; // [esp+Ch] [ebp-Ch] BYREF
  int v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h] BYREF

  v7 = _ghsemDriverMgmt;
  GreAcquireSemaphore(_ghsemDriverMgmt);
  v8 = _ghsemRFONTList;
  GreAcquireSemaphore(_ghsemRFONTList);
  v0 = gppdevList;
  if ( gppdevList )
  {
    v1 = 0;
    do
    {
      v2 = *((_DWORD *)v0 + 6);
      if ( (v2 & 0x800000) != 0 )
        v3 = *(_DWORD **)(*((_DWORD *)v0 + 579) + 940);
      else
        v3 = (_DWORD *)*((_DWORD *)v0 + 235);
      if ( v3 )
      {
        v9 = 0;
        do
        {
          vMakeInactiveHelper(v3 + 180);
          if ( v3[181] )
            vMakeInactiveHelper(v3 + 181);
          v5 = (_DWORD *)v3[182];
          if ( v5 )
          {
            if ( v3[195] )
            {
              do
                vMakeInactiveHelper(v3[182] + 4 * v1++);
              while ( v1 < v3[195] );
              v5 = (_DWORD *)v3[182];
            }
            if ( v5 != v3 + 183 )
              Win32FreePool(v5);
            v1 = 0;
            v3[195] = 0;
            v3[182] = 0;
            v3[193] = 0;
            v3[194] = 0;
          }
          *(_DWORD *)(v3[20] + 76) = 0;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
          v3 = (_DWORD *)v3[167];
        }
        while ( v3 );
        v2 = *((_DWORD *)v0 + 6);
      }
      if ( (v2 & 0x800000) != 0 )
        v4 = *(_DWORD **)(*((_DWORD *)v0 + 579) + 944);
      else
        v4 = (_DWORD *)*((_DWORD *)v0 + 236);
      if ( v4 )
      {
        v9 = 0;
        do
        {
          vMakeInactiveHelper(v4 + 180);
          if ( v4[181] )
            vMakeInactiveHelper(v4 + 181);
          v6 = (_DWORD *)v4[182];
          if ( v6 )
          {
            if ( v4[195] )
            {
              do
                vMakeInactiveHelper(v4[182] + 4 * v1++);
              while ( v1 < v4[195] );
              v6 = (_DWORD *)v4[182];
            }
            if ( v6 != v4 + 183 )
              Win32FreePool(v6);
            v1 = 0;
            v4[195] = 0;
            v4[182] = 0;
            v4[193] = 0;
            v4[194] = 0;
          }
          *(_DWORD *)(v4[20] + 76) = 0;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
          v4 = (_DWORD *)v4[167];
        }
        while ( v4 );
      }
      v0 = *(struct PDEV **)v0;
    }
    while ( v0 );
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v8);
  SEMOBJ::vUnlock((SEMOBJ *)&v7);
}
