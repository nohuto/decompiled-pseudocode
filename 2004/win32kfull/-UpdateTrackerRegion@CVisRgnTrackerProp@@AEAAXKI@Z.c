/*
 * XREFs of ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x1C002F758
 * Callers:
 *     ?Update@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C002F66C (-Update@CVisRgnTrackerProp@@QEAAXXZ.c)
 * Callees:
 *     _GhostWindowFromHungWindow @ 0x1C002C5D0 (_GhostWindowFromHungWindow.c)
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x1C002F570 (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 *     ?GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z @ 0x1C002FBA4 (-GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z.c)
 *     DwmAsyncUpdateVisRgn @ 0x1C002FCA0 (DwmAsyncUpdateVisRgn.c)
 *     _GetTopLevelWindow @ 0x1C006EA90 (_GetTopLevelWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     DwmAsyncUpdateLargeVisRgn @ 0x1C02766B0 (DwmAsyncUpdateLargeVisRgn.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C029F798 (GreScaleRgnToDestLogPixel.c)
 */

void __fastcall CVisRgnTrackerProp::UpdateTrackerRegion(CVisRgnTrackerProp *this, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r15
  __int64 v4; // rdi
  HRGN v7; // r14
  HRGN EmptyRgn; // rax
  HRGN v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rdx
  char VisRgn; // r12
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  int WindowRgn; // ebx
  __int64 v19; // rbx
  _QWORD *v20; // rcx
  __int64 *v21; // rax
  unsigned int v22; // ebx
  int v23; // ecx
  __int64 TopLevelWindow; // rax
  unsigned int RegionData; // eax
  void *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rbp
  __int64 ProcessWin32Process; // rax
  void *v32; // rax
  HRGN v34; // [rsp+40h] [rbp-278h]
  int v35[136]; // [rsp+50h] [rbp-268h] BYREF

  v3 = a3;
  v4 = 0LL;
  v7 = 0LL;
  v34 = (HRGN)*((_QWORD *)this + a3 + 5);
  EmptyRgn = (HRGN)CreateEmptyRgn();
  v9 = EmptyRgn;
  if ( !EmptyRgn )
  {
    v19 = v3;
    goto LABEL_18;
  }
  v10 = *((_QWORD *)this + 1);
  if ( (_DWORD)v3 != 2 )
  {
    VisRgn = GetVisRgn(*((struct tagWND **)this + 1), a2, EmptyRgn);
    goto LABEL_12;
  }
  v11 = *(_QWORD *)(v10 + 104);
  VisRgn = 0;
  if ( !v11 )
    goto LABEL_28;
  v13 = *(_QWORD *)(v10 + 24);
  v14 = 0LL;
  if ( v13 )
  {
    v15 = *(_QWORD *)(v13 + 8);
    if ( v15 )
      v14 = *(_QWORD *)(v15 + 24);
  }
  if ( v11 != v14 )
  {
LABEL_28:
    v22 = 2 * (*(_BYTE *)(*(_QWORD *)(v10 + 40) + 31LL) & 4 | 1);
    if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) + 8LL) + 64LL) & 1) != 0 )
        {
          v23 = *(_DWORD *)(*(_QWORD *)(v10 + 40) + 288LL);
          if ( (v23 & 0xF) == 0 && (v23 & 0x40000000) != 0 )
            v22 |= 0x20u;
        }
      }
    }
    LODWORD(v3) = a3;
    WindowRgn = GetWindowRgn((struct tagWND *)v10, v9, v22);
    goto LABEL_33;
  }
  v16 = *(_QWORD *)(v10 + 40);
  v17 = *(_QWORD *)(v16 + 168);
  if ( !v17 || (*(_BYTE *)(v16 + 21) & 8) != 0 )
  {
    WindowRgn = 0;
  }
  else
  {
    WindowRgn = GreCombineRgn(v9, v17, 0LL, 5LL);
    if ( !WindowRgn )
      goto LABEL_11;
    v27 = *(_QWORD *)(v10 + 40);
    if ( (*(_WORD *)(v27 + 42) & 0x3FFF) != 0x29D )
      WindowRgn = GreOffsetRgn(v9, (unsigned int)-*(_DWORD *)(v27 + 88), (unsigned int)-*(_DWORD *)(v27 + 92));
    if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) + 8LL) + 64LL) & 1) != 0 )
        {
          v28 = *(_QWORD *)(v10 + 40);
          v29 = *(_DWORD *)(v28 + 288);
          if ( (v29 & 0xF) == 0 && (v29 & 0x40000000) != 0 )
            GreScaleRgnToDestLogPixel(*(unsigned __int16 *)(v28 + 284), v9);
        }
      }
    }
  }
  if ( WindowRgn )
  {
LABEL_33:
    if ( WindowRgn == 1 )
    {
      TopLevelWindow = GetTopLevelWindow(v10);
      if ( TopLevelWindow )
      {
        if ( GhostWindowFromHungWindow(TopLevelWindow) )
          VisRgn = 1;
      }
    }
    goto LABEL_12;
  }
