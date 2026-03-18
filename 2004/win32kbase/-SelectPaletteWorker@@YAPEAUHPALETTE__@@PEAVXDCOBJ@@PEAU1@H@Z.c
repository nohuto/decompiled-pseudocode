/*
 * XREFs of ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C002730C
 * Callers:
 *     GreSelectPalette @ 0x1C00272A0 (GreSelectPalette.c)
 * Callees:
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0027118 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00271BC (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1C00274C0 (-vMakeNoXlate@XEPALOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00820E8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00821C0 (GreReleaseHmgrSemaphore.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C00870E8 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     HmgShareLockCheck @ 0x1C0088B80 (HmgShareLockCheck.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C008A000 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C008A360 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00A5C20 (GreAcquireHmgrSemaphore.c)
 */

HPALETTE __fastcall SelectPaletteWorker(struct XDCOBJ *a1, HPALETTE a2, int a3)
{
  struct _ERESOURCE *v3; // rbx
  HPALETTE v5; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rcx
  __int64 v12; // rbx
  HPALETTE v13; // rdi
  unsigned int v14; // eax
  __int64 v16; // r15
  int v17; // r8d
  __int64 v18; // rcx
  PERESOURCE v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h] BYREF
  int v21; // [rsp+40h] [rbp-10h]
  __int64 v22; // [rsp+80h] [rbp+30h] BYREF
  __int64 v23; // [rsp+98h] [rbp+48h] BYREF

  v3 = ghsemPalette;
  v19 = ghsemPalette;
  v5 = a2;
  if ( ghsemPalette )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v3);
  }
  LOBYTE(a2) = 8;
  v7 = HmgShareLockCheck(v5, a2);
  v11 = *(_QWORD **)a1;
  v12 = v7;
  v22 = v7;
  if ( !v11 || !v7 || (*(_DWORD *)(v7 + 24) & 0x100) == 0 )
    goto LABEL_22;
  if ( !a3 )
  {
    hForePID = (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v11, v8, v9, v10);
    hForePalette = v5;
    v11 = *(_QWORD **)a1;
  }
  v13 = (HPALETTE)v11[10];
  if ( v13 != v5 )
  {
    v23 = v11[11];
    if ( (struct PALETTE *)v12 == ppalDefault )
      goto LABEL_16;
    v16 = v11[6];
    if ( *(_QWORD *)(v12 + 48) == v16 )
      goto LABEL_16;
    if ( !*(_DWORD *)(v12 + 56) )
    {
      XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v22);
      *(_QWORD *)(v12 + 48) = v16;
LABEL_16:
      GreAcquireHmgrSemaphore();
      XEPALOBJ::vRemoveFromList((XEPALOBJ *)&v23, a1, v17);
      *(_QWORD *)(*(_QWORD *)a1 + 80LL) = v5;
      *(_QWORD *)(*(_QWORD *)a1 + 88LL) = v12;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0xFu;
      v18 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
      if ( v18 && (struct PALETTE *)v12 != ppalDefault )
        *(_QWORD *)(v18 + 176) = v5;
      XEPALOBJ::vAddToList((XEPALOBJ *)&v22, a1);
      GreReleaseHmgrSemaphore();
      goto LABEL_9;
    }
LABEL_22:
    v13 = 0LL;
  }
LABEL_9:
  if ( v12 )
  {
    v14 = *(_DWORD *)v12;
    v20 = 0LL;
    v21 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v20, (unsigned __int16)v14 | (v14 >> 8) & 0xFF0000, 0, 0, 1);
    if ( v21 )
    {
      TrackHmgrReferenceDecrement(*(_BYTE *)(v20 + 14), (struct OBJECT *)v12);
      --*(_DWORD *)(v12 + 8);
      HANDLELOCK::vUnlock((HANDLELOCK *)&v20);
      if ( v21 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v20);
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v19);
  return v13;
}
