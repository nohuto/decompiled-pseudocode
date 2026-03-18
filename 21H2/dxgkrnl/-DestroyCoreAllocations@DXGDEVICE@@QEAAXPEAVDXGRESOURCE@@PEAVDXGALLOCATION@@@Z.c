/*
 * XREFs of ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C02D5C7C
 * Callers:
 *     ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C02E4AD0 (-DrainCoreAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C02E762C (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C00140C4 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x1C004AB40 (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x1C018B750 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z.c)
 *     ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x1C019E3E4 (-DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z.c)
 *     ?DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C019EA24 (-DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C019EFEC (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01D8AD4 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C01D9004 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C02D747C (-TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1C02D7560 (-UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C02E7898 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyCoreAllocations(
        struct _KTHREAD **this,
        struct DXGRESOURCE *a2,
        struct DXGADAPTERALLOCATION **a3)
{
  struct DXGALLOCATION *v3; // r12
  struct DXGALLOCATION *v7; // r9
  HANDLE *v8; // r15
  struct DXGALLOCATION *v9; // rbx
  __int64 v10; // rax
  unsigned int v11; // edx
  unsigned int v12; // r14d
  unsigned int v13; // r14d
  __int64 v14; // r8
  struct COREDEVICEACCESS *v15; // r9
  __int64 v16; // rdx
  void *v17; // rcx
  struct _KTHREAD *v18; // rdx
  ADAPTER_RENDER *v19; // rcx
  int v20; // ebx
  struct DXGALLOCATION *v21; // r14
  __int64 v22; // rax
  __int64 v24; // rax
  unsigned int v25; // r8d
  volatile signed __int32 *v26; // rcx
  struct DXGADAPTERALLOCATION *v27; // rdx
  void *v28; // rcx
  UINT v29; // eax
  struct DXGALLOCATION *v30; // [rsp+50h] [rbp-B0h] BYREF
  struct _DXGKARG_CLOSEALLOCATION v31; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+68h] [rbp-98h] BYREF
  char v33; // [rsp+70h] [rbp-90h]
  struct _DXGKARG_DESTROYALLOCATION v34; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v35[24]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v36[128]; // [rsp+B0h] [rbp-50h] BYREF

  v3 = 0LL;
  v32 = 0LL;
  v33 = 0;
  v31 = 0LL;
  if ( a2 )
  {
    DXGAUTOMUTEX::Initialize((DXGAUTOMUTEX *)&v32, (struct DXGRESOURCE *)((char *)a2 + 80), 1);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v32);
  }
  memset(v36, 0, sizeof(v36));
  if ( !a2 || (v8 = (HANDLE *)*((_QWORD *)a2 + 8)) == 0LL )
    v8 = (HANDLE *)v36;
  v9 = (struct DXGALLOCATION *)a3;
  v30 = (struct DXGALLOCATION *)a3;
  if ( a3 )
  {
    do
    {
      v10 = *((_QWORD *)v9 + 6);
      v3 = (struct DXGALLOCATION *)*((_QWORD *)v9 + 8);
      if ( v10 )
      {
        v11 = *(_DWORD *)(v10 + 4);
        if ( (v11 & 0x2000) != 0 || (v11 & 1) != 0 || (v11 & 2) != 0 || (v11 & 8) != 0 )
        {
          DXGDEVICE::TestAndSetDisplayedPrimary(this, (v11 >> 6) & 0xF, v9, v7);
          v10 = *((_QWORD *)v9 + 6);
        }
        if ( v10 )
        {
          v12 = *(_DWORD *)(v10 + 4);
          if ( (v12 & 0x2000) != 0 )
          {
            if ( *((_QWORD *)v9 + 3) )
            {
              v13 = (v12 >> 6) & 0xF;
              if ( DXGDEVICE::IsDirectFlipAllocationPinned((DXGDEVICE *)this, v9) )
              {
                if ( *(int *)(*((_QWORD *)this[2] + 2) + 2692LL) >= 2200 )
                  DXGDEVICE::UnpinDirectFlipAllocation((DXGDEVICE *)this, v13, v14, &v30, 0LL);
                else
                  DXGDEVICE::UnpinAllDirectFlipAllocations((DXGDEVICE *)this, v13, v14, v15);
              }
            }
          }
        }
      }
      if ( (*((_DWORD *)v9 + 18) & 0x80000) != 0 )
        UnlockParavirtualizedAllocationOnGuest(v9, 0);
      v16 = *((_QWORD *)v9 + 3);
      if ( v16 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)this[2] + 81) + 8LL) + 168LL))(
          *((_QWORD *)this[2] + 82),
          v16,
          (__int64)v9 + 80,
          0LL);
        *((_DWORD *)v9 + 18) |= 1u;
        *((_QWORD *)v9 + 3) = 0LL;
      }
      else
      {
        DXGDEVICE::TraceCloseParavirtualizedAllocation((DXGDEVICE *)this, v9);
      }
      v17 = (void *)*((_QWORD *)v9 + 4);
      if ( v17 )
      {
        v8[v31.NumAllocations++] = v17;
        *((_QWORD *)v9 + 4) = 0LL;
      }
      v9 = v3;
      v30 = v3;
    }
    while ( v3 );
  }
  if ( v31.NumAllocations > (unsigned int)v3 )
  {
    v18 = this[73];
    v19 = this[2];
    v31.pOpenHandleList = v8;
    ADAPTER_RENDER::DdiCloseAllocation(v19, v18, &v31);
  }
  v20 = 1;
  v21 = v3;
  if ( a2 )
  {
    if ( (*((_DWORD *)a2 + 1) & 1) != 0 )
    {
      v22 = *(_QWORD *)(*((_QWORD *)a2 + 7) + 152LL);
      if ( v22 )
      {
        if ( *(struct _KTHREAD ***)(v22 + 80) == this && (*(_DWORD *)(v22 + 72))-- == 1 )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX(
            (DXGAUTOMUTEX *)v35,
            (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)a2 + 7) + 152LL) + 8LL),
            0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v35);
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 7) + 152LL) + 80LL) = v3;
          if ( v35[8] != (_BYTE)v3 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v35);
        }
      }
      v24 = *((_QWORD *)a2 + 3);
      v25 = (unsigned int)v3;
      while ( v24 )
      {
        v24 = *(_QWORD *)(v24 + 64);
        ++v25;
      }
      v26 = (volatile signed __int32 *)*((_QWORD *)a2 + 7);
      if ( _InterlockedExchangeAdd(v26 + 17, 0xFFFFFFFF) == 1 )
        DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v26, v8, v25);
      *((_QWORD *)a2 + 7) = v3;
      v20 = (int)v3;
    }
    else
    {
      v21 = (struct DXGALLOCATION *)*((_QWORD *)a2 + 7);
    }
  }
  memset(&v34, 0, sizeof(v34));
  if ( a3 )
  {
    do
    {
      v27 = a3[6];
      v3 = a3[8];
      if ( v27 )
      {
        if ( !v20 )
          goto LABEL_50;
        DXGDEVICE::DestroyAdapterAllocation((DXGDEVICE *)this, v27);
        v28 = (void *)*((_QWORD *)a3[6] + 2);
        if ( v28 )
        {
          v8[v34.NumAllocations++] = v28;
          *((_QWORD *)a3[6] + 2) = 0LL;
        }
      }
      else if ( !v20 )
      {
LABEL_50:
        if ( !a2 )
        {
          WdLogSingleEntry1(1LL, 730LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pResource", 730LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( (*((_DWORD *)a2 + 1) & 1) == 0 )
        {
          WdLogSingleEntry1(1LL, 731LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pResource->m_SharedResource",
            731LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      a3 = (struct DXGADAPTERALLOCATION **)v3;
    }
    while ( v3 );
  }
  if ( v20 )
  {
    v34.hResource = v21;
    v29 = (unsigned int)v3;
    if ( a2 )
      v29 = 1;
    v34.Flags.Value = v29;
    if ( v34.NumAllocations )
    {
      v34.pAllocationList = v8;
    }
    else
    {
      v34.pAllocationList = (const HANDLE *)v3;
      if ( !v21 )
        goto LABEL_63;
    }
    ADAPTER_RENDER::DdiDestroyAllocation(this[2], &v34, 0LL);
  }
LABEL_63:
  if ( v33 != (_BYTE)v3 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v32);
}
