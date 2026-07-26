/*
 * XREFs of ?CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00FC548
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FB79C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Dd @ 0x1C0016EB0 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C002A744 (WPP_RECORDER_SF_Zq.c)
 *     WPP_RECORDER_SF__guid_D @ 0x1C00AC210 (WPP_RECORDER_SF__guid_D_ea_1C00AC210.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FD314 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00FD39C (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 */

void __fastcall Ndis::BindRules::CoalesceFilterAttachDuringBoot(
        Ndis::BindRules *this,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct Ndis::BindStack *a3)
{
  char v5; // r9
  unsigned __int64 BaseMiniport_high; // r10
  unsigned __int64 i; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  Ndis::BindState *v10; // rdi
  unsigned int m_unbindReasons; // r8d
  unsigned int v12; // edx
  unsigned int m_pauseReasons; // r8d
  unsigned int v14; // edx
  int v15; // edx
  int v16; // edx
  unsigned __int16 *v17; // rax
  unsigned __int16 v18; // r9
  bool v19; // cf
  int v20; // [rsp+20h] [rbp-38h]
  char v21[8]; // [rsp+30h] [rbp-28h]

  v5 = 0;
  if ( *((_BYTE *)this + 1995) )
  {
    BaseMiniport_high = HIDWORD(a2->BaseMiniport);
    for ( i = 0LL; i != BaseMiniport_high; ++i )
    {
      if ( i >= BaseMiniport_high )
        __fastfail(5u);
      v8 = *((_QWORD *)a2->MiniportAdapterContext + i);
      if ( *(_DWORD *)(v8 + 52) || *(_DWORD *)(v8 + 28) )
      {
        v9 = *(_QWORD *)(v8 + 80);
        if ( (*(_DWORD *)(v9 + 40) & 1) == 0 && !*(_QWORD *)(v9 + 56) && !*(_BYTE *)(v8 + 8) )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
            WPP_RECORDER_SF__guid_D(*((_QWORD *)WPP_GLOBAL_Control + 8), v9 + 24, v8, 0x22u, v20, v9 + 24);
          v5 = 1;
          break;
        }
      }
    }
  }
  v10 = (Ndis::BindState *)&a2->32;
  if ( v5 )
  {
    if ( Ndis::BindState::SetBinding(v10, BindingDisabled, Reason_MandatoryMissingDuringBoot)
      && (unsigned __int8)byte_1C00E448B >= 4u
      && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_Zq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v16,
        0x1Cu,
        0x23u,
        (struct _GUID *)&WPP_03205896d2953af44399314f6c3788db_Traceguids,
        *((unsigned __int16 **)this + 482),
        this);
    }
    if ( Ndis::BindState::SetPause(v10, DatapathPaused, PauseReason_MandatoryMissingDuringBoot)
      && (unsigned __int8)byte_1C00E448B >= 4u )
    {
      v17 = (unsigned __int16 *)*((_QWORD *)this + 482);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v18 = 36;
LABEL_53:
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v14,
          0x1Cu,
          v18,
          (struct _GUID *)&WPP_03205896d2953af44399314f6c3788db_Traceguids,
          v17,
          this);
      }
    }
  }
  else if ( *((_BYTE *)this + 1995) )
  {
    m_unbindReasons = v10->m_unbindReasons;
    v12 = m_unbindReasons & 0xFFFFFEFF;
    v10->m_unbindReasons = m_unbindReasons & 0xFFFFFEFF;
    if ( (m_unbindReasons != 0) != ((m_unbindReasons & 0xFFFFFEFF) != 0) || !v10->Miniport )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xEu,
          (struct _GUID *)&WPP_059f2550fb64352c12bb44eb1234267b_Traceguids,
          m_unbindReasons,
          v12);
      v19 = (unsigned __int8)byte_1C00E448B < 4u;
      v10->Miniport->BindEngine.m_isDirty = 1;
      if ( !v19 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v12,
          0x1Cu,
          0x25u,
          (struct _GUID *)&WPP_03205896d2953af44399314f6c3788db_Traceguids,
          *((unsigned __int16 **)this + 482),
          this);
    }
    m_pauseReasons = v10->m_pauseReasons;
    v14 = m_pauseReasons & 0xFFFFFFBF;
    v10->m_pauseReasons = m_pauseReasons & 0xFFFFFFBF;
    if ( (m_pauseReasons != 0) != ((m_pauseReasons & 0xFFFFFFBF) != 0) || !v10->Miniport )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        *(_DWORD *)v21 = m_pauseReasons & 0xFFFFFFBF;
        WPP_RECORDER_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xFu,
          (struct _GUID *)&WPP_059f2550fb64352c12bb44eb1234267b_Traceguids,
          m_pauseReasons,
          *(_QWORD *)v21);
      }
      v19 = (unsigned __int8)byte_1C00E448B < 4u;
      v10->Miniport->BindEngine.m_isDirty = 1;
      if ( !v19 )
      {
        v17 = (unsigned __int16 *)*((_QWORD *)this + 482);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v18 = 38;
          goto LABEL_53;
        }
      }
    }
  }
  else
  {
    if ( Ndis::BindState::SetBinding(v10, BindingEnabled, Reason_MandatoryMissingDuringBoot)
      && (unsigned __int8)byte_1C00E448B >= 4u
      && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_Zq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v15,
        0x1Cu,
        0x27u,
        (struct _GUID *)&WPP_03205896d2953af44399314f6c3788db_Traceguids,
        *((unsigned __int16 **)this + 482),
        this);
    }
    if ( Ndis::BindState::SetPause(v10, DatapathRunning, PauseReason_MandatoryMissingDuringBoot)
      && (unsigned __int8)byte_1C00E448B >= 4u )
    {
      v17 = (unsigned __int16 *)*((_QWORD *)this + 482);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v18 = 40;
        goto LABEL_53;
      }
    }
  }
}
