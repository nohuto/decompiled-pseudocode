/*
 * XREFs of ?GetDesktopTree@CGlobalComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z @ 0x180035A00
 * Callers:
 *     ?Partition_DesktopCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x18008C240 (-Partition_DesktopCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800386EC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x18003D678 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800B5D50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     _Init_thread_footer @ 0x1800E1D10 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E1D78 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalComposition::GetDesktopTree(
        CGlobalComposition *this,
        struct _LUID a2,
        struct CDesktopTree **a3)
{
  DWORD LowPart; // ebx
  unsigned int v6; // edi
  CMILCOMBase **i; // rax
  struct CDesktopTree *v8; // rsi
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  int v11; // eax
  __int64 v12; // rcx
  LONG HighPart; // [rsp+6Ch] [rbp+14h]
  char *v14; // [rsp+70h] [rbp+18h] BYREF

  HighPart = a2.HighPart;
  LowPart = a2.LowPart;
  v6 = -2147023728;
  if ( dword_18034D270 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18034D270);
    if ( dword_18034D270 == -1 )
    {
      dword_180347A9C = -2147023728;
      Init_thread_footer(&dword_18034D270);
    }
  }
  *a3 = 0LL;
  v14 = (char *)this + 16;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  for ( i = (CMILCOMBase **)*((_QWORD *)this + 7); i != *((CMILCOMBase ***)this + 8); ++i )
  {
    v8 = *i;
    if ( *((_QWORD *)*i + 737) == __PAIR64__(HighPart, LowPart) )
    {
      CMILCOMBase::InternalAddRef(*i);
      v6 = 0;
      *a3 = v8;
      goto LABEL_6;
    }
  }
  if ( __PAIR64__(HighPart, LowPart) == 0xFFFFFFFE00000000uLL )
  {
    PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*((CRenderTargetManager **)this + 11));
    if ( PrimaryMonitorTarget )
    {
      v11 = (*(__int64 (__fastcall **)(struct IMonitorTarget *, struct CDesktopTree **))(*(_QWORD *)PrimaryMonitorTarget
                                                                                       + 8LL))(
              PrimaryMonitorTarget,
              a3);
      v6 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_180347A98, 2u, v11, 0xB1u, 0LL);
    }
  }
LABEL_6:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v14);
  return v6;
}
