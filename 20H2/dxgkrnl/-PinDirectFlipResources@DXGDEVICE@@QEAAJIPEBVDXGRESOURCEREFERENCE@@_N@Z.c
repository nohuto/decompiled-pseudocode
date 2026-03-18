/*
 * XREFs of ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C016D848
 * Callers:
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x1C016CCF0 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00F58E0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C016D770 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C016DA68 (-InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C016DC04 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z @ 0x1C016DC58 (-ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z.c)
 */

__int64 __fastcall DXGDEVICE::PinDirectFlipResources(
        DXGDEVICE *this,
        unsigned int a2,
        const struct DXGRESOURCEREFERENCE *a3,
        char a4)
{
  ADAPTER_RENDER *v6; // rcx
  const struct DXGRESOURCEREFERENCE *v8; // r14
  __int64 v9; // rsi
  unsigned int v10; // r12d
  unsigned int v11; // r12d
  int v12; // eax
  const struct DXGALLOCATION *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 Width; // r8
  UINT Height; // r9d
  enum _D3DDDIFORMAT Format; // r10d
  unsigned int v19; // r15d
  __int64 v20; // rsi
  struct DXGRESOURCE **v21; // rbp
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned int i; // r15d
  struct DXGALLOCATION *v29; // rsi
  unsigned int v30; // ebp
  __int64 v31; // rdx
  __int64 v32; // rcx
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  struct DXGALLOCATION *j; // rbp
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  D3DDDIFORMAT v41; // [rsp+40h] [rbp-78h]
  struct _DXGKARG_DESCRIBEALLOCATION v42; // [rsp+48h] [rbp-70h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+C0h] [rbp+8h] BYREF
  UINT v44; // [rsp+D0h] [rbp+18h]

  v6 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v8 = a3;
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 56LL) + 136LL) - 48LL;
  v10 = *(_DWORD *)(v9 + 4);
  memset(&v42, 0, sizeof(v42));
  v11 = (v10 >> 6) & 0xF;
  v42.hAllocation = *(HANDLE *)(v9 + 16);
  v12 = ADAPTER_RENDER::DdiDescribeAllocation(v6, &v42, (__int64)a3);
  v15 = v12;
  if ( v12 < 0 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v34[3] = v15;
    v34[4] = this;
    v34[5] = *(_QWORD *)(v9 + 16);
    v34[6] = v9;
    WdLogEvent5_WdError(v34);
  }
  else
  {
    Width = v42.Width;
    Height = v42.Height;
    Format = v42.Format;
    Interval.LowPart = v42.Width;
    v44 = v42.Height;
    v41 = v42.Format;
    if ( v11 >= *((_DWORD *)this + 464) )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v42.Width);
      v35[3] = *(_QWORD *)v8;
LABEL_30:
      v15 = -1073741811LL;
LABEL_32:
      v35[4] = v15;
LABEL_34:
      WdLogEvent5_WdWarning(v35);
      return (unsigned int)v15;
    }
    if ( a4 && !*((_DWORD *)this + 465) )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v42.Width);
      LODWORD(v15) = -1073741790;
      v35[3] = -1073741790LL;
      goto LABEL_34;
    }
    v19 = 0;
    v20 = 0LL;
    if ( a2 )
    {
      v21 = (struct DXGRESOURCE **)v8;
      while ( 1 )
      {
        v22 = DXGDEVICE::ValidateDirectFlipResource(
                this,
                *v21,
                v11,
                Width,
                Height,
                Format,
                *(_DWORD *)(*((_QWORD *)*v21 + 7) + 132LL));
        v15 = v22;
        if ( v22 < 0 )
          break;
        v13 = (const struct DXGALLOCATION *)*((_QWORD *)*v21 + 3);
        while ( v13 )
        {
          if ( DXGDEVICE::IsDirectFlipAllocationPinned(this, v13) )
          {
            v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, Width);
            v35[3] = *((_QWORD *)v8 + v20);
            goto LABEL_30;
          }
          v13 = *(const struct DXGALLOCATION **)(v25 + 64);
          ++v19;
        }
        v20 = (unsigned int)(v20 + 1);
        ++v21;
        if ( (unsigned int)v20 >= a2 )
          goto LABEL_12;
        LODWORD(Width) = Interval.LowPart;
        Height = v44;
        Format = v41;
      }
      v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, Width);
      v35[3] = *((_QWORD *)v8 + v20);
      goto LABEL_32;
    }
LABEL_12:
    v27 = v19 + *((_DWORD *)this + v11 + 366);
    if ( (unsigned int)v27 > 0x300 )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v13, Width);
      LODWORD(v15) = -1073741811;
      v35[3] = *((unsigned int *)this + v11 + 366);
      v35[4] = v19;
      v35[5] = 768LL;
      v35[6] = -1073741811LL;
      goto LABEL_34;
    }
    for ( i = 0; i < a2; v8 = (const struct DXGRESOURCEREFERENCE *)((char *)v8 + 8) )
    {
      if ( (int)v15 < 0 )
        break;
      v29 = *(struct DXGALLOCATION **)(*(_QWORD *)v8 + 24LL);
LABEL_16:
      while ( v29 )
      {
        if ( (int)v15 < 0 )
          goto LABEL_39;
        v30 = 0;
        while ( 1 )
        {
          LODWORD(v15) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 232LL))(
                           *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
                           *((_QWORD *)v29 + 3),
                           0LL,
                           0LL,
                           0LL,
                           0LL);
          if ( (int)v15 >= 0 )
            break;
          Interval.QuadPart = -150LL;
          KeDelayExecutionThread(0, 0, &Interval);
          ++v30;
          LODWORD(v15) = -1071775488;
          if ( v30 >= 4 )
            goto LABEL_16;
        }
        if ( !DXGDEVICE::InsertDirectFlipAllocationToList(this, v11, v29) )
        {
          v36 = WdLogNewEntry5_WdAssertion(v32, v31);
          *(_QWORD *)(v36 + 24) = 6727LL;
          WdLogEvent5_WdAssertion(v36);
        }
        v29 = (struct DXGALLOCATION *)*((_QWORD *)v29 + 8);
      }
      if ( (int)v15 >= 0 )
        goto LABEL_24;
LABEL_39:
      for ( j = *(struct DXGALLOCATION **)(*(_QWORD *)v8 + 24LL);
            j && j != v29;
            j = (struct DXGALLOCATION *)*((_QWORD *)j + 8) )
      {
        if ( !DXGDEVICE::RemoveDirectFlipAllocationFromList((struct _KTHREAD **)this, v11, j) )
        {
          v40 = WdLogNewEntry5_WdAssertion(v39, v38);
          *(_QWORD *)(v40 + 24) = 6742LL;
          WdLogEvent5_WdAssertion(v40);
        }
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 240LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
          *((_QWORD *)j + 3));
      }
LABEL_24:
      ++i;
    }
  }
  return (unsigned int)v15;
}
