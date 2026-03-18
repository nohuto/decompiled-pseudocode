/*
 * XREFs of DestroyMonitorDCs @ 0x1C0049D20
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C00AB4F0 (xxxResetDisplayDevice.c)
 * Callees:
 *     DestroyCacheDC @ 0x1C006C4F0 (DestroyCacheDC.c)
 *     GreLockVisRgn @ 0x1C0076BF0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C007A540 (GreUnlockVisRgn.c)
 *     HdevFromMonitor @ 0x1C00AB2F0 (HdevFromMonitor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 DestroyMonitorDCs()
{
  __int64 **v0; // rdi
  __int64 *v1; // rbx
  __int64 *v2; // rax
  int v4; // ecx
  int v5; // ecx

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40));
  v0 = (__int64 **)(gpDispInfo + 24);
  v1 = *(__int64 **)(gpDispInfo + 24);
  if ( v1 )
  {
    do
    {
      if ( v1[11] && (unsigned int)HdevFromMonitor() == -1 )
      {
        v4 = *((_DWORD *)v1 + 16);
        if ( v4 >= 0 )
        {
          DestroyCacheDC(v0, v1[1]);
        }
        else
        {
          v1[11] = 0LL;
          v5 = v4 | 0x4000000;
          *((_DWORD *)v1 + 16) = v5;
          if ( (v5 & 0x4000) != 0 )
          {
            if ( qword_1C0257968 )
            {
              qword_1C0257968(v1[1], 0LL);
              v5 = *((_DWORD *)v1 + 16);
            }
            v1[4] = 0LL;
            *((_DWORD *)v1 + 16) = v5 & 0xFFFFBFFF;
          }
        }
      }
      v2 = *v0;
      if ( v1 == *v0 )
      {
        v2 = (__int64 *)*v1;
        v0 = (__int64 **)v1;
      }
      v1 = v2;
    }
    while ( v2 );
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
}
