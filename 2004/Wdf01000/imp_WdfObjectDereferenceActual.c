/*
 * XREFs of imp_WdfObjectDereferenceActual @ 0x1C0016660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0059244 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfObjectDereferenceActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Object,
        void *Tag,
        unsigned int Line,
        const char *File)
{
  __int64 v5; // r10
  unsigned __int16 *v6; // rcx
  __int64 v7; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !Object )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  LOWORD(v5) = 0;
  v6 = (unsigned __int16 *)(~Object & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Object & 1) != 0 )
  {
    v5 = *v6;
    v6 = (unsigned __int16 *)((char *)v6 - v5);
  }
  v7 = *(_QWORD *)v6;
  if ( (_WORD)v5 )
    (*(void (__fastcall **)(unsigned __int16 *, _QWORD, void *))(v7 + 32))(v6, (unsigned __int16)v5, Tag);
  else
    (*(void (__fastcall **)(unsigned __int16 *, void *, _QWORD, const char *))(v7 + 16))(v6, Tag, Line, File);
}
