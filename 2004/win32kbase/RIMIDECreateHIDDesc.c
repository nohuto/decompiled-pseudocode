/*
 * XREFs of RIMIDECreateHIDDesc @ 0x1C016977C
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00ABE60 (RIMCreateHidDesc.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     RIMFreeHidDesc @ 0x1C003E960 (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C003EA00 (WPP_RECORDER_SF_qDD.c)
 *     RIMIDEFreeInjectedInfo @ 0x1C00591F0 (RIMIDEFreeInjectedInfo.c)
 *     RIMIsInteractiveCtrl @ 0x1C005DCFC (RIMIsInteractiveCtrl.c)
 *     IsProcessHidRawInputSupported @ 0x1C005DF48 (IsProcessHidRawInputSupported.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C0062084 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C0063D88 (RIMSearchHidTLCInfo.c)
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_q @ 0x1C00AE4D0 (WPP_RECORDER_SF_q.c)
 *     rimAnyExplicitRimUsagesMatchingUsages @ 0x1C00AEBE8 (rimAnyExplicitRimUsagesMatchingUsages.c)
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1C00AEC8C (rimIsExplicitRimUsagesMatchingUsages.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 *     RIMFreePointerDevice @ 0x1C015FFAC (RIMFreePointerDevice.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C016583C (WPP_RECORDER_SF_DDq.c)
 *     RIMIDEAllocateInjectedInfo @ 0x1C01692A0 (RIMIDEAllocateInjectedInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0169BF8 (RIMIDECreatePointerDeviceInfo.c)
 */

