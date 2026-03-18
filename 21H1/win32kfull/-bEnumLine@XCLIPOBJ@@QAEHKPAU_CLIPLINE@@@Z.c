/*
 * XREFs of ?bEnumLine@XCLIPOBJ@@QAEHKPAU_CLIPLINE@@@Z @ 0x237A4C
 * Callers:
 *     ?bEnumPath@XCLIPOBJ@@QAEHPAU_PATHOBJ@@KPAU_CLIPLINE@@H@Z @ 0x22360C (-bEnumPath@XCLIPOBJ@@QAEHPAU_PATHOBJ@@KPAU_CLIPLINE@@H@Z.c)
 * Callees:
 *     ?lGetStyleState@XCLIPOBJ@@QBEJJ@Z @ 0x223879 (-lGetStyleState@XCLIPOBJ@@QBEJJ@Z.c)
 *     ?bFindFirstSegment@XCLIPOBJ@@IAEHXZ @ 0x237C98 (-bFindFirstSegment@XCLIPOBJ@@IAEHXZ.c)
 *     ?bFindNextScan@XCLIPOBJ@@IAEHXZ @ 0x237EBE (-bFindNextScan@XCLIPOBJ@@IAEHXZ.c)
 *     ?bFindNextSegment@XCLIPOBJ@@IAEHXZ @ 0x237F2B (-bFindNextSegment@XCLIPOBJ@@IAEHXZ.c)
 *     ?bRecordSegment@XCLIPOBJ@@IAEHXZ @ 0x23802E (-bRecordSegment@XCLIPOBJ@@IAEHXZ.c)
 *     ?bSetup@XCLIPOBJ@@IAEHXZ @ 0x23808A (-bSetup@XCLIPOBJ@@IAEHXZ.c)
 */

int __thiscall XCLIPOBJ::bEnumLine(XCLIPOBJ *this, unsigned int a2, struct _CLIPLINE *a3)
{
  int v4; // edx
  FIX *v5; // ecx
  FIX v6; // eax
  _DWORD *v7; // ecx
  int i; // eax

  v4 = *((_DWORD *)this + 30);
  a3->ptfxA.x = *(_DWORD *)(v4 + 4);
  a3->ptfxA.y = *(_DWORD *)(v4 + 8);
  v5 = *(FIX **)(*((_DWORD *)this + 30) + 12);
  a3->ptfxB.x = *v5;
  v6 = v5[1];
  a3->c = 0;
  a3->ptfxB.y = v6;
  v7 = (_DWORD *)*((_DWORD *)this + 30);
  if ( (int)v7[41] > 0 )
  {
    a3->lStyleState = XCLIPOBJ::lGetStyleState(this, v7[39]);
    v7 = (_DWORD *)*((_DWORD *)this + 30);
  }
  if ( (v7[4] & 0x10000) != 0 )
    return 0;
  v7[7] = (a2 - 24) >> 3;
  *(_DWORD *)(*((_DWORD *)this + 30) + 36) = a3->arun;
  *(_DWORD *)(*((_DWORD *)this + 30) + 32) = &a3->c;
  *(_DWORD *)(*((_DWORD *)this + 30) + 40) = 0x7FFFFFFF;
  if ( !*(_DWORD *)(*((_DWORD *)this + 30) + 28) )
    return 0;
  if ( !XCLIPOBJ::bSetup(this) )
  {
LABEL_6:
    *(_DWORD *)(*((_DWORD *)this + 30) + 16) |= 0x10000u;
    return 0;
  }
  while ( XCLIPOBJ::bRecordSegment(this) )
  {
    for ( i = XCLIPOBJ::bFindNextSegment(this); !i; i = XCLIPOBJ::bFindFirstSegment(this) )
    {
      if ( !XCLIPOBJ::bFindNextScan(this) )
        goto LABEL_6;
    }
  }
  return 1;
}
