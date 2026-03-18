/*
 * XREFs of ?SignalTokenSync@CAdapter@@UEAAJPEAX_K_N@Z @ 0x1C00026E0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00274C0 (memset.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C00E8A20 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     DxgkKernelModeWaitForSynchronizationObjectFromGpu @ 0x1C00E8FDC (DxgkKernelModeWaitForSynchronizationObjectFromGpu.c)
 */

__int64 __fastcall CAdapter::SignalTokenSync(CAdapter *this, void *a2, __int64 a3, char a4)
{
  __int64 v7; // rdi
  int v8; // ecx
  _QWORD v10[10]; // [rsp+20h] [rbp-58h] BYREF

  if ( !a4 )
    return (unsigned int)DxgkSignalSynchronizationObjectFromGpuByReference(a2, a3, *((unsigned int *)this + 16));
  v7 = *((_QWORD *)this + 10);
  v8 = 0;
  if ( *((_QWORD *)this + 9) != v7 )
  {
    memset(v10, 0, sizeof(v10));
    LODWORD(v10[0]) = *((_DWORD *)this + 16);
    v10[1] = (char *)this + 48;
    HIDWORD(v10[0]) = 1;
    v10[2] = v7;
    v8 = DxgkKernelModeWaitForSynchronizationObjectFromGpu(v10);
    if ( v8 >= 0 )
      *((_QWORD *)this + 9) = *((_QWORD *)this + 10);
  }
  if ( v8 >= 0 )
    return (unsigned int)DxgkSignalSynchronizationObjectFromGpuByReference(a2, a3, *((unsigned int *)this + 16));
  return (unsigned int)v8;
}
