/*
 * XREFs of vCleanupUMWindowlessSprite @ 0x1C00C2630
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008513C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C008C834 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C008CACC (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0098FF0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0099034 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreDeleteSprite @ 0x1C00C0E74 (GreDeleteSprite.c)
 */

void __fastcall vCleanupUMWindowlessSprite(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  HDEV HDEV; // rsi
  struct PDEVOBJ *v5; // rdx
  char *v6; // rax
  char *v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  DYNAMICMODECHANGESHARELOCK *v11; // rcx
  char v12; // [rsp+48h] [rbp+10h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v3 = a1;
  if ( g_pDwmState && PsGetCurrentProcess(a1, a2, a3) != gpepCSRSS )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v12);
    v14 = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    HDEV = (HDEV)UserGetHDEV();
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v12, v5, 0, 1);
    v13 = ghsemDwmState;
    GreAcquireSemaphore(ghsemDwmState);
    if ( g_pDwmState )
    {
      v6 = (char *)g_pDwmState + 80;
      v7 = (char *)*((_QWORD *)g_pDwmState + 10);
      while ( v7 != v6 )
      {
        v8 = (__int64)v7;
        v9 = (unsigned __int64)(v7 - 24);
        v7 = *(char **)v7;
        v10 = -v8;
        if ( (*(_DWORD *)((v9 & -(__int64)(v10 != 0)) + 0x48) & 0x400000) != 0
          && *(_DWORD *)((v9 & -(__int64)(v10 != 0)) + 0x70) == v3 )
        {
          GreDeleteSprite(HDEV, 0LL, *(void **)(v9 & -(__int64)(v10 != 0)), 1);
        }
        v6 = (char *)g_pDwmState + 80;
      }
    }
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v13);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v12);
    SEMOBJ::vUnlock((SEMOBJ *)&v14);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v11);
  }
}
