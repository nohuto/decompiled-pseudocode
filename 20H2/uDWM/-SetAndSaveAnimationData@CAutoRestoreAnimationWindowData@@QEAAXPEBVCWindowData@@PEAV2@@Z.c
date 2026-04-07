/*
 * XREFs of ?SetAndSaveAnimationData@CAutoRestoreAnimationWindowData@@QEAAXPEBVCWindowData@@PEAV2@@Z @ 0x1800B0020
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B1F40 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoRestoreAnimationWindowData::SetAndSaveAnimationData(
        CAutoRestoreAnimationWindowData *this,
        const struct CWindowData *a2,
        struct CWindowData *a3)
{
  *((_DWORD *)this + 154) = *((_DWORD *)a3 + 154);
  *(_OWORD *)((char *)this + 620) = *(_OWORD *)((char *)a3 + 620);
  *(_OWORD *)((char *)this + 636) = *(_OWORD *)((char *)a3 + 636);
  *(_OWORD *)((char *)this + 652) = *(_OWORD *)((char *)a3 + 652);
  *(_OWORD *)((char *)this + 668) = *(_OWORD *)((char *)a3 + 668);
  *((_DWORD *)a3 + 154) = *((_DWORD *)a2 + 154);
  *(_OWORD *)((char *)a3 + 620) = *(_OWORD *)((char *)a2 + 620);
  *(_OWORD *)((char *)a3 + 636) = *(_OWORD *)((char *)a2 + 636);
  *(_OWORD *)((char *)a3 + 652) = *(_OWORD *)((char *)a2 + 652);
  *(_OWORD *)((char *)a3 + 668) = *(_OWORD *)((char *)a2 + 668);
  *((_QWORD *)this + 96) = a3;
}
