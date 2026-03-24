/*
 * XREFs of ?DxgkLPMDisplayControl@@YAJPEAU_D3DKMT_LPM_DISPLAY_CONTROL@@@Z @ 0x1C0275830
 * Callers:
 *     <none>
 * Callees:
 *     ??0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z @ 0x1C004747C (--0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z.c)
 *     ?HasRegisteredInternalDisplay@LPMDisplayCtrl@@QEAAHXZ @ 0x1C00474BC (-HasRegisteredInternalDisplay@LPMDisplayCtrl@@QEAAHXZ.c)
 *     ?GetCaps@LPMDisplayCtrl@@QEAAJPEAU_D3DKMT_LPMD_CAPS@@@Z @ 0x1C0275B54 (-GetCaps@LPMDisplayCtrl@@QEAAJPEAU_D3DKMT_LPMD_CAPS@@@Z.c)
 *     ?Initialize@LPMDisplayCtrl@@QEAAJXZ @ 0x1C0275BD8 (-Initialize@LPMDisplayCtrl@@QEAAJXZ.c)
 *     ?LPMStart@LPMDisplayCtrl@@QEAAJXZ @ 0x1C0276088 (-LPMStart@LPMDisplayCtrl@@QEAAJXZ.c)
 *     ?LPMStop@LPMDisplayCtrl@@QEAAJXZ @ 0x1C027611C (-LPMStop@LPMDisplayCtrl@@QEAAJXZ.c)
 *     ?SetIlluminance@LPMDisplayCtrl@@QEAAJPEAU_D3DKMT_LPMD_ILLUMINANCE_ARGS@@@Z @ 0x1C027635C (-SetIlluminance@LPMDisplayCtrl@@QEAAJPEAU_D3DKMT_LPMD_ILLUMINANCE_ARGS@@@Z.c)
 *     ?Update@LPMDisplayCtrl@@QEAAJPEAU_D3DKMT_LPMD_PRESENT_ARGS@@@Z @ 0x1C02763B8 (-Update@LPMDisplayCtrl@@QEAAJPEAU_D3DKMT_LPMD_PRESENT_ARGS@@@Z.c)
 */

__int64 __fastcall DxgkLPMDisplayControl(struct _D3DKMT_LPM_DISPLAY_CONTROL *a1, struct _ERESOURCE *a2)
{
  LPMDisplayCtrl *v3; // rcx
  unsigned int v4; // ebx
  int v5; // edx
  LPMDisplayCtrl *v6; // rcx
  PFILE_OBJECT *v7; // r8
  int v8; // eax
  int Caps; // eax
  bool v10; // zf
  PERESOURCE Resource; // [rsp+30h] [rbp+8h] BYREF

  AutoResourceLock::AutoResourceLock((AutoResourceLock *)&Resource, a2);
  v4 = 0;
  if ( !a1 )
  {
    v5 = -1073741811;
LABEL_25:
    v4 = v5;
    goto LABEL_26;
  }
  if ( !FileObject || !LPMDisplayCtrl::HasRegisteredInternalDisplay(v3) )
  {
    v5 = -1073741661;
    goto LABEL_25;
  }
  if ( !*((_DWORD *)v7 + 7) )
  {
    v5 = LPMDisplayCtrl::Initialize(v6);
    if ( v5 < 0 )
      goto LABEL_25;
    v7 = FileObject;
  }
  if ( !*v7 )
  {
    v5 = -1073741766;
    goto LABEL_25;
  }
  v8 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 == 1 )
  {
    Caps = LPMDisplayCtrl::GetCaps(v6, (struct _D3DKMT_LPM_DISPLAY_CONTROL *)((char *)a1 + 16));
LABEL_21:
    v5 = Caps;
    goto LABEL_23;
  }
  if ( v8 != 2 )
  {
    switch ( v8 )
    {
      case 3:
        *((_DWORD *)v7 + 13) = 2;
        Caps = LPMDisplayCtrl::LPMStop(v7);
        break;
      case 4:
        Caps = LPMDisplayCtrl::Update(v6, (struct _D3DKMT_LPM_DISPLAY_CONTROL *)((char *)a1 + 8));
        break;
      case 5:
        Caps = LPMDisplayCtrl::SetIlluminance(v6, (struct _D3DKMT_LPM_DISPLAY_CONTROL *)((char *)a1 + 8));
        break;
      default:
        v5 = -1073741811;
        goto LABEL_23;
    }
    goto LABEL_21;
  }
  v10 = *((_DWORD *)v7 + 14) == 1;
  *((_DWORD *)v7 + 13) = 1;
  if ( v10 )
  {
    Caps = LPMDisplayCtrl::LPMStart(v6);
    goto LABEL_21;
  }
LABEL_23:
  *((_DWORD *)a1 + 8) = v5;
LABEL_26:
  ExReleaseResourceLite(Resource);
  KeLeaveCriticalRegion();
  return v4;
}
