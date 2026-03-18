/*
 * XREFs of DestroyMonitorDCs @ 0x1C006F840
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C006F460 (xxxResetDisplayDevice.c)
 * Callees:
 *     DestroyCacheDC @ 0x1C0020B80 (DestroyCacheDC.c)
 *     GreUnlockVisRgn @ 0x1C003CF80 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C005E980 (GreLockVisRgn.c)
 *     HdevFromMonitor @ 0x1C006F9C0 (HdevFromMonitor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DestroyMonitorDCs(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdx
  int v4; // r8d
  __int64 *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v10; // ecx
  int v11; // ecx

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), a2, a3);
  v5 = (__int64 *)(gpDispInfo + 24);
  v6 = *(_QWORD *)(gpDispInfo + 24);
  if ( v6 )
  {
    do
    {
      v7 = *(_QWORD *)(v6 + 88);
      if ( v7 && (unsigned int)HdevFromMonitor(v7) == -1 )
      {
        v10 = *(_DWORD *)(v6 + 64);
        if ( v10 >= 0 )
        {
          DestroyCacheDC(v5, *(_QWORD *)(v6 + 8));
        }
        else
        {
          *(_QWORD *)(v6 + 88) = 0LL;
          v11 = v10 | 0x4000000;
          *(_DWORD *)(v6 + 64) = v11;
          if ( (v11 & 0x4000) != 0 )
          {
            if ( qword_1C024F9A8 )
            {
              qword_1C024F9A8(*(_QWORD *)(v6 + 8), 0LL);
              v11 = *(_DWORD *)(v6 + 64);
            }
            *(_QWORD *)(v6 + 32) = 0LL;
            *(_DWORD *)(v6 + 64) = v11 & 0xFFFFBFFF;
          }
        }
      }
      v8 = *v5;
      if ( v6 == *v5 )
      {
        v8 = *(_QWORD *)v6;
        v5 = (__int64 *)v6;
      }
      v6 = v8;
    }
    while ( v8 );
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v3, v4);
}
