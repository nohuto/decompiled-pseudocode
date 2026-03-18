/*
 * XREFs of ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C0227A08
 * Callers:
 *     ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C0254574 (-DrainCoreAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C02567A0 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0001C68 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002B94 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x1C0024B94 (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x1C01278E0 (-DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C0127C10 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x1C0127EA0 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C014B098 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C016E86C (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C016EDB4 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1C0228FB4 (-UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z.c)
 */

void __fastcall DXGDEVICE::DestroyCoreAllocations(
        ADAPTER_RENDER **this,
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
  ADAPTER_RENDER *v18; // rdx
  ADAPTER_RENDER *v19; // rcx
  int v20; // ebx
  void *v21; // r14
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned int v25; // r8d
  struct DXGALLOCATION *v26; // rax
  struct DXGALLOCATION *v27; // r13
  __int64 v28; // rax
  __int64 v29; // rax
  struct DXGALLOCATION *v30; // [rsp+30h] [rbp-D0h] BYREF
  struct _DXGKARG_CLOSEALLOCATION v31; // [rsp+38h] [rbp-C8h] BYREF
  struct _DXGKARG_DESTROYALLOCATION v32; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  char v34; // [rsp+70h] [rbp-90h]
  _BYTE v35[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v36[128]; // [rsp+90h] [rbp-70h] BYREF

  v33 = 0LL;
  v34 = 0;
  v31 = 0LL;
  if ( a2 )
  {
    DXGAUTOMUTEX::Initialize((DXGAUTOMUTEX *)&v33, (struct DXGRESOURCE *)((char *)a2 + 80), 1);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v33);
  }
  memset(v36, 0, sizeof(v36));
  if ( !a2 || (v8 = (HANDLE *)*((_QWORD *)a2 + 8)) == 0LL )
    v8 = (HANDLE *)v36;
  v9 = (struct DXGALLOCATION *)a3;
  for ( i = a3 == 0LL; ; i = v12 == 0LL )
  {
    v30 = v9;
    if ( i )
      break;
    v11 = *((_QWORD *)v9 + 6);
    v12 = (struct DXGALLOCATION *)*((_QWORD *)v9 + 8);
    if ( v11 )
    {
      v13 = *(_DWORD *)(v11 + 4);
      if ( (v13 & 0x2000) != 0 || (v13 & 1) != 0 || (v13 & 2) != 0 || (v13 & 8) != 0 )
      {
        DXGDEVICE::TestAndSetDisplayedPrimary((DXGDEVICE *)this, (v13 >> 6) & 0xF, v9, v7);
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
              if ( *(int *)(*((_QWORD *)this[2] + 2) + 2596LL) >= 2200 )
                DXGDEVICE::UnpinDirectFlipAllocation((DXGDEVICE *)this, v15, v16, &v30, 0LL);
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
      v8[v31.NumAllocations++] = (HANDLE)v6;
      *((_QWORD *)v9 + 4) = 0LL;
    }
    v9 = v12;
  }
  if ( v31.NumAllocations )
  {
    v18 = this[73];
    v19 = this[2];
    v31.pOpenHandleList = v8;
    ADAPTER_RENDER::DdiCloseAllocation(v19, v18, &v31);
  }
  v20 = 1;
  v21 = 0LL;
  if ( a2 )
  {
    v6 = *((_QWORD *)a2 + 7);
    if ( (*((_DWORD *)a2 + 1) & 1) != 0 )
    {
      v22 = *(_QWORD *)(v6 + 152);
      if ( v22 )
      {
        if ( *(ADAPTER_RENDER ***)(v22 + 72) == this )
        {
          i = (*(_DWORD *)(v22 + 64))-- == 1;
          if ( i )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX(
              (DXGAUTOMUTEX *)v35,
              (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)a2 + 7) + 152LL) + 8LL),
              0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v35);
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 7) + 152LL) + 72LL) = 0LL;
            if ( v35[8] )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v35, v23);
          }
        }
      }
      v24 = *((_QWORD *)a2 + 3);
      v25 = 0;
      while ( v24 )
      {
        v24 = *(_QWORD *)(v24 + 64);
        ++v25;
      }
      v6 = *((_QWORD *)a2 + 7);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 68), 0xFFFFFFFF) == 1 )
        DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v6, v8, v25);
      *((_QWORD *)a2 + 7) = 0LL;
      v20 = 0;
    }
    else
    {
      v21 = (void *)*((_QWORD *)a2 + 7);
    }
  }
  memset(&v32, 0, sizeof(v32));
  if ( a3 )
  {
    do
    {
      v26 = a3[6];
      v27 = a3[8];
      if ( v26 )
      {
        if ( !v20 )
          goto LABEL_52;
        if ( *((_QWORD *)v26 + 1) )
        {
          (*(void (__fastcall **)(ADAPTER_RENDER *, _QWORD))(*(_QWORD *)(*((_QWORD *)this[2] + 80) + 8LL) + 136LL))(
            this[95],
            0LL);
          *((_QWORD *)a3[6] + 1) = 0LL;
          v26 = a3[6];
        }
        v6 = *((_QWORD *)v26 + 2);
        if ( v6 )
        {
          v8[v32.NumAllocations++] = (HANDLE)v6;
          *((_QWORD *)a3[6] + 2) = 0LL;
        }
      }
      else if ( !v20 )
      {
LABEL_52:
        if ( !a2 )
        {
          v28 = WdLogNewEntry5_WdAssertion(v6, 1LL);
          *(_QWORD *)(v28 + 24) = 732LL;
          WdLogEvent5_WdAssertion(v28);
        }
        if ( (*((_DWORD *)a2 + 1) & 1) == 0 )
        {
          v29 = WdLogNewEntry5_WdAssertion(v6, 1LL);
          *(_QWORD *)(v29 + 24) = 733LL;
          WdLogEvent5_WdAssertion(v29);
        }
      }
      a3 = (struct DXGALLOCATION **)v27;
    }
    while ( v27 );
  }
  if ( v20 )
  {
    v32.hResource = v21;
    v32.Flags.Value = a2 != 0LL;
    if ( v32.NumAllocations )
    {
      v32.pAllocationList = v8;
LABEL_62:
      ADAPTER_RENDER::DdiDestroyAllocation(this[2], &v32, 0LL);
      goto LABEL_63;
    }
    v32.pAllocationList = 0LL;
    if ( v21 )
      goto LABEL_62;
  }
LABEL_63:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v33);
}
