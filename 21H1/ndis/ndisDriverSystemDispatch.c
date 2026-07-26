/*
 * XREFs of ndisDriverSystemDispatch @ 0x1C0031E90
 * Callers:
 *     ndisDispatchRequest @ 0x1C001D380 (ndisDispatchRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000DF10 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_d @ 0x1C001918C (WPP_RECORDER_SF_d.c)
 *     ndisEtwRegisterGuids @ 0x1C0031F90 (ndisEtwRegisterGuids.c)
 */

__int64 __fastcall ndisDriverSystemDispatch(char a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v3; // ebx
  unsigned int v5; // r14d
  _QWORD *v6; // rdi
  __int64 v8; // rcx
  __int64 v9; // [rsp+28h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v5 = *(_DWORD *)(v2 + 24);
  v6 = *(_QWORD **)(v2 + 32);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xCu,
      (struct _GUID *)&WPP_25837d708393386fa8b5b40a61d84122_Traceguids,
      a1,
      a2,
      *(unsigned __int8 *)(v2 + 1));
  switch ( *(_BYTE *)(v2 + 1) )
  {
    case 4:
      if ( v5 < 0x30 || !v6 || *(_DWORD *)v6 < 0x30u )
        goto LABEL_29;
      v8 = v6[3] - *(_QWORD *)&ndisControlGuid.Data1;
      if ( !v8 )
        v8 = v6[4] - *(_QWORD *)ndisControlGuid.Data4;
      if ( v8 )
      {
LABEL_29:
        v3 = -1073741811;
      }
      else
      {
        qword_1C00E6048 = v6[1];
        byte_1C00E6044 = BYTE2(qword_1C00E6048);
        ndisLogger = HIDWORD(qword_1C00E6048);
        if ( (qword_1C00E6048 & 0x800000000LL) != 0 )
          LOBYTE(dword_1C00E6050) = 1;
        if ( (qword_1C00E6048 & 0x100000000LL) != 0 )
          BYTE1(dword_1C00E6050) = 1;
        if ( (qword_1C00E6048 & 0x200000000LL) != 0 )
          BYTE2(dword_1C00E6050) = 1;
        if ( (qword_1C00E6048 & 0x400000000LL) != 0 )
          HIBYTE(dword_1C00E6050) = 1;
        if ( (qword_1C00E6048 & 0x1000000000LL) != 0 )
          LOBYTE(word_1C00E6054) = 1;
        if ( (qword_1C00E6048 & 0x2000000000LL) != 0 )
          HIBYTE(word_1C00E6054) = 1;
      }
      break;
    case 5:
      byte_1C00E6044 = 0;
      ndisLogger = 0;
      qword_1C00E6048 = 0LL;
      dword_1C00E6050 = 0;
      word_1C00E6054 = 0;
      *(_QWORD *)(a2 + 56) = 0LL;
      break;
    case 0xB:
      v3 = ndisEtwRegisterGuids(v6);
      *(_QWORD *)(a2 + 56) = 0LL;
      break;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v9) = v3;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xDu,
      (struct _GUID *)&WPP_25837d708393386fa8b5b40a61d84122_Traceguids,
      v9);
  }
  return v3;
}
