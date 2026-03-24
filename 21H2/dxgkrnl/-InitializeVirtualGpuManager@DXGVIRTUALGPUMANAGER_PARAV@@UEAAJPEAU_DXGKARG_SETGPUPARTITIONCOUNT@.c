/*
 * XREFs of ?InitializeVirtualGpuManager@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z @ 0x1C0235850
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00046F8 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_PARAV::InitializeVirtualGpuManager(
        DXGVIRTUALGPUMANAGER_PARAV *this,
        struct _DXGKARG_SETGPUPARTITIONCOUNT *a2)
{
  __int64 PartitionCount; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  SIZE_T v8; // rax
  PVOID v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax

  PartitionCount = a2->PartitionCount;
  v5 = *(_QWORD *)(*((_QWORD *)this + 4) + 16LL);
  if ( (unsigned int)PartitionCount > *(_DWORD *)(v5 + 4360) )
  {
    v6 = WdLogNewEntry5_WdWarning(PartitionCount, a2, v5);
    *(_QWORD *)(v6 + 24) = 705LL;
LABEL_3:
    WdLogEvent5_WdWarning(v6);
    return 3221225485LL;
  }
  if ( *((_DWORD *)this + 4) )
  {
    v6 = WdLogNewEntry5_WdWarning(PartitionCount, a2, v5);
    *(_QWORD *)(v6 + 24) = 710LL;
    goto LABEL_3;
  }
  if ( (unsigned int)PartitionCount > *((_DWORD *)this + 3) )
  {
    operator delete[](*((void **)this + 3));
    v8 = 8LL * a2->PartitionCount;
    if ( !is_mul_ok(a2->PartitionCount, 8uLL) )
      v8 = -1LL;
    v9 = operator new(v8, 0x4B677844u, 1, PagedPool);
    *((_QWORD *)this + 3) = v9;
    if ( !v9 )
    {
      v14 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
      *(_QWORD *)(v14 + 24) = 719LL;
      WdLogEvent5_WdLowResource(v14);
      return 3221225495LL;
    }
    *((struct _DXGKARG_SETGPUPARTITIONCOUNT *)this + 3) = (struct _DXGKARG_SETGPUPARTITIONCOUNT)a2->PartitionCount;
  }
  return 0LL;
}
