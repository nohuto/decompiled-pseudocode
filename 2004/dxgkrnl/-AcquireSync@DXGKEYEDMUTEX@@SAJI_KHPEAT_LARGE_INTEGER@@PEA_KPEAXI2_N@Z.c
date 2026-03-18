/*
 * XREFs of ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1C028F458
 * Callers:
 *     ?VmBusAcquireKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023BAC0 (-VmBusAcquireKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkAcquireKeyedMutex @ 0x1C0292380 (DxgkAcquireKeyedMutex.c)
 *     DxgkAcquireKeyedMutex2 @ 0x1C0292630 (DxgkAcquireKeyedMutex2.c)
 *     ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C02981A8 (-AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_T.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002B94 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x1C0026B4C (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0040074 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C0048210 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z @ 0x1C0048388 (-IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z.c)
 *     ?IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z @ 0x1C00483C8 (-IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I_KHPEAT_LARGE_INTEGER@@PEA_K4@Z @ 0x1C0245FA4 (-VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::AcquireSync(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        union _LARGE_INTEGER *a4,
        DXGKEYEDMUTEX *a5,
        void *a6,
        size_t Size,
        unsigned __int64 *a8,
        bool a9)
{
  __int64 v9; // rdi
  unsigned __int64 *v10; // r12
  __int64 v11; // rax
  unsigned int v12; // esi
  struct _KTHREAD **Current; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGKEYEDMUTEX *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  struct _LIST_ENTRY **p_Blink; // rdx
  struct _KEVENT *Blink; // rcx
  __int64 v22; // r8
  void *v23; // r15
  __int64 v24; // r14
  _QWORD *v25; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  int v30; // eax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct _LIST_ENTRY ***v34; // rcx
  volatile unsigned int Lock; // r13d
  __int64 v36; // rdx
  struct _LIST_ENTRY *v37; // rax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned __int64 *v42; // rcx
  __int64 v43; // rax
  const void *v44; // rdx
  ULONG64 v45; // r9
  struct DXGKEYEDMUTEX *v46; // [rsp+50h] [rbp-A8h] BYREF
  _BYTE v47[24]; // [rsp+58h] [rbp-A0h] BYREF
  struct _KEVENT v48[5]; // [rsp+70h] [rbp-88h] BYREF

  v9 = (unsigned int)a1;
  v10 = (unsigned __int64 *)a5;
  if ( !a5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v11 + 24) = 4042LL;
    WdLogEvent5_WdAssertion(v11);
  }
  *v10 = 0LL;
  v12 = 0;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  v46 = 0LL;
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&a5, v9, Current, &v46);
  v17 = v46;
  if ( !v46 )
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v18 + 24) = v9;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v18);
LABEL_21:
    if ( a5 )
      DXGKEYEDMUTEX::ReleaseReference(a5, v19);
    return 3221225485LL;
  }
  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v47, v46);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v47);
  v23 = a6;
  if ( a6 )
  {
    v24 = (unsigned int)Size;
    if ( !(_DWORD)Size )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdWarning(Blink, p_Blink, v22);
      v25[3] = v17;
      v25[4] = -1073741811LL;
      goto LABEL_8;
    }
    if ( (_DWORD)Size != *((_DWORD *)v17 + 40) )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdWarning(Blink, p_Blink, v22);
      v25[3] = v17;
      v25[4] = v24;
      v25[5] = *((unsigned int *)v17 + 40);
      v25[6] = -1073741811LL;
      goto LABEL_8;
    }
  }
  else
  {
    LODWORD(v24) = Size;
    if ( (_DWORD)Size )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdWarning(Blink, p_Blink, v22);
      v25[3] = -1073741811LL;
LABEL_8:
      WdLogEvent5_WdWarning(v25);
LABEL_20:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v47);
      goto LABEL_21;
    }
  }
  if ( *((_BYTE *)v17 + 168) )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)Blink, (__int64)p_Blink);
    v12 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendAcquireKeyedMutexSync(
            *((DXG_GUEST_GLOBAL_VMBUS **)Global + 197),
            (struct DXGPROCESS *)Current,
            (void **)v17,
            v9,
            a2,
            a3,
            a4,
            v10,
            a8);
LABEL_53:
    if ( v23 )
    {
      if ( a9 )
      {
        v44 = (const void *)*((_QWORD *)v17 + 19);
        v45 = (ULONG64)v23 + (unsigned int)v24;
        if ( v45 > MmUserProbeAddress || v45 <= (unsigned __int64)v23 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v23, v44, (unsigned int)v24);
      }
      else
      {
        memmove(v23, *((const void **)v17 + 19), (unsigned int)v24);
      }
    }
LABEL_40:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v47);
    if ( a5 )
      DXGKEYEDMUTEX::ReleaseReference(a5, v39);
    return v12;
  }
  if ( *((_DWORD *)v17 + 14) != 3 )
  {
    if ( DXGKEYEDMUTEX::IsOwner(v17, v9)
      || *((_DWORD *)v17 + 14) == 2 && DXGKEYEDMUTEX::IsSameWaiter(v9, *((struct DXGPROCESS ***)v17 + 11)) )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v27, p_Blink);
      v28[3] = -1073741811LL;
      v28[4] = v17;
      v28[5] = v9;
      WdLogEvent5_WdError(v28);
      goto LABEL_20;
    }
    v30 = *((_DWORD *)v17 + 14);
    if ( (v30 & 0xFFFFFFFD) != 0 && (v30 != 1 || a2 == *((_QWORD *)v17 + 9) || a3) )
    {
      Flink = (struct _LIST_ENTRY *)*((_QWORD *)v17 + 10);
LABEL_48:
      *v10 = (unsigned __int64)Flink;
      v42 = a8;
      if ( a8 )
        *a8 = *((_QWORD *)v17 + 9);
      if ( (unsigned int)(*((_DWORD *)v17 + 14) - 1) > 1 )
      {
        v43 = WdLogNewEntry5_WdAssertion(v42, p_Blink);
        *(_QWORD *)(v43 + 24) = 4219LL;
        WdLogEvent5_WdAssertion(v43);
      }
      *((_DWORD *)v17 + 14) = 0;
      *((_DWORD *)v17 + 15) = v9;
      *((_QWORD *)v17 + 8) = DXGPROCESS::GetCurrent((__int64)v42, (__int64)p_Blink);
      *((_QWORD *)v17 + 11) = 0LL;
      goto LABEL_53;
    }
    memset(v48, 0, 0x50uLL);
    LODWORD(v48[0].Header.WaitListHead.Flink) = v9;
    v48[0].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)DXGPROCESS::GetCurrent(v33, v32);
    *(_QWORD *)&v48[0].Header.Lock = a2;
    v48[2].Header.LockNV = 0;
    KeInitializeEvent(&v48[1], NotificationEvent, 0);
    v34 = (struct _LIST_ENTRY ***)*((_QWORD *)v17 + 13);
    if ( *v34 != (struct _LIST_ENTRY **)((char *)v17 + 96) )
      goto LABEL_60;
    v48[2].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)((char *)v17 + 96);
    *(_QWORD *)&v48[3].Header.Lock = v34;
    *v34 = &v48[2].Header.WaitListHead.Blink;
    *((_QWORD *)v17 + 13) = &v48[2].Header.WaitListHead.Blink;
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v47, (__int64)&v48[2].Header.WaitListHead.Blink);
    v12 = KeWaitForSingleObject(&v48[1], Executive, 0, 1u, a4);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v47);
    Lock = v48[2].Header.Lock;
    if ( v48[2].Header.LockNV )
    {
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v47);
      if ( a5 )
        DXGKEYEDMUTEX::ReleaseReference(a5, v36);
      return Lock;
    }
    v37 = *(struct _LIST_ENTRY **)&v48[3].Header.Lock;
    Blink = (struct _KEVENT *)v48[2].Header.WaitListHead.Blink;
    if ( (struct _LIST_ENTRY **)v48[2].Header.WaitListHead.Blink->Blink != &v48[2].Header.WaitListHead.Blink
      || (p_Blink = &v48[2].Header.WaitListHead.Blink,
          **(struct _KEVENT ***)&v48[3].Header.Lock != (struct _KEVENT *)&v48[2].Header.WaitListHead.Blink) )
    {
LABEL_60:
      __fastfail(3u);
    }
    **(_QWORD **)&v48[3].Header.Lock = v48[2].Header.WaitListHead.Blink;
    Blink->Header.WaitListHead.Flink = v37;
    v38 = *((_DWORD *)v17 + 14);
    if ( v38 == 2 )
    {
      Blink = v48;
      if ( *((struct _KEVENT **)v17 + 11) == v48 )
        v12 = 0;
    }
    if ( v12 )
      goto LABEL_40;
    if ( v38 != 3 )
    {
      Flink = v48[2].Header.WaitListHead.Flink;
      goto LABEL_48;
    }
  }
  v40 = WdLogNewEntry5_WdWarning(Blink, p_Blink, v22);
  *(_QWORD *)(v40 + 24) = v17;
  *(_QWORD *)(v40 + 32) = 128LL;
  WdLogEvent5_WdWarning(v40);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v47);
  if ( a5 )
    DXGKEYEDMUTEX::ReleaseReference(a5, v41);
  return 128LL;
}
