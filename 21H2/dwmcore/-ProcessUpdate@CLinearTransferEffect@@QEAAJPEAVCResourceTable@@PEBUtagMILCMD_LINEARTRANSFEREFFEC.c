/*
 * XREFs of ?ProcessUpdate@CLinearTransferEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LINEARTRANSFEREFFECT@@@Z @ 0x1801B3FA0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A325C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLinearTransferEffect::ProcessUpdate(
        CLinearTransferEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LINEARTRANSFEREFFECT *a3)
{
  *((_DWORD *)this + 38) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 39) = *((_DWORD *)a3 + 3);
  *((_BYTE *)this + 160) = *((_BYTE *)a3 + 16);
  *((_DWORD *)this + 41) = *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 42) = *((_DWORD *)a3 + 6);
  *((_BYTE *)this + 172) = *((_BYTE *)a3 + 28);
  *((_DWORD *)this + 44) = *((_DWORD *)a3 + 8);
  *((_DWORD *)this + 45) = *((_DWORD *)a3 + 9);
  *((_BYTE *)this + 184) = *((_BYTE *)a3 + 40);
  *((_DWORD *)this + 47) = *((_DWORD *)a3 + 11);
  *((_DWORD *)this + 48) = *((_DWORD *)a3 + 12);
  *((_BYTE *)this + 196) = *((_BYTE *)a3 + 52);
  *((_BYTE *)this + 197) = *((_BYTE *)a3 + 53);
  (*(void (__fastcall **)(CLinearTransferEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  return 0LL;
}
