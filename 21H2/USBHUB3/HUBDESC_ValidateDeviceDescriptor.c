/*
 * XREFs of HUBDESC_ValidateDeviceDescriptor @ 0x1C0039408
 * Callers:
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x1C0029190 (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 *     HUBDTX_ValidateFirstDeviceDescriptorFor20 @ 0x1C0029414 (HUBDTX_ValidateFirstDeviceDescriptorFor20.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C00327E4 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateDeviceDescriptor(
        unsigned __int8 *a1,
        unsigned int a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5)
{
  int v5; // r13d
  unsigned int v7; // eax
  __int64 v9; // r14
  __int64 v10; // rdx
  char v11; // di
  unsigned __int16 v13; // r9
  __int16 v14; // cx
  __int64 v15; // r8
  int v16; // eax
  bool v17; // al
  int v18; // edx
  __int64 v19; // rcx
  unsigned __int16 v20; // r9
  __int64 v21; // rcx
  bool ShouldEnforceWin8ValidationMutable; // al
  __int64 v23; // rcx
  __int64 v24; // [rsp+28h] [rbp-40h]

  v5 = 0;
  v7 = a2;
  if ( !a1 )
  {
    v9 = a5;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a5, 2u, 5u, 0xF6u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids);
    v10 = 79LL;
    goto LABEL_5;
  }
  if ( a2 < 2 )
  {
    v9 = a5;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_13:
      v10 = 71LL;
LABEL_5:
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), v10);
      goto LABEL_6;
    }
    v13 = 247;
LABEL_12:
    LODWORD(v24) = v7;
    WPP_RECORDER_SF_d(v9, 2u, 5u, v13, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v24);
    goto LABEL_13;
  }
  v9 = a5;
  if ( *a1 < 0x12u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xF8u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, *a1);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 70LL);
    v5 = 2;
  }
  if ( a1[1] != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v24) = a1[1];
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xF9u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v24);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 77LL);
    v5 = 2;
  }
  v7 = a2;
  if ( a2 < 8 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    v13 = 250;
    goto LABEL_12;
  }
  v14 = *((_WORD *)a1 + 6);
  if ( (v14 & 0xF000u) > 0x9000 || (v14 & 0xF00u) > 0x900 || (*((_WORD *)a1 + 6) & 0xF0u) > 0x90 || (v14 & 0xFu) > 9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v24) = *((unsigned __int16 *)a1 + 6);
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xFBu, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v24);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 32))(*(_QWORD *)(a3 + 40), 69LL);
  }
  v15 = 254LL;
  if ( a1[4] == 17 && !a1[5] && !a1[6] )
  {
    if ( (unsigned __int16)(*((_WORD *)a1 + 1) - 513) > 0xFEu )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v24) = *((unsigned __int16 *)a1 + 1);
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0xFCu, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v24);
      }
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 246LL, v15);
      v5 = 2;
    }
    else if ( a4 )
    {
      *a4 = 1;
    }
  }
  v16 = *(_DWORD *)(a3 + 4);
  if ( v16 )
  {
    if ( v16 == 1 )
    {
      v18 = a1[7];
      if ( (unsigned __int8)(v18 - 8) > 0x38u || (v21 = 0x100000001000101LL, !_bittest64(&v21, (unsigned int)(v18 - 8))) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v20 = 255;
          goto LABEL_66;
        }
LABEL_67:
        (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 78LL);
        v5 = 2;
      }
    }
    else if ( v16 == 2 )
    {
      if ( a1[7] != 64 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v24) = a1[7];
          WPP_RECORDER_SF_d(a5, 2u, 5u, 0x100u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v24);
        }
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 78LL, v15);
        ShouldEnforceWin8ValidationMutable = HUBDESC_ShouldEnforceWin8ValidationMutable(a3);
        v18 = a1[7];
        if ( ShouldEnforceWin8ValidationMutable )
          v5 = 2;
        if ( (unsigned __int8)(v18 - 8) > 0x38u
          || (v23 = 0x100000001000101LL, !_bittest64(&v23, (unsigned int)(v18 - 8))) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v20 = 257;
            goto LABEL_66;
          }
          goto LABEL_67;
        }
      }
    }
    else if ( v16 == 3 && a1[7] != 9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v24) = a1[7];
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0x102u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v24);
      }
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 78LL, v15);
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
        v5 = 2;
    }
  }
  else if ( a1[7] != 8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v24) = a1[7];
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xFDu, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v24);
    }
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 78LL, v15);
    v17 = HUBDESC_ShouldEnforceWin8ValidationMutable(a3);
    v18 = a1[7];
    if ( v17 )
      v5 = 2;
    if ( (unsigned __int8)(v18 - 8) > 0x38u || (v19 = 0x100000001000101LL, !_bittest64(&v19, (unsigned int)(v18 - 8))) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = 254;
LABEL_66:
        LODWORD(v24) = v18;
        WPP_RECORDER_SF_d(a5, 2u, 5u, v20, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v24);
        goto LABEL_67;
      }
      goto LABEL_67;
    }
  }
  if ( !v5 )
    return 1;
LABEL_6:
  v11 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v9, 2u, 5u, 0x103u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids);
  return v11;
}
