/*
 * XREFs of ?ProcessSetInertiaModifierAnimations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETINERTIAMODIFIERANIMATIONS@@PEBXI@Z @ 0x1801CE69C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800809A4 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     memcpy_0 @ 0x1800EBD6B (memcpy_0.c)
 *     ??4?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z @ 0x1801CB744 (--4-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1801CBF78 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetInertiaModifierAnimations(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETINERTIAMODIFIERANIMATIONS *a3,
        const void *a4,
        unsigned int a5)
{
  __int64 Resource; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  SIZE_T v11; // rax

  Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 3), 0x2Bu);
  Microsoft::WRL::ComPtr<CConditionalExpression>::operator=((__int64 *)this + *((unsigned int *)a3 + 2) + 47, Resource);
  v9 = *((_QWORD *)this + *((unsigned int *)a3 + 2) + 47);
  if ( v9 )
    *(_DWORD *)(v9 + 200) = *((_DWORD *)a3 + 1);
  if ( *((_DWORD *)a3 + 4) == a5 )
  {
    operator delete(*((void **)this + *((unsigned int *)a3 + 2) + 51));
    *((_QWORD *)this + *((unsigned int *)a3 + 2) + 51) = 0LL;
    *((_DWORD *)this + *((unsigned int *)a3 + 2) + 110) = *((_DWORD *)a3 + 4);
    if ( *((_DWORD *)a3 + 4) )
    {
      v11 = 4LL * *((unsigned int *)a3 + 4);
      if ( !is_mul_ok(*((unsigned int *)a3 + 4), 4uLL) )
        v11 = -1LL;
      *((_QWORD *)this + *((unsigned int *)a3 + 2) + 51) = operator new(v11);
      memcpy_0(*((void **)this + *((unsigned int *)a3 + 2) + 51), a4, *((unsigned int *)a3 + 4));
    }
    if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 272LL) + 416LL) |= 4u;
    return 0;
  }
  else
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2003303421, 0x32Bu, 0LL);
  }
  return v10;
}
