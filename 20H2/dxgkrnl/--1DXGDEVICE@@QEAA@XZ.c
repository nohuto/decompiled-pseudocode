/*
 * XREFs of ??1DXGDEVICE@@QEAA@XZ @ 0x1C0114544
 * Callers:
 *     ??_GDXGDEVICE@@QEAAPEAXI@Z @ 0x1C0002270 (--_GDXGDEVICE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001DA54 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z @ 0x1C0040C2C (-VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z.c)
 */

void __fastcall DXGDEVICE::~DXGDEVICE(DXGDEVICE *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  void **v5; // rsi
  __int64 v6; // rbp
  _DWORD *v7; // rdi
  void *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rbp
  _QWORD *v14; // rdi
  __int64 v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 18) != 1 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v10 + 24) = 682LL;
    WdLogEvent5_WdAssertion(v10);
  }
  operator delete(*((void **)this + 235));
  v5 = (void **)((char *)this + 1272);
  v6 = 16LL;
  v7 = (_DWORD *)((char *)this + 1400);
  do
  {
    if ( *(v7 - 112) )
      operator delete[](*(v5 - 56));
    if ( *v7 )
      operator delete[](*v5);
    ++v7;
    ++v5;
    --v6;
  }
  while ( v6 );
  if ( (*((_BYTE *)this + 1869) & 2) != 0 )
  {
    v11 = *((_QWORD *)this + 56);
    if ( v11 )
    {
      v22 = 22;
      DXG_HOST_GLOBAL_VMBUS::VmBusSendSetGuestData(v11, 1, v4, (struct _MDL *)&v22);
    }
    DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 80));
    v12 = *((_QWORD *)this + 14);
    if ( v12 )
    {
      v13 = v12 + 264;
      v14 = (_QWORD *)((char *)this + 120);
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v12 + 264));
      v15 = *((_QWORD *)this + 15);
      if ( v15 )
      {
        if ( *(_QWORD **)(v15 + 8) != v14 || (v16 = (_QWORD *)*((_QWORD *)this + 16), (_QWORD *)*v16 != v14) )
          __fastfail(3u);
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
        *((_QWORD *)this + 16) = 0LL;
        *v14 = 0LL;
      }
      *(_QWORD *)(v13 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v13, 0LL);
      KeLeaveCriticalRegion();
    }
    *((_QWORD *)this + 11) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 80, 0LL);
    KeLeaveCriticalRegion();
  }
  v8 = (void *)*((_QWORD *)this + 239);
  if ( v8 )
    operator delete(v8);
  v9 = *((_QWORD *)this + 56);
  if ( (*((_BYTE *)this + 1869) & 1) != 0 )
  {
    if ( v9 )
      CRefCountedBuffer::RefCountedBufferRelease((PSLIST_ENTRY)v9);
  }
  else
  {
    operator delete((void *)v9);
  }
  if ( (*((_BYTE *)this + 1869) & 4) != 0 )
  {
    v9 = *((_QWORD *)this + 2);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 184), 0xFFFFFFFF) == 1 )
    {
      v9 = *((_QWORD *)this + 2);
      _InterlockedExchange64((volatile __int64 *)(v9 + 176), 0LL);
    }
  }
  if ( *((DXGDEVICE **)this + 66) != (DXGDEVICE *)((char *)this + 528) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v9, v3);
    *(_QWORD *)(v17 + 24) = 953LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( *((DXGDEVICE **)this + 64) != (DXGDEVICE *)((char *)this + 512) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v9, v3);
    *(_QWORD *)(v18 + 24) = 953LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( *((DXGDEVICE **)this + 62) != (DXGDEVICE *)((char *)this + 496) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v9, v3);
    *(_QWORD *)(v19 + 24) = 953LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( *((DXGDEVICE **)this + 60) != (DXGDEVICE *)((char *)this + 480) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v9, v3);
    *(_QWORD *)(v20 + 24) = 953LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( *((DXGDEVICE **)this + 58) != (DXGDEVICE *)((char *)this + 464) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v9, v3);
    *(_QWORD *)(v21 + 24) = 953LL;
    WdLogEvent5_WdAssertion(v21);
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
}
