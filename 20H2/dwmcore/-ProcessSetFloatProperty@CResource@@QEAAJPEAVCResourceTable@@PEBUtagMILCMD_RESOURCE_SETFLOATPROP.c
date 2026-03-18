/*
 * XREFs of ?ProcessSetFloatProperty@CResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RESOURCE_SETFLOATPROPERTY@@@Z @ 0x18016FABC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CResource::ProcessSetFloatProperty(
        CResource *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RESOURCE_SETFLOATPROPERTY *a3)
{
  return (*(__int64 (__fastcall **)(CResource *, _QWORD, __int64, char *))(*(_QWORD *)this + 96LL))(
           this,
           *((unsigned int *)a3 + 2),
           18LL,
           (char *)a3 + 12);
}