__int64 __fastcall RIMIDECreateHIDDesc(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int128 v3; // xmm1
  __int64 v5; // r13
  __int128 v6; // xmm0
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // r14d
  __m128i v12; // xmm1
  int Caps; // eax
  unsigned __int16 epi16; // bx
  char *v15; // rax
  __int128 v16; // xmm0
  void *v17; // rax
  void *v18; // rax
  __int64 *v19; // rax
  __int64 v20; // r8
  _WORD *v21; // r15
  int v22; // kr00_4
  __int64 v23; // r15
  USAGE Usage; // dx
  unsigned int v25; // eax
  bool v26; // sf
  int v27; // ecx
  USAGE v28; // dx
  unsigned int v29; // eax
  USAGE UsagePage; // cx
  void *v31; // rax
  __int64 v32; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v35; // rdx
  struct _HIDP_CAPS v38; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v39; // [rsp+A0h] [rbp-60h]
  void *Src; // [rsp+D0h] [rbp-30h]
  struct _HIDP_CAPS v41; // [rsp+E0h] [rbp-20h] BYREF
  struct _HIDP_DEVICE_DESC v42; // [rsp+120h] [rbp+20h] BYREF

  v3 = a3[3];
  v5 = a1;
  *(_OWORD *)&v42.CollectionDesc = a3[1];
  v6 = a3[2];
  v7 = 0LL;
  *(_OWORD *)&v42.Dbg.ErrorCode = v3;
  *(_OWORD *)&v42.ReportIDs = v6;
  *(_OWORD *)&v42.Dbg.Args[3] = a3[4];
  memset(&v41, 0, sizeof(v41));
  v11 = 0;
  v12 = *(__m128i *)&v42.CollectionDesc->Reserved[11];
  v39 = *(_OWORD *)&v42.CollectionDesc->UsagePage;
  Src = v42.CollectionDesc->PreparsedData;
  if ( gpfnHidP_GetCaps )
    Caps = gpfnHidP_GetCaps((struct _HIDP_PREPARSED_DATA *)Src, &v41);
  else
    Caps = -1073741637;
  if ( Caps < 0 )
    goto LABEL_37;
  if ( !v41.InputReportByteLength )
    goto LABEL_37;
  epi16 = _mm_extract_epi16(v12, 5);
  if ( !epi16 )
    goto LABEL_37;
  v15 = (char *)Win32AllocPoolZInit(0x78uLL, 1147695954LL);
  v7 = (__int64)v15;
  if ( !v15 )
    goto LABEL_37;
  v16 = *(_OWORD *)&v41.Usage;
  *(_QWORD *)(a2 + 464) = v15;
  *(_OWORD *)(v15 + 40) = v16;
  *(_OWORD *)(v15 + 56) = *(_OWORD *)&v41.Reserved[3];
  *(_OWORD *)(v15 + 72) = *(_OWORD *)&v41.Reserved[11];
  *(_OWORD *)(v15 + 88) = *(_OWORD *)&v41.NumberInputValueCaps;
  v17 = Win32AllocPoolZInit(*((unsigned __int16 *)v15 + 22), 1785620818LL);
  *(_QWORD *)(v7 + 24) = v17;
  if ( !v17 || (v18 = (void *)Win32AllocPool(epi16, 0x6A6E6952u), (*(_QWORD *)(v7 + 16) = v18) == 0LL) )
  {
LABEL_37:
    v11 = 1;
    goto LABEL_38;
  }
  memmove(v18, Src, epi16);
  *(_DWORD *)(v7 + 104) = epi16;
  *(_DWORD *)(v7 + 108) = 0;
  *(_DWORD *)(v7 + 112) = 0x10000;
  v19 = RIMSearchHidTLCInfo(v41.UsagePage, v41.Usage);
  v21 = v19;
  if ( v19 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDq(
        v41.Usage,
        v41.UsagePage,
        v20,
        0xCu,
        (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids,
        v41.UsagePage,
        v41.Usage,
        v19);
      v5 = a1;
    }
  }
  else
  {
    v21 = RIMAllocateAndLinkHidTLCInfo(v41.UsagePage, v41.Usage);
    if ( !v21 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 3;
        WPP_RECORDER_SF_q((_DWORD)gRimLog, v8, 1, 13, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids, a1);
      }
      v11 = 1;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDD(
        (__int64)gRimLog,
        4u,
        1u,
        0xEu,
        (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids,
        v21,
        v41.UsagePage,
        v41.Usage);
    v5 = a1;
    if ( v11 )
      goto LABEL_38;
  }
  ++*((_DWORD *)v21 + 5);
  v22 = *(_DWORD *)&v41.Usage;
  *(_QWORD *)(a2 + 472) = v21;
  if ( HIWORD(v22) == 13 && ((unsigned __int16)(v22 - 1) <= 1u || (unsigned __int16)(v22 - 4) <= 1u) )
  {
    v23 = (__int64)a3;
    *(_OWORD *)&v38.Usage = v39;
    *(_QWORD *)&v38.Reserved[11] = Src;
    *(__m128i *)&v38.Reserved[3] = v12;
    if ( !(unsigned int)RIMIDECreatePointerDeviceInfo(v5, a2, a3, v7, &v38) )
      goto LABEL_35;
    Usage = v41.Usage;
  }
  else
  {
    v38 = v41;
    v23 = (__int64)a3;
    if ( (unsigned int)RIMIsInteractiveCtrl(&v38) )
      *(_DWORD *)(a2 + 200) |= 0x100u;
  }
  if ( (unsigned int)rimIsExplicitRimUsagesMatchingUsages(v5, v41.UsagePage, Usage) )
  {
    v25 = *(_DWORD *)(a2 + 184) & 0xFFFF3FFF | 0x4000;
    *(_DWORD *)(a2 + 200) |= 0x40u;
    *(_DWORD *)(a2 + 184) = v25;
  }
  else if ( *(_DWORD *)(v5 + 864) )
  {
    v26 = (int)IsProcessHidRawInputSupported() < 0;
    v27 = 0;
    if ( !v26 )
      v27 = 0x8000;
    v28 = v41.Usage;
    v29 = v27 | *(_DWORD *)(a2 + 184) & 0xFFFF7FFF;
    UsagePage = v41.UsagePage;
    *(_DWORD *)(a2 + 184) = v29;
    if ( (unsigned int)rimAnyExplicitRimUsagesMatchingUsages(UsagePage, v28) )
      goto LABEL_35;
  }
  v31 = RIMIDEAllocateInjectedInfo(v23);
  *(_QWORD *)(a2 + 384) = v31;
  if ( !v31 )
  {
LABEL_35:
    v11 = 1;
    goto LABEL_38;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v32);
  *(_DWORD *)(CurrentProcessWin32Process + 820) |= 0x200000u;
  *(_QWORD *)(*(_QWORD *)(a2 + 384) + 88LL) = CurrentProcessWin32Process;
LABEL_38:
  if ( gpfnHidP_FreeCollectionDescription )
    gpfnHidP_FreeCollectionDescription(&v42);
  v42.CollectionDesc = 0LL;
  if ( !v11 )
    return v7;
  if ( v7 )
    RIMFreeHidDesc(v7, v8, v9, v10);
  v35 = *(_QWORD *)(a2 + 480);
  if ( v35 )
  {
    RIMFreePointerDevice(v5, v35);
    *(_QWORD *)(a2 + 480) = 0LL;
  }
  RIMIDEFreeInjectedInfo(a2);
  return 0LL;
}
