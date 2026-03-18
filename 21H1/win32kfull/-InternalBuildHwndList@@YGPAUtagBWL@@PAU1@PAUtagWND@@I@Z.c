/*
 * XREFs of ?InternalBuildHwndList@@YGPAUtagBWL@@PAU1@PAUtagWND@@I@Z @ 0x2B0B4
 * Callers:
 *     ?InternalBuildHwndList@@YGPAUtagBWL@@PAU1@PAUtagWND@@I@Z @ 0x2B0B4 (-InternalBuildHwndList@@YGPAUtagBWL@@PAU1@PAUtagWND@@I@Z.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     _xxxInternalDoSyncPaint@8 @ 0x734E0 (_xxxInternalDoSyncPaint@8.c)
 * Callees:
 *     ?InternalBuildHwndList@@YGPAUtagBWL@@PAU1@PAUtagWND@@I@Z @ 0x2B0B4 (-InternalBuildHwndList@@YGPAUtagBWL@@PAU1@PAUtagWND@@I@Z.c)
 *     _IsNonImmersiveBand@4 @ 0x2D3DC (_IsNonImmersiveBand@4.c)
 *     ?ExpandWindowList@@YGHPAPAUtagBWL@@@Z @ 0xA71F0 (-ExpandWindowList@@YGHPAPAUtagBWL@@@Z.c)
 *     ?AnyBehaviorEnabled@ShellWindowManagement@@YG_NPBUtagDESKTOP@@@Z @ 0xF4E04 (-AnyBehaviorEnabled@ShellWindowManagement@@YG_NPBUtagDESKTOP@@@Z.c)
 *     ?EligibleWindow@ShellWindowManagement@@YG_NPAUtagWND@@@Z @ 0xF4E7E (-EligibleWindow@ShellWindowManagement@@YG_NPAUtagWND@@@Z.c)
 */

struct tagBWL *__userpurge InternalBuildHwndList@<eax>(
        _DWORD *a1@<edx>,
        struct tagBWL *a2@<ecx>,
        struct tagBWL *a3,
        struct tagWND *a4,
        unsigned int a5)
{
  _DWORD *v5; // esi
  struct tagBWL *v6; // edi
  int i; // eax
  int v8; // ecx
  struct tagBWL **v10; // [esp+0h] [ebp-18h]
  const struct tagDESKTOP *v11; // [esp+4h] [ebp-14h]
  struct tagBWL *v12; // [esp+Ch] [ebp-Ch]
  int v13; // [esp+10h] [ebp-8h]

  v5 = a1;
  v6 = a2;
  v12 = a2;
  if ( a1 )
  {
    for ( i = (unsigned __int8)a3 & 0x20; ; i = (unsigned __int8)a3 & 0x20 )
    {
      v13 = *((_DWORD *)v6 + 3);
      if ( !i
        || IsNonImmersiveBand(v5)
        || ((unsigned __int8)a3 & 0x10) != 0 && (*(_DWORD *)(v5[5] + 144) & 0x1000000) != 0 )
      {
        if ( ((unsigned __int8)a3 & 0x40) == 0
          || (v8 = v5[5], (*(_BYTE *)(v8 + 23) & 0x11) != 0x10)
          || (*(_BYTE *)(v8 + 12) & 0x40) != 0
          || !ShellWindowManagement::AnyBehaviorEnabled((ShellWindowManagement *)v10, v11)
          || !ShellWindowManagement::EligibleWindow((ShellWindowManagement *)v10, v11) )
        {
          if ( !v13 || v13 == v5[2] )
          {
            **((_DWORD **)v6 + 1) = *v5;
            *((_DWORD *)v6 + 1) += 4;
            if ( *((_DWORD *)v6 + 1) == *((_DWORD *)v6 + 2) )
            {
              v6 = v12;
              if ( !ExpandWindowList(v10) )
                break;
            }
          }
        }
      }
      if ( ((unsigned __int8)a3 & 1) != 0 )
      {
        if ( v5[15] )
        {
          v6 = InternalBuildHwndList((struct tagBWL *)3, (struct tagWND *)v10, (unsigned int)v11);
          v12 = v6;
          if ( *((_DWORD *)v6 + 1) >= *((_DWORD *)v6 + 2) )
            break;
        }
      }
      if ( ((unsigned __int8)a3 & 2) == 0 )
        break;
      v5 = (_DWORD *)v5[12];
      if ( !v5 )
        break;
    }
  }
  return v6;
}
