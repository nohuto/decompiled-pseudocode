/*
 * XREFs of ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C02237C8
 * Callers:
 *     ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C0250274 (-DrainCoreAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C02524A0 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000D034 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0018CD0 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x1C0024BF4 (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x1C00F1240 (-DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x1C011A4B0 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C011A8D0 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C0140CE8 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C015EE0C (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C015F354 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1C0224D74 (-UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z.c)
 */

void __fastcall DXGDEVICE::DestroyCoreAllocations(
        struct _KTHREAD **this,
        struct DXGRESOURCE *a2,
        struct DXGALLOCATION **a3)
{
  __int64 v6; // rcx
  struct DXGALLOCATION *v7; // r9
  HANDLE *v8; // r12
  struct DXGALLOCATION *v9; // rbx
  bool i; // zf
  __int64 v11; // rax
  struct DXGALLOCATION *v12; // r13
  unsigned int v13; // edx
  unsigned int v14; // r14d
  unsigned int v15; // r14d
  __int64 v16; // r8
  __int64 v17; // rdx
  struct _KTHREAD *v18; // rdx
  ADAPTER_RENDER *v19; // rcx
  int v20; // ebx
  void *v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // r8d
  struct DXGALLOCATION *v27; // rax
  struct DXGALLOCATION *v28; // r13
  __int64 v29; // rax
  __int64 v30; // rax
  struct DXGALLOCATION *v31; // [rsp+30h] [rbp-D0h] BYREF
  struct _DXGKARG_CLOSEALLOCATION v32; // [rsp+38h] [rbp-C8h] BYREF
  struct _DXGKARG_DESTROYALLOCATION v33; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  char v35; // [rsp+70h] [rbp-90h]
  _BYTE v36[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v37[128]; // [rsp+90h] [rbp-70h] BYREF

  v34 = 0LL;
  v35 = 0;
  v32 = 0LL;
  if ( a2 )
  {
    DXGAUTOMUTEX::Initialize((DXGAUTOMUTEX *)&v34, (struct DXGRESOURCE *)((char *)a2 + 80), 1);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v34);
  }
  memset(v37, 0, sizeof(v37));
  if ( !a2 || (v8 = (HANDLE *)*((_QWORD *)a2 + 8)) == 0LL )
    v8 = (HANDLE *)v37;
  v9 = (struct DXGALLOCATION *)a3;
  for ( i = a3 == 0LL; ; i = v12 == 0LL )
  {
    v31 = v9;
    if ( i )
      break;
    v11 = *((_QWORD *)v9 + 6);
    v12 = (struct DXGALLOCATION *)*((_QWORD *)v9 + 8);
    if ( v11 )
    {
      v13 = *(_DWORD *)(v11 + 4);
      if ( (v13 & 0x2000) != 0 || (v13 & 1) != 0 || (v13 & 2) != 0 || (v13 & 8) != 0 )
      {
        DXGDEVICE::TestAndSetDisplayedPrimary(this, (v13 >> 6) & 0xF, v9, v7);
        v11 = *((_QWORD *)v9 + 6);
      }
      if ( v11 )
      {
        v14 = *(_DWORD *)(v11 + 4);
        if ( (v14 & 0x2000) != 0 )
        {
          if ( *((_QWORD *)v9 + 3) )
          {
            v15 = (v14 >> 6) & 0xF;
            if ( DXGDEVICE::IsDirectFlipAllocationPinned((DXGDEVICE *)this, v9) )
            {
              if ( *(int *)(*((_QWORD *)this[2] + 2) + 2572LL) >= 2200 )
                DXGDEVICE::UnpinDirectFlipAllocation((DXGDEVICE *)this, v15, v16, &v31, 0LL);
              else
                DXGDEVICE::UnpinAllDirectFlipAllocations((PERESOURCE **)this, v15, v16, v7);
            }
          }
        }
      }
    }
    if ( (*((_DWORD *)v9 + 18) & 0x80000) != 0 )
      UnlockParavirtualizedAllocationOnGuest(v9, 0);
    v17 = *((_QWORD *)v9 + 3);
    if ( v17 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)this[2] + 80) + 8LL) + 168LL))(
        *((_QWORD *)this[2] + 81),
        v17,
        (__int64)v9 + 80,
        0LL);
      *((_DWORD *)v9 + 18) |= 1u;
      *((_QWORD *)v9 + 3) = 0LL;
    }
    v6 = *((_QWORD *)v9 + 4);
    if ( v6 )
    {
      v8[v32.NumAllocations++] = (HANDLE)v6;
      *((_QWORD *)v9 + 4) = 0LL;
    }
    v9 = v12;
  }
  if ( v32.NumAllocations )
  {
    v18 = this[73];
    v19 = this[2];
    v32.pOpenHandleList = v8;
    ADAPTER_RENDER::DdiCloseAllocation(v19, v18, &v32);
  }
  v20 = 1;
  v21 = 0LL;
  v22 = 1LL;
  if ( a2 )
  {
    v6 = *((_QWORD *)a2 + 7);
    if ( (*((_DWORD *)a2 + 1) & 1) != 0 )
    {
      v23 = *(_QWORD *)(v6 + 152);
      if ( v23 )
      {
        if ( *(struct _KTHREAD ***)(v23 + 72) == this )
        {
          i = (*(_DWORD *)(v23 + 64))-- == 1;
          if ( i )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX(
              (DXGAUTOMUTEX *)v36,
              (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)a2 + 7) + 152LL) + 8LL),
              0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v36);
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 7) + 152LL) + 72LL) = 0LL;
            if ( v36[8] )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v36, v24);
          }
        }
      }
      v25 = *((_QWORD *)a2 + 3);
      v26 = 0;
      while ( v25 )
      {
        v25 = *(_QWORD *)(v25 + 64);
        ++v26;
      }
      v6 = *((_QWORD *)a2 + 7);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 68), 0xFFFFFFFF) == 1 )
        DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v6, v8, v26);
      *((_QWORD *)a2 + 7) = 0LL;
      v20 = 0;
      v22 = 1LL;
    }
    else
    {
      v21 = (void *)*((_QWORD *)a2 + 7);
    }
  }
  memset(&v33, 0, sizeof(v33));
  if ( a3 )
  {
    do
    {
      v27 = a3[6];
      v28 = a3[8];
      if ( v27 )
      {
        if ( !v20 )
          goto LABEL_52;
        if ( *((_QWORD *)v27 + 1) )
        {
          (*(void (__fastcall **)(struct _KTHREAD *, _QWORD))(*(_QWORD *)(*((_QWORD *)this[2] + 80) + 8LL) + 136LL))(
            this[95],
            0LL);
          *((_QWORD *)a3[6] + 1) = 0LL;
          v27 = a3[6];
        }
        v6 = *((_QWORD *)v27 + 2);
        v22 = 1LL;
        if ( v6 )
        {
          v8[v33.NumAllocations++] = (HANDLE)v6;
          *((_QWORD *)a3[6] + 2) = 0LL;
        }
      }
      else if ( !v20 )
      {
LABEL_52:
        if ( !a2 )
        {
          v29 = WdLogNewEntry5_WdAssertion(v6, 1LL);
          *(_QWORD *)(v29 + 24) = 731LL;
          WdLogEvent5_WdAssertion(v29);
          v22 = 1LL;
        }
        if ( (*((_DWORD *)a2 + 1) & 1) == 0 )
        {
          v30 = WdLogNewEntry5_WdAssertion(v6, 1LL);
          *(_QWORD *)(v30 + 24) = 732LL;
          WdLogEvent5_WdAssertion(v30);
          v22 = 1LL;
        }
      }
      a3 = (struct DXGALLOCATION **)v28;
    }
    while ( v28 );
  }
  if ( v20 )
  {
    v33.hResource = v21;
    v33.Flags.Value = a2 != 0LL;
    if ( v33.NumAllocations )
    {
      v33.pAllocationList = v8;
LABEL_62:
      ADAPTER_RENDER::DdiDestroyAllocation(this[2], &v33, 0LL);
      goto LABEL_63;
    }
    v33.pAllocationList = 0LL;
    if ( v21 )
      goto LABEL_62;
  }
LABEL_63:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v34, v22);
}
