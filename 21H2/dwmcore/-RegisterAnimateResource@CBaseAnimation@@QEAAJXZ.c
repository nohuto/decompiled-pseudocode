/*
 * XREFs of ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800E65D4
 * Callers:
 *     ?ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETPRIMITIVES@@@Z @ 0x1800E6534 (-ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETPRIMITIVES.c)
 *     ?ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_APPEND@@PEBXI@Z @ 0x180209628 (-ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_APPEND@@PEBXI@Z.c)
 *     ?OnAddBinding@CScalar@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z @ 0x18023B860 (-OnAddBinding@CScalar@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z.c)
 *     ?ProcessSetValue@CScalar@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCALAR_SETVALUE@@@Z @ 0x18023B89C (-ProcessSetValue@CScalar@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCALAR_SETVALUE@@@Z.c)
 *     ?ProcessTrigger@CLegacyAnimationTrigger@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYANIMATIONTRIGGER_TRIGGER@@@Z @ 0x180244A18 (-ProcessTrigger@CLegacyAnimationTrigger@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYANIMATIONT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?RegisterResourceForAnimationTelemetry@CComposition@@QEAAXPEBVCResource@@PEBU_GUID@@I@Z @ 0x1800E66D8 (-RegisterResourceForAnimationTelemetry@CComposition@@QEAAXPEBVCResource@@PEBU_GUID@@I@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseAnimation::RegisterAnimateResource(CBaseAnimation *this)
{
  unsigned int v1; // ebx
  __int64 v3; // r10
  char *v4; // r14
  unsigned int v5; // eax
  unsigned int v6; // edx
  const struct _GUID *v7; // rsi
  unsigned int v8; // eax
  int v10; // eax
  __int64 v11; // rcx
  int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rcx
  char *v15; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_BYTE *)this + 104) )
    return v1;
  v3 = *((_QWORD *)this + 2);
  v4 = (char *)this + 64;
  v15 = (char *)this + 64;
  v5 = *(_DWORD *)(v3 + 712);
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v1 = -2147024362;
    v12 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2147024362, 0xB5u);
    goto LABEL_13;
  }
  if ( v6 <= *(_DWORD *)(v3 + 708) )
  {
    *(_QWORD *)(*(_QWORD *)(v3 + 688) + 8LL * v5) = v4;
    *(_DWORD *)(v3 + 712) = v6;
    goto LABEL_5;
  }
  v10 = DynArrayImpl<0>::AddMultipleAndSet(v3 + 688, 8u, 1, &v15);
  v12 = v10;
  v1 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0xC0u);
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x861u);
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v12, 0x78u);
    return v1;
  }
LABEL_5:
  v7 = (const struct _GUID *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v4 + 16LL))(v4);
  v8 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v4 + 32LL))(v4);
  if ( v7 || v8 )
    CComposition::RegisterResourceForAnimationTelemetry(*((CComposition **)this + 2), this, v7, v8);
  *((_BYTE *)this + 104) = 1;
  return v1;
}
