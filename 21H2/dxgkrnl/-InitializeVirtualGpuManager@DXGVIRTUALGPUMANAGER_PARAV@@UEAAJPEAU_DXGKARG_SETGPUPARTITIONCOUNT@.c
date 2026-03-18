/*
 * XREFs of ?InitializeVirtualGpuManager@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z @ 0x1C035E790
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_PARAV::InitializeVirtualGpuManager(
        DXGVIRTUALGPUMANAGER_PARAV *this,
        struct _DXGKARG_SETGPUPARTITIONCOUNT *a2)
{
  __int64 v5; // r9
  unsigned __int64 v6; // rax
  __int64 v7; // rax

  if ( a2->PartitionCount > *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 4480LL) )
  {
    WdLogSingleEntry1(3LL, 708LL);
    return 3221225485LL;
  }
  if ( *((_DWORD *)this + 4) )
  {
    WdLogSingleEntry1(3LL, 713LL);
    return 3221225485LL;
  }
  if ( a2->PartitionCount > *((_DWORD *)this + 3) )
  {
    operator delete[](*((void **)this + 3));
    v6 = 8LL * a2->PartitionCount;
    if ( !is_mul_ok(a2->PartitionCount, 8uLL) )
      v6 = -1LL;
    v7 = operator new[](v6, 0x4B677844u, 256LL, v5);
    *((_QWORD *)this + 3) = v7;
    if ( !v7 )
    {
      WdLogSingleEntry1(6LL, 722LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate memory for virtual GPUs",
        722LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    *((struct _DXGKARG_SETGPUPARTITIONCOUNT *)this + 3) = (struct _DXGKARG_SETGPUPARTITIONCOUNT)a2->PartitionCount;
  }
  return 0LL;
}