LABEL_11:
  VisRgn = 0;
  GreDeleteObject(v9);
  v9 = 0LL;
LABEL_12:
  if ( VisRgn )
    goto LABEL_23;
  if ( v34 )
  {
    v7 = v34;
    GreSetRegionOwner(v34, 2147483650LL);
  }
  if ( v9 )
  {
    if ( v7 && (unsigned int)GreEqualRgn(v9, v7) )
      goto LABEL_23;
  }
  else if ( !v7 )
  {
    v19 = (unsigned int)v3;
    goto LABEL_18;
  }
  memset(v35, 0, sizeof(v35));
  if ( !v9 )
    goto LABEL_45;
  RegionData = GreGetRegionData(v9, 0LL, 0LL);
  if ( RegionData > 0x220 )
  {
    v30 = CreateEmptyRgn();
    if ( (unsigned int)GreCombineRgn(v30, v9, 0LL, 5LL) )
    {
      v3 = ReferenceDwmProcess();
      ProcessWin32Process = PsGetProcessWin32Process(v3);
      if ( (unsigned int)GreSetRegionOwner(v30, *(unsigned int *)(ProcessWin32Process + 56)) )
      {
        v32 = (void *)ReferenceDwmApiPort();
        DwmAsyncUpdateLargeVisRgn(v32);
      }
      else
      {
        GreDeleteObject(v30);
      }
      DereferenceDwmProcess(v3);
      LODWORD(v3) = a3;
      goto LABEL_46;
    }
    goto LABEL_23;
  }
  if ( !RegionData )
  {
LABEL_45:
    v26 = (void *)ReferenceDwmApiPort();
    DwmAsyncUpdateVisRgn(v26, v35[2]);
LABEL_46:
    if ( v7 )
      GreDeleteObject(v7);
    v19 = (unsigned int)v3;
    v7 = v9;
    *((_QWORD *)this + (unsigned int)v3 + 5) = v9;
    v9 = 0LL;
    goto LABEL_24;
  }
  if ( (unsigned int)GreGetRegionData(v9, RegionData, v35) )
  {
    if ( !v35[2] )
    {
      *(_OWORD *)&v35[8] = 0LL;
      v35[2] = 1;
    }
    goto LABEL_45;
  }
LABEL_23:
  v19 = (unsigned int)v3;
LABEL_24:
  if ( v9 )
    GreDeleteObject(v9);
  if ( v7 )
    GreSetRegionOwner(v7, 2147483666LL);
LABEL_18:
  v20 = (_QWORD *)*((_QWORD *)this + 1);
  v21 = (__int64 *)v20[13];
  if ( v21 )
    v4 = *v21;
  EtwTraceDwmVisRgnUpdate(*v20, v4, (unsigned int)v3, v34 != *((HRGN *)this + v19 + 5));
}
