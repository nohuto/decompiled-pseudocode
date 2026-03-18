/*
 * XREFs of ??1CKeyframeAnimation@@UEAA@XZ @ 0x1800986C8
 * Callers:
 *     ??_GCKeyframeAnimation@@UEAAPEAXI@Z @ 0x180097A30 (--_GCKeyframeAnimation@@UEAAPEAXI@Z.c)
 *     ??1CScrollKeyframeAnimation@@UEAA@XZ @ 0x18020DE44 (--1CScrollKeyframeAnimation@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x180089704 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ??$SAFE_DELETE_ARRAY@E@@YAXAEAPEAE@Z @ 0x180096904 (--$SAFE_DELETE_ARRAY@E@@YAXAEAPEAE@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x180097A74 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x180097A9C (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ??$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z @ 0x18009A720 (--$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18009B990 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BC868 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@0@@Z @ 0x1801D25E8 (--$_Destroy_range@V-$allocator@V-$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 */

void __fastcall CKeyframeAnimation::~CKeyframeAnimation(CKeyframeAnimation *this)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx

  *((_BYTE *)this + 540) &= ~1u;
  v1 = 0LL;
  for ( *(_QWORD *)this = &CKeyframeAnimation::`vftable';
        (unsigned int)v1 < *((_DWORD *)this + 98);
        v1 = (unsigned int)(v1 + 1) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 46) + 8 * v1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *((_DWORD *)this + 98) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 368, 8LL);
  if ( (*((_BYTE *)this + 541) & 1) != 0 )
    CKeyframeAnimation::Reset(this, 0, 0LL);
  ReleaseInterface<CD2DSharedBuffer>((char *)this + 320);
  if ( *((_QWORD *)this + 43) )
    ReleaseInterface<CD2DSharedBuffer>((char *)this + 344);
  else
    SAFE_DELETE_ARRAY<unsigned char>((void **)this + 44);
  v3 = *((_QWORD *)this + 53);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CPathData>>>(
      *((_QWORD *)this + 53),
      *((_QWORD *)this + 54));
    std::_Deallocate<16,0>(v3, (*((_QWORD *)this + 55) - v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 53) = 0LL;
    *((_QWORD *)this + 54) = 0LL;
    *((_QWORD *)this + 55) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 368);
  v4 = (_QWORD *)*((_QWORD *)this + 45);
  if ( v4 )
  {
    KeyframeSequence::RemoveAllKeyFrames(*((KeyframeSequence **)this + 45));
    v5 = v4[8];
    if ( v5 )
    {
      v4[8] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    operator delete(v4);
  }
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 39);
  CBaseExpression::~CBaseExpression(this);
}
