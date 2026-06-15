/*
 * XREFs of ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x140010860
 * Callers:
 *     ??1CSystemAudioDeviceBase@@UEAA@XZ @ 0x140010554 (--1CSystemAudioDeviceBase@@UEAA@XZ.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140010710 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ @ 0x1400425F0 (-Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x14003EAC0 (WPP_SF_.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x14004106C (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?RemoveHead@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAPEAVCStreamInstance@@XZ @ 0x140041734 (-RemoveHead@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@Q.c)
 */

void __fastcall CSystemAudioDeviceBase::Cleanup(CSystemAudioDeviceBase *this)
{
  _QWORD *v2; // rcx
  CStreamInstance *v3; // rax
  unsigned int v4; // edx
  CStreamInstance *v5; // rax
  unsigned int v6; // edx
  CStreamInstance *v7; // rax
  unsigned int v8; // edx

  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_f1e963bfbd713e4e52aece766ef55e6a_Traceguids);
    v2 = WPP_GLOBAL_Control;
  }
  if ( *((_QWORD *)this + 13) )
  {
    do
    {
      v3 = (CStreamInstance *)ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveHead((char *)this + 88);
      if ( v3 )
        CStreamInstance::`scalar deleting destructor'(v3, v4);
    }
    while ( *((_QWORD *)this + 13) );
    v2 = WPP_GLOBAL_Control;
  }
  if ( *((_QWORD *)this + 7) )
  {
    do
    {
      v5 = (CStreamInstance *)ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveHead((char *)this + 40);
      if ( v5 )
        CStreamInstance::`scalar deleting destructor'(v5, v6);
    }
    while ( *((_QWORD *)this + 7) );
    v2 = WPP_GLOBAL_Control;
  }
  if ( *((_QWORD *)this + 19) )
  {
    do
    {
      v7 = (CStreamInstance *)ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveHead((char *)this + 136);
      if ( v7 )
        CStreamInstance::`scalar deleting destructor'(v7, v8);
    }
    while ( *((_QWORD *)this + 19) );
    v2 = WPP_GLOBAL_Control;
  }
  if ( v2 != &WPP_GLOBAL_Control && (*((_DWORD *)v2 + 7) & 0x200) != 0 && *((_BYTE *)v2 + 25) >= 4u )
    WPP_SF_(v2[2], 11LL, &WPP_f1e963bfbd713e4e52aece766ef55e6a_Traceguids);
}
