/*
 * XREFs of DwmDestroyDeviceSpecificResources @ 0x1C002A1A0
 * Callers:
 *     <none>
 * Callees:
 *     GreDwmHasSoftwareCursor @ 0x1C002ACF0 (GreDwmHasSoftwareCursor.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C008C834 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C008CACC (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x1C01080C8 (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 */

void __fastcall DwmDestroyDeviceSpecificResources(HDEV a1, struct PDEVOBJ *a2)
{
  HDEV v3; // rax
  HDEV v4; // rcx
  HDEV *v5; // rdx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v6, a2, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  if ( (unsigned int)GreDwmHasSoftwareCursor(a1, 1LL) )
  {
    v3 = a1 + 882;
    v4 = (HDEV)*((_QWORD *)a1 + 441);
    if ( *((HDEV *)v4 + 1) != a1 + 882 || (v5 = (HDEV *)*((_QWORD *)a1 + 442), *v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    *((_QWORD *)v4 + 1) = v5;
    *((_QWORD *)a1 + 442) = a1 + 882;
    *(_QWORD *)v3 = v3;
    if ( *((struct DwmState **)g_pDwmState + 13) == (struct DwmState *)((char *)g_pDwmState + 104)
      && *((struct DwmState **)g_pDwmState + 15) == (struct DwmState *)((char *)g_pDwmState + 120) )
    {
      vSpDwmDestroyCursorSprites(a1);
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v6);
}
