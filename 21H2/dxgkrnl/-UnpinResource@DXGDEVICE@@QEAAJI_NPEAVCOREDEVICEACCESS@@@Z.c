/*
 * XREFs of ?UnpinResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1C0172C68
 * Callers:
 *     NtDxgkUnpinResources @ 0x1C0172930 (NtDxgkUnpinResources.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002BD4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Feature_253710648__private_IsEnabledDeviceUsage @ 0x1C00260E4 (Feature_253710648__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00EF950 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01093F4 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C011DC54 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0172F58 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C01736B0 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::UnpinResource(DXGDEVICE *this, unsigned int a2, char a3, struct COREDEVICEACCESS *a4)
{
  __int64 v4; // rbx
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r9
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct _EX_RUNDOWN_REF *v19; // rbx
  __int64 v20; // rax
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  DXGDEVICE *v27; // rcx
  __int64 v28; // r8
  ULONG_PTR Count; // rbx
  bool i; // zf
  unsigned int v31; // edi
  unsigned int v32; // edi
  int v33; // eax
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rax
  struct DXGALLOCATION *v38; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v39[24]; // [rsp+38h] [rbp-18h] BYREF
  struct _EX_RUNDOWN_REF *v40; // [rsp+80h] [rbp+30h] BYREF

  v4 = *((_QWORD *)this + 5);
  v40 = 0LL;
  v8 = a2;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v4 + 208));
  v9 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v9 >= *(_DWORD *)(v4 + 256) )
    goto LABEL_7;
  v10 = *(_QWORD *)(v4 + 240);
  v11 = *(_DWORD *)(v10 + 16 * v9 + 8);
  if ( (((unsigned int)v8 >> 25) & 0x60) != (*(_BYTE *)(v10 + 16 * v9 + 8) & 0x60)
    || (v11 & 0x2000) != 0
    || (v11 & 0x1F) == 0 )
  {
    goto LABEL_7;
  }
  v12 = v11 & 0x1F;
  if ( (_BYTE)v12 != 4 )
  {
    v13 = WdLogNewEntry5_WdError(((unsigned int)v8 >> 25) & 0x60, v12);
    *(_QWORD *)(v13 + 24) = 316LL;
    WdLogEvent5_WdError(v13);
LABEL_7:
    v14 = 0LL;
    goto LABEL_8;
  }
  v14 = *(struct _EX_RUNDOWN_REF **)(v10 + 16LL * (unsigned int)v9);
LABEL_8:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v38, v14);
  ExReleasePushLockSharedEx(v4 + 208, 0LL);
  KeLeaveCriticalRegion();
  DXGRESOURCEREFERENCE::MoveAssign(&v40, (struct _EX_RUNDOWN_REF **)&v38);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v38, v15);
  v19 = v40;
  if ( v40 )
  {
    v23 = *(_QWORD *)(v40[1].Count + 16);
    v24 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( *(_QWORD *)(v23 + 16) == v24 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v39, (struct DXGFASTMUTEX *const)&v40[10], 0);
      if ( (unsigned int)Feature_253710648__private_IsEnabledDeviceUsage() )
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v39);
      Count = v19[3].Count;
      v38 = (struct DXGALLOCATION *)Count;
      for ( i = Count == 0; !i; i = Count == 0 )
      {
        v31 = *(_DWORD *)(*(_QWORD *)(Count + 48) + 4LL);
        if ( (v31 & 0x2000) != 0 )
        {
          v32 = (v31 >> 6) & 0xF;
          if ( a3 && !*((_DWORD *)this + 465) )
          {
            v35 = WdLogNewEntry5_WdWarning(v27, v26, v28);
            v21 = -1073741790;
            *(_QWORD *)(v35 + 24) = -1073741790LL;
            goto LABEL_28;
          }
          if ( DXGDEVICE::IsDirectFlipAllocationPinned(this, (const struct DXGALLOCATION *)Count) )
          {
            v33 = DXGDEVICE::UnpinDirectFlipAllocation(v27, v32, v28, &v38, a4);
            v34 = v33;
            if ( v33 < 0 )
            {
              v36 = WdLogNewEntry5_WdWarning(v27, v26, v28);
              *(_QWORD *)(v36 + 24) = Count;
              *(_QWORD *)(v36 + 32) = v34;
              WdLogEvent5_WdWarning(v36);
              v21 = v34;
              goto LABEL_31;
            }
          }
        }
        else
        {
          v27 = (DXGDEVICE *)*((_QWORD *)this + 2);
          if ( (*(_DWORD *)(*((_QWORD *)v27 + 2) + 348LL) & 0x200) == 0 )
          {
            v35 = WdLogNewEntry5_WdWarning(v27, v26, v28);
            v21 = -1073741811;
            *(_QWORD *)(v35 + 24) = v8;
            *(_QWORD *)(v35 + 32) = -1073741811LL;
LABEL_28:
            WdLogEvent5_WdWarning(v35);
            goto LABEL_31;
          }
          if ( (*(_DWORD *)(Count + 72) & 0x800) != 0 )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v27 + 80) + 8LL) + 240LL))(
              *((_QWORD *)v27 + 81),
              *(_QWORD *)(Count + 24));
            *(_DWORD *)(Count + 72) &= ~0x800u;
          }
        }
        Count = *(_QWORD *)(Count + 64);
        v38 = (struct DXGALLOCATION *)Count;
      }
      v21 = 0;
LABEL_31:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v39);
    }
    else
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
      v25[4] = v19;
      v21 = -1073741811;
      v25[5] = -1073741811LL;
      v25[3] = this;
      WdLogEvent5_WdError(v25);
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    v21 = -1073741811;
    *(_QWORD *)(v20 + 24) = v8;
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v20);
  }
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v40, v22);
  return v21;
}
