/*
 * XREFs of ?PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00FBA1C
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FB79C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Dd @ 0x1C0016EB0 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C002A744 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00FD39C (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01230C0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::PauseNeededForBind(
        Ndis::BindRules *this,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct Ndis::BindStack *a3)
{
  unsigned __int16 *v3; // rbx
  unsigned __int64 BaseMiniport_high; // rcx
  unsigned __int64 i; // r14
  _QWORD *MiniportAdapterContext; // r15
  __int64 v9; // rax
  int v10; // r8d
  bool v11; // zf
  int v12; // eax
  unsigned __int64 v13; // r9
  unsigned __int64 j; // rdi
  _NDIS_MINIPORT_BLOCK *NextMiniport; // r14
  __int64 v16; // rcx
  int v17; // r8d
  __int64 v18; // rdx
  int v19; // eax
  $474C1527283D704F518D918A58DB716F *v20; // r14
  int v21; // r8d
  unsigned int v22; // edx
  int SpinLock_high; // edx
  int v24; // eax
  bool v25; // cf
  int v26; // edx
  unsigned __int16 v27; // r9
  unsigned __int16 *v28[20]; // [rsp+40h] [rbp-C8h] BYREF

  v3 = 0LL;
  BaseMiniport_high = HIDWORD(a2->BaseMiniport);
  for ( i = 0LL; i != BaseMiniport_high; ++i )
  {
    if ( i >= BaseMiniport_high )
LABEL_51:
      __fastfail(5u);
    MiniportAdapterContext = a2->MiniportAdapterContext;
    v9 = MiniportAdapterContext[i];
    v10 = *(_DWORD *)(v9 + 52);
    if ( v10 || *(_DWORD *)(v9 + 28) )
    {
      v11 = *(_BYTE *)(v9 + 9) == 0;
      v12 = 0;
      if ( v11 )
        LOBYTE(v12) = v10 == 0;
      if ( (*(_DWORD *)(MiniportAdapterContext[i] + 32LL) != 0) != v12 )
      {
        SpinLock_high = HIDWORD(a2->ShortRef.SpinLock);
        v24 = HIDWORD(a2->ShortRef.SpinLock) | 4;
        HIDWORD(a2->ShortRef.SpinLock) = v24;
        if ( !SpinLock_high || !*(_QWORD *)&a2->Reserved4.Length )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
            WPP_RECORDER_SF_Dd(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xFu,
              (struct _GUID *)&WPP_059f2550fb64352c12bb44eb1234267b_Traceguids,
              SpinLock_high,
              v24);
          *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5208LL) = 1;
          memset(v28, 0, sizeof(v28));
          if ( (unsigned __int8)byte_1C00E448B >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              (struct NDIS_BIND_FILTER_LINK *)MiniportAdapterContext[i],
              (struct NDIS_PNPTRACE_LOCALS *)v28);
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v26,
                0x1Cu,
                0x3Eu,
                (struct _GUID *)&WPP_03205896d2953af44399314f6c3788db_Traceguids,
                v28[1],
                v28[0]);
          }
        }
        return;
      }
    }
  }
  v13 = *((unsigned int *)&a2->Header + 1);
  for ( j = 0LL; j != v13; ++j )
  {
    if ( j >= v13 )
      goto LABEL_51;
    NextMiniport = a2->NextMiniport;
    v16 = *((_QWORD *)&NextMiniport->Header.Type + j);
    v17 = *(_DWORD *)(v16 + 52);
    if ( v17 || *(_DWORD *)(v16 + 28) )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(v16 + 80) + 40LL);
      if ( v18
        && *(_BYTE *)(v18 + 56) >= 6u
        && ((v19 = *(_DWORD *)(v16 + 32)) != 0 && (*(_BYTE *)(v16 + 9) || v17)
         || !*((_BYTE *)this + 1995) && !v19 && !*(_BYTE *)(v16 + 9) && !v17) )
      {
        if ( Ndis::BindState::SetPause((Ndis::BindState *)&a2->32, DatapathPaused, PauseReason_Pnp)
          && (unsigned __int8)byte_1C00E448B >= 4u
          && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)&NextMiniport->Header.Type + j) + 80LL) + 24LL),
            0x1Cu,
            0x3Fu,
            (struct _GUID *)&WPP_03205896d2953af44399314f6c3788db_Traceguids,
            *(unsigned __int16 **)(*(_QWORD *)(*((_QWORD *)&NextMiniport->Header.Type + j) + 80LL) + 24LL),
            **((_QWORD **)&NextMiniport->Header.Type + j));
        }
        return;
      }
    }
  }
  v20 = &a2->32;
  if ( LODWORD(a2->ShortRef.SpinLock) )
  {
    if ( Ndis::BindState::SetPause((Ndis::BindState *)&a2->32, DatapathPaused, PauseReason_Pnp)
      && (unsigned __int8)byte_1C00E448B >= 4u )
    {
      if ( this )
        v3 = (unsigned __int16 *)*((_QWORD *)this + 482);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v27 = 64;
LABEL_61:
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v22,
          0x1Cu,
          v27,
          (struct _GUID *)&WPP_03205896d2953af44399314f6c3788db_Traceguids,
          v3,
          this);
      }
    }
  }
  else
  {
    v21 = HIDWORD(a2->ShortRef.SpinLock);
    v22 = v21 & 0xFFFFFFFB;
    HIDWORD(a2->ShortRef.SpinLock) = v21 & 0xFFFFFFFB;
    if ( (v21 != 0) != ((v21 & 0xFFFFFFFB) != 0) || !*(_QWORD *)&v20->Reserved4.Length )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xFu,
          (struct _GUID *)&WPP_059f2550fb64352c12bb44eb1234267b_Traceguids,
          v21,
          v22);
      v25 = (unsigned __int8)byte_1C00E448B < 4u;
      *(_BYTE *)(*(_QWORD *)&v20->Reserved4.Length + 5208LL) = 1;
      if ( !v25 )
      {
        if ( this )
          v3 = (unsigned __int16 *)*((_QWORD *)this + 482);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v27 = 65;
          goto LABEL_61;
        }
      }
    }
  }
}
