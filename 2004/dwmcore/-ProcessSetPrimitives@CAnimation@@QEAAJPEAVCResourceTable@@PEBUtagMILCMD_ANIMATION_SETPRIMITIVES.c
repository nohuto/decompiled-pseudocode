/*
 * XREFs of ?ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETPRIMITIVES@@@Z @ 0x18002DBA4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x18002DC40 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     ??$ReleaseInterface@VCAnimationPrimitiveBuffer@@@@YAXAEAPEAVCAnimationPrimitiveBuffer@@@Z @ 0x18002DD70 (--$ReleaseInterface@VCAnimationPrimitiveBuffer@@@@YAXAEAPEAVCAnimationPrimitiveBuffer@@@Z.c)
 *     ?Create@CSharedSectionAnimationPrimitiveBuffer@@SAJPEAVCSharedSection@@IIPEAPEAV1@@Z @ 0x18002DD94 (-Create@CSharedSectionAnimationPrimitiveBuffer@@SAJPEAVCSharedSection@@IIPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A61E4 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CAnimation::ProcessSetPrimitives(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_SETPRIMITIVES *a3)
{
  struct CSharedSection *Resource; // rax
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // edi
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ecx
  struct CSharedSectionAnimationPrimitiveBuffer *v13; // [rsp+50h] [rbp+18h] BYREF

  Resource = (struct CSharedSection *)CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 169LL);
  v6 = CSharedSectionAnimationPrimitiveBuffer::Create(Resource, *((_DWORD *)a3 + 3), *((_DWORD *)a3 + 4), &v13);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x15Eu, 0LL);
  }
  else
  {
    ReleaseInterface<CAnimationPrimitiveBuffer>((char *)this + 120);
    v9 = *((_QWORD *)this + 18);
    *((_QWORD *)this + 15) = v13;
    if ( !v9 || *(_QWORD *)(v9 + 88) )
    {
      v10 = CBaseAnimation::RegisterAnimateResource(this);
      v8 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x168u, 0LL);
    }
  }
  return v8;
}
