/*
 * XREFs of VidSchiProcessHwQueuePageFaultedDpc @ 0x1C003B008
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C0006330 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C002EED0 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C000A580 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C00115E0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C001217C (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0014160 (VidSchiMarkDeviceAsError.c)
 *     _tlgKeywordOn @ 0x1C0026C84 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U4@U2@U4@U4@U4@U2@U4@U4@U4@U4@U4@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@646664666664AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0029A78 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNIC_ea_1C0029A78.c)
 *     ?VidSchiValidatePageFaultFlags@@YAXW4_DXGK_PAGE_FAULT_FLAGS@@@Z @ 0x1C0039A08 (-VidSchiValidatePageFaultFlags@@YAXW4_DXGK_PAGE_FAULT_FLAGS@@@Z.c)
 */

void __fastcall VidSchiProcessHwQueuePageFaultedDpc(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // r14
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int64 v4; // rsi
  struct _KEVENT *v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  _BYTE *v10; // r15
  __int64 v11; // r12
  _QWORD *v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  const void *v18; // rdx
  _BYTE *v19; // r8
  __int64 v20; // rcx
  _BYTE *v21; // rdx
  char v22; // al
  _BYTE *v23; // rax
  _BYTE *v24; // r9
  __int64 v25; // rcx
  _BYTE *v26; // rdx
  char v27; // al
  _BYTE *v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // r11d
  __int64 Blink; // rcx
  __int64 v33; // rdx
  int v34; // [rsp+B0h] [rbp-80h] BYREF
  int v35; // [rsp+B4h] [rbp-7Ch] BYREF
  int v36; // [rsp+B8h] [rbp-78h] BYREF
  int v37; // [rsp+BCh] [rbp-74h] BYREF
  int v38; // [rsp+C0h] [rbp-70h] BYREF
  int v39; // [rsp+C4h] [rbp-6Ch] BYREF
  int v40; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v41; // [rsp+D0h] [rbp-60h]
  __int128 v42; // [rsp+E0h] [rbp-50h]
  __int128 v43; // [rsp+F0h] [rbp-40h]
  __int128 v44; // [rsp+100h] [rbp-30h]
  __int128 v45; // [rsp+110h] [rbp-20h]
  _QWORD v46[2]; // [rsp+120h] [rbp-10h] BYREF
  char v47; // [rsp+130h] [rbp+0h]
  void *v48; // [rsp+138h] [rbp+8h] BYREF
  __int64 v49; // [rsp+140h] [rbp+10h] BYREF
  __int64 v50; // [rsp+148h] [rbp+18h] BYREF
  __int64 v51; // [rsp+150h] [rbp+20h] BYREF
  unsigned __int16 *v52; // [rsp+158h] [rbp+28h] BYREF
  __int128 v53; // [rsp+160h] [rbp+30h] BYREF
  _QWORD v54[4]; // [rsp+170h] [rbp+40h] BYREF
  __int16 v55; // [rsp+190h] [rbp+60h]
  __int16 v56; // [rsp+1F0h] [rbp+C0h] BYREF
  int v57; // [rsp+1F8h] [rbp+C8h] BYREF
  int v58; // [rsp+200h] [rbp+D0h] BYREF
  int v59; // [rsp+208h] [rbp+D8h] BYREF

  Next = ListEntry[2].Next;
  v2 = *(__int128 *)((char *)&ListEntry[3] + 8);
  v42 = *(__int128 *)((char *)&ListEntry[2] + 8);
  v3 = *(__int128 *)((char *)&ListEntry[4] + 8);
  v43 = v2;
  v44 = v3;
  v53 = *(__int128 *)((char *)&ListEntry[5] + 8);
  v45 = v53;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[389], ListEntry);
  v4 = (int)v53;
  v5 = (struct _KEVENT *)*((_QWORD *)&Next[1].Next + 1);
  VidSchiValidatePageFaultFlags((unsigned int)v53, v6);
  v55 = 256;
  v54[0] = (char *)v5 + 1712;
  AcquireSpinLock::Acquire((Acquire *)v54);
  v41 = 0LL;
  v9 = DWORD2(v45);
  v10 = 0LL;
  v11 = *((_QWORD *)&v42 + 1);
  v12 = 0LL;
  v46[1] = v46;
  v46[0] = v46;
  v47 = 0;
  if ( (v4 & 2) == 0 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)&v43 + 1) + 40LL) + 40LL);
    goto LABEL_9;
  }
  if ( (v4 & 0x40) != 0 )
  {
    v14 = *(_QWORD *)(*((_QWORD *)&v43 + 1) + 8LL);
LABEL_9:
    v15 = *(_QWORD *)(v14 + 8);
    v16 = v43;
    v12 = *(_QWORD **)(v15 + 40);
    v10 = (_BYTE *)v12[330];
    v41 = v12[329];
    *(_DWORD *)(v15 + 216) = DWORD2(v44);
    v17 = HIDWORD(v44);
    *(_QWORD *)(v15 + 208) = v16;
    *(_DWORD *)(v15 + 220) = v17;
    *(_DWORD *)(v15 + 224) = v4;
    *(_QWORD *)(v15 + 232) = v11;
    *(_DWORD *)(v15 + 228) = v9;
    VidSchiMarkDeviceAsError((struct HwQueueStagingList *)v46, v15, 9, 0LL);
    goto LABEL_10;
  }
  if ( (v4 & 0xC) == 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v7);
    v13[6] = *((_QWORD *)&v43 + 1);
    v13[7] = v11;
    v13[3] = 281LL;
    v13[4] = 13LL;
    v13[5] = v4;
    WdLogEvent5_WdCriticalError(v13);
    __debugbreak();
  }
  if ( (v4 & 0x80u) != 0LL )
  {
    v10 = *(_BYTE **)(*((_QWORD *)&v43 + 1) + 80LL);
    v12 = *(_QWORD **)(*((_QWORD *)&v43 + 1) + 24LL);
    v41 = *(_QWORD *)(*((_QWORD *)&v43 + 1) + 72LL);
  }
