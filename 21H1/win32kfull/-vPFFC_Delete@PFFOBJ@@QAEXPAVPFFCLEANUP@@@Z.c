/*
 * XREFs of ?vPFFC_Delete@PFFOBJ@@QAEXPAVPFFCLEANUP@@@Z @ 0xCE01C
 * Callers:
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QAEXXZ @ 0xACDB4 (-vDeleteRFONTRef@PFFOBJ@@QAEXXZ.c)
 *     bKillPFFOBJ @ 0xCE000 (bKillPFFOBJ.c)
 *     ?vPFFC_DeleteAndCleanup@PFFOBJ@@QAEXXZ @ 0x221DA8 (-vPFFC_DeleteAndCleanup@PFFOBJ@@QAEXXZ.c)
 * Callees:
 *     ?vDelete@PFEOBJ@@QAEXXZ @ 0xCE12E (-vDelete@PFEOBJ@@QAEXXZ.c)
 *     _FreeFileView@8 @ 0xCE1EE (_FreeFileView@8.c)
 */

void __thiscall PFFOBJ::vPFFC_Delete(PFFOBJ *this, struct PFFCLEANUP *a2)
{
  unsigned int v3; // ebx
  int v4; // edx
  int v5; // esi
  void (__stdcall *v6)(int); // ebx
  _DWORD *v7; // esi
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // ebx
  int v12; // esi
  int v13; // ecx
  int v14; // eax
  int v15; // [esp+Ch] [ebp-8h]
  int v16; // [esp+10h] [ebp-4h] BYREF
  struct PFFCLEANUP *v17; // [esp+1Ch] [ebp+8h]

  v3 = 0;
  v4 = *(_DWORD *)this;
  v15 = *(_DWORD *)(*(_DWORD *)this + 132);
  if ( *(_DWORD *)(*(_DWORD *)this + 124) )
  {
    v5 = 132;
    do
    {
      v16 = *(_DWORD *)(v5 + v4);
      if ( v16 )
      {
        PFEOBJ::vDelete((PFEOBJ *)&v16);
        v4 = *(_DWORD *)this;
      }
      ++v3;
      v5 += 4;
    }
    while ( v3 < *(_DWORD *)(v4 + 124) );
  }
  v6 = (void (__stdcall *)(int))Win32FreePool;
  *((_DWORD *)a2 + 1) = *(_DWORD *)(v4 + 56);
  *(_DWORD *)a2 = *(_DWORD *)(*(_DWORD *)this + 60);
  *((_DWORD *)a2 + 2) = *(_DWORD *)(*(_DWORD *)this + 96);
  v7 = *(_DWORD **)this;
  v8 = *(_DWORD *)(*(_DWORD *)this + 96);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 120);
    v10 = *(_DWORD *)this;
    if ( v9 )
    {
      v6 = (void (__stdcall *)(int))Win32FreePool;
      v17 = (struct PFFCLEANUP *)v7[3];
      v10 = *(_DWORD *)this;
      if ( v17 )
      {
        v6 = (void (__stdcall *)(int))Win32FreePool;
        if ( *(struct PFFCLEANUP **)(*(_DWORD *)v9 + 48) == v17 )
        {
          if ( *(_DWORD *)(v8 + 20) )
          {
            v11 = 0;
            do
            {
              v12 = *(_DWORD *)(*(_DWORD *)this + 96);
              v13 = v12 + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 120) + 4 * v11) + 48) - *(_DWORD *)this;
              v14 = *(_DWORD *)(*(_DWORD *)(v12 + 120) + 4 * v11++);
              *(_DWORD *)(v14 + 48) = v13;
              v10 = *(_DWORD *)this;
            }
            while ( v11 < *(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 96) + 20) );
            v6 = (void (__stdcall *)(int))Win32FreePool;
          }
        }
      }
    }
    *(_DWORD *)(*(_DWORD *)(v10 + 96) + 96) = 0;
  }
  else
  {
    if ( v7[30] && v7[5] )
    {
      FreeFileView();
      v7 = *(_DWORD **)this;
    }
    if ( v7[29] )
      Win32FreePool(v7[29]);
  }
  if ( v15 )
    v6(v15);
  v6(*(_DWORD *)this);
  *(_DWORD *)this = 0;
}
