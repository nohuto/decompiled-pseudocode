/*
 * XREFs of ?ProcessUpdate@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_TABLETRANSFEREFFECT@@@Z @ 0x1801B8268
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTableTransferEffect::ProcessUpdate(
        CTableTransferEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_TABLETRANSFEREFFECT *a3)
{
  *((_BYTE *)this + 152) = *((_BYTE *)a3 + 8);
  *((_BYTE *)this + 153) = *((_BYTE *)a3 + 9);
  *((_BYTE *)this + 154) = *((_BYTE *)a3 + 10);
  *((_BYTE *)this + 155) = *((_BYTE *)a3 + 11);
  *((_BYTE *)this + 156) = *((_BYTE *)a3 + 12);
  (*(void (__fastcall **)(CTableTransferEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  return 0LL;
}
