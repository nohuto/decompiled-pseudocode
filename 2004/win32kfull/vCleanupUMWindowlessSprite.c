/*
 * XREFs of vCleanupUMWindowlessSprite @ 0x1C002F0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C001FC7C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C001FCC4 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C002D44C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreDeleteSprite @ 0x1C004ECD8 (GreDeleteSprite.c)
 */

void __fastcall vCleanupUMWindowlessSprite(int a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
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

  if ( g_pDwmState && PsGetCurrentProcess() != gpepCSRSS )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v12, gpepCSRSS, v2, v3);
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
          && *(_DWORD *)((v9 & -(__int64)(v10 != 0)) + 0x70) == a1 )
        {
          GreDeleteSprite(HDEV, 0LL, *(HSPRITE *)(v9 & -(__int64)(v10 != 0)), 1);
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
