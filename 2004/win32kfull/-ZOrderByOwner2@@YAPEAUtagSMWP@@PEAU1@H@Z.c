/*
 * XREFs of ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C0024360
 * Callers:
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0023BF8 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 * Callees:
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C0021FF4 (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 *     NextOwnedWindow @ 0x1C0022544 (NextOwnedWindow.c)
 *     PWInsertAfter @ 0x1C0022C54 (PWInsertAfter.c)
 *     ?IsOwnee@@YAHPEAUtagWND@@0@Z @ 0x1C0024578 (-IsOwnee@@YAHPEAUtagWND@@0@Z.c)
 *     ?GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C010BA2C (-GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

struct tagSMWP *__fastcall ZOrderByOwner2(struct tagSMWP *a1, int a2)
{
  __int64 v2; // rbp
  struct tagSMWP *v3; // rsi
  __int64 v4; // r14
  struct tagWND *v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r13
  _QWORD *OwnedWindow; // rax
  __int64 v10; // rbx
  struct tagWND *RealOwner; // rax
  struct tagWND *i; // r15
  struct tagWND *v13; // r10
  struct tagWND *v14; // rdi
  struct tagWND *v15; // r9
  __int64 v16; // r11
  struct tagSMWP *v17; // rax
  struct tagWND *v18; // r9
  __int64 v19; // r9
  __int64 v20; // r9
  int v21; // eax
  struct tagWND *v22; // r11
  __int64 v23; // r9
  struct tagWND *v24; // rax

  v2 = *((_QWORD *)a1 + 5);
  v3 = a1;
  v4 = 168LL * a2;
  if ( (*(_DWORD *)(v4 + v2 + 32) & 0x204) != 0 )
    return v3;
  v6 = (struct tagWND *)_HMObjectFromHandle(*(_QWORD *)(v4 + v2));
  PWInsertAfter(*(_QWORD *)(v4 + v2 + 8), v7);
  v8 = *((_QWORD *)v6 + 13);
  OwnedWindow = NextOwnedWindow(0LL, v6, v8);
  v10 = 0LL;
  if ( !*((_QWORD *)v6 + 15) && !OwnedWindow )
    return v3;
  RealOwner = v6;
  for ( i = v6; ; i = RealOwner )
  {
    RealOwner = GetRealOwner(RealOwner);
    if ( !RealOwner )
      break;
  }
  v14 = v13;
  if ( !v13 )
    goto LABEL_10;
  if ( v13 == (struct tagWND *)1 )
  {
    v20 = *(_QWORD *)(v8 + 112);
    while ( v20 && (*(_BYTE *)(*(_QWORD *)(v20 + 40) + 20LL) & 0x20) == 0 )
    {
      v21 = IsOwnee((struct tagWND *)v20, i);
      v20 = *(_QWORD *)(v23 + 88);
      if ( v21 )
        v22 = v14;
      v14 = v22;
    }
    if ( v14 == (struct tagWND *)1 )
      *(_DWORD *)(v4 + v2 + 32) |= 4u;
    goto LABEL_10;
  }
  if ( !(unsigned int)IsOwnee(v13, i) )
  {
LABEL_10:
    if ( (*(_DWORD *)(v4 + v2 + 32) & 4) == 0 )
    {
      --*((_DWORD *)v3 + 7);
      v17 = AddSelfAndOwnees(
              v3,
              i,
              v6,
              v13,
              a2,
              *(_DWORD *)(v4 + v2 + 32) & 0x40000 | (*(_DWORD *)(v4 + v2 + 32) >> 7) & 0x400u);
      v3 = v17;
      if ( v17 )
      {
        if ( v14 )
          v10 = *(_QWORD *)v14;
        *(_QWORD *)(*((_QWORD *)v17 + 5) + v4 + 8) = v10;
      }
    }
    return v3;
  }
  if ( v16 )
  {
LABEL_17:
    v18 = *(struct tagWND **)(v8 + 112);
    v14 = 0LL;
    while ( v18 && !(unsigned int)IsOwnee(v18, i) )
    {
      v14 = (struct tagWND *)v19;
      v18 = *(struct tagWND **)(v19 + 88);
    }
    goto LABEL_10;
  }
  v24 = v13;
  while ( v24 != v15 )
  {
    v24 = (struct tagWND *)*((_QWORD *)v24 + 11);
    if ( !v24 )
      goto LABEL_17;
  }
  return v3;
}
