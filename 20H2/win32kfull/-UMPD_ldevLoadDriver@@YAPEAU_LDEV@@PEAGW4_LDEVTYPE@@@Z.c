/*
 * XREFs of ?UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z @ 0x1C010BA48
 * Callers:
 *     UMPD_ldevLoadDriverWrap @ 0x1C010BA30 (UMPD_ldevLoadDriverWrap.c)
 * Callees:
 *     ?UMPD_ldevFillTable@@YAHPEAU_LDEV@@PEBH@Z @ 0x1C010BB4C (-UMPD_ldevFillTable@@YAHPEAU_LDEV@@PEBH@Z.c)
 *     ?UMPDDrvDriverFn@@YAHPEAXPEAH@Z @ 0x1C010BBE0 (-UMPDDrvDriverFn@@YAHPEAXPEAH@Z.c)
 *     ?UMPDDrvEnableDriver@@YAHPEAGPEAPEAX@Z @ 0x1C010BC94 (-UMPDDrvEnableDriver@@YAHPEAGPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

_QWORD *__fastcall UMPD_ldevLoadDriver(unsigned __int16 *a1, int a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // esi
  __int64 v8; // r8
  void *v9; // rbx
  void *v11; // [rsp+20h] [rbp-1C8h] BYREF
  int v12[104]; // [rsp+30h] [rbp-1B8h] BYREF

  v4 = EngAllocMem(1u, 0x388u, 0x706D7547u);
  if ( v4 )
  {
    v11 = 0LL;
    v7 = UMPDDrvEnableDriver(a1, &v11);
    if ( !v7 )
      goto LABEL_6;
    v9 = v11;
    *v4 = 0LL;
    v4[1] = 0LL;
    v4[2] = 0LL;
    v4[5] = v9;
    *((_DWORD *)v4 + 6) = a2;
    *((_DWORD *)v4 + 7) = 1;
    v4[6] = PsGetCurrentProcessWin32Process(v6, v5, v8);
    if ( (UMPDDrvDriverFn(v9, v12) != 0 ? v7 : 0) == 0 || !(unsigned int)UMPD_ldevFillTable((struct _LDEV *)v4, v12) )
    {
LABEL_6:
      EngFreeMem(v4);
      return 0LL;
    }
  }
  return v4;
}
