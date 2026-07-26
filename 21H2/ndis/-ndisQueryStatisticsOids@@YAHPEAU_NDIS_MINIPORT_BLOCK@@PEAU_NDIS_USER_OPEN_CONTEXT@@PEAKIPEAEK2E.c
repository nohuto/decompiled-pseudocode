/*
 * XREFs of ?ndisQueryStatisticsOids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@PEAKIPEAEK2E3@Z @ 0x1C0013018
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0010F30 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisValidOid@@YAEPEAU_NDIS_USER_OPEN_CONTEXT@@K@Z @ 0x1C0008C44 (-ndisValidOid@@YAEPEAU_NDIS_USER_OPEN_CONTEXT@@K@Z.c)
 *     ?ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z @ 0x1C0008F40 (-ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisCheckForHangSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001A000 (-ndisCheckForHangSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIsSatisfiedByOidGenStatistics@@YAKK@Z @ 0x1C0039FD0 (-ndisIsSatisfiedByOidGenStatistics@@YAKK@Z.c)
 *     ?ndisVerifierInitialization@@YAEXZ @ 0x1C003A314 (-ndisVerifierInitialization@@YAEXZ.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 *     memset @ 0x1C00403C0 (memset.c)
 */

__int64 __fastcall ndisQueryStatisticsOids(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_USER_OPEN_CONTEXT *a2,
        unsigned int *a3,
        unsigned int a4,
        unsigned __int8 *a5,
        SIZE_T NumberOfBytes,
        unsigned int *a7,
        unsigned __int8 a8,
        unsigned __int8 *a9)
{
  unsigned int v10; // r14d
  unsigned __int8 *PoolWithTag; // r12
  unsigned int v12; // edi
  unsigned int v13; // r13d
  unsigned __int8 *v14; // rcx
  int (__fastcall *v15)(void *, unsigned __int8 *); // r9
  __int64 v16; // rbx
  unsigned int BytesWritten; // r14d
  __int64 *p_Src; // rsi
  unsigned int v19; // r11d
  int v20; // ecx
  int v21; // ebx
  _NDIS_PHYSICAL_MEDIUM PhysicalMediumType; // eax
  unsigned int v23; // r9d
  unsigned __int8 *v24; // r10
  unsigned __int8 *v25; // rax
  int v27; // ecx
  unsigned __int8 valid; // al
  struct _NDIS_USER_OPEN_CONTEXT *v29; // r10
  unsigned int IsSatisfiedByOidGenStatistics; // eax
  __int64 v31; // rsi
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  LONGLONG v35; // rbx
  unsigned int Flags; // eax
  unsigned int InfoFlags; // ecx
  unsigned int PnPFlags; // eax
  unsigned __int8 MajorNdisVersion; // r8
  int v40; // edx
  unsigned __int8 v41; // r8
  unsigned __int8 v42; // r10
  int InternalResetCount; // eax
  int MiniportResetCount; // ecx
  unsigned int v45; // r8d
  __int64 v46; // rax
  int v47; // [rsp+40h] [rbp-C0h] BYREF
  char v48; // [rsp+44h] [rbp-BCh]
  unsigned int v49; // [rsp+48h] [rbp-B8h]
  unsigned int v50; // [rsp+4Ch] [rbp-B4h]
  int v51; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 *v52; // [rsp+58h] [rbp-A8h]
  _NDIS_PHYSICAL_MEDIUM Src; // [rsp+60h] [rbp-A0h] BYREF
  int v54; // [rsp+64h] [rbp-9Ch]
  unsigned int v55; // [rsp+68h] [rbp-98h]
  unsigned __int8 *v56; // [rsp+70h] [rbp-90h]
  __int64 v57; // [rsp+78h] [rbp-88h] BYREF
  __int64 i; // [rsp+80h] [rbp-80h]
  PVOID P; // [rsp+88h] [rbp-78h]
  struct _NDIS_USER_OPEN_CONTEXT *v60; // [rsp+90h] [rbp-70h]
  unsigned int *v61; // [rsp+98h] [rbp-68h]
  unsigned int *v62; // [rsp+A0h] [rbp-60h]
  _QWORD v63[20]; // [rsp+B0h] [rbp-50h] BYREF
  struct _NDIS_OID_REQUEST v64; // [rsp+150h] [rbp+50h] BYREF

  v61 = a3;
  v60 = a2;
  v52 = a5;
  v49 = NumberOfBytes;
  v62 = a7;
  v56 = a9;
  v55 = a4;
  memset(&v64, 0, 0xF8uLL);
  v50 = 0;
  P = 0LL;
  v10 = 0;
  v51 = 0;
  PoolWithTag = 0LL;
  v57 = 0LL;
  v47 = 0;
  v48 = 0;
  memset(v63, 0, 0x98uLL);
  Src = NdisPhysicalMediumUnspecified;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x21u,
      (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
      a1);
  *a7 = 0;
  v12 = 0;
  if ( a8 )
  {
    v13 = 12;
    v14 = a5;
  }
  else
  {
    PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6D61444Eu);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      *a9 = 0;
      return 3221225626LL;
    }
    v13 = 8;
    v14 = PoolWithTag;
  }
  memset(v14, 0, (unsigned int)NumberOfBytes);
  LODWORD(v15) = 0;
  v54 = 0;
  if ( !v55 )
  {
    v25 = v56;
    goto LABEL_26;
  }
  v16 = 0LL;
  for ( i = 0LL; ; v16 = i )
  {
    BytesWritten = 0;
    p_Src = 0LL;
    memset(&v64, 0, 0xF8uLL);
    v19 = v49;
    if ( v49 < v13 + 4 )
      break;
    v20 = v61[v16];
    v21 = v20 & 0x7FFFFFFF;
    if ( (v20 & 0xFF000000) != 0x80000000 )
      v21 = v20;
    if ( v21 == 66050
      || (unsigned int)(v21 - 131603) <= 5 && (v27 = 55, _bittest(&v27, v21 - 131603))
      || v21 == 0xFFFFFF
      || v21 == 65796
      || v21 == -50265850 )
    {
      LODWORD(v15) = 0;
      v12 = 0;
      if ( v21 == 66050 )
      {
        PhysicalMediumType = a1->PhysicalMediumType;
        p_Src = (__int64 *)&Src;
        if ( PhysicalMediumType == NdisPhysicalMedium802_3 )
          PhysicalMediumType = NdisPhysicalMediumUnspecified;
        Src = PhysicalMediumType;
        goto LABEL_16;
      }
      if ( v21 == 65796 )
      {
        p_Src = (__int64 *)&a1->MediaType;
        goto LABEL_16;
      }
      if ( v21 == 131603 )
      {
        p_Src = (__int64 *)&a1->InitTimeMs;
        goto LABEL_16;
      }
      if ( v21 == 131604 )
      {
        MiniportResetCount = a1->MiniportResetCount;
        InternalResetCount = a1->InternalResetCount;
      }
      else
      {
        if ( v21 != 131605 )
        {
          if ( v21 == 131607 )
          {
            Flags = a1->Flags;
            InfoFlags = a1->InfoFlags;
            v47 = InfoFlags;
            if ( (Flags & 0x10) != 0 )
            {
              InfoFlags |= 0x1000000u;
              v47 = InfoFlags;
            }
            if ( (Flags & 0x20000) != 0 )
            {
              InfoFlags |= 0x400u;
              v47 = InfoFlags;
            }
            if ( (Flags & 0x4000000) != 0 )
            {
              InfoFlags |= 0x2000u;
              v47 = InfoFlags;
            }
            PnPFlags = a1->PnPFlags;
            if ( (PnPFlags & 1) != 0 )
            {
              InfoFlags |= 0x8000u;
              v47 = InfoFlags;
            }
            if ( (PnPFlags & 0x1000) != 0 )
            {
              InfoFlags |= 0x40000u;
              v47 = InfoFlags;
            }
            if ( (PnPFlags & 0x2000) != 0 )
            {
              InfoFlags |= 0x80000u;
              v47 = InfoFlags;
            }
            if ( (PnPFlags & 0x200000) != 0 )
            {
              InfoFlags |= 0x400000u;
              v47 = InfoFlags;
            }
            if ( (PnPFlags & 0x400000) != 0 )
            {
              InfoFlags |= 2u;
              v47 = InfoFlags;
            }
            if ( a1->PagingPathCount > 0 )
            {
              InfoFlags |= 0x40000000u;
              v47 = InfoFlags;
            }
            MajorNdisVersion = a1->MajorNdisVersion;
            if ( MajorNdisVersion < 6u && a1->DriverHandle->MiniportCharacteristics.CancelSendPacketsHandler
              || MajorNdisVersion >= 6u && a1->DriverHandle->MiniportDriverCharacteristics.CancelSendHandler )
            {
              v47 = InfoFlags | 0x800000;
            }
            if ( ndisCheckForHangSupported(a1) )
            {
              v40 |= 0x80u;
              v47 = v40;
            }
            if ( v41 >= v42 && a1->DriverHandle->MiniportDriverCharacteristics.ResetHandlerEx != v15 )
              v47 = v40 | 8;
            p_Src = (__int64 *)&v47;
          }
          else
          {
            switch ( v21 )
            {
              case 131608:
                p_Src = 0LL;
                ndisFlags = *(_DWORD *)&v52[v13];
                ndisVerifierInitialization();
                if ( (ndisFlags & 4) == 0 )
                  ndisVerifierLevel &= ~4u;
                v64.DATA.QUERY_INFORMATION.BytesWritten = 4;
                break;
              case 16777215:
                v57 = MEMORY[0xFFFFF78000000320];
                v35 = MEMORY[0xFFFFF78000000320] - a1->StartTicks.QuadPart;
                p_Src = &v57;
                v57 = v35 * KeQueryTimeIncrement() / 10000000;
                break;
              case -50265850:
                p_Src = (__int64 *)&a1->WakeUpEnable;
                goto LABEL_16;
              default:
                goto LABEL_23;
            }
            v19 = v49;
            LODWORD(v15) = 0;
          }
LABEL_16:
          BytesWritten = 4;
LABEL_17:
          if ( p_Src )
          {
            if ( BytesWritten > v19 - v13 )
            {
              v12 = -1073676268;
LABEL_24:
              v25 = v56;
              goto LABEL_25;
            }
            memmove(&v52[v13], p_Src, BytesWritten);
          }
          goto LABEL_20;
        }
        InternalResetCount = a1->MediaSenseDisconnectCount;
        MiniportResetCount = a1->MediaSenseConnectCount << 16;
      }
      p_Src = (__int64 *)&v51;
      v51 = InternalResetCount + MiniportResetCount;
      goto LABEL_16;
    }
    valid = ndisValidOid(v60, v21);
    LODWORD(v15) = 0;
    if ( !valid )
      goto LABEL_23;
    if ( v21 == 16843010 )
    {
      v21 = 67174658;
      if ( a1->MediaType != NdisMediumWan )
        v21 = 16843010;
    }
    else if ( v21 == 16843009 )
    {
      v21 = 16843009;
      if ( a1->MediaType == NdisMediumWan )
        v21 = 67174657;
    }
    if ( (a1->PnPFlags & 0x800) != 0 )
    {
      v12 = -1073676282;
      goto LABEL_58;
    }
    if ( a8 )
      PoolWithTag = &v52[v13];
    if ( a1->MajorNdisVersion < 6u
      || (IsSatisfiedByOidGenStatistics = ndisIsSatisfiedByOidGenStatistics(v21),
          (v31 = IsSatisfiedByOidGenStatistics) == 0)
      && v21 != 131334 )
    {
      v32 = ndisQueryDeviceOid(v29, &v64, v21, PoolWithTag, v19 - v13);
      v15 = 0LL;
      v12 = v32;
      BytesWritten = 0;
      if ( !v32 )
        BytesWritten = v64.DATA.QUERY_INFORMATION.BytesWritten;
      goto LABEL_55;
    }
    BytesWritten = 152;
    if ( v48 == (_BYTE)v15 )
    {
      memset(v63, 0, 0x98uLL);
      v33 = ndisQueryDeviceOid(v60, &v64, 0x20106u, v63, 0x98u);
      v19 = v49;
      v15 = 0LL;
      v12 = v33;
      if ( v33 )
        goto LABEL_71;
      v48 = 1;
    }
    v34 = v19 - v13;
    if ( v21 == 131334 )
    {
      if ( v34 >= 0x98 )
      {
        memmove(PoolWithTag, v63, 0x98uLL);
        v15 = 0LL;
LABEL_55:
        v19 = v49;
        goto LABEL_56;
      }
LABEL_70:
      v12 = -1073676268;
LABEL_71:
      BytesWritten = (unsigned int)v15;
      goto LABEL_56;
    }
    if ( v34 < 8 )
      goto LABEL_70;
    BytesWritten = 8;
    *(_QWORD *)PoolWithTag = *(_QWORD *)((char *)v63 + v31);
LABEL_56:
    p_Src = (__int64 *)v15;
    if ( a8 == (_BYTE)v15 )
      p_Src = (__int64 *)PoolWithTag;
LABEL_58:
    if ( v12 )
      goto LABEL_24;
    if ( BytesWritten )
      goto LABEL_17;
LABEL_20:
    v23 = BytesWritten + v13;
    v24 = v52;
    *(_DWORD *)v52 = v61[i];
    *((_DWORD *)v24 + 1) = BytesWritten;
    if ( a8 )
    {
      v45 = (v23 + 7) & 0xFFFFFFF8;
      v46 = v23;
      if ( v49 - v13 - 4 >= v45 )
      {
        v46 = v45;
        v23 = (v23 + 7) & 0xFFFFFFF8;
      }
      v49 -= v23;
      v50 += v46;
      v52 = &v24[v46];
      *((_DWORD *)v24 + 2) = v46;
    }
    else
    {
      v49 -= v23;
      v50 += v23;
      v52 = &v24[v23];
    }
    LODWORD(v15) = 0;
LABEL_23:
    ++i;
    if ( ++v54 >= v55 )
      goto LABEL_24;
    PoolWithTag = (unsigned __int8 *)P;
  }
  v25 = v56;
  LODWORD(v15) = 0;
  v12 = -1073676268;
  *v56 = 0;
LABEL_25:
  v10 = v50;
LABEL_26:
  *v62 = v10;
  if ( *v25 != (_BYTE)v15 && v12 == -1073741637 )
    v12 = (unsigned int)v15;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x22u,
      (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
      (char)a1,
      v12);
  return v12;
}
