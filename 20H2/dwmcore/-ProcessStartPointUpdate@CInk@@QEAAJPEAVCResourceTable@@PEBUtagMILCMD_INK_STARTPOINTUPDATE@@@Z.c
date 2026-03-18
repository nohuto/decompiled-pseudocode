/*
 * XREFs of ?ProcessStartPointUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INK_STARTPOINTUPDATE@@@Z @ 0x1801C5070
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z @ 0x1800BD68C (--$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x1801C4AAC (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::ProcessStartPointUpdate(
        CInk *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INK_STARTPOINTUPDATE *a3)
{
  struct ID2D1Ink *v3; // rdi
  char *v4; // r12
  struct ID2D1InkStyle *v5; // rbx
  unsigned int v6; // esi
  unsigned int v7; // r15d
  __int64 v9; // rbp
  int ID2D1InkAndInkStyle; // eax
  __int64 v11; // rcx
  struct ID2D1InkStyle *v13; // [rsp+60h] [rbp+8h] BYREF
  struct ID2D1Ink *v14; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = (char *)this + 152;
  v14 = 0LL;
  v5 = 0LL;
  v13 = 0LL;
  v6 = 0;
  v7 = 0;
  *((_DWORD *)this + 40) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 38) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 39) = *((_DWORD *)a3 + 3);
  v9 = (__int64)(*((_QWORD *)this + 11) - *((_QWORD *)this + 10)) >> 3;
  if ( (_DWORD)v9 )
  {
    while ( 1 )
    {
      ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(
                              *(CD2DInk **)((char *)v5 + *((_QWORD *)this + 10)),
                              &v14,
                              &v13);
      v6 = ID2D1InkAndInkStyle;
      if ( ID2D1InkAndInkStyle < 0 )
        break;
      (*(void (__fastcall **)(struct ID2D1Ink *, char *))(*(_QWORD *)v14 + 32LL))(v14, v4);
      ReleaseInterface<CResource>((__int64 *)&v14);
      ReleaseInterface<CResource>((__int64 *)&v13);
      ++v7;
      v5 = (struct ID2D1InkStyle *)((char *)v5 + 8);
      if ( v7 >= (unsigned int)v9 )
      {
        v3 = v14;
        v5 = v13;
        goto LABEL_5;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, ID2D1InkAndInkStyle, 0x6Au, 0LL);
    v3 = v14;
    v5 = v13;
  }
  else
  {
LABEL_5:
    (*(void (__fastcall **)(CInk *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  }
  if ( v3 )
    (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v3 + 16LL))(v3);
  if ( v5 )
    (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
