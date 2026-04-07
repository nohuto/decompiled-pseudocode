/*
 * XREFs of ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x180083644
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x1800818CC (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180024670 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800270B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x18003CE20 (-UpdateOpacity@CVisual@@UEAAJXZ.c)
 *     ?_ContainsWindow@CLivePreview@@AEAA_NAEBV?$DynArray@PEAVCWindowData@@$0A@@@PEAUHWND__@@@Z @ 0x1800824B0 (-_ContainsWindow@CLivePreview@@AEAA_NAEBV-$DynArray@PEAVCWindowData@@$0A@@@PEAUHWND__@@@Z.c)
 *     ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x18008350C (-_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x180094E60 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180097624 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall CLivePreview::_StartAnimateOpaqueVisuals(__int64 this, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r15
  unsigned int v6; // edi
  unsigned int v7; // r14d
  unsigned int v8; // esi
  __int64 v9; // r12
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rbx
  int updated; // eax
  __int64 v17; // r14
  __int64 v18; // r8
  __int64 v19; // r8
  int started; // eax
  int v21; // eax
  __int128 v23; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+40h] [rbp-10h]
  unsigned int v25; // [rsp+48h] [rbp-8h]
  __int64 *p_MDIOwner; // [rsp+90h] [rbp+40h] BYREF
  struct CWindowData *MDIOwner; // [rsp+98h] [rbp+48h] BYREF
  char v28; // [rsp+A0h] [rbp+50h]

  v28 = a3;
  v3 = 0;
  v5 = this;
  v25 = 0;
  v6 = 0;
  v24 = 0LL;
  v7 = 0;
  v8 = 0;
  v23 = 0LL;
  if ( *(_DWORD *)(a2 + 24) )
  {
    v9 = v23;
    do
    {
      MDIOwner = CWindowData::GetMDIOwner(*(CWindowData **)(*(_QWORD *)a2 + 8LL * v8));
      if ( MDIOwner )
      {
        this = v3 + 1;
        if ( (unsigned int)this >= v3 )
        {
          if ( (unsigned int)this > v7 )
          {
            p_MDIOwner = (__int64 *)&MDIOwner;
            v11 = DynArrayImpl<0>::Grow((char **)&v23, 8u, 1, 0, (unsigned __int64 *)&p_MDIOwner);
            v9 = v23;
            if ( v11 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xC0u);
              v3 = v25;
            }
            else
            {
              v12 = 8 * v25;
              v3 = ++v25;
              this = *p_MDIOwner;
              *(_QWORD *)(v12 + v23) = *p_MDIOwner;
            }
            v7 = HIDWORD(v24);
          }
          else
          {
            v10 = v3++;
            v25 = this;
            *(_QWORD *)(v9 + 8 * v10) = MDIOwner;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        }
      }
      ++v8;
    }
    while ( v8 < *(_DWORD *)(a2 + 24) );
    a3 = v28;
  }
  v13 = *(_DWORD *)(v5 + 360) - 1;
  v14 = v13;
  if ( v13 < 0 )
  {
LABEL_35:
    CLivePreview::_ShowHideImmersiveBackground((CLivePreview *)v5);
    goto LABEL_36;
  }
  v15 = 48LL * v13;
  while ( 1 )
  {
    if ( a3 )
    {
      this = *(_QWORD *)(v5 + 336);
      if ( !*(_DWORD *)(this + v15 + 40) )
      {
        updated = CVisual::UpdateOpacity(*(CVisual **)(this + v15));
        v6 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1F8u);
          goto LABEL_36;
        }
        goto LABEL_31;
      }
    }
    v17 = *(_QWORD *)(v5 + 336);
    if ( CLivePreview::_ContainsWindow(this, a2, *(_QWORD *)(v15 + v17 + 24))
      || CLivePreview::_ContainsWindow(this, (__int64)&v23, v18)
      || CLivePreview::_ContainsWindow(this, a2, *(_QWORD *)(v15 + v17 + 32))
      || CLivePreview::_ContainsWindow(this, (__int64)&v23, v19) )
    {
      break;
    }
    if ( !*(_DWORD *)(v15 + v17 + 40) )
    {
      started = CTopLevelWindow::StartLivePreviewAnimation(*(_QWORD *)(v15 + v17), 3LL);
      v6 = started;
      if ( started < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x20Du);
        goto LABEL_36;
      }
      *(_DWORD *)(v15 + *(_QWORD *)(v5 + 336) + 40) = 1;
    }
LABEL_31:
    v15 -= 48LL;
    if ( --v14 < 0 )
      goto LABEL_35;
    a3 = v28;
  }
  if ( *(_DWORD *)(v15 + v17 + 40) != 1 )
    goto LABEL_31;
  v21 = CTopLevelWindow::StartLivePreviewAnimation(*(_QWORD *)(v15 + v17), 4LL);
  v6 = v21;
  if ( v21 >= 0 )
  {
    *(_DWORD *)(v15 + *(_QWORD *)(v5 + 336) + 40) = 0;
    goto LABEL_31;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x204u);
LABEL_36:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v23);
  return v6;
}
