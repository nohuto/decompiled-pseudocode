/*
 * XREFs of ?AddSelfAndOwnees@@YGPAUtagSMWP@@PAU1@PAUtagWND@@11HI@Z @ 0x1C4D6
 * Callers:
 *     ?AddSelfAndOwnees@@YGPAUtagSMWP@@PAU1@PAUtagWND@@11HI@Z @ 0x1C4D6 (-AddSelfAndOwnees@@YGPAUtagSMWP@@PAU1@PAUtagWND@@11HI@Z.c)
 *     ?ZOrderByOwner2@@YGPAUtagSMWP@@PAU1@H@Z @ 0x32B6C (-ZOrderByOwner2@@YGPAUtagSMWP@@PAU1@H@Z.c)
 * Callees:
 *     ?AddSelfAndOwnees@@YGPAUtagSMWP@@PAU1@PAUtagWND@@11HI@Z @ 0x1C4D6 (-AddSelfAndOwnees@@YGPAUtagSMWP@@PAU1@PAUtagWND@@11HI@Z.c)
 *     _NextOwnedWindow@12 @ 0x1C8E4 (_NextOwnedWindow@12.c)
 *     ?GetRealOwner@@YGPAUtagWND@@PAU1@@Z @ 0x1C9C2 (-GetRealOwner@@YGPAUtagWND@@PAU1@@Z.c)
 *     ?_DeferWindowPos@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x32E22 (-_DeferWindowPos@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 */

struct tagSMWP *__userpurge AddSelfAndOwnees@<eax>(
        struct tagWND *a1@<edx>,
        struct tagSMWP *a2@<ecx>,
        struct tagSMWP *a3,
        struct tagWND *a4,
        struct tagWND *a5,
        struct tagWND *a6,
        int a7,
        unsigned int a8)
{
  struct tagSMWP *v8; // esi
  struct tagWND *v9; // eax
  int OwnedWindow; // eax
  struct tagSMWP *v13; // ecx
  struct tagSMWP *result; // eax
  int v15; // edx
  struct tagWND *RealOwner; // eax
  struct tagSMWP *v18; // eax
  struct tagWND *v19; // [esp+0h] [ebp-14h]
  unsigned int v20; // [esp+4h] [ebp-10h]
  int v21; // [esp+Ch] [ebp-8h]
  struct tagWND *v23; // [esp+28h] [ebp+14h]

  v8 = a3;
  v9 = a1;
  if ( a3 )
  {
    do
    {
      RealOwner = GetRealOwner(v19);
      if ( a1 == RealOwner )
        break;
      v8 = RealOwner;
    }
    while ( RealOwner );
    v9 = a1;
  }
  v21 = 0;
  while ( 1 )
  {
    OwnedWindow = NextOwnedWindow(*((_DWORD *)v9 + 14));
    v13 = (struct tagSMWP *)OwnedWindow;
    v23 = (struct tagWND *)OwnedWindow;
    if ( !OwnedWindow )
      break;
    if ( !v8 )
      goto LABEL_10;
    if ( !v21 )
    {
      if ( a4 )
      {
        if ( a4 != (struct tagWND *)1 )
        {
          while ( (struct tagWND *)OwnedWindow != a4 )
          {
            OwnedWindow = *(_DWORD *)(OwnedWindow + 48);
            if ( !OwnedWindow )
              goto LABEL_23;
          }
        }
      }
      else
      {
LABEL_23:
        a2 = AddSelfAndOwnees(a3, a4, a5, a6, (int)v19, v20);
        if ( !a2 )
          return 0;
        v13 = v23;
        v21 = 1;
      }
    }
    if ( v13 != v8 )
LABEL_10:
      a2 = AddSelfAndOwnees(0, 0, a5, a6, (int)v19, v20);
    if ( !a2 )
      return 0;
    v9 = a1;
  }
  if ( v8 )
  {
    if ( !v21 )
    {
      v18 = AddSelfAndOwnees(a3, a4, a5, a6, (int)v19, v20);
      a2 = v18;
      if ( !v18 )
        return 0;
    }
  }
  result = (struct tagSMWP *)_DeferWindowPos(a2, a1, 0, 0, 0, 0, 0, (unsigned int)a6 | 0x13, 0);
  if ( !result )
    return 0;
  v15 = *((_DWORD *)result + 4);
  if ( a5 != (struct tagWND *)(v15 - 1) )
    *(_DWORD *)((v15 << 7) + *((_DWORD *)result + 6) - 124) = *(_DWORD *)((v15 << 7) + *((_DWORD *)result + 6) - 256);
  return result;
}
