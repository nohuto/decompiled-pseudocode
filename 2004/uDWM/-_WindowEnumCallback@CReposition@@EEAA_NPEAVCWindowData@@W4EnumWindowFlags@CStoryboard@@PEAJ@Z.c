/*
 * XREFs of ?_WindowEnumCallback@CReposition@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B4C40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800B203C (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 */

char __fastcall CReposition::_WindowEnumCallback(CSlide *a1, struct CWindowData *a2, char a3, int *a4)
{
  int v5; // ebx
  CBaseObject *v6; // rcx
  int v8; // eax
  CBaseObject *v10; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0;
  v6 = 0LL;
  v10 = 0LL;
  if ( (a3 & 1) != 0 && (*((_DWORD *)a2 + 154) & 0xFFF) == 0x2C )
  {
    v8 = CSlide::_SlideWindow(a1, a2, 1.0, &v10);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v6 = v10;
      *(_BYTE *)(*((_QWORD *)v10 + 5) + 961LL) = 1;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v8, 0x768u);
      v6 = v10;
    }
  }
  *a4 = v5;
  if ( v6 )
    CBaseObject::Release(v6);
  return 1;
}
