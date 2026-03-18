/*
 * XREFs of GreSpDwmSyncCaptureSurfaceBits @ 0x1C0270F1C
 * Callers:
 *     xxxPrintWindow @ 0x1C01E8730 (xxxPrintWindow.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C001BA8C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C001BAB8 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C002D44C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C002D58C (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00584D4 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0077C50 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

_BOOL8 __fastcall GreSpDwmSyncCaptureSurfaceBits(HWND a1, HDC a2, float a3, int a4, int a5, int a6, int a7)
{
  BOOL updated; // ebx
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  int v17; // eax
  HSURF v18; // rbx
  _QWORD v20[2]; // [rsp+58h] [rbp-81h] BYREF
  __int64 v21; // [rsp+68h] [rbp-71h] BYREF
  _BYTE v22[8]; // [rsp+70h] [rbp-69h] BYREF
  int v23[4]; // [rsp+78h] [rbp-61h] BYREF
  _BYTE v24[32]; // [rsp+88h] [rbp-51h] BYREF
  __int64 v25; // [rsp+A8h] [rbp-31h] BYREF
  int v26; // [rsp+B0h] [rbp-29h]
  int v27; // [rsp+B4h] [rbp-25h]
  __int16 v28; // [rsp+B8h] [rbp-21h]
  __int64 v29; // [rsp+D8h] [rbp-1h] BYREF
  int v30; // [rsp+E0h] [rbp+7h]
  int v31; // [rsp+E4h] [rbp+Bh]

  DCOBJ::DCOBJ((DCOBJ *)v20, a2);
  if ( !v20[0] )
    return 0;
  v10 = (__int64 *)(v20[0] + 1024LL);
  if ( (*(_DWORD *)(v20[0] + 40LL) & 1) == 0 )
    v10 = (__int64 *)(v20[0] + 1016LL);
  v11 = *v10;
  v12 = *v10 + a6;
  v13 = HIDWORD(*v10) + a7;
  v29 = v11;
  v31 = v13;
  v30 = v12;
  ERECTL::vOrder((ERECTL *)&v29);
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v22, ghsemDynamicModeChange, v14, v15);
  v21 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  v25 = 0LL;
  v26 = 0;
  v27 = 0;
  v28 = 256;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v24, (struct XDCOBJ *)v20, 0);
  if ( (v24[24] & 1) != 0 && (v16 = *(_QWORD *)(v20[0] + 496LL)) != 0 )
  {
    v17 = *(_DWORD *)(v16 + 56);
    v18 = *(HSURF *)(v16 + 32);
    v23[0] = 0;
    v23[1] = 0;
    v23[2] = v17;
    v23[3] = *(_DWORD *)(v16 + 60);
    ERECTL::operator*=((int *)&v29, v23);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v24);
    if ( v25 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v25);
    SEMOBJ::vUnlock((SEMOBJ *)&v21);
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v22);
    if ( !ERECTL::bWrapped((ERECTL *)&v29) && !KeAreApcsDisabled() )
    {
      updated = bSpDwmUpdateSurface(a1, 0LL, (struct XDCOBJ *)v20, v18, a3, a4, a5, (struct ERECTL *)&v29, 0LL);
      goto LABEL_16;
    }
  }
  else
  {
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v24);
    if ( v25 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v25);
    SEMOBJ::vUnlock((SEMOBJ *)&v21);
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v22);
  }
  updated = 0;
LABEL_16:
  if ( v20[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v20);
  return updated;
}
