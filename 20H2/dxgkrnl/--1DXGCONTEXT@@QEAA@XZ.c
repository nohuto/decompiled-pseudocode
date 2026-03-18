/*
 * XREFs of ??1DXGCONTEXT@@QEAA@XZ @ 0x1C00E4204
 * Callers:
 *     ??_GDXGCONTEXT@@QEAAPEAXI@Z @ 0x1C00022A4 (--_GDXGCONTEXT@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000230C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0002378 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00025F8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01165A8 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ??1DXGPRESENT@@QEAA@XZ @ 0x1C016590C (--1DXGPRESENT@@QEAA@XZ.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0226798 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C026BCA4 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGCONTEXT::~DXGCONTEXT(DXGCONTEXT *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  DXGDEVICESYNCOBJECT *v13; // rcx
  DXGDEVICESYNCOBJECT *v14; // rcx
  void **v15; // rbx
  void *v16; // rdx
  void *v17; // rcx
  __int64 v18; // rdx
  DXGDEVICE *v19; // rbp
  void *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v28; // rax
  unsigned int v29; // r10d
  __int64 v30; // rax
  __int64 v31; // r9
  int v32; // edx
  __int64 v33; // rdx
  __int64 v34; // rax
  void *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  _BYTE v43[32]; // [rsp+30h] [rbp-38h] BYREF

  v2 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v2[3] = this;
  v2[4] = *((unsigned int *)this + 6);
  v2[5] = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  WdLogEvent5_WdEvent(v2);
  v3 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v3 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v3 + 136)) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v21 + 24) = 683LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v22 + 24) = 684LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !*((_BYTE *)this + 452) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v23 + 24) = 690LL;
    WdLogEvent5_WdAssertion(v23);
  }
  v8 = *((_QWORD *)this + 19);
  if ( v8 )
  {
    v19 = (DXGDEVICE *)*((_QWORD *)this + 2);
    if ( !v19 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v24 + 24) = 9735LL;
      WdLogEvent5_WdAssertion(v24);
    }
    if ( !*(_DWORD *)(v8 + 420) )
      goto LABEL_44;
    Current = DXGPROCESS::GetCurrent();
    if ( !Current )
    {
      v28 = WdLogNewEntry5_WdAssertion(v26, v25);
      *(_QWORD *)(v28 + 24) = 9745LL;
      WdLogEvent5_WdAssertion(v28);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v43,
      (struct _KTHREAD **)Current);
    v29 = *(_DWORD *)(v8 + 420);
    v30 = (v29 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v30 < *((_DWORD *)Current + 64) )
    {
      v31 = *((_QWORD *)Current + 30);
      v32 = *(_DWORD *)(v31 + 16 * v30 + 8);
      if ( ((v29 >> 25) & 0x60) == (*(_BYTE *)(v31 + 16 * v30 + 8) & 0x60) && (v32 & 0x2000) == 0 && (v32 & 0x1F) != 0 )
      {
        v33 = v32 & 0x1F;
        if ( (_BYTE)v33 == 4 )
        {
          v35 = *(void **)(v31 + 16LL * (unsigned int)v30);
          if ( v35 )
            *(_DWORD *)(v31 + 16 * (((unsigned __int64)v29 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
          goto LABEL_56;
        }
        v34 = WdLogNewEntry5_WdError(0x2000LL, v33);
        *(_QWORD *)(v34 + 24) = 267LL;
        WdLogEvent5_WdError(v34);
      }
    }
    v35 = 0LL;
LABEL_56:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
    if ( v35 )
    {
      if ( *((_DWORD *)v19 + 144) == 4 )
        DXGDEVICE::DestroyClientResource(v19, v35);
      else
        DXGDEVICE::DestroyAllocationInternal(
          v19,
          0,
          0LL,
          (struct DXGRESOURCE *)v35,
          0LL,
          DXGDEVICE::DestroyFlagsDefault);
    }
    else
    {
      v38 = WdLogNewEntry5_WdError(v37, v36);
      *(_QWORD *)(v38 + 24) = v19;
      *(_QWORD *)(v38 + 32) = *(unsigned int *)(v8 + 420);
      WdLogEvent5_WdError(v38);
    }
    *(_QWORD *)(v8 + 416) = 0LL;
LABEL_44:
    v20 = (void *)*((_QWORD *)this + 19);
    if ( v20 )
    {
      DXGPRESENT::~DXGPRESENT(*((DXGPRESENT **)this + 19));
      ExFreePoolWithTag(v20, 0);
    }
    *((_QWORD *)this + 19) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 17);
  if ( v9 )
  {
    MmUnsecureVirtualMemory(v9);
    *((_QWORD *)this + 17) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 16);
  if ( v10 )
  {
    if ( !*((_QWORD *)this + 15) )
    {
      v39 = WdLogNewEntry5_WdAssertion(v10, v6);
      *(_QWORD *)(v39 + 24) = 724LL;
      WdLogEvent5_WdAssertion(v39);
      v10 = (void *)*((_QWORD *)this + 16);
    }
    ExFreePoolWithTag(v10, 0);
    *((_QWORD *)this + 16) = 0LL;
  }
  if ( *((_QWORD *)this + 15) )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 15, (PSIZE_T)this + 14, 0x8000u);
    *((_QWORD *)this + 15) = 0LL;
    *((_DWORD *)this + 26) = 0;
    *((_QWORD *)this + 14) = 0LL;
  }
  v11 = (void *)*((_QWORD *)this + 12);
  if ( v11 )
  {
    MmUnsecureVirtualMemory(v11);
    *((_QWORD *)this + 12) = 0LL;
  }
  if ( *((_QWORD *)this + 11) )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 11, (PSIZE_T)this + 10, 0x8000u);
    *((_QWORD *)this + 11) = 0LL;
    *((_DWORD *)this + 18) = 0;
    *((_QWORD *)this + 10) = 0LL;
  }
  if ( *((_QWORD *)this + 46) )
  {
    v40 = WdLogNewEntry5_WdAssertion(v11, v6);
    *(_QWORD *)(v40 + 24) = 766LL;
    WdLogEvent5_WdAssertion(v40);
  }
  if ( *((_QWORD *)this + 50) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL) + 624LL))();
    *((_QWORD *)this + 50) = 0LL;
  }
  v12 = (void *)*((_QWORD *)this + 8);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *((_QWORD *)this + 8) = 0LL;
  }
  if ( *((_QWORD *)this + 7) )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 7, (PSIZE_T)this + 6, 0x8000u);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  v13 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
  if ( v13 )
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v13);
  v14 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 32);
  if ( v14 )
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v14);
  v15 = (void **)((char *)this + 424);
  while ( 1 )
  {
    v16 = *v15;
    if ( *v15 == v15 )
      break;
    DXGCONTEXT::DestroyHwQueue(this, v16, 0LL);
  }
  if ( *((DXGCONTEXT **)this + 44) != (DXGCONTEXT *)((char *)this + 352) )
  {
    v41 = WdLogNewEntry5_WdCriticalError(v14, v16);
    *(_QWORD *)(v41 + 24) = 275LL;
    *(_QWORD *)(v41 + 32) = 44LL;
    *(_QWORD *)(v41 + 40) = this;
    *(_OWORD *)(v41 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v41);
  }
  v17 = (void *)*((_QWORD *)this + 62);
  if ( v17 )
    ExFreePoolWithTag(v17, 0x4B677844u);
  v18 = *((unsigned int *)this + 6);
  *((_QWORD *)this + 62) = 0LL;
  if ( (_DWORD)v18 )
  {
    DXGPROCESS::FreeHandleSafe(*(DXGPROCESS **)(*((_QWORD *)this + 2) + 40LL), v18);
    *((_DWORD *)this + 6) = 0;
  }
  if ( *v15 != v15 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v17, v18);
    *(_QWORD *)(v42 + 24) = 953LL;
    WdLogEvent5_WdAssertion(v42);
  }
  *((_QWORD *)this + 2) = 0LL;
}
