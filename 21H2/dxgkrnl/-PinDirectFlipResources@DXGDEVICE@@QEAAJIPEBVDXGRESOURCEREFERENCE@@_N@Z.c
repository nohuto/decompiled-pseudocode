/*
 * XREFs of ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C01D8C44
 * Callers:
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x1C01D91E0 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0179C10 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C01D8B68 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C01D8E70 (-InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C01D9004 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z @ 0x1C01D9058 (-ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z.c)
 */

__int64 __fastcall DXGDEVICE::PinDirectFlipResources(
        DXGDEVICE *this,
        unsigned int a2,
        const struct DXGRESOURCEREFERENCE *a3,
        char a4)
{
  unsigned int v4; // r13d
  ADAPTER_RENDER *v6; // rcx
  const struct DXGRESOURCEREFERENCE *v8; // r14
  __int64 v9; // rbp
  unsigned int v10; // r12d
  __int64 v11; // r12
  int v12; // eax
  __int64 v13; // rdi
  UINT Width; // r8d
  UINT Height; // r9d
  enum _D3DDDIFORMAT Format; // r10d
  unsigned int v17; // ebp
  __int64 v18; // rbx
  struct DXGRESOURCE **v19; // r15
  int v20; // eax
  struct DXGRESOURCE *v21; // r13
  const struct DXGALLOCATION *v22; // rdx
  __int64 v23; // rdx
  unsigned int i; // r15d
  struct DXGALLOCATION *v25; // rbx
  unsigned int v26; // ebp
  struct DXGRESOURCE *v28; // rdx
  unsigned int v29; // ebx
  struct DXGALLOCATION *j; // rbp
  D3DDDIFORMAT v31; // [rsp+50h] [rbp-78h]
  struct _DXGKARG_DESCRIBEALLOCATION v32; // [rsp+58h] [rbp-70h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+D0h] [rbp+8h] BYREF
  unsigned int v34; // [rsp+D8h] [rbp+10h]
  UINT v35; // [rsp+E0h] [rbp+18h]

  v34 = a2;
  v4 = a2;
  v6 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v8 = a3;
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 56LL) + 136LL) - 48LL;
  v10 = *(_DWORD *)(v9 + 4);
  memset(&v32, 0, sizeof(v32));
  v11 = (v10 >> 6) & 0xF;
  v32.hAllocation = *(HANDLE *)(v9 + 16);
  v12 = ADAPTER_RENDER::DdiDescribeAllocation(v6, &v32, (__int64)a3);
  v13 = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry4(2LL, v12, this, *(_QWORD *)(v9 + 16), v9);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x",
      v13,
      (__int64)this,
      *(_QWORD *)(v9 + 16),
      v9,
      0LL);
    return (unsigned int)v13;
  }
  Width = v32.Width;
  Height = v32.Height;
  Format = v32.Format;
  Interval.LowPart = v32.Width;
  v35 = v32.Height;
  v31 = v32.Format;
  if ( (unsigned int)v11 >= *((_DWORD *)this + 464) )
  {
    v28 = *(struct DXGRESOURCE **)v8;
LABEL_29:
    v29 = -1073741811;
    WdLogSingleEntry2(3LL, v28, -1073741811LL);
    return v29;
  }
  if ( a4 && !*((_DWORD *)this + 465) )
  {
    v29 = -1073741790;
    WdLogSingleEntry1(3LL, -1073741790LL);
    return v29;
  }
  v17 = 0;
  v18 = 0LL;
  if ( v4 )
  {
    v19 = (struct DXGRESOURCE **)v8;
    while ( 1 )
    {
      v20 = DXGDEVICE::ValidateDirectFlipResource(
              this,
              *v19,
              v11,
              Width,
              Height,
              Format,
              *(_DWORD *)(*((_QWORD *)*v19 + 7) + 132LL));
      LODWORD(v13) = v20;
      if ( v20 < 0 )
        break;
      v21 = *v19;
      v22 = (const struct DXGALLOCATION *)*((_QWORD *)*v19 + 3);
      while ( v22 )
      {
        if ( DXGDEVICE::IsDirectFlipAllocationPinned(this, v22) )
        {
          v28 = v21;
          goto LABEL_29;
        }
        v22 = *(const struct DXGALLOCATION **)(v23 + 64);
        ++v17;
      }
      v4 = v34;
      v18 = (unsigned int)(v18 + 1);
      ++v19;
      if ( (unsigned int)v18 >= v34 )
        goto LABEL_12;
      Width = Interval.LowPart;
      Height = v35;
      Format = v31;
    }
    WdLogSingleEntry2(3LL, *((_QWORD *)v8 + v18), v20);
    return (unsigned int)v13;
  }
LABEL_12:
  if ( *((_DWORD *)this + (unsigned int)v11 + 366) + v17 <= 0x300 )
  {
    for ( i = 0; i < v4; v8 = (const struct DXGRESOURCEREFERENCE *)((char *)v8 + 8) )
    {
      if ( (int)v13 < 0 )
        break;
      v25 = *(struct DXGALLOCATION **)(*(_QWORD *)v8 + 24LL);
      if ( v25 )
      {
        while ( (int)v13 >= 0 )
        {
          v26 = 0;
          while ( 1 )
          {
            LODWORD(v13) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL) + 8LL) + 232LL))(
                             *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
                             *((_QWORD *)v25 + 3),
                             0LL,
                             0LL,
                             0LL,
                             0LL);
            if ( (int)v13 >= 0 )
              break;
            Interval.QuadPart = -150LL;
            KeDelayExecutionThread(0, 0, &Interval);
            ++v26;
            LODWORD(v13) = -1071775488;
            if ( v26 >= 4 )
              goto LABEL_21;
          }
          if ( DXGDEVICE::InsertDirectFlipAllocationToList(this, v11, v25) )
          {
            v25 = (struct DXGALLOCATION *)*((_QWORD *)v25 + 8);
          }
          else
          {
            LODWORD(v13) = -1071775488;
            (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL) + 8LL)
                                                   + 240LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
              *((_QWORD *)v25 + 3));
          }
LABEL_21:
          if ( !v25 )
          {
            if ( (int)v13 >= 0 )
              goto LABEL_23;
            break;
          }
        }
        for ( j = *(struct DXGALLOCATION **)(*(_QWORD *)v8 + 24LL);
              j && j != v25;
              j = (struct DXGALLOCATION *)*((_QWORD *)j + 8) )
        {
          if ( !DXGDEVICE::RemoveDirectFlipAllocationFromList((struct _KTHREAD **)this, v11, j) )
          {
            WdLogSingleEntry1(1LL, 6833LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Removed", 6833LL, 0LL, 0LL, 0LL, 0LL);
          }
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL) + 8LL) + 240LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
            *((_QWORD *)j + 3));
        }
      }
LABEL_23:
      ++i;
    }
    return (unsigned int)v13;
  }
  v29 = -1073741811;
  WdLogSingleEntry4(3LL, *((unsigned int *)this + v11 + 366), v17, 768LL, -1073741811LL);
  return v29;
}
