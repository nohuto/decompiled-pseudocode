/*
 * XREFs of DelayedDestroyCacheDC @ 0x1C005E8A8
 * Callers:
 *     CleanupGDI @ 0x1C00201C8 (CleanupGDI.c)
 *     _GetDCEx @ 0x1C0047DC0 (_GetDCEx.c)
 *     DestroyProcessInfo @ 0x1C00620F8 (DestroyProcessInfo.c)
 * Callees:
 *     DestroyCacheDC @ 0x1C0020B80 (DestroyCacheDC.c)
 *     GreUnlockVisRgn @ 0x1C003CF80 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C005E980 (GreLockVisRgn.c)
 */

__int64 __fastcall DelayedDestroyCacheDC(int a1)
{
  int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // rdi
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rax
  __int64 CurrentProcessWin32Process; // rax

  v2 = 1;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40));
  v7 = (__int64 *)(gpDispInfo + 24);
  v8 = *(_QWORD *)(gpDispInfo + 24);
  if ( !v8 )
    goto LABEL_12;
  do
  {
    v9 = *(_DWORD *)(v8 + 64);
    if ( v9 < 0 )
    {
      if ( *(_QWORD *)(v8 + 80) != PsGetCurrentProcessWin32Process(v4, v3, v5, v6) )
        goto LABEL_4;
      if ( !a1 )
      {
        v2 = 0;
        goto LABEL_4;
      }
    }
    else if ( (v9 & 0x400000) == 0 )
    {
      goto LABEL_4;
    }
    DestroyCacheDC(v7, *(_QWORD *)(v8 + 8));
LABEL_4:
    v10 = *v7;
    if ( v8 == *v7 )
    {
      v10 = *(_QWORD *)v8;
      v7 = (__int64 *)v8;
    }
    v8 = v10;
  }
  while ( v10 );
  if ( v2 )
  {
LABEL_12:
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4, v3, v5, v6);
    *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x200u;
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v3, v5);
}
