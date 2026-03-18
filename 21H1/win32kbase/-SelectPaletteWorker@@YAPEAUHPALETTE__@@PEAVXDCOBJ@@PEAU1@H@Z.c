/*
 * XREFs of ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C001758C
 * Callers:
 *     GreSelectPalette @ 0x1C0017520 (GreSelectPalette.c)
 * Callees:
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0017398 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C001743C (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1C0017740 (-vMakeNoXlate@XEPALOBJ@@QEAAXXZ.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0076C90 (GreAcquireHmgrSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C007B7C8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C007B8A0 (GreReleaseHmgrSemaphore.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0080048 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     HmgShareLockCheck @ 0x1C0081AB0 (HmgShareLockCheck.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0082DC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0083290 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 */

HPALETTE __fastcall SelectPaletteWorker(struct XDCOBJ *a1, HPALETTE a2, int a3)
{
  struct _ERESOURCE *v3; // rbx
  HPALETTE v5; // r14
  __int64 v7; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rbx
  HPALETTE v10; // rdi
  unsigned int v11; // eax
  __int64 v13; // r15
  int v14; // r8d
  __int64 v15; // rcx
  HSEMAPHORE v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  int v18; // [rsp+40h] [rbp-10h]
  __int64 v19; // [rsp+80h] [rbp+30h] BYREF
  __int64 v20; // [rsp+98h] [rbp+48h] BYREF

  v3 = (struct _ERESOURCE *)ghsemPalette;
  v16 = ghsemPalette;
  v5 = a2;
  if ( ghsemPalette )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v3);
  }
  LOBYTE(a2) = 8;
  v7 = HmgShareLockCheck(v5, a2);
  v8 = *(_QWORD **)a1;
  v9 = v7;
  v19 = v7;
  if ( !v8 || !v7 || (*(_DWORD *)(v7 + 24) & 0x100) == 0 )
    goto LABEL_22;
  if ( !a3 )
  {
    hForePID = (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v8);
    hForePalette = v5;
    v8 = *(_QWORD **)a1;
  }
  v10 = (HPALETTE)v8[10];
  if ( v10 != v5 )
  {
    v20 = v8[11];
    if ( (struct PALETTE *)v9 == ppalDefault )
      goto LABEL_16;
    v13 = v8[6];
    if ( *(_QWORD *)(v9 + 48) == v13 )
      goto LABEL_16;
    if ( !*(_DWORD *)(v9 + 56) )
    {
      XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v19);
      *(_QWORD *)(v9 + 48) = v13;
LABEL_16:
      GreAcquireHmgrSemaphore();
      XEPALOBJ::vRemoveFromList((XEPALOBJ *)&v20, a1, v14);
      *(_QWORD *)(*(_QWORD *)a1 + 80LL) = v5;
      *(_QWORD *)(*(_QWORD *)a1 + 88LL) = v9;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0xFu;
      v15 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
      if ( v15 && (struct PALETTE *)v9 != ppalDefault )
        *(_QWORD *)(v15 + 176) = v5;
      XEPALOBJ::vAddToList((XEPALOBJ *)&v19, a1);
      GreReleaseHmgrSemaphore();
      goto LABEL_9;
    }
LABEL_22:
    v10 = 0LL;
  }
LABEL_9:
  if ( v9 )
  {
    v11 = *(_DWORD *)v9;
    v17 = 0LL;
    v18 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v17, (unsigned __int16)v11 | (v11 >> 8) & 0xFF0000, 0, 0, 1);
    if ( v18 )
    {
      TrackHmgrReferenceDecrement(*(_BYTE *)(v17 + 14), (struct OBJECT *)v9);
      --*(_DWORD *)(v9 + 8);
      HANDLELOCK::vUnlock((HANDLELOCK *)&v17);
      if ( v18 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v17);
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v16);
  return v10;
}
