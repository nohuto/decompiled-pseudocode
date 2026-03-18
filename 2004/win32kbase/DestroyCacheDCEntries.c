/*
 * XREFs of DestroyCacheDCEntries @ 0x1C00A5538
 * Callers:
 *     CleanupGDI @ 0x1C0012D08 (CleanupGDI.c)
 *     DestroyThreadsObjects @ 0x1C00955C0 (DestroyThreadsObjects.c)
 * Callees:
 *     DestroyCacheDC @ 0x1C0030D30 (DestroyCacheDC.c)
 *     GreUnlockVisRgn @ 0x1C00811B0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C00A5B80 (GreLockVisRgn.c)
 */

__int64 __fastcall DestroyCacheDCEntries(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // r8d
  __int64 *v4; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40));
  v4 = (__int64 *)(gpDispInfo + 24);
  v5 = *(__int64 **)(gpDispInfo + 24);
  if ( v5 )
  {
    do
    {
      v6 = (__int64)v5;
      if ( a1 == v5[9] && (v5[8] & 0x80000002) == 2 )
      {
        DestroyCacheDC(v4, v5[1]);
        v6 = *v4;
      }
      v7 = v6;
      if ( v5 == (__int64 *)v6 )
        v7 = *v5;
      else
        v5 = v4;
      v4 = v5;
      v5 = (__int64 *)v7;
    }
    while ( v7 );
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v2, v3);
}