LABEL_10:
  if ( !g_PageFaultDebugMode && !KdRefreshDebuggerNotPresent() )
  {
    if ( v12 )
      v18 = (const void *)v12[331];
    else
      v18 = 0LL;
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      "The GPU Scheduler detected a HW queue page fault at GPU VA 0x%I64X.\n"
      "We broke into the debugger to allow a chance for debugging this issue.\n"
      "Run \"!dxgkdx.gpuva -a %d -p 0x%p -o %d 0x%I64X[ -h]\" command for more info.\n"
      "To disable debug breaks on page fault, run \"?? dxgmms2!g_PageFaultDebugMode=1\" command,\n"
      "or \"ed 0x%p 1\"\n"
      "\n",
      v11,
      HIWORD(Next->Next),
      v18,
      v5->Header.SignalState,
      v11,
      &g_PageFaultDebugMode);
    __debugbreak();
  }
  if ( (v4 & 4) != 0 )
  {
    if ( !*((_DWORD *)&Next[126].Next + 2) )
    {
      v19 = (char *)&v5[122].Header.WaitListHead.Flink + 5;
      if ( !v10 )
        goto LABEL_26;
      v20 = 15LL;
      v21 = (char *)&v5[122].Header.WaitListHead.Flink + 5;
      do
      {
        if ( v20 == -2147483631 )
          break;
        v22 = v21[v10 - v19];
        if ( !v22 )
          break;
        *v21++ = v22;
        --v20;
      }
      while ( v20 );
      v23 = v21 - 1;
      if ( v20 )
        v23 = v21;
      *v23 = 0;
      if ( !v20 )
LABEL_26:
        *v19 = 0;
      *((_DWORD *)&Next[126].Next + 2) = 1;
    }
  }
  else if ( (v4 & 8) != 0 && !HIDWORD(Next[126].Next) )
  {
    v24 = (char *)&Next[126].Next + 12;
    if ( !v10 )
      goto LABEL_39;
    v25 = 15LL;
    v26 = (char *)&Next[126].Next + 12;
    do
    {
      if ( v25 == -2147483631 )
        break;
      v27 = v26[v10 - v24];
      if ( !v27 )
        break;
      *v26++ = v27;
      --v25;
    }
    while ( v25 );
    v28 = v26 - 1;
    if ( v25 )
      v28 = v26;
    *v28 = 0;
    if ( !v25 )
LABEL_39:
      *v24 = 0;
    HIDWORD(Next[126].Next) = 1;
  }
  if ( (unsigned int)dword_1C0051048 > 5 && tlgKeywordOn((__int64)&dword_1C0051048, 0x400000000010LL) )
  {
    Blink = (__int64)v5->Header.WaitListHead.Blink;
    v48 = v10;
    v33 = *(_QWORD *)(Blink + 316);
    v49 = v41;
    v57 = v31 & v9;
    v59 = DWORD1(v45);
    v34 = DWORD1(v44);
    v35 = v44;
    v37 = HIDWORD(v44);
    v38 = DWORD2(v44);
    v51 = v43;
    v39 = v42;
    v58 = v9 >> 1;
    v50 = v11;
    v36 = v4;
    v40 = v29;
    v52 = *(unsigned __int16 **)(Blink + 1496);
    *(_QWORD *)&v53 = v33;
    v56 = v31;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      Blink,
      byte_1C0043D9A,
      v29,
      v30,
      (__int64)&v56,
      (__int64)&v53,
      &v52,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v51,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v50,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v59,
      (__int64)&v58,
      (__int64)&v57,
      (__int64)&v49,
      &v48);
  }
  v5[50].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
  KeSetEvent(v5 + 49, 0, 0);
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v46);
  AcquireSpinLock::Release((AcquireSpinLock *)v54);
}
