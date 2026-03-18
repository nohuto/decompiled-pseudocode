/*
 * XREFs of ?ProcessSetIntegerProperty@CResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RESOURCE_SETINTEGERPROPERTY@@@Z @ 0x180171854
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CResource::ProcessSetIntegerProperty(
        CResource *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RESOURCE_SETINTEGERPROPERTY *a3)
{
  return (*(__int64 (__fastcall **)(CResource *, _QWORD, _QWORD))(*(_QWORD *)this + 128LL))(
           this,
           *((unsigned int *)a3 + 2),
           *((_QWORD *)a3 + 2));
}
