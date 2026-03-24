/*
 * XREFs of ?VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CONTEXT@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x1C003BEE4
 * Callers:
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1C00DCB58 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchSignalSyncObjectsFromGpu(
        VIDSCH_EXPORT *this,
        unsigned int a2,
        struct VIDSCH_HW_QUEUE **a3,
        unsigned int a4,
        struct _VIDSCH_CONTEXT **a5,
        unsigned int a6,
        struct _VIDSCH_SYNC_OBJECT **a7,
        struct _D3DDDICB_SIGNALFLAGS a8,
        const unsigned __int64 *a9)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_HW_QUEUE **, _QWORD, struct _VIDSCH_CONTEXT **, unsigned int, struct _VIDSCH_SYNC_OBJECT **, struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535, const unsigned __int64 *))(*((_QWORD *)this + 1) + 640LL))(
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8.0,
           a9);
}
