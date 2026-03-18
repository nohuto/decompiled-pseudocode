/*
 * XREFs of HUBPDO_ReturnDeviceConfigInfo @ 0x1C0014E10
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0016F00 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     HUBID_FreeID @ 0x1C001B1EC (HUBID_FreeID.c)
 *     HUBID_BuildHardwareID @ 0x1C001B6A4 (HUBID_BuildHardwareID.c)
 *     HUBID_BuildCompatibleID @ 0x1C001BE8C (HUBID_BuildCompatibleID.c)
 *     memmove @ 0x1C0042A80 (memmove.c)
 *     memset @ 0x1C0042D40 (memset.c)
 */

__int64 __fastcall HUBPDO_ReturnDeviceConfigInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned __int16 v4; // r9
  int v5; // edi
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int16 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rsi
  POOL_TYPE v13; // ecx
  PVOID PoolWithTag; // rax

  v3 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( !v3 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v4 = 19;
LABEL_4:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
      3u,
      5u,
      v4,
      (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids);
    return (unsigned int)-1073741811;
  }
  if ( *(_DWORD *)v3 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v4 = 20;
    goto LABEL_4;
  }
  if ( *(_DWORD *)(v3 + 4) != 204 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
        3u,
        5u,
        0x15u,
        (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids,
        *(_DWORD *)(v3 + 4),
        204);
    return (unsigned int)-1073741789;
  }
  memset((void *)(v3 + 12), 0, 0xC0uLL);
  *(_DWORD *)(v3 + 8) = 0;
  v6 = 0;
  *(_DWORD *)v3 = 1;
  *(_DWORD *)(v3 + 4) = 204;
  v7 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(v7 + 2496) & 2) != 0 )
  {
    *(_DWORD *)(v3 + 8) = 1;
    v6 = 1;
    v7 = *(_QWORD *)(a1 + 16);
  }
  if ( *(_WORD *)(v7 + 2458) >= 0x200u )
  {
    *(_DWORD *)(v3 + 8) = 1;
    v6 = 1;
    v7 = *(_QWORD *)(a1 + 16);
  }
  if ( (*(_DWORD *)(v7 + 40) & 2) != 0 )
  {
    v6 |= 8u;
    *(_DWORD *)(v3 + 8) = v6;
    v7 = *(_QWORD *)(a1 + 16);
  }
  if ( (*(_DWORD *)(v7 + 40) & 2) != 0 )
  {
    v6 |= 4u;
    *(_DWORD *)(v3 + 8) = v6;
    v7 = *(_QWORD *)(a1 + 16);
  }
  if ( *(_DWORD *)(v7 + 256) == 2 )
  {
    v6 |= 2u;
    *(_DWORD *)(v3 + 8) = v6;
    v7 = *(_QWORD *)(a1 + 16);
  }
  if ( (*(_DWORD *)(v7 + 40) & 0x100) != 0 )
  {
    v6 |= 0x20u;
    *(_DWORD *)(v3 + 8) = v6;
    v7 = *(_QWORD *)(a1 + 16);
  }
  if ( !*(_BYTE *)(v7 + 240) )
  {
    v6 |= 0x10u;
    *(_DWORD *)(v3 + 8) = v6;
    v7 = *(_QWORD *)(a1 + 16);
  }
  if ( *(_DWORD *)(v7 + 92) == 100 )
    *(_DWORD *)(v3 + 8) = v6 | 0x40;
  v8 = *(_QWORD *)(a1 + 24);
  if ( (*(_DWORD *)(v8 + 1632) & 1) != 0 )
  {
    *(_DWORD *)(v3 + 132) |= 1u;
    v9 = *(_QWORD *)(a1 + 24);
    *(_OWORD *)(v3 + 136) = *(_OWORD *)(v9 + 1664);
    *(_OWORD *)(v3 + 152) = *(_OWORD *)(v9 + 1680);
    *(_OWORD *)(v3 + 168) = *(_OWORD *)(v9 + 1696);
    *(_OWORD *)(v3 + 184) = *(_OWORD *)(v9 + 1712);
    *(_DWORD *)(v3 + 200) = *(_DWORD *)(v9 + 1728);
    v8 = *(_QWORD *)(a1 + 24);
  }
  v5 = HUBID_BuildCompatibleID(v8, 0LL, v3 + 28);
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_43;
    v10 = 22;
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
    goto LABEL_34;
  }
  v5 = HUBID_BuildHardwareID(*(_QWORD *)(a1 + 24), 0LL, v3 + 12);
  if ( v5 >= 0 )
  {
    v12 = *(_QWORD *)(a1 + 24) + 2160LL;
    v5 = 0;
    *(_OWORD *)(v3 + 44) = 0LL;
    if ( *(_QWORD *)(v12 + 8) && *(_DWORD *)(v12 + 4) )
    {
      v13 = ExDefaultNonPagedPoolType;
      *(_OWORD *)(v3 + 44) = *(_OWORD *)v12;
      PoolWithTag = ExAllocatePoolWithTag(v13, *(unsigned int *)(v12 + 4), 0x64334855u);
      *(_QWORD *)(v3 + 52) = PoolWithTag;
      if ( PoolWithTag )
        memmove(PoolWithTag, *(const void **)(v12 + 8), *(unsigned int *)(v12 + 4));
      else
        v5 = -1073741670;
    }
    goto LABEL_43;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = 23;
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
LABEL_34:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v11 + 1432),
      3u,
      5u,
      v10,
      (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids,
      v5);
  }
LABEL_43:
  if ( v5 < 0 )
  {
    HUBID_FreeID(v3 + 28);
    HUBID_FreeID(v3 + 12);
    HUBID_FreeID(v3 + 44);
  }
  return (unsigned int)v5;
}
