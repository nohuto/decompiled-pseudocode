/*
 * XREFs of ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C0015380
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0016F7C (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     ?iOpenGLExtEscapeHelper@@YAXPEAX@Z @ 0x1C027CD00 (-iOpenGLExtEscapeHelper@@YAXPEAX@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C027CD48 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?MulEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C02A3CF0 (-MulEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::Escape(
        PDEVOBJ *this,
        struct _SURFOBJ *a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        void *a7)
{
  return (*(__int64 (__fastcall **)(struct _SURFOBJ *, _QWORD, _QWORD, void *, unsigned int, void *))(*(_QWORD *)this + 2880LL))(
           a2,
           a3,
           a4,
           a5,
           a6,
           a7);
}
