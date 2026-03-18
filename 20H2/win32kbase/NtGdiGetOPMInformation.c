/*
 * XREFs of NtGdiGetOPMInformation @ 0x1C00C5F00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoUnlockBuffer@?$COPMSimpleBufferPool@U_DXGKMDT_OPM_GET_INFO_PARAMETERS@@@@QEAA@XZ @ 0x1C00C5FFC (--1CAutoUnlockBuffer@-$COPMSimpleBufferPool@U_DXGKMDT_OPM_GET_INFO_PARAMETERS@@@@QEAA@XZ.c)
 *     SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_ @ 0x1C00C605C (SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_.c)
 *     ?GetInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@QEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00C60B4 (-GetInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@QEAU_DXGKMDT_OPM_REQUESTED_.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_ @ 0x1C00C6304 (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_.c)
 *     ?AcquireBufferSafe@?$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA?AVCAutoUnlockBuffer@1@XZ @ 0x1C00C634C (-AcquireBufferSafe@-$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA-AVCAutoUnl.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiGetOPMInformation(void *a1, __int64 a2, void *a3)
{
  OPM *v3; // rsi
  __int64 v7; // rbx
  struct _DXGKMDT_OPM_GET_INFO_PARAMETERS *v8; // rdi
  struct _DXGKMDT_OPM_REQUESTED_INFORMATION *v9; // rsi
  COPM *v10; // rcx
  int Information; // ebx
  void *Src[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-28h] BYREF

  v3 = qword_1C024ABD8;
  v7 = *(_QWORD *)qword_1C024ABD8;
  ++*(_DWORD *)(v7 + 20);
  v8 = (struct _DXGKMDT_OPM_GET_INFO_PARAMETERS *)ExpInterlockedPopEntrySList((PSLIST_HEADER)v7);
  if ( !v8 )
  {
    ++*(_DWORD *)(v7 + 24);
    v8 = (struct _DXGKMDT_OPM_GET_INFO_PARAMETERS *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v7 + 48))(
                                                      *(unsigned int *)(v7 + 36),
                                                      *(unsigned int *)(v7 + 44),
                                                      *(unsigned int *)(v7 + 40),
                                                      v7);
  }
  v14[0] = v8;
  v14[1] = v3;
  COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>::AcquireBufferSafe((char *)qword_1C024ABD8 + 8, Src);
  if ( v8 && (v9 = (struct _DXGKMDT_OPM_REQUESTED_INFORMATION *)Src[0]) != 0LL )
  {
    Information = SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_(v8, a2);
    if ( Information >= 0 )
    {
      Information = COPM::GetInformation(v10, a1, v8, v9);
      if ( Information >= 0 )
        Information = SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_(a3, v9);
    }
  }
  else
  {
    Information = -1073741670;
  }
  if ( Information >= 0 )
    Information = 0;
  COPMSimpleBufferPool<_DXGKMDT_OPM_GET_INFO_PARAMETERS>::CAutoUnlockBuffer::~CAutoUnlockBuffer(Src);
  COPMSimpleBufferPool<_DXGKMDT_OPM_GET_INFO_PARAMETERS>::CAutoUnlockBuffer::~CAutoUnlockBuffer(v14);
  return (unsigned int)Information;
}
