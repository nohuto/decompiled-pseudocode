/*
 * XREFs of DelayedDestroyCacheDC @ 0x1C00A5AA8
 * Callers:
 *     CleanupGDI @ 0x1C0012D08 (CleanupGDI.c)
 *     DestroyProcessInfo @ 0x1C0078F74 (DestroyProcessInfo.c)
 *     _GetDCEx @ 0x1C008DE30 (_GetDCEx.c)
 * Callees:
 *     DestroyCacheDC @ 0x1C0030D30 (DestroyCacheDC.c)
 *     GreUnlockVisRgn @ 0x1C00811B0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C00A5B80 (GreLockVisRgn.c)
 */

__int64 __fastcall DelayedDestroyCacheDC(int a1)
{
  int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // r8d
  __int64 *v6; // rdi
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rax
  __int64 CurrentProcessWin32Process; // rax

  v2 = 1;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40));
  v6 = (__int64 *)(gpDispInfo + 24);
  v7 = *(_QWORD *)(gpDispInfo + 24);
  if ( !v7 )
    goto LABEL_12;
  do
  {
    v8 = *(_DWORD *)(v7 + 64);
    if ( v8 < 0 )
    {
      if ( *(_QWORD *)(v7 + 80) != PsGetCurrentProcessWin32Process(v4) )
        goto LABEL_4;
      if ( !a1 )
      {
        v2 = 0;
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
  if ( v2 )
  {
LABEL_12:
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x200u;
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v3, v5);
}
