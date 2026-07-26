/*
 * XREFs of ndisNsiGetInterfaceRosInformation @ 0x1C00F9C30
 * Callers:
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000C780 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000F740 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0009800 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000DF10 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C000F050 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 *     memmove @ 0x1C003F400 (memmove.c)
 *     ?ndisIfQueryProvider@@YAHPEAU_NDIS_IF_BLOCK@@IKPEAX@Z @ 0x1C01268B8 (-ndisIfQueryProvider@@YAHPEAU_NDIS_IF_BLOCK@@IKPEAX@Z.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRosInformation(struct _NDIS_IF_BLOCK *a1, struct _NDIS_IF_BLOCK *a2, __int64 a3)
{
  unsigned int v3; // r15d
  __int64 v4; // rbx
  struct _NDIS_IF_BLOCK *v5; // r12
  char *v6; // r13
  unsigned int v7; // ebp
  int v8; // edi
  char v9; // al
  const void *p_ifType; // rbx
  unsigned int v11; // esi
  unsigned int v12; // r14d
  int v13; // r12d
  unsigned int v14; // ecx
  unsigned int v15; // ebp
  struct _NDIS_MINIPORT_BLOCK *v17; // rax
  struct _NDIS_MINIPORT_BLOCK *v18; // rdx
  signed __int32 InterlockedFlags; // eax
  signed __int32 v20; // ett
  struct _NDIS_IF_BLOCK *v22; // [rsp+98h] [rbp+10h]
  char v24; // [rsp+A8h] [rbp+20h]

  v3 = 0;
  v4 = a3;
  v5 = a1;
  if ( !a2 )
    a2 = a1;
  v22 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x16u,
      (struct _GUID *)&WPP_aa66c5b77aef37206a2c806e5c5446f1_Traceguids,
      (char)a1,
      a3);
    a2 = v22;
  }
  v6 = *(char **)(v4 + 40);
  v7 = *(_DWORD *)(v4 + 52);
  v8 = *(_DWORD *)(v4 + 48);
  if ( v6 )
  {
    v9 = 0;
    v24 = 0;
    if ( v8 > 0 )
    {
      while ( 1 )
      {
        if ( v9 )
        {
LABEL_22:
          v4 = a3;
          break;
        }
        p_ifType = 0LL;
        v11 = 0;
        if ( v7 <= 0x208 )
        {
          if ( v7 == 520 )
          {
            p_ifType = &v5->ifType;
            v12 = 2;
            v13 = 524;
          }
          else if ( v7 )
          {
            if ( v7 != 4 )
            {
LABEL_49:
              v9 = 1;
              v24 = 1;
              goto LABEL_21;
            }
            v12 = 516;
            p_ifType = &v5->ifDescr;
            v13 = 520;
          }
          else
          {
            v12 = 4;
            p_ifType = &v5->_NDIS_NSI_INTERFACE_ENUM_ROS;
            v13 = 4;
          }
        }
        else
        {
          switch ( v7 )
          {
            case 0x20Cu:
              p_ifType = &a2->AccessType;
              v13 = 528;
              break;
            case 0x210u:
              p_ifType = &v5->DirectionType;
              v13 = 532;
              break;
            case 0x214u:
              p_ifType = &a2->ConnectionType;
              v13 = 536;
              break;
            case 0x218u:
              p_ifType = &v5->InterfaceGuid;
              v12 = 16;
              v13 = 552;
              goto LABEL_16;
            case 0x228u:
              p_ifType = &v5->ifConnectorPresent;
              v12 = 1;
              v13 = 554;
              goto LABEL_16;
            case 0x22Au:
              v12 = 34;
              if ( v5->bNdisIsProvider )
                p_ifType = &a2->PermanentPhysAddress;
              else
                v11 = 16843009;
              v13 = 588;
              goto LABEL_16;
            case 0x24Cu:
              p_ifType = &v5->ifFlags;
              v13 = 592;
              break;
            case 0x250u:
              p_ifType = &a2->MediaType;
              v12 = 4;
              v17 = ndisIfReferenceMiniport(v5, 0x18u);
              v18 = v17;
              if ( v17 )
              {
                _m_prefetchw(&v17->InterlockedFlags);
                InterlockedFlags = v17->InterlockedFlags;
                do
                {
                  v20 = InterlockedFlags;
                  InterlockedFlags = _InterlockedCompareExchange(
                                       (volatile signed __int32 *)&v18->InterlockedFlags,
                                       InterlockedFlags,
                                       InterlockedFlags);
                }
                while ( v20 != InterlockedFlags );
                if ( (InterlockedFlags & 0x100) != 0 )
                  p_ifType = &v5->MediaType;
                ndisIfDereferenceMiniport(v5, v18, 0x18u);
              }
              v13 = 596;
              goto LABEL_16;
            case 0x254u:
              p_ifType = &a2->PhysicalMediumType;
              v24 = 1;
              v13 = v7 + 4;
              break;
            default:
              goto LABEL_49;
          }
          v12 = 4;
        }
LABEL_16:
        if ( v8 < (int)v12 )
          goto LABEL_49;
        if ( v11 )
        {
          ndisIfQueryProvider(v22, v11, v12, v6);
        }
        else
        {
          if ( !p_ifType )
            goto LABEL_49;
          memmove(v6, p_ifType, v12);
        }
        v14 = v13 - v7;
        v7 = v13;
        v6 += v14;
        v9 = v24;
        v8 -= v14;
LABEL_21:
        v5 = a1;
        a2 = v22;
        if ( v8 <= 0 )
          goto LABEL_22;
      }
    }
    v15 = v7 - *(_DWORD *)(v4 + 52);
    *(_DWORD *)(v4 + 48) = v15;
    if ( !v15 )
      v3 = -1073741811;
  }
  else
  {
    *(_DWORD *)(v4 + 48) = 0;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x17u,
      (struct _GUID *)&WPP_aa66c5b77aef37206a2c806e5c5446f1_Traceguids,
      (char)v5,
      v4,
      v3);
  return v3;
}
