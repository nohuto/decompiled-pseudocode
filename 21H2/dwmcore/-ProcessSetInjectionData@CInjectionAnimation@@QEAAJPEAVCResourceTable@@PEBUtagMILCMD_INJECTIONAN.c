/*
 * XREFs of ?ProcessSetInjectionData@CInjectionAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INJECTIONANIMATION_SETINJECTIONDATA@@@Z @ 0x18021735C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z @ 0x1800469AC (-ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x18004A1C4 (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 */

__int64 __fastcall CInjectionAnimation::ProcessSetInjectionData(
        CInjectionAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INJECTIONANIMATION_SETINJECTIONDATA *a3)
{
  unsigned int v6; // edx
  CSharedSectionBase *Resource; // rbp
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  const void *v11; // rbx
  void *v12; // rax
  unsigned int v14; // [rsp+20h] [rbp-18h]

  if ( *((_QWORD *)this + 42) || (v6 = *((_DWORD *)a3 + 2)) == 0 )
  {
    v14 = 62;
    goto LABEL_13;
  }
  Resource = (CSharedSectionBase *)CResourceTable::GetResource((__int64)a2, v6, 0xA8u);
  if ( !Resource )
  {
    v14 = 68;
LABEL_13:
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2003303421, v14);
    return v10;
  }
  *((_DWORD *)this + 87) = *((_DWORD *)a3 + 4) / 0x84u;
  v8 = CBaseExpression::SetChannelHandle(this, *((_DWORD *)a2 + 12));
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0x4Cu);
  }
  else
  {
    v11 = CSharedSectionBase::ResolveAllocation(Resource, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 4));
    if ( !v11 )
    {
      v14 = 86;
      goto LABEL_13;
    }
    v12 = operator new(saturated_mul(*((int *)this + 87), 0x84uLL));
    *((_QWORD *)this + 42) = v12;
    if ( v12 )
    {
      memcpy_0(v12, v11, 132LL * *((int *)this + 87));
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 424LL) + 448LL) |= 2u;
      return 0;
    }
    else
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0LL, -2147024882, 0x5Fu);
    }
  }
  return v10;
}
