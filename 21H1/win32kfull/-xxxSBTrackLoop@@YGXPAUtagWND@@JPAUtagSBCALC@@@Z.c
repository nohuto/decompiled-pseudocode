/*
 * XREFs of ?xxxSBTrackLoop@@YGXPAUtagWND@@JPAUtagSBCALC@@@Z @ 0x1A31F2
 * Callers:
 *     _xxxSBTrackInit@16 @ 0x1A3B45 (_xxxSBTrackInit@16.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxCallMsgFilter@8 @ 0x94CF8 (_xxxCallMsgFilter@8.c)
 *     _xxxInternalGetMessage@24 @ 0xA199C (_xxxInternalGetMessage@24.c)
 *     _xxxTranslateMessage@8 @ 0xA5F1E (_xxxTranslateMessage@8.c)
 *     _SystoChar@8 @ 0xA879C (_SystoChar@8.c)
 */

void __userpurge xxxSBTrackLoop(int a1@<edx>, int a2@<ecx>, struct tagWND *a3, int a4, struct tagSBCALC *a5)
{
  int v6; // edi
  int v7; // ecx
  int v8; // edx
  unsigned int v9; // eax
  int v10; // eax
  void (__stdcall *v11)(int, unsigned int, int, int, struct tagWND *); // edi
  unsigned int v12; // eax
  int v13; // [esp-Ch] [ebp-40h]
  int v14; // [esp-8h] [ebp-3Ch]
  int v15[7]; // [esp+10h] [ebp-24h] BYREF
  void (__stdcall *v16)(int, int, _DWORD, int, struct tagWND *); // [esp+2Ch] [ebp-8h]
  int v17; // [esp+30h] [ebp-4h]

  v17 = a1;
  memset(v15, 0, sizeof(v15));
  v6 = *(_DWORD *)(*(_DWORD *)(a2 + 8) + 392);
  if ( v6 )
  {
    v16 = *(void (__stdcall **)(int, int, _DWORD, int, struct tagWND *))(v6 + 32);
    if ( v16 )
    {
      if ( (*(_BYTE *)v6 & 2) != 0 )
        SetOrClrWF(1, a2, 0x620u, 1);
      if ( _gpqForeground )
      {
        v7 = *(_DWORD *)(_gpqForeground + 60);
        if ( v7 )
        {
          if ( _gpqForeground == *(_DWORD *)(_gptiCurrent + 236) )
          {
            v8 = *(_DWORD *)(v7 + 8);
            if ( v8 == _gptiCurrent )
              v7 = a2;
            xxxWindowEvent(0x80000004, (struct tagEVENTHOOK *)v7, 0, (struct tagWND *)3, v8 == _gptiCurrent ? 33 : 49);
          }
        }
      }
      if ( (*(_DWORD *)v6 & 4) != 0 )
        v9 = -4;
      else
        v9 = ((*(_DWORD *)v6 & 2) != 0) | 0xFFFFFFFA;
      xxxWindowEvent(0x12u, (struct tagEVENTHOOK *)a2, v9, 0, 0);
      v16(a2, 513, 0, v17, a3);
      while ( *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 56) == a2 && xxxInternalGetMessage(v15, 0, 0, 1u, 1) )
      {
        if ( !xxxCallMsgFilter((unsigned int *)v15, 5) )
        {
          if ( v15[0] == *(_DWORD *)a2 && (v15[1] >= 0x200u && v15[1] <= 0x20Eu || (unsigned int)(v15[1] - 256) <= 9) )
          {
            v10 = *(_DWORD *)(*(_DWORD *)(a2 + 8) + 392);
            if ( !v10 )
              return;
            v11 = *(void (__stdcall **)(int, unsigned int, int, int, struct tagWND *))(v10 + 32);
            if ( !v11 )
              return;
            v14 = v15[3];
            v13 = v15[2];
            v12 = SystoChar(v15[1], v15[3]);
            v11(a2, v12, v13, v14, a3);
          }
          else
          {
            xxxTranslateMessage((int)v15, 0);
            xxxDispatchMessage((unsigned int *)v15);
          }
        }
      }
    }
  }
}
