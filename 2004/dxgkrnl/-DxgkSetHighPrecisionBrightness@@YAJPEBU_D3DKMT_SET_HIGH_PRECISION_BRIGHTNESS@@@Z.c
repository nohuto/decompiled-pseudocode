/*
 * XREFs of ?DxgkSetHighPrecisionBrightness@@YAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z @ 0x1C02756A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z @ 0x1C00465EC (--0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z.c)
 *     ?HasRegisteredInternalDisplay@LPMDisplayCtrl@@QEAAHXZ @ 0x1C004662C (-HasRegisteredInternalDisplay@LPMDisplayCtrl@@QEAAHXZ.c)
 *     ?Initialize@LPMDisplayCtrl@@QEAAJXZ @ 0x1C0275928 (-Initialize@LPMDisplayCtrl@@QEAAJXZ.c)
 *     ?SetCurrentBrightnessLevel@LPMDisplayCtrl@@QEAAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z @ 0x1C0275F0C (-SetCurrentBrightnessLevel@LPMDisplayCtrl@@QEAAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z.c)
 */

__int64 __fastcall DxgkSetHighPrecisionBrightness(
        const struct _D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS *a1,
        struct _ERESOURCE *a2)
{
  LPMDisplayCtrl *v3; // rcx
  int v4; // ebx
  PFILE_OBJECT *v5; // rdx
  LPMDisplayCtrl *v6; // rcx
  PERESOURCE Resource; // [rsp+30h] [rbp+8h] BYREF

  AutoResourceLock::AutoResourceLock((AutoResourceLock *)&Resource, a2);
  if ( a1 )
  {
    if ( !FileObject || !LPMDisplayCtrl::HasRegisteredInternalDisplay(v3) )
    {
      v4 = -1073741661;
      goto LABEL_12;
    }
    if ( !*((_DWORD *)v5 + 7) )
    {
      v4 = LPMDisplayCtrl::Initialize(v6);
      if ( v4 < 0 )
        goto LABEL_12;
      v5 = FileObject;
    }
    if ( *v5 )
      v4 = LPMDisplayCtrl::SetCurrentBrightnessLevel(v6, a1);
    else
      v4 = -1073741766;
  }
  else
  {
    v4 = -1073741811;
  }
LABEL_12:
  ExReleaseResourceLite(Resource);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
