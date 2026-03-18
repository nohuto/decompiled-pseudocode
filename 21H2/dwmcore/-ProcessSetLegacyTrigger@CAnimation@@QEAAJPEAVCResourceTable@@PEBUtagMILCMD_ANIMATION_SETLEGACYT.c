/*
 * XREFs of ?ProcessSetLegacyTrigger@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETLEGACYTRIGGER@@@Z @ 0x180209940
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimation::ProcessSetLegacyTrigger(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_SETLEGACYTRIGGER *a3)
{
  __int64 Resource; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned int v8; // edx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v13; // eax
  __int64 v14; // rcx
  CAnimation *v15; // [rsp+40h] [rbp+8h] BYREF

  Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x5Cu);
  *((_QWORD *)this + 19) = Resource;
  v6 = Resource;
  if ( Resource )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Resource + 8LL))(Resource);
  v7 = *(unsigned int *)(v6 + 88);
  v15 = this;
  v8 = v7 + 1;
  if ( (int)v7 + 1 < (unsigned int)v7 )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0xDDu);
    return v9;
  }
  v9 = 0;
  if ( v8 > *(_DWORD *)(v6 + 84) )
  {
    v13 = DynArrayImpl<0>::AddMultipleAndSet(v6 + 64, 8u, 1, &v15);
    v9 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0xC0u);
      goto LABEL_12;
    }
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(v6 + 64) + 8 * v7) = this;
    *(_DWORD *)(v6 + 88) = v8;
  }
  v11 = *(_QWORD *)(v6 + 96);
  if ( v11 )
  {
    *((_QWORD *)this + 18) = v11;
    *((_QWORD *)this + 27) = v11;
  }
  return v9;
}
