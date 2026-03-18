/*
 * XREFs of DestroyCacheDCEntries @ 0x1C0073548
 * Callers:
 *     DestroyThreadsObjects @ 0x1C0071190 (DestroyThreadsObjects.c)
 *     CleanupGDI @ 0x1C00A74B8 (CleanupGDI.c)
 * Callees:
 *     DestroyCacheDC @ 0x1C006C4F0 (DestroyCacheDC.c)
 *     GreLockVisRgn @ 0x1C0076BF0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C007A540 (GreUnlockVisRgn.c)
 */

__int64 __fastcall DestroyCacheDCEntries(__int64 a1)
{
  __int64 *v2; // rdi
  __int64 *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40));
  v2 = (__int64 *)(gpDispInfo + 24);
  v3 = *(__int64 **)(gpDispInfo + 24);
  if ( v3 )
  {
    do
    {
      v4 = (__int64)v3;
      if ( a1 == v3[9] && (v3[8] & 0x80000002) == 2 )
      {
        DestroyCacheDC(v2, v3[1]);
        v4 = *v2;
      }
      v5 = v4;
      if ( v3 == (__int64 *)v4 )
        v5 = *v3;
      else
        v3 = v2;
      v2 = v3;
      v3 = (__int64 *)v5;
    }
    while ( v5 );
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
}
