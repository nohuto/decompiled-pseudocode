/*
 * XREFs of imp_WdfObjectDereferenceActual @ 0x1C0002160
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfObjectDereferenceActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Object,
        void *Tag,
        unsigned int Line,
        const char *File)
{
  unsigned __int16 *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !Object )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v5 = (unsigned __int16 *)(~Object & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Object & 1) == 0 )
  {
    v6 = *(_QWORD *)v5;
LABEL_4:
    (*(void (__fastcall **)(unsigned __int16 *, void *, _QWORD, const char *))(v6 + 16))(v5, Tag, Line, File);
    return;
  }
  v7 = *v5;
  v5 = (unsigned __int16 *)((char *)v5 - v7);
  v6 = *(_QWORD *)v5;
  if ( !(_WORD)v7 )
    goto LABEL_4;
  (*(void (__fastcall **)(unsigned __int16 *, __int64, void *))(v6 + 32))(v5, v7, Tag);
}
