/*
 * XREFs of ?ProcessSetContentSize@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURECONTROLLER_SETCONTENTSIZE@@@Z @ 0x1801BADAC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCaptureController::ProcessSetContentSize(
        CCaptureController *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURECONTROLLER_SETCONTENTSIZE *a3)
{
  __int64 *v4; // rdx
  int v5; // eax
  __int64 *v6; // r8
  __int64 v7; // rcx
  float v8; // xmm0_4

  v4 = (__int64 *)*((_QWORD *)this + 7);
  *((_DWORD *)this + 27) = *((_DWORD *)a3 + 2);
  v5 = *((_DWORD *)a3 + 3);
  v6 = (__int64 *)*((_QWORD *)this + 8);
  *((_DWORD *)this + 28) = v5;
  while ( v4 != v6 )
  {
    v7 = *v4++;
    v8 = *((float *)this + 28);
    *(_DWORD *)(v7 + 80) = (int)*((float *)this + 27);
    *(_DWORD *)(v7 + 84) = (int)v8;
  }
  return 0LL;
}
