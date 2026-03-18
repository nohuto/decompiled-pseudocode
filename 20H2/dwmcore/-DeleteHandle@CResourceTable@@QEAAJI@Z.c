/*
 * XREFs of ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x180069A6C
 * Callers:
 *     ?ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z @ 0x180069B08 (-ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z.c)
 *     ?CreateEmptyResource@CResourceTable@@QEAAJPEAVCComposition@@PEAVCChannelContext@@PEBUtagMILCMD_CHANNEL_CREATERESOURCE@@PEAPEAVCResource@@@Z @ 0x1800ACAD4 (-CreateEmptyResource@CResourceTable@@QEAAJPEAVCComposition@@PEAVCChannelContext@@PEBUtagMILCMD_C.c)
 * Callees:
 *     ?GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z @ 0x180068688 (-GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?AddToResourceCount@@YAXAEAUProcessAttributionResourceCounters@@W4MIL_RESOURCE_TYPE@@H@Z @ 0x1800C2DFC (-AddToResourceCount@@YAXAEAUProcessAttributionResourceCounters@@W4MIL_RESOURCE_TYPE@@H@Z.c)
 *     _anonymous_namespace_::AddToResourceCount @ 0x1800C2E6C (_anonymous_namespace_--AddToResourceCount.c)
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CResourceTable::DeleteHandle(CResourceTable *this, unsigned int a2)
{
  struct CResourceTable::HANDLE_ENTRY *Entry; // rax
  unsigned int v5; // r10d
  struct CResourceTable::HANDLE_ENTRY *v6; // rbx
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // r8d

  Entry = CResourceTable::GetEntry(this, a2);
  v6 = Entry;
  if ( Entry )
  {
    v7 = *(_DWORD *)Entry;
    if ( v7 )
    {
      if ( *((_QWORD *)v6 + 1) )
      {
        v8 = AddToResourceCount(*((_QWORD *)this + 7) + 44LL, v7, 0xFFFFFFFFLL);
        anonymous_namespace_::AddToResourceCount(v8, v9);
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 1) + 16LL))(*((_QWORD *)v6 + 1));
        *((_QWORD *)v6 + 1) = 0LL;
      }
      memset_0((void *)(*((_QWORD *)this + 5) + a2 * *((_DWORD *)this + 6)), 0, *((unsigned int *)this + 6));
      return 0;
    }
  }
  return v5;
}
