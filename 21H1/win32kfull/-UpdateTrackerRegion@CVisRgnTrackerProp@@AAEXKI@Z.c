/*
 * XREFs of ?UpdateTrackerRegion@CVisRgnTrackerProp@@AAEXKI@Z @ 0xF49FC
 * Callers:
 *     ?Update@CVisRgnTrackerProp@@QAEXXZ @ 0xF4974 (-Update@CVisRgnTrackerProp@@QAEXXZ.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?GetLayeredRegion@@YG_NPAUtagWND@@PAUHRGN__@@PA_N@Z @ 0xF4610 (-GetLayeredRegion@@YG_NPAUtagWND@@PAUHRGN__@@PA_N@Z.c)
 *     ?GetVisRgn@@YG_NPAUtagWND@@KPAUHRGN__@@@Z @ 0xF46F8 (-GetVisRgn@@YG_NPAUtagWND@@KPAUHRGN__@@@Z.c)
 *     _DwmAsyncUpdateLargeVisRgn@16 @ 0xF6060 (_DwmAsyncUpdateLargeVisRgn@16.c)
 *     _DwmAsyncUpdateVisRgn@20 @ 0xF60D2 (_DwmAsyncUpdateVisRgn@20.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

void __thiscall CVisRgnTrackerProp::UpdateTrackerRegion(CVisRgnTrackerProp *this, struct tagWND *a2, unsigned int a3)
{
  int v3; // ebx
  struct tagWND *v4; // esi
  struct tagWND *EmptyRgn; // edi
  _DWORD *v6; // ecx
  char VisRgn; // al
  unsigned int RegionData; // eax
  int v9; // eax
  int ProcessWin32Process; // eax
  void *v11; // eax
  void *v12; // eax
  _DWORD *v13; // edx
  int *v14; // ecx
  int v15; // [esp-4h] [ebp-254h]
  HRGN v16; // [esp+0h] [ebp-250h]
  bool *v17; // [esp+4h] [ebp-24Ch]
  int v18; // [esp+Ch] [ebp-244h]
  int v19; // [esp+10h] [ebp-240h]
  struct tagWND *v20; // [esp+14h] [ebp-23Ch]
  struct tagWND *v21; // [esp+18h] [ebp-238h]
  char v23; // [esp+27h] [ebp-229h] BYREF
  int v24[137]; // [esp+28h] [ebp-228h] BYREF

  v3 = 0;
  v4 = 0;
  v21 = 0;
  v20 = (struct tagWND *)*((_DWORD *)this + a3 + 5);
  EmptyRgn = (struct tagWND *)CreateEmptyRgn();
  if ( !EmptyRgn )
    goto LABEL_35;
  v23 = 0;
  v6 = (_DWORD *)*((_DWORD *)this + 1);
  if ( a3 == 2 )
  {
    if ( !GetLayeredRegion(v6, (struct tagWND *)&v23, v16, v17) )
    {
      GreDeleteObject(EmptyRgn);
      EmptyRgn = 0;
    }
    VisRgn = v23;
  }
  else
  {
    VisRgn = GetVisRgn(a2, (int)v6, EmptyRgn, (unsigned int)v16, (HRGN)v17);
  }
  if ( VisRgn )
    goto LABEL_31;
  if ( v20 )
  {
    v4 = v20;
    v21 = v20;
    GreSetRegionOwner(v20, -2147483646);
  }
  if ( EmptyRgn )
  {
    if ( v4 && GreEqualRgn(EmptyRgn, v4) )
      goto LABEL_31;
  }
  else if ( !v4 )
  {
    goto LABEL_35;
  }
  memset(v24, 0, 0x220u);
  if ( !EmptyRgn )
    goto LABEL_26;
  RegionData = GreGetRegionData(EmptyRgn, 0, 0);
  if ( RegionData > 0x220 )
  {
    v19 = CreateEmptyRgn();
    if ( GreCombineRgn(v19, EmptyRgn, 0, 5) )
    {
      v18 = ReferenceDwmProcess();
      ProcessWin32Process = PsGetProcessWin32Process(v18);
      if ( GreSetRegionOwner(v19, *(_DWORD *)(ProcessWin32Process + 32)) )
      {
        v11 = (void *)ReferenceDwmApiPort();
        DwmAsyncUpdateLargeVisRgn(v11, a3, v19);
      }
      else
      {
        GreDeleteObject(v19);
      }
      DereferenceDwmProcess(v18);
      goto LABEL_28;
    }
    goto LABEL_31;
  }
  if ( !RegionData )
  {
LABEL_26:
    v9 = v24[2];
LABEL_27:
    v15 = v9;
    v12 = (void *)ReferenceDwmApiPort();
    DwmAsyncUpdateVisRgn(v12, a3, (int)&v24[8], v15);
LABEL_28:
    if ( v21 )
      GreDeleteObject(v21);
    v4 = EmptyRgn;
    *((_DWORD *)this + a3 + 5) = EmptyRgn;
    EmptyRgn = 0;
    goto LABEL_31;
  }
  if ( GreGetRegionData(EmptyRgn, RegionData, v24) )
  {
    v9 = v24[2];
    if ( !v24[2] )
    {
      v9 = 1;
      memset(&v24[8], 0, 16);
      v24[2] = 1;
    }
    goto LABEL_27;
  }
LABEL_31:
  if ( EmptyRgn )
    GreDeleteObject(EmptyRgn);
  if ( v4 )
    GreSetRegionOwner(v4, -2147483630);
LABEL_35:
  v13 = (_DWORD *)*((_DWORD *)this + 1);
  v14 = (int *)v13[14];
  if ( v14 )
    v3 = *v14;
  EtwTraceDwmVisRgnUpdate(*v13, v3, a3, v20 != *((struct tagWND **)this + a3 + 5));
}
