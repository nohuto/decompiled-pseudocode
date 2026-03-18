/*
 * XREFs of DelayedDestroyCacheDC @ 0x1C0076CDC
 * Callers:
 *     DestroyProcessInfo @ 0x1C006B620 (DestroyProcessInfo.c)
 *     _GetDCEx @ 0x1C0086DA0 (_GetDCEx.c)
 *     CleanupGDI @ 0x1C00A74B8 (CleanupGDI.c)
 * Callees:
 *     DestroyCacheDC @ 0x1C006C4F0 (DestroyCacheDC.c)
 *     GreLockVisRgn @ 0x1C0076BF0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C007A540 (GreUnlockVisRgn.c)
 */

__int64 __fastcall DelayedDestroyCacheDC(int a1, int a2, int a3)
{
  int v4; // esi
  __int64 v5; // rcx
  __int64 *v6; // rdi
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rax
  __int64 CurrentProcessWin32Process; // rax

  v4 = 1;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), a2, a3);
  v6 = (__int64 *)(gpDispInfo + 24);
  v7 = *(_QWORD *)(gpDispInfo + 24);
  if ( !v7 )
    goto LABEL_12;
  do
  {
    v8 = *(_DWORD *)(v7 + 64);
    if ( v8 < 0 )
    {
      if ( *(_QWORD *)(v7 + 80) != PsGetCurrentProcessWin32Process(v5) )
        goto LABEL_4;
      if ( !a1 )
      {
        v4 = 0;
        goto LABEL_4;
      }
    }
    else if ( (v8 & 0x400000) == 0 )
    {
      goto LABEL_4;
    }
    DestroyCacheDC(v6, *(_QWORD *)(v7 + 8));
LABEL_4:
    v9 = *v6;
    if ( v7 == *v6 )
    {
      v9 = *(_QWORD *)v7;
      v6 = (__int64 *)v7;
    }
    v7 = v9;
  }
  while ( v9 );
  if ( v4 )
  {
LABEL_12:
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x200u;
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
}
