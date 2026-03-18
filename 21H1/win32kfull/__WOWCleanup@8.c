/*
 * XREFs of __WOWCleanup@8 @ 0x188D1F
 * Callers:
 *     _NtUserWOWCleanup@8 @ 0x16B2D1 (_NtUserWOWCleanup@8.c)
 * Callees:
 *     _DestroyClass@8 @ 0x472A4 (_DestroyClass@8.c)
 */

int __stdcall _WOWCleanup(int a1, int a2)
{
  int CurrentProcessWin32Process; // eax
  int v3; // ebx
  unsigned int v4; // edx
  _DWORD *v5; // esi
  unsigned int v6; // ecx
  int v7; // eax
  int v8; // edi
  int v9; // edi
  _DWORD **v10; // esi
  _DWORD **v11; // eax
  int v12; // edi
  _DWORD *v13; // ecx
  int v14; // edx
  unsigned int v15; // esi
  unsigned int v16; // edi
  _DWORD *v17; // ebx
  unsigned __int8 v18; // dl
  int v20; // [esp+Ch] [ebp-4h]

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  v3 = CurrentProcessWin32Process;
  v20 = CurrentProcessWin32Process;
  if ( a1 )
  {
    v4 = _gSharedInfo[1];
    v5 = (_DWORD *)_gpKernelHandleTable;
    v6 = v4 + 16 * _giheLast;
    while ( v4 <= v6 )
    {
      if ( *(_BYTE *)(v4 + 12) == 1 )
      {
        v7 = v5[1];
        if ( (*(_BYTE *)(v7 + 264) & 2) != 0 )
        {
          v8 = *(_DWORD *)(v7 + 332);
          if ( v8 )
          {
            if ( *(_WORD *)(v8 + 20) == (_WORD)a2 && *(_DWORD *)(v7 + 232) == v20 )
            {
              v9 = *(_DWORD *)(*v5 + 20);
              if ( (*(_BYTE *)(v9 + 10) & 4) == 0 )
                *(_DWORD *)(v9 + 84) = *(_DWORD *)(_gpsi + 244);
            }
          }
        }
      }
      v4 += 16;
      v5 += 3;
    }
  }
  else
  {
    v10 = (_DWORD **)(CurrentProcessWin32Process + 192);
    v11 = (_DWORD **)(CurrentProcessWin32Process + 196);
    v12 = 2;
    do
    {
      v13 = *v10;
      if ( *v10 )
      {
        v14 = a2;
        do
        {
          if ( *((unsigned __int16 *)v13 + 9) == v14 && (*(_BYTE *)(v13[1] + 6) & 4) != 0 && !v13[10] )
          {
            DestroyClass(v3, v10);
            v14 = a2;
          }
          else
          {
            v10 = (_DWORD **)v13;
          }
          v13 = *v10;
        }
        while ( *v10 );
        v11 = (_DWORD **)(v3 + 196);
      }
      v10 = v11;
      --v12;
    }
    while ( v12 );
    v15 = _gSharedInfo[1];
    v16 = v15 + 16 * _giheLast;
    v17 = (_DWORD *)_gpKernelHandleTable;
    while ( v15 <= v16 )
    {
      v18 = *(_BYTE *)(v15 + 12);
      if ( v18
        && (_gahti[16 * v18 + 8] & 2) != 0
        && v17[1] == v20
        && *(_DWORD *)(*v17 + 8) == a2
        && v18 != 7
        && (*(_BYTE *)(v15 + 13) & 1) == 0 )
      {
        HMDestroyUnlockedObject(v15);
      }
      v15 += 16;
      v17 += 3;
    }
  }
  return 1;
}
