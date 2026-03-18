/*
 * XREFs of ?ProcessBasicStateUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INK_BASICSTATEUPDATE@@@Z @ 0x1801C92E4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z @ 0x1800B3EF4 (--$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x1801C9280 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::ProcessBasicStateUpdate(
        CInk *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INK_BASICSTATEUPDATE *a3)
{
  struct ID2D1Ink *v3; // rdi
  char *v4; // r12
  struct ID2D1InkStyle *v5; // rbx
  unsigned int v6; // ebp
  unsigned int v8; // r15d
  __int64 v9; // r14
  int ID2D1InkAndInkStyle; // eax
  __int64 v11; // rcx
  struct ID2D1InkStyle *v12; // rbx
  struct ID2D1Ink *v14; // [rsp+60h] [rbp+8h] BYREF
  struct ID2D1InkStyle *v15; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = (char *)this + 168;
  v14 = 0LL;
  v5 = 0LL;
  v15 = 0LL;
  v6 = 0;
  v8 = 0;
  *((_DWORD *)this + 41) = *((_DWORD *)a3 + 6) != 0;
  *(_OWORD *)((char *)this + 168) = *(_OWORD *)((char *)a3 + 28);
  *((_QWORD *)this + 23) = *(_QWORD *)((char *)a3 + 44);
  *((_DWORD *)this + 29) = *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 28) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 27) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 26) = *((_DWORD *)a3 + 2);
  v9 = (__int64)(*((_QWORD *)this + 11) - *((_QWORD *)this + 10)) >> 3;
  if ( (_DWORD)v9 )
  {
    while ( 1 )
    {
      ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(
                              *(CD2DInk **)((char *)v3 + *((_QWORD *)this + 10)),
                              &v14,
                              &v15);
      v6 = ID2D1InkAndInkStyle;
      if ( ID2D1InkAndInkStyle < 0 )
        break;
      v12 = v15;
      (*(void (__fastcall **)(struct ID2D1InkStyle *, _QWORD))(*(_QWORD *)v15 + 48LL))(
        v15,
        *((unsigned int *)this + 41));
      (*(void (__fastcall **)(struct ID2D1InkStyle *, char *))(*(_QWORD *)v12 + 32LL))(v12, v4);
      ReleaseInterface<CResource>((__int64 *)&v14);
      ReleaseInterface<CResource>((__int64 *)&v15);
      ++v8;
      v3 = (struct ID2D1Ink *)((char *)v3 + 8);
      if ( v8 >= (unsigned int)v9 )
      {
        v3 = v14;
        v5 = v15;
        goto LABEL_5;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, ID2D1InkAndInkStyle, 0x44u, 0LL);
    v3 = v14;
    v5 = v15;
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
