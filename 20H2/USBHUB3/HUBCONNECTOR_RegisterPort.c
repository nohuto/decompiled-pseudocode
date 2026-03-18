/*
 * XREFs of HUBCONNECTOR_RegisterPort @ 0x1C007B32C
 * Callers:
 *     HUBCONNECTOR_MapRootHubPorts @ 0x1C007BB80 (HUBCONNECTOR_MapRootHubPorts.c)
 *     HUBCONNECTOR_MapIntegratedHubPorts @ 0x1C007BE6C (HUBCONNECTOR_MapIntegratedHubPorts.c)
 *     HUBCONNECTOR_MapExternalHubPorts @ 0x1C007BF6C (HUBCONNECTOR_MapExternalHubPorts.c)
 *     HUBCONNECTOR_MapAcpiPorts @ 0x1C007C04C (HUBCONNECTOR_MapAcpiPorts.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0042D40 (memset.c)
 */

__int64 __fastcall HUBCONNECTOR_RegisterPort(__int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // r15
  __int64 v4; // rax
  _QWORD *v5; // r14
  _QWORD *i; // rax
  _QWORD *v7; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  int v11; // eax
  unsigned __int16 v12; // r9
  unsigned int v13; // r8d
  __int64 v14; // rcx
  int v15; // eax
  unsigned __int16 v16; // r9
  unsigned __int16 v17; // r9
  unsigned __int16 v18; // cx
  __int64 v19; // rax
  __int64 v21; // [rsp+28h] [rbp-20h]

  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C00661C0);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C00661C0);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v4 + 56),
    0LL);
  v5 = (_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    WdfDriverGlobals->Driver,
                    off_1C00661C0)
                + 40);
  for ( i = (_QWORD *)*v5; ; i = (_QWORD *)v7[10] )
  {
    v7 = i - 10;
    if ( v5 == i )
      break;
    if ( RtlCompareMemory(i - 10, (const void *)(a1 + 1368), 0x38uLL) == 56 )
      goto LABEL_6;
  }
  v7 = 0LL;
LABEL_6:
  if ( !v7 )
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x60uLL, 0x70334855u);
    v7 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(a1 + 1432),
          2u,
          4u,
          0xAu,
          (__int64)&WPP_fb8262bc217b3779fe13d4125c396c84_Traceguids);
      v2 = -1073741670;
      goto LABEL_50;
    }
    memset(PoolWithTag, 0, 0x60uLL);
    v9 = v7 + 10;
    *(_OWORD *)v7 = *(_OWORD *)(a1 + 1368);
    *((_OWORD *)v7 + 1) = *(_OWORD *)(a1 + 1384);
    *((_OWORD *)v7 + 2) = *(_OWORD *)(a1 + 1400);
    v7[6] = *(_QWORD *)(a1 + 1416);
    v10 = *(_QWORD **)(v3 + 48);
    if ( *v10 != v3 + 40 )
      __fastfail(3u);
    *v9 = v3 + 40;
    v7[11] = v10;
    *v10 = v9;
    *(_QWORD *)(v3 + 48) = v9;
  }
  v11 = *(_DWORD *)(a1 + 208);
  if ( v11 == 512 )
  {
    if ( v7[7] )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_49;
      v16 = 11;
      goto LABEL_24;
    }
    if ( (*(_DWORD *)(a1 + 204) & 0x200) != 0 )
    {
      v14 = v7[8];
      if ( v14 && (*(_DWORD *)(v14 + 204) & 0x200) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_49;
        v17 = 12;
        goto LABEL_48;
      }
      *(_WORD *)(a1 + 236) = *(_WORD *)(a1 + 200);
    }
    v7[7] = a1;
    goto LABEL_54;
  }
  if ( v11 == 768 )
  {
    v14 = v7[8];
    v15 = *(_DWORD *)(a1 + 204) & 0x200;
    if ( v14 )
    {
      if ( !v15 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_49;
        v16 = 15;
        goto LABEL_24;
      }
      if ( v7[9] )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_49:
          v2 = -1073741823;
LABEL_50:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_55;
          v12 = 18;
          LODWORD(v21) = v2;
          v13 = 4;
          goto LABEL_18;
        }
        v16 = 13;
LABEL_24:
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 1432), 2u, 6u, v16, (__int64)&WPP_fb8262bc217b3779fe13d4125c396c84_Traceguids);
        goto LABEL_49;
      }
      if ( (*(_DWORD *)(v14 + 204) & 0x200) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_49;
        v17 = 14;
LABEL_48:
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 1432),
          2u,
          6u,
          v17,
          (__int64)&WPP_fb8262bc217b3779fe13d4125c396c84_Traceguids,
          *(unsigned __int8 *)(v14 + 1341));
        goto LABEL_49;
      }
      v18 = *(_WORD *)(v14 + 200);
      if ( v18 >= *(_WORD *)(a1 + 200) )
        v18 = *(_WORD *)(a1 + 200);
      *(_WORD *)(a1 + 236) = v18;
      *(_WORD *)(v7[8] + 236LL) = v18;
      v7[9] = a1;
    }
    else
    {
      if ( v15 )
      {
        v14 = v7[7];
        if ( v14 && (*(_DWORD *)(v14 + 204) & 0x200) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_49;
          v17 = 16;
          goto LABEL_48;
        }
        *(_WORD *)(a1 + 236) = *(_WORD *)(a1 + 200);
      }
      v7[8] = a1;
    }
LABEL_54:
    _InterlockedOr((volatile signed __int32 *)(a1 + 204), 0x20u);
    goto LABEL_55;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = 17;
    LODWORD(v21) = *(_DWORD *)(a1 + 208);
    v13 = 6;
LABEL_18:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 1432),
      2u,
      v13,
      v12,
      (__int64)&WPP_fb8262bc217b3779fe13d4125c396c84_Traceguids,
      v21);
  }
LABEL_55:
  v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          WdfDriverGlobals->Driver,
          off_1C00661C0);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v19 + 56));
  return v2;
}
