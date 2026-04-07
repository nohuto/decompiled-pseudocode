/*
 * XREFs of ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x18000981C
 * Callers:
 *     ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x180026C94 (--1CSecondaryWindowRepresentation@@MEAA@XZ.c)
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800420B8 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B070 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 */

void __fastcall CSecondaryWindowRepresentation::RemoveOwnedWindowRepresentation(
        CSecondaryWindowRepresentation *this,
        unsigned int a2)
{
  unsigned int v3; // edi
  CBaseObject *v4; // rsi
  struct CVisual *v5; // rdx
  unsigned int v6; // ecx
  __int64 i; // r8
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  __int64 v10; // rcx

  v3 = a2;
  v4 = *(CBaseObject **)(*((_QWORD *)this + 16) + 8LL * a2);
  v5 = (struct CVisual *)*((_QWORD *)v4 + 6);
  if ( v5 )
    VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 6) + 32LL), v5);
  v6 = *((_DWORD *)this + 38);
  if ( v3 >= v6 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x194u);
  }
  else
  {
    for ( i = *((_QWORD *)this + 16); v3 < v6 - 1; v6 = *((_DWORD *)this + 38) )
    {
      v10 = v3++;
      *(_QWORD *)(i + 8 * v10) = *(_QWORD *)(i + 8LL * v3);
    }
    *((_DWORD *)this + 38) = v6 - 1;
  }
  CBaseObject::Release(v4);
  if ( !*((_DWORD *)this + 38) && !*((_BYTE *)this + 416) )
  {
    v8 = (CBaseObject *)*((_QWORD *)this + 6);
    if ( v8 )
    {
      CBaseObject::Release(v8);
      *((_QWORD *)this + 6) = 0LL;
    }
    v9 = (CBaseObject *)*((_QWORD *)this + 7);
    if ( v9 )
    {
      CBaseObject::Release(v9);
      *((_QWORD *)this + 7) = 0LL;
    }
  }
}
