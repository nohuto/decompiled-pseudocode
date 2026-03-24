/*
 * XREFs of ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C01730E4
 * Callers:
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x1C01723F0 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002BD4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     Feature_253710648__private_IsEnabledDeviceUsage @ 0x1C00260E4 (Feature_253710648__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00F73E0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C017300C (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C0173514 (-InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C01736B0 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z @ 0x1C0173704 (-ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z.c)
 */

__int64 __fastcall DXGDEVICE::PinDirectFlipResources(
        DXGDEVICE *this,
        unsigned int a2,
        const struct DXGRESOURCEREFERENCE *a3,
        char a4)
{
  ADAPTER_RENDER *v5; // rcx
  const struct DXGRESOURCEREFERENCE *v7; // rdi
  __int64 v8; // r14
  unsigned int v9; // r13d
  unsigned int v10; // r13d
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  unsigned int v18; // r12d
  int IsEnabledDeviceUsage; // eax
  __int64 v20; // r8
  __int64 v21; // rdx
  bool v22; // r15
  __int64 v23; // r14
  struct DXGRESOURCE **v24; // r15
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  const struct DXGALLOCATION *v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned int v35; // r12d
  struct DXGALLOCATION *v36; // r14
  unsigned int v37; // r15d
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  struct DXGALLOCATION *i; // r15
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  UINT Height; // [rsp+40h] [rbp-29h]
  UINT Width; // [rsp+44h] [rbp-25h]
  _BYTE v48[16]; // [rsp+48h] [rbp-21h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v49; // [rsp+58h] [rbp-11h] BYREF
  bool v50; // [rsp+D0h] [rbp+67h]
  union _LARGE_INTEGER Interval; // [rsp+E0h] [rbp+77h] BYREF

  v5 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v7 = a3;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 56LL) + 136LL) - 48LL;
  v9 = *(_DWORD *)(v8 + 4);
  memset(&v49, 0, sizeof(v49));
  v10 = (v9 >> 6) & 0xF;
  v49.hAllocation = *(HANDLE *)(v8 + 16);
  v11 = ADAPTER_RENDER::DdiDescribeAllocation(v5, &v49, (__int64)a3);
  v15 = v11;
  if ( v11 < 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
    v16[3] = v15;
    v16[4] = this;
    v16[5] = *(_QWORD *)(v8 + 16);
    v16[6] = v8;
    WdLogEvent5_WdError(v16);
    return (unsigned int)v15;
  }
  Width = v49.Width;
  Height = v49.Height;
  Interval.LowPart = v49.Format;
  if ( v10 >= *((_DWORD *)this + 464) )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
    v15 = -1073741811LL;
    v17[3] = *(_QWORD *)v7;
LABEL_5:
    v17[4] = v15;
LABEL_6:
    WdLogEvent5_WdWarning(v17);
    return (unsigned int)v15;
  }
  if ( a4 && !*((_DWORD *)this + 465) )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
    LODWORD(v15) = -1073741790;
    v17[3] = -1073741790LL;
    goto LABEL_6;
  }
  v18 = 0;
  IsEnabledDeviceUsage = Feature_253710648__private_IsEnabledDeviceUsage();
  v21 = a2;
  v22 = IsEnabledDeviceUsage != 0;
  v23 = 0LL;
  v50 = IsEnabledDeviceUsage != 0;
  if ( a2 )
  {
    v24 = (struct DXGRESOURCE **)v7;
    while ( 2 )
    {
      v25 = DXGDEVICE::ValidateDirectFlipResource(
              this,
              *v24,
              v10,
              Width,
              Height,
              (enum _D3DDDIFORMAT)Interval.LowPart,
              *(_DWORD *)(*((_QWORD *)*v24 + 7) + 132LL));
      v15 = v25;
      if ( v25 < 0 )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
        v17[3] = *((_QWORD *)v7 + v23);
        goto LABEL_5;
      }
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v48, (struct DXGRESOURCE *)((char *)*v24 + 80), 0);
      if ( v50 )
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v48);
      v29 = (const struct DXGALLOCATION *)*((_QWORD *)*v24 + 3);
      while ( v29 )
      {
        if ( DXGDEVICE::IsDirectFlipAllocationPinned(this, v29) )
        {
          v34 = WdLogNewEntry5_WdWarning(v31, v30, v32);
          LODWORD(v15) = -1073741811;
          *(_QWORD *)(v34 + 24) = *((_QWORD *)v7 + v23);
          *(_QWORD *)(v34 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v34);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v48);
          return (unsigned int)v15;
        }
        v29 = *(const struct DXGALLOCATION **)(v30 + 64);
        ++v18;
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v48);
      v21 = a2;
      v23 = (unsigned int)(v23 + 1);
      ++v24;
      if ( (unsigned int)v23 < a2 )
        continue;
      break;
    }
    v22 = v50;
  }
  v33 = v18 + *((_DWORD *)this + v10 + 366);
  if ( (unsigned int)v33 > 0x300 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v21, v20);
    LODWORD(v15) = -1073741811;
    v17[3] = *((unsigned int *)this + v10 + 366);
    v17[4] = v18;
    v17[5] = 768LL;
    v17[6] = -1073741811LL;
    goto LABEL_6;
  }
  v35 = 0;
  if ( (_DWORD)v21 )
  {
    do
    {
      if ( (int)v15 < 0 )
        break;
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v48, (struct DXGFASTMUTEX *const)(*(_QWORD *)v7 + 80LL), 0);
      if ( v22 )
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v48);
      v36 = *(struct DXGALLOCATION **)(*(_QWORD *)v7 + 24LL);
LABEL_38:
      while ( v36 )
      {
        if ( (int)v15 < 0 )
          goto LABEL_40;
        v37 = 0;
        while ( 1 )
        {
          LODWORD(v15) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 232LL))(
                           *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
                           *((_QWORD *)v36 + 3),
                           0LL,
                           0LL,
                           0LL,
                           0LL);
          if ( (int)v15 >= 0 )
            break;
          Interval.QuadPart = -150LL;
          KeDelayExecutionThread(0, 0, &Interval);
          ++v37;
          LODWORD(v15) = -1071775488;
          if ( v37 >= 4 )
            goto LABEL_38;
        }
        if ( !DXGDEVICE::InsertDirectFlipAllocationToList(this, v10, v36) )
        {
          v40 = WdLogNewEntry5_WdAssertion(v39, v38);
          *(_QWORD *)(v40 + 24) = 6818LL;
          WdLogEvent5_WdAssertion(v40);
        }
        v36 = (struct DXGALLOCATION *)*((_QWORD *)v36 + 8);
      }
      if ( (int)v15 >= 0 )
        goto LABEL_46;
LABEL_40:
      for ( i = *(struct DXGALLOCATION **)(*(_QWORD *)v7 + 24LL);
            i && i != v36;
            i = (struct DXGALLOCATION *)*((_QWORD *)i + 8) )
      {
        if ( !DXGDEVICE::RemoveDirectFlipAllocationFromList((struct _KTHREAD **)this, v10, i) )
        {
          v44 = WdLogNewEntry5_WdAssertion(v43, v42);
          *(_QWORD *)(v44 + 24) = 6833LL;
          WdLogEvent5_WdAssertion(v44);
        }
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 240LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
          *((_QWORD *)i + 3));
      }
LABEL_46:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v48);
      v22 = v50;
      ++v35;
      v7 = (const struct DXGRESOURCEREFERENCE *)((char *)v7 + 8);
    }
    while ( v35 < a2 );
  }
  return (unsigned int)v15;
}
