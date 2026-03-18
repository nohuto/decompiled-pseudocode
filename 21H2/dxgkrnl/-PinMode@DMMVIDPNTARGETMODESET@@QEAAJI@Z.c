/*
 * XREFs of ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C01A7640
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C001188C (-SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@Z @ 0x1C01A69F0 (-PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C01A6D08 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I@Z @ 0x1C03A73C0 (-PinMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I@Z.c)
 * Callees:
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0010A74 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C01A8564 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::PinMode(DMMVIDPNTARGETMODESET *this, unsigned int a2)
{
  __int64 v2; // rsi
  char *v4; // rdx
  char *v5; // rbx
  char *v6; // rcx
  DMMVIDPNTARGETMODESET *v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // r14
  unsigned int PathSourceFromTarget; // r8d
  __int64 v14; // rsi
  DMMVIDPNPRESENTPATH *v15; // rsi
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+60h] [rbp+8h]

  v2 = a2;
  if ( !*((_BYTE *)this + 136) )
  {
    WdLogSingleEntry2(7LL, a2, this);
    return 3223192352LL;
  }
  v4 = (char *)this + 48;
  v5 = 0LL;
  v6 = (char *)*((_QWORD *)this + 6);
  if ( v6 != v4 )
    v5 = v6 - 8;
  if ( !v5 )
    goto LABEL_35;
  do
  {
    if ( *((_DWORD *)v5 + 6) == (_DWORD)v2 )
      break;
    v7 = (DMMVIDPNTARGETMODESET *)*((_QWORD *)v5 + 1);
    v5 = (char *)v7 - 8;
    if ( v7 == (DMMVIDPNTARGETMODESET *)((char *)this + 48) )
      v5 = 0LL;
  }
  while ( v5 );
  if ( !v5 )
  {
LABEL_35:
    WdLogSingleEntry2(2LL, v2, this);
    return 3223192394LL;
  }
  v8 = *((_QWORD *)this + 14);
  v9 = *((_QWORD *)this + 18);
  *((_QWORD *)this + 18) = v5;
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, this);
    return 3223192329LL;
  }
  v10 = *(_QWORD *)(v8 + 40);
  if ( !v10 )
  {
    WdLogSingleEntry0(1LL);
    v10 = *(_QWORD *)(v8 + 40);
  }
  v11 = *(_QWORD *)(v10 + 72);
  if ( !v11 )
  {
    WdLogSingleEntry0(1LL);
    v11 = *(_QWORD *)(v10 + 72);
  }
  v12 = v11 + 96;
  PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((DMMVIDPNTOPOLOGY *)(v11 + 96), *(_DWORD *)(v8 + 24));
  if ( PathSourceFromTarget == -1 )
  {
    WdLogSingleEntry2(2LL, v2, this);
    return 3223192384LL;
  }
  v14 = *(_QWORD *)(v12 + 24);
  if ( v14 == v12 + 24 )
  {
    v15 = 0LL;
  }
  else
  {
    v15 = (DMMVIDPNPRESENTPATH *)(v14 - 8);
    if ( v15 )
    {
      do
      {
        if ( *(_DWORD *)(*((_QWORD *)v15 + 11) + 24LL) == PathSourceFromTarget
          && *(_DWORD *)(*((_QWORD *)v15 + 12) + 24LL) == *(_DWORD *)(v8 + 24) )
        {
          break;
        }
        v18 = *((_QWORD *)v15 + 1);
        v15 = (DMMVIDPNPRESENTPATH *)(v18 - 8);
        if ( v18 == v12 + 24 )
          v15 = 0LL;
      }
      while ( v15 );
      if ( v15 )
        goto LABEL_21;
    }
  }
  WdLogSingleEntry0(1LL);
LABEL_21:
  if ( DMMVIDPNPRESENTPATH::IsValidContentScaling(v15) )
  {
    v16 = *(_QWORD *)(v5 + 92);
    if ( ((*((_DWORD *)v5 + 30) >> 3) & 0x3F) != 0 )
    {
      LODWORD(v19) = *(_QWORD *)(v5 + 92);
      HIDWORD(v19) = ((*((_DWORD *)v5 + 30) >> 3) & 0x3F) * HIDWORD(v16);
      v16 = v19;
    }
    *((_QWORD *)v5 + 19) = v16;
    result = 0LL;
    *((_DWORD *)v5 + 40) = 1;
  }
  else
  {
    WdLogSingleEntry5(
      2LL,
      *((unsigned int *)v5 + 21),
      *((unsigned int *)v5 + 22),
      *((unsigned int *)v5 + 23),
      *((unsigned int *)v5 + 24),
      *(unsigned int *)(v8 + 24));
    result = 3223192389LL;
    *((_QWORD *)this + 18) = v9;
  }
  return result;
}
