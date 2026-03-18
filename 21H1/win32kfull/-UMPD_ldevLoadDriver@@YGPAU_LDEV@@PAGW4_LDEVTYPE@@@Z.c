/*
 * XREFs of ?UMPD_ldevLoadDriver@@YGPAU_LDEV@@PAGW4_LDEVTYPE@@@Z @ 0x21107D
 * Callers:
 *     _UMPD_ldevLoadDriverWrap@8 @ 0x2111BC (_UMPD_ldevLoadDriverWrap@8.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?UMPDDrvDriverFn@@YGHPAXPAH@Z @ 0x20B8CA (-UMPDDrvDriverFn@@YGHPAXPAH@Z.c)
 *     ?UMPDDrvEnableDriver@@YGHPAGPAPAX@Z @ 0x20B946 (-UMPDDrvEnableDriver@@YGHPAGPAPAX@Z.c)
 *     ?UMPD_ldevFillTable@@YGHPAU_LDEV@@PBH@Z @ 0x21101C (-UMPD_ldevFillTable@@YGHPAU_LDEV@@PBH@Z.c)
 */

_DWORD *__fastcall UMPD_ldevLoadDriver(int a1, int a2)
{
  _DWORD *v3; // edi
  BOOL v4; // ebx
  int v5; // eax
  int v6; // esi
  int v8; // [esp+10h] [ebp-1B0h] BYREF
  int v9; // [esp+14h] [ebp-1ACh]
  _BYTE v10[420]; // [esp+18h] [ebp-1A8h] BYREF

  v9 = a2;
  v3 = EngAllocMem(1u, 0x1CCu, 0x706D7547u);
  if ( v3 )
  {
    v8 = 0;
    v4 = UMPDDrvEnableDriver(a1, &v8);
    if ( !v4 )
      goto LABEL_5;
    v5 = v9;
    v6 = v8;
    *v3 = 0;
    v3[1] = 0;
    v3[3] = v5;
    v3[4] = 1;
    v3[2] = 0;
    v3[6] = v6;
    v3[7] = PsGetCurrentProcessWin32Process();
    if ( !UMPDDrvDriverFn(v6, v10) || !v4 || !UMPD_ldevFillTable((int)v3, (int)v10) )
    {
LABEL_5:
      EngFreeMem(v3);
      return 0;
    }
  }
  return v3;
}
