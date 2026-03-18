/*
 * XREFs of ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C01455D0
 * Callers:
 *     NtGdiDoBanding @ 0x1C0145520 (NtGdiDoBanding.c)
 * Callees:
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C001A4BC (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     GreDeleteWnd @ 0x1C02882C0 (GreDeleteWnd.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0289310 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall GreDoBanding(HDC a1, int a2, struct _POINTL *a3, struct tagSIZE *a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, struct _POINTL *); // rdi
  unsigned int v12; // edi
  __int64 (__fastcall *v14)(__int64, struct _POINTL *); // rbx
  EWNDOBJ *v15; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  struct _EPROCESS *v17; // rax
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v18, a1);
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v18)
    || (v9 = *(_QWORD *)(v18[0] + 496LL)) == 0
    || (v10 = *(_QWORD *)(v18[0] + 48LL), !*(_QWORD *)(v10 + 2560))
    || (*(_DWORD *)(v9 + 112) & 0x2000000) == 0 )
  {
LABEL_33:
    v12 = 0;
    goto LABEL_12;
  }
  if ( a2 )
  {
    v14 = *(__int64 (__fastcall **)(__int64, struct _POINTL *))(v10 + 3144);
    if ( gUMPDSecurityLevel == 2
      || gUMPDSecurityLevel
      && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v7, v8),
          (unsigned int)bIsProcessLocalSystem(CurrentProcess))
      || v14 )
    {
      v12 = v14(v9 + 24, a3);
    }
    else
    {
      if ( gfUMPDDebug )
        DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreDoBanding:!pfnDrvStartBanding\n",
          2443);
      v12 = 0;
    }
    a4->cx = *(_DWORD *)(v9 + 56);
    a4->cy = *(_DWORD *)(v9 + 60);
LABEL_11:
    *(struct _POINTL *)(v18[0] + 2088LL) = *a3;
    goto LABEL_12;
  }
  v11 = *(__int64 (__fastcall **)(__int64, struct _POINTL *))(v10 + 3152);
  if ( gUMPDSecurityLevel != 2 )
  {
    if ( !gUMPDSecurityLevel
      || (v17 = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v7, v8),
          !(unsigned int)bIsProcessLocalSystem(v17)) )
    {
      if ( !v11 )
      {
        if ( gfUMPDDebug )
          DbgPrint("clientcore\\windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreDoBanding:!pfnDrvNextBand\n", 2470);
        goto LABEL_33;
      }
    }
  }
  v12 = v11(v9 + 24, a3);
  if ( !v12 )
    goto LABEL_12;
  if ( a3->x != -1 )
    goto LABEL_11;
  v12 &= -((*(_DWORD *)(v10 + 40) & 0x8000) != 0);
  if ( v12 )
  {
    *(_DWORD *)(v18[0] + 36LL) &= ~0x100u;
    v15 = *(EWNDOBJ **)(v9 + 136);
    if ( v15 )
    {
      GreDeleteWnd(v15);
      *(_QWORD *)(v9 + 136) = 0LL;
    }
    *(_WORD *)(v18[0] + 2072LL) = 0;
  }
LABEL_12:
  if ( v18[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v18);
  return v12;
}
