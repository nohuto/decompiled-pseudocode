/*
 * XREFs of ??1?$PagedPoolZeroedArray@U_D3DDDI_OPENALLOCATIONINFO2@@$03@@QEAA@XZ @ 0x1C027E698
 * Callers:
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C029B390 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PagedPoolZeroedArray<_D3DDDI_OPENALLOCATIONINFO2,4>::~PagedPoolZeroedArray<_D3DDDI_OPENALLOCATIONINFO2,4>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 != (void *)(a1 + 8) && v2 )
    ExFreePoolWithTag(v2, 0);
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 328) = 0;
}
