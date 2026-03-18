/*
 * XREFs of ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1C00C4DFC
 * Callers:
 *     GreDwmStartup @ 0x1C000D5DC (GreDwmStartup.c)
 *     GreDwmShutdown @ 0x1C000E080 (GreDwmShutdown.c)
 *     GreDesktopSwitch @ 0x1C002A9D0 (GreDesktopSwitch.c)
 *     ?SpNotifyLSurfaceRedirSurfAssoc@@YAJQEAUHDEV__@@PEAUHLSURF__@@PEAU_SURFOBJ@@H@Z @ 0x1C00C5BF4 (-SpNotifyLSurfaceRedirSurfAssoc@@YAJQEAUHDEV__@@PEAUHLSURF__@@PEAU_SURFOBJ@@H@Z.c)
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C00A111C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00C6054 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpRenderHint(struct PDEVOBJ *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // edi
  __int64 v10; // rdx
  __int128 v11; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+40h] [rbp-40h]
  int v13; // [rsp+48h] [rbp-38h]
  __int64 v14; // [rsp+50h] [rbp-30h]
  __int64 v15; // [rsp+58h] [rbp-28h]
  __int16 v16; // [rsp+60h] [rbp-20h]
  __int64 v17; // [rsp+68h] [rbp-18h]
  __int64 v18; // [rsp+70h] [rbp-10h]

  v8 = -1073741822;
  if ( (unsigned int)bNeedRenderHint(a1) )
  {
    v10 = *(_QWORD *)a1;
    v15 = 0LL;
    v16 = 256;
    v11 = 0LL;
    v18 = 0LL;
    v17 = 0LL;
    v14 = 0LL;
    v13 = 1;
    if ( (*(_DWORD *)(v10 + 40) & 1) != 0 )
    {
      *(_QWORD *)&v11 = *(_QWORD *)(v10 + 48);
      v12 = v10;
      GreAcquireSemaphore(v11);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v11, 11LL);
      v10 = *(_QWORD *)a1;
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(v10 + 3432))(*(_QWORD *)(v10 + 1800), a2, a3, a4);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v11);
  }
  return v8;
}
