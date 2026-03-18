/*
 * XREFs of ?ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z @ 0x180069B08
 * Callers:
 *     ?ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z @ 0x180069B5C (-ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x180069A6C (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::ReleaseResource(
        CComposition *this,
        CResourceTable **a2,
        __int64 a3,
        struct CResource *a4,
        bool a5)
{
  unsigned int v5; // edi
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx

  v5 = a3;
  LOBYTE(a3) = a5;
  (*(void (__fastcall **)(struct CResource *, CResourceTable **, __int64))(*(_QWORD *)a4 + 176LL))(a4, a2, a3);
  v7 = CResourceTable::DeleteHandle(a2[3], v5);
  v9 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xA18u, 0LL);
  return v9;
}
