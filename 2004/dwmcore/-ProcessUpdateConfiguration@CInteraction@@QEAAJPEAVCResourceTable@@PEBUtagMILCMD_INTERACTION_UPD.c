/*
 * XREFs of ?ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_UPDATECONFIGURATION@@PEBXI@Z @ 0x18009A2D8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyUpdateConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4Enum@InteractionConfigurationUpdateType@@W43InteractionInputType@@IPEBXI@Z @ 0x18009A3DC (-NotifyUpdateConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4Enum@InteractionConfig.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18009A50C (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?TraceUpdatedConfiguration@CInteraction@@QEAAXW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@IPEBX@Z @ 0x18009A560 (-TraceUpdatedConfiguration@CInteraction@@QEAAXW4Enum@InteractionConfigurationUpdateType@@W42Inte.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7C34 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CInteraction::ProcessUpdateConfiguration(
        CComposition **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTION_UPDATECONFIGURATION *a3,
        const void *a4,
        unsigned int a5)
{
  int v6; // r8d
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // kr00_8
  unsigned int v12; // esi
  CComposition *v13; // rbx
  int ManipulationManager; // eax
  unsigned int v15; // ebx
  int v17; // r9d
  unsigned int v18[2]; // [rsp+20h] [rbp-38h]
  unsigned int v19; // [rsp+20h] [rbp-38h]
  struct CManipulationManager *v20; // [rsp+68h] [rbp+10h] BYREF

  v20 = 0LL;
  v6 = *((_DWORD *)a3 + 4);
  if ( v6 == 1 || v6 == 2 || v6 == 3 )
  {
LABEL_4:
    v9 = 12LL;
    goto LABEL_5;
  }
  if ( v6 != 4 )
  {
    if ( v6 != 5 )
    {
      v15 = -2147024809;
      v19 = 344;
LABEL_15:
      v17 = v15;
LABEL_20:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v17, v19, 0LL);
      goto LABEL_9;
    }
    goto LABEL_4;
  }
  v9 = 4LL;
LABEL_5:
  v11 = v9;
  v10 = *((unsigned int *)a3 + 2) * v9;
  if ( !is_mul_ok(*((unsigned int *)a3 + 2), v11) )
  {
    v15 = -2147024362;
    v19 = 347;
    goto LABEL_15;
  }
  v12 = a5;
  if ( v10 != a5 )
  {
    v15 = -2003303421;
    v19 = 351;
    goto LABEL_15;
  }
  v18[1] = HIDWORD(a4);
  CInteraction::TraceUpdatedConfiguration(this, *((unsigned int *)a3 + 3));
  v13 = this[3];
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  ManipulationManager = CComposition::GetManipulationManager(v13, &v20);
  v15 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v19 = 359;
    goto LABEL_19;
  }
  v18[0] = *((_DWORD *)a3 + 2);
  ManipulationManager = CManipulationManager::NotifyUpdateConfiguration(
                          this,
                          this,
                          *((unsigned int *)a3 + 3),
                          *((unsigned int *)a3 + 4),
                          *(_QWORD *)v18,
                          a4,
                          v12);
  v15 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v19 = 361;
LABEL_19:
    v17 = ManipulationManager;
    goto LABEL_20;
  }
LABEL_9:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  return v15;
}
