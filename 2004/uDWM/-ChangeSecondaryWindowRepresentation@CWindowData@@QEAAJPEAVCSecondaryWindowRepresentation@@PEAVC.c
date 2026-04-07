/*
 * XREFs of ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x18002867C
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180027A38 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x1800143B0 (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 *     ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x180028720 (-AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4Window.c)
 */

__int64 __fastcall CWindowData::ChangeSecondaryWindowRepresentation(
        CWindowData *this,
        struct CSecondaryWindowRepresentation *a2,
        struct CWindowRepresentation *a3,
        __int64 a4)
{
  CWindowData *v6; // rcx
  char v7; // bl
  CWindowData *v8; // rsi
  bool v9; // bp
  int v10; // eax
  unsigned int v11; // ebx
  char v13; // r9
  __int128 v14; // [rsp+30h] [rbp-18h]

  v6 = *(CWindowData **)a3;
  v7 = 1;
  v8 = (CWindowData *)*((_QWORD *)a2 + 8);
  v14 = *((_OWORD *)a2 + 4);
  v9 = *(_QWORD *)a3 != (_QWORD)v8;
  if ( *(_QWORD *)a3 )
  {
    v13 = *(CWindowData **)a3 != v8 && v6 != this;
    CWindowData::RemoveSecondaryWindowRepresentation((__int64)v6, a2, *((_DWORD *)a3 + 2), v13);
  }
  if ( !v9 || v8 == this )
    v7 = 0;
  LOBYTE(a4) = v7;
  v10 = CWindowData::AddSecondaryWindowRepresentation(v8, a2, DWORD2(v14), a4);
  v11 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x1DB0u);
  return v11;
}
