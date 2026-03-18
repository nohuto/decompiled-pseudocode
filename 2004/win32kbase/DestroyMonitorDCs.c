/*
 * XREFs of DestroyMonitorDCs @ 0x1C0062B20
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C0062740 (xxxResetDisplayDevice.c)
 * Callees:
 *     DestroyCacheDC @ 0x1C0030D30 (DestroyCacheDC.c)
 *     HdevFromMonitor @ 0x1C0062CA0 (HdevFromMonitor.c)
 *     GreUnlockVisRgn @ 0x1C00811B0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C00A5B80 (GreLockVisRgn.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 DestroyMonitorDCs()
{
  __int64 *v0; // rdi
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rax
  int v5; // ecx
  int v6; // ecx

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40));
  v0 = (__int64 *)(gpDispInfo + 24);
  v1 = *(_QWORD *)(gpDispInfo + 24);
  if ( v1 )
  {
    do
    {
      v2 = *(_QWORD *)(v1 + 88);
      if ( v2 && (unsigned int)HdevFromMonitor(v2) == -1 )
      {
        v5 = *(_DWORD *)(v1 + 64);
        if ( v5 >= 0 )
        {
          DestroyCacheDC(v0, *(_QWORD *)(v1 + 8));
        }
        else
        {
          *(_QWORD *)(v1 + 88) = 0LL;
          v6 = v5 | 0x4000000;
          *(_DWORD *)(v1 + 64) = v6;
          if ( (v6 & 0x4000) != 0 )
          {
            if ( qword_1C02519A8 )
            {
              qword_1C02519A8(*(_QWORD *)(v1 + 8), 0LL);
              v6 = *(_DWORD *)(v1 + 64);
            }
            *(_QWORD *)(v1 + 32) = 0LL;
            *(_DWORD *)(v1 + 64) = v6 & 0xFFFFBFFF;
          }
        }
      }
      v3 = *v0;
      if ( v1 == *v0 )
      {
        v3 = *(_QWORD *)v1;
        v0 = (__int64 *)v1;
      }
      v1 = v3;
    }
    while ( v3 );
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
}
