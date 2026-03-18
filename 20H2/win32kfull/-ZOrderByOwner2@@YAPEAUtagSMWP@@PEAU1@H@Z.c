/*
 * XREFs of ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C00C8C68
 * Callers:
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C00C8500 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 * Callees:
 *     ?GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00C6FA0 (-GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?IsOwnee@@YAHPEAUtagWND@@0@Z @ 0x1C00C8E80 (-IsOwnee@@YAHPEAUtagWND@@0@Z.c)
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C00C9064 (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 *     NextOwnedWindow @ 0x1C00C95B4 (NextOwnedWindow.c)
 *     PWInsertAfter @ 0x1C00C9DA4 (PWInsertAfter.c)
 */

struct tagSMWP *__fastcall ZOrderByOwner2(struct tagSMWP *a1, int a2)
{
  __int64 v2; // rbp
  struct tagSMWP *v3; // rsi
  __int64 v4; // r14
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 OwnedWindow; // rax
  __int64 v9; // rbx
  struct tagWND *RealOwner; // rax
  struct tagWND *i; // r15
  struct tagWND *v12; // r10
  struct tagWND *v13; // rdi
  struct tagWND *v14; // r9
  __int64 v15; // r11
  struct tagSMWP *v16; // rax
  struct tagWND *v17; // r9
  __int64 v18; // r9
  __int64 v19; // r9
  int v20; // eax
  struct tagWND *v21; // r11
  __int64 v22; // r9
  struct tagWND *v23; // rax

  v2 = *((_QWORD *)a1 + 5);
  v3 = a1;
  v4 = 168LL * a2;
  if ( (*(_DWORD *)(v4 + v2 + 32) & 0x204) != 0 )
    return v3;
  v6 = _HMObjectFromHandle(*(_QWORD *)(v4 + v2));
  PWInsertAfter(*(_QWORD *)(v4 + v2 + 8));
  v7 = *(_QWORD *)(v6 + 104);
  OwnedWindow = NextOwnedWindow(0LL, v6, v7);
  v9 = 0LL;
  if ( !*(_QWORD *)(v6 + 120) && !OwnedWindow )
    return v3;
  RealOwner = (struct tagWND *)v6;
  for ( i = (struct tagWND *)v6; ; i = RealOwner )
  {
    RealOwner = GetRealOwner(RealOwner);
    if ( !RealOwner )
      break;
  }
  v13 = v12;
  if ( !v12 )
    goto LABEL_10;
  if ( v12 == (struct tagWND *)1 )
  {
    v19 = *(_QWORD *)(v7 + 112);
    while ( v19 && (*(_BYTE *)(*(_QWORD *)(v19 + 40) + 20LL) & 0x20) == 0 )
    {
      v20 = IsOwnee((struct tagWND *)v19, i);
      v19 = *(_QWORD *)(v22 + 88);
      if ( v20 )
        v21 = v13;
      v13 = v21;
    }
    if ( v13 == (struct tagWND *)1 )
      *(_DWORD *)(v4 + v2 + 32) |= 4u;
    goto LABEL_10;
  }
  if ( !(unsigned int)IsOwnee(v12, i) )
  {
LABEL_10:
    if ( (*(_DWORD *)(v4 + v2 + 32) & 4) == 0 )
    {
      --*((_DWORD *)v3 + 7);
      v16 = AddSelfAndOwnees(
              v3,
              i,
              (struct tagWND *)v6,
              v12,
              a2,
              *(_DWORD *)(v4 + v2 + 32) & 0x40000 | (*(_DWORD *)(v4 + v2 + 32) >> 7) & 0x400u);
      v3 = v16;
      if ( v16 )
      {
        if ( v13 )
          v9 = *(_QWORD *)v13;
        *(_QWORD *)(*((_QWORD *)v16 + 5) + v4 + 8) = v9;
      }
    }
    return v3;
  }
  if ( v15 )
  {
LABEL_17:
    v17 = *(struct tagWND **)(v7 + 112);
    v13 = 0LL;
    while ( v17 && !(unsigned int)IsOwnee(v17, i) )
    {
      v13 = (struct tagWND *)v18;
      v17 = *(struct tagWND **)(v18 + 88);
    }
    goto LABEL_10;
  }
  v23 = v12;
  while ( v23 != v14 )
  {
    v23 = (struct tagWND *)*((_QWORD *)v23 + 11);
    if ( !v23 )
      goto LABEL_17;
  }
  return v3;
}
