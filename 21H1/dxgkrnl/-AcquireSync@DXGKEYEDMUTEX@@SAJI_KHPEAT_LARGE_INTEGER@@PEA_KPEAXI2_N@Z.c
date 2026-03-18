/*
 * XREFs of ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1C028AFB8
 * Callers:
 *     ?VmBusAcquireKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0237810 (-VmBusAcquireKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkAcquireKeyedMutex @ 0x1C028DE90 (DxgkAcquireKeyedMutex.c)
 *     DxgkAcquireKeyedMutex2 @ 0x1C028E140 (DxgkAcquireKeyedMutex2.c)
 *     ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0293CB8 (-AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_T.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000D034 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x1C0025E48 (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C003F104 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C0047240 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z @ 0x1C00473B8 (-IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z.c)
 *     ?IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z @ 0x1C00473F8 (-IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I_KHPEAT_LARGE_INTEGER@@PEA_K4@Z @ 0x1C0241CD4 (-VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@.c)
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
  __int64 v26; // rdx
  struct DXGGLOBAL *Global; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  int v31; // eax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct _LIST_ENTRY ***v35; // rcx
  __int64 v36; // rdx
  volatile unsigned int Lock; // r13d
  __int64 v38; // rdx
  struct _LIST_ENTRY *v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rdx
  unsigned __int64 *v45; // rcx
  __int64 v46; // rax
  const void *v47; // rdx
  ULONG64 v48; // r9
  struct DXGKEYEDMUTEX *v49; // [rsp+50h] [rbp-A8h] BYREF
  _BYTE v50[24]; // [rsp+58h] [rbp-A0h] BYREF
  struct _KEVENT v51[5]; // [rsp+70h] [rbp-88h] BYREF

  v9 = (unsigned int)a1;
  v10 = (unsigned __int64 *)a5;
  if ( !a5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v11 + 24) = 3903LL;
    WdLogEvent5_WdAssertion(v11);
  }
  *v10 = 0LL;
  v12 = 0;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  v49 = 0LL;
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&a5, v9, Current, &v49);
  v17 = v49;
  if ( !v49 )
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
  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v50, v49);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v50);
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
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v50, v26);
      goto LABEL_21;
    }
  }
  if ( *((_BYTE *)v17 + 168) )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)Blink, (__int64)p_Blink);
    v12 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendAcquireKeyedMutexSync(
            *((DXG_GUEST_GLOBAL_VMBUS **)Global + 183),
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
        v47 = (const void *)*((_QWORD *)v17 + 19);
        v48 = (ULONG64)v23 + (unsigned int)v24;
        if ( v48 > MmUserProbeAddress || v48 <= (unsigned __int64)v23 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v23, v47, (unsigned int)v24);
      }
      else
      {
        memmove(v23, *((const void **)v17 + 19), (unsigned int)v24);
      }
    }
LABEL_40:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX(
      (DXGPROCESSCOPYPROTECTIONMUTEX *)v50,
      (__int64)p_Blink);
    if ( a5 )
      DXGKEYEDMUTEX::ReleaseReference(a5, v41);
    return v12;
  }
  if ( *((_DWORD *)v17 + 14) != 3 )
  {
    if ( DXGKEYEDMUTEX::IsOwner(v17, v9)
      || *((_DWORD *)v17 + 14) == 2 && DXGKEYEDMUTEX::IsSameWaiter(v9, *((struct DXGPROCESS ***)v17 + 11)) )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v28, p_Blink);
      v29[3] = -1073741811LL;
      v29[4] = v17;
      v29[5] = v9;
      WdLogEvent5_WdError(v29);
      goto LABEL_20;
    }
    v31 = *((_DWORD *)v17 + 14);
    if ( (v31 & 0xFFFFFFFD) != 0 && (v31 != 1 || a2 == *((_QWORD *)v17 + 9) || a3) )
    {
      Flink = (struct _LIST_ENTRY *)*((_QWORD *)v17 + 10);
LABEL_48:
      *v10 = (unsigned __int64)Flink;
      v45 = a8;
      if ( a8 )
        *a8 = *((_QWORD *)v17 + 9);
      if ( (unsigned int)(*((_DWORD *)v17 + 14) - 1) > 1 )
      {
        v46 = WdLogNewEntry5_WdAssertion(v45, p_Blink);
        *(_QWORD *)(v46 + 24) = 4080LL;
        WdLogEvent5_WdAssertion(v46);
      }
      *((_DWORD *)v17 + 14) = 0;
      *((_DWORD *)v17 + 15) = v9;
      *((_QWORD *)v17 + 8) = DXGPROCESS::GetCurrent((__int64)v45, (__int64)p_Blink);
      *((_QWORD *)v17 + 11) = 0LL;
      goto LABEL_53;
    }
    memset(v51, 0, 0x50uLL);
    LODWORD(v51[0].Header.WaitListHead.Flink) = v9;
    v51[0].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)DXGPROCESS::GetCurrent(v34, v33);
    *(_QWORD *)&v51[0].Header.Lock = a2;
    v51[2].Header.LockNV = 0;
    KeInitializeEvent(&v51[1], NotificationEvent, 0);
    v35 = (struct _LIST_ENTRY ***)*((_QWORD *)v17 + 13);
    if ( *v35 != (struct _LIST_ENTRY **)((char *)v17 + 96) )
      goto LABEL_60;
    v51[2].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)((char *)v17 + 96);
    *(_QWORD *)&v51[3].Header.Lock = v35;
    *v35 = &v51[2].Header.WaitListHead.Blink;
    *((_QWORD *)v17 + 13) = &v51[2].Header.WaitListHead.Blink;
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v50, (__int64)&v51[2].Header.WaitListHead.Blink);
    v12 = KeWaitForSingleObject(&v51[1], Executive, 0, 1u, a4);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v50);
    Lock = v51[2].Header.Lock;
    if ( v51[2].Header.LockNV )
    {
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v50, v36);
      if ( a5 )
        DXGKEYEDMUTEX::ReleaseReference(a5, v38);
      return Lock;
    }
    v39 = *(struct _LIST_ENTRY **)&v51[3].Header.Lock;
    Blink = (struct _KEVENT *)v51[2].Header.WaitListHead.Blink;
    if ( (struct _LIST_ENTRY **)v51[2].Header.WaitListHead.Blink->Blink != &v51[2].Header.WaitListHead.Blink
      || (p_Blink = &v51[2].Header.WaitListHead.Blink,
          **(struct _KEVENT ***)&v51[3].Header.Lock != (struct _KEVENT *)&v51[2].Header.WaitListHead.Blink) )
    {
LABEL_60:
      __fastfail(3u);
    }
    **(_QWORD **)&v51[3].Header.Lock = v51[2].Header.WaitListHead.Blink;
    Blink->Header.WaitListHead.Flink = v39;
    v40 = *((_DWORD *)v17 + 14);
    if ( v40 == 2 )
    {
      Blink = v51;
      if ( *((struct _KEVENT **)v17 + 11) == v51 )
        v12 = 0;
    }
    if ( v12 )
      goto LABEL_40;
    if ( v40 != 3 )
    {
      Flink = v51[2].Header.WaitListHead.Flink;
      goto LABEL_48;
    }
  }
  v42 = WdLogNewEntry5_WdWarning(Blink, p_Blink, v22);
  *(_QWORD *)(v42 + 24) = v17;
  *(_QWORD *)(v42 + 32) = 128LL;
  WdLogEvent5_WdWarning(v42);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v50, v43);
  if ( a5 )
    DXGKEYEDMUTEX::ReleaseReference(a5, v44);
  return 128LL;
}
