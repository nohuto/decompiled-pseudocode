/*
 * XREFs of ndisNsiGetInterfaceRodEnumObject @ 0x1C00F8C10
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00098F0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000C780 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000F740 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000DF10 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C003FB80 (memmove.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     ?ndisGetMiniportIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU1@@Z @ 0x1C00F9C00 (-ndisGetMiniportIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU1@@Z.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRodEnumObject(struct _NDIS_IF_BLOCK *a1, struct _NDIS_IF_BLOCK *a2, __int64 a3)
{
  __int64 v3; // rbx
  struct _NDIS_IF_BLOCK *v5; // r13
  unsigned int v6; // edi
  struct _NDIS_IF_BLOCK *v7; // r12
  char *v8; // r15
  unsigned int v9; // r14d
  int v10; // ebp
  char v11; // r8
  unsigned int v12; // ebx
  const void *p_ifOperStatusFlags; // rdx
  unsigned int v14; // esi
  int v15; // edi
  unsigned int v16; // ecx
  unsigned int v17; // r14d
  void *ProviderIfContext; // rcx
  unsigned int (__fastcall *v20)(void *, _QWORD, unsigned int *, char *); // rax
  unsigned int v21; // ecx
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  __int64 v23; // r15
  unsigned __int16 v24; // cx
  char *v25; // r12
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rdx
  unsigned int Interrupt_low; // r13d
  __int64 v28; // rdi
  char *v29; // rcx
  char v30; // [rsp+40h] [rbp-298h]
  unsigned int v31; // [rsp+44h] [rbp-294h] BYREF
  struct _NDIS_IF_BLOCK *v32; // [rsp+48h] [rbp-290h]
  char *v33; // [rsp+50h] [rbp-288h]
  _NDIS_MINIPORT_BLOCK *v34; // [rsp+58h] [rbp-280h]
  struct _NDIS_IF_BLOCK *v35; // [rsp+60h] [rbp-278h]
  struct _NDIS_IF_BLOCK *v36; // [rsp+68h] [rbp-270h]
  __int64 v37; // [rsp+70h] [rbp-268h]
  char v38[528]; // [rsp+80h] [rbp-258h] BYREF

  v3 = a3;
  v32 = a2;
  v35 = a1;
  v5 = a1;
  v37 = a3;
  v6 = 0;
  memset(v38, 0, 0x204uLL);
  v7 = a2;
  if ( !a2 )
    v7 = v5;
  v36 = v7;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xAu,
      (struct _GUID *)&WPP_aa66c5b77aef37206a2c806e5c5446f1_Traceguids,
      (char)v5,
      v3);
  v8 = *(char **)(v3 + 40);
  v9 = *(_DWORD *)(v3 + 52);
  v10 = *(_DWORD *)(v3 + 48);
  v33 = v8;
  if ( v8 )
  {
    v11 = 0;
    v30 = 0;
    if ( v10 > 0 )
    {
      while ( 1 )
      {
        if ( v11 )
        {
LABEL_18:
          v3 = v37;
          break;
        }
        v12 = 0;
        p_ifOperStatusFlags = 0LL;
        if ( v9 > 0x218 )
        {
          switch ( v9 )
          {
            case 0x21Cu:
              v14 = 4;
              v15 = 544;
              p_ifOperStatusFlags = &ndisGetMiniportIfBlock(v7)->ifOperStatusFlags;
              goto LABEL_13;
            case 0x220u:
              v14 = 4;
              v12 = 65798;
              v15 = 548;
              goto LABEL_13;
            case 0x224u:
              v14 = 34;
              if ( v5->bNdisIsProvider )
                p_ifOperStatusFlags = &v7->ifPhysAddress;
              else
                v12 = 16843010;
              v15 = 582;
              goto LABEL_13;
            case 0x246u:
              v14 = 34;
              if ( v5->bNdisIsProvider )
                p_ifOperStatusFlags = &v7->PermanentPhysAddress;
              else
                v12 = 16843009;
              v15 = 616;
              goto LABEL_13;
            case 0x268u:
              v14 = 4;
              v12 = 66184;
              v15 = 624;
              goto LABEL_13;
            case 0x270u:
              v14 = 8;
              if ( v32 )
                p_ifOperStatusFlags = &ndisGetMiniportIfBlock(v32)->XmitLinkSpeed;
              else
                v12 = 66180;
              v15 = 632;
              goto LABEL_13;
            case 0x278u:
              v14 = 8;
              if ( v32 )
                p_ifOperStatusFlags = &ndisGetMiniportIfBlock(v32)->RcvLinkSpeed;
              else
                v12 = 66181;
              v15 = 640;
              goto LABEL_13;
            case 0x280u:
              v14 = 1;
              if ( v5->bNdisIsProvider )
                p_ifOperStatusFlags = &ndisGetMiniportIfBlock(v5)->ifPromiscuousMode;
              else
                v12 = 66176;
              v15 = 641;
              goto LABEL_13;
            case 0x281u:
              v14 = 1;
              p_ifOperStatusFlags = &v5->ifDeviceWakeUpEnable;
              v15 = 642;
              goto LABEL_13;
            case 0x282u:
              v14 = 1;
              p_ifOperStatusFlags = &v5->ifHideInterfaceInUi;
              v15 = 644;
              goto LABEL_13;
            case 0x284u:
              v14 = 4;
              if ( v32 )
                p_ifOperStatusFlags = &ndisGetMiniportIfBlock(v32)->MediaConnectState;
              else
                v12 = 66186;
              v15 = 648;
              goto LABEL_13;
            case 0x288u:
              v14 = 4;
              if ( v32 )
                p_ifOperStatusFlags = &ndisGetMiniportIfBlock(v32)->MediaDuplexState;
              else
                v12 = 66188;
              v15 = v9 + 4;
              v30 = 1;
              goto LABEL_13;
            default:
              goto LABEL_90;
          }
        }
        if ( v9 == 536 )
        {
          v14 = 4;
          v12 = 66179;
          v15 = 540;
        }
        else if ( v9 )
        {
          if ( v9 == 4 )
          {
            v14 = 16;
            p_ifOperStatusFlags = &v5->NetworkGuid;
            v15 = 20;
          }
          else
          {
            if ( v9 != 20 )
            {
LABEL_90:
              v11 = 1;
              v30 = 1;
              goto LABEL_17;
            }
            v14 = 516;
            if ( !v5->bNdisIsProvider )
            {
              v12 = 66185;
              goto LABEL_34;
            }
            if ( !v5->IsNdisFilter )
            {
              p_ifOperStatusFlags = &v5->ifAlias;
LABEL_34:
              v15 = 536;
              goto LABEL_13;
            }
            Miniport = v5->Miniport;
            v34 = Miniport;
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0x16u,
                0xEu,
                (struct _GUID *)&WPP_26c79ab3a5fb310107e5718cdb1d7c6d_Traceguids,
                (char)Miniport,
                v38);
            memset(v38, 0, 0x204uLL);
            *(_WORD *)v38 = LOWORD(Miniport->BaseMiniport->Interrupt)
                          + 12
                          + *(_WORD *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4040LL) + 596LL);
            if ( *(_WORD *)v38 > 0x200u )
              *(_WORD *)v38 = 512;
            memmove(
              &v38[2],
              (const void *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4040LL) + 598LL),
              *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4040LL) + 596LL));
            v23 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4040LL) + 596LL);
            v24 = *(_WORD *)v38;
            v25 = &v38[v23 + 2];
            if ( *(unsigned __int16 *)v38 - (unsigned int)v23 >= 2 )
            {
              LODWORD(v23) = v23 + 2;
              *(_WORD *)v25 = 45;
              v25 += 2;
              v24 = *(_WORD *)v38;
            }
            if ( v24 > (unsigned int)v23 )
            {
              BaseMiniport = Miniport->BaseMiniport;
              Interrupt_low = LOWORD(BaseMiniport->Interrupt);
              if ( v24 - (unsigned int)v23 <= Interrupt_low )
                Interrupt_low = v24 - (_DWORD)v23;
              v28 = Interrupt_low;
              memmove(v25, *(const void **)&BaseMiniport->Flags, Interrupt_low);
              v24 = *(_WORD *)v38;
              LODWORD(v23) = Interrupt_low + v23;
              v5 = v35;
              v25 += v28;
              Miniport = v34;
            }
            if ( v24 - (unsigned int)v23 >= 2 )
            {
              LODWORD(v23) = v23 + 2;
              *(_WORD *)v25 = 45;
              v25 += 2;
              v24 = *(_WORD *)v38;
            }
            if ( v24 - (unsigned int)v23 >= 8 )
              *(_QWORD *)v25 = *(_QWORD *)(*((_QWORD *)Miniport->Reserved4.Buffer + 1)
                                         + 2 * (((unsigned __int64)*Miniport->Reserved4.Buffer - 8) >> 1));
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0x16u,
                0xFu,
                (struct _GUID *)&WPP_26c79ab3a5fb310107e5718cdb1d7c6d_Traceguids,
                (char)Miniport,
                v38);
            v8 = v33;
            p_ifOperStatusFlags = v38;
            v7 = v36;
            v15 = 536;
          }
        }
        else
        {
          v14 = 4;
          p_ifOperStatusFlags = &v5->_NDIS_NSI_INTERFACE_ENUM_ROD;
          v15 = 4;
        }
LABEL_13:
        if ( v10 < (int)v14 )
          goto LABEL_90;
        if ( v12 )
        {
          ProviderIfContext = v7->ProviderIfContext;
          v20 = (unsigned int (__fastcall *)(void *, _QWORD, unsigned int *, char *))*((_QWORD *)v7->ProviderHandle + 7);
          v31 = v14;
          if ( v20(ProviderIfContext, v12, &v31, v8) )
          {
            v29 = v8;
          }
          else
          {
            if ( v31 >= v14 )
            {
LABEL_26:
              v11 = v30;
              v21 = v15 - v9;
              v9 = v15;
              v8 += v21;
              v33 = v8;
              v10 -= v21;
              goto LABEL_17;
            }
            v14 -= v31;
            v29 = &v8[v31];
          }
          memset(v29, 0, v14);
          goto LABEL_26;
        }
        if ( !p_ifOperStatusFlags )
          goto LABEL_90;
        memmove(v8, p_ifOperStatusFlags, v14);
        v11 = v30;
        v16 = v15 - v9;
        v9 = v15;
        v8 += v16;
        v33 = v8;
        v10 -= v16;
LABEL_17:
        v6 = 0;
        if ( v10 <= 0 )
          goto LABEL_18;
      }
    }
    v17 = v9 - *(_DWORD *)(v3 + 52);
    *(_DWORD *)(v3 + 48) = v17;
    if ( !v17 )
      v6 = -1073741811;
  }
  else
  {
    *(_DWORD *)(v3 + 48) = 0;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xBu,
      (struct _GUID *)&WPP_aa66c5b77aef37206a2c806e5c5446f1_Traceguids,
      (char)v5,
      v3,
      v6);
  return v6;
}
