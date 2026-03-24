/*
 * XREFs of ?InitializeVirtualGpuManager@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z @ 0x1C0237200
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00046F8 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?DdiSetGpuPartitionCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z @ 0x1C02343B8 (-DdiSetGpuPartitionCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_GPUP::InitializeVirtualGpuManager(
        DXGVIRTUALGPUMANAGER_GPUP *this,
        struct _DXGKARG_SETGPUPARTITIONCOUNT *a2,
        __int64 a3)
{
  __int64 v5; // rax
  SIZE_T v7; // rax
  PVOID v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rax
  int v13; // edi

  if ( *((_DWORD *)this + 4) )
  {
    v5 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v5 + 24) = 374LL;
    WdLogEvent5_WdWarning(v5);
    return 3221225485LL;
  }
  if ( a2->PartitionCount != *((_DWORD *)this + 3) )
  {
    operator delete[](*((void **)this + 3));
    v7 = 8LL * a2->PartitionCount;
    if ( !is_mul_ok(a2->PartitionCount, 8uLL) )
      v7 = -1LL;
    v8 = operator new(v7, 0x4B677844u, 1, PagedPool);
    *((_QWORD *)this + 3) = v8;
    if ( !v8 )
    {
      v12 = WdLogNewEntry5_WdLowResource(v10, v9, a3, v11);
      *(_QWORD *)(v12 + 24) = 384LL;
      WdLogEvent5_WdLowResource(v12);
      return 3221225495LL;
    }
    *((struct _DXGKARG_SETGPUPARTITIONCOUNT *)this + 3) = (struct _DXGKARG_SETGPUPARTITIONCOUNT)a2->PartitionCount;
  }
  v13 = ADAPTER_RENDER::DdiSetGpuPartitionCount(*((ADAPTER_RENDER **)this + 4), a2, a3);
  if ( v13 < 0 )
  {
    operator delete[](*((void **)this + 3));
    *((_DWORD *)this + 3) = 0;
    *((_QWORD *)this + 3) = 0LL;
  }
  return (unsigned int)v13;
}
