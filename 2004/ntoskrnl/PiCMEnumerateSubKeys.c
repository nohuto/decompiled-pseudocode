/*
 * XREFs of PiCMEnumerateSubKeys @ 0x1408AD26C
 * Callers:
 *     PiCMHandleIoctl @ 0x1405D81A0 (PiCMHandleIoctl.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x140358350 (CmIsStateSeparationEnabled.c)
 *     PiCMReturnBufferResultData @ 0x1405DB0D4 (PiCMReturnBufferResultData.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405E13D4 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1406C5534 (_PnpCtxRegQueryInfoKey.c)
 *     _RegRtlEnumKey @ 0x14075494C (_RegRtlEnumKey.c)
 *     PiCMCaptureEnumerateInputData @ 0x1408ABFA8 (PiCMCaptureEnumerateInputData.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiCMEnumerateSubKeys(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r12
  unsigned int *PoolWithTag; // rdi
  int v10; // ebx
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v14; // ebx
  int v15; // edx
  unsigned int v16; // ebx
  HANDLE KeyHandle; // [rsp+50h] [rbp-20h] BYREF
  __int128 v18; // [rsp+58h] [rbp-18h] BYREF
  int v19; // [rsp+68h] [rbp-8h]

  v6 = a6;
  KeyHandle = 0LL;
  a5 = 0;
  LODWORD(a6) = 0;
  *v6 = 0;
  v18 = 0LL;
  v19 = 0;
  PoolWithTag = 0LL;
  v10 = PiCMCaptureEnumerateInputData(a1, a2, (__int64)a3, (__int64)&v18);
  if ( v10 < 0 )
    return (unsigned int)v10;
  if ( DWORD1(v18) )
    goto LABEL_3;
  if ( !a3 || a4 < 0x14 )
  {
    LODWORD(v11) = -1073741811;
    goto LABEL_29;
  }
  v14 = a4 - 20;
  if ( a4 - 20 < 2 )
    goto LABEL_3;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v14, 0x34706E50u);
  if ( !PoolWithTag )
  {
    LODWORD(v11) = -1073741670;
    goto LABEL_4;
  }
  a5 = v14 >> 1;
  if ( DWORD2(v18) == 1 )
  {
    v15 = 5;
    goto LABEL_19;
  }
  if ( DWORD2(v18) == 2 )
  {
    v15 = 7;
    goto LABEL_19;
  }
  if ( DWORD2(v18) != 3 )
  {
LABEL_3:
    LODWORD(v11) = -1073741811;
LABEL_4:
    v12 = PiCMReturnBufferResultData(v11, 2 * a5, 0, 0LL, 0, v19, a3, a4, v6);
    goto LABEL_5;
  }
  v15 = 8;
LABEL_19:
  LODWORD(v11) = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, v15, (__int64)&KeyHandle);
  if ( (int)v11 < 0 )
    goto LABEL_4;
  v16 = HIDWORD(v18);
  LODWORD(v11) = RegRtlEnumKey(KeyHandle, HIDWORD(v18), PoolWithTag, &a5);
  if ( (_DWORD)v11 == -2147483622 )
  {
    if ( DWORD2(v18) != 3 )
      goto LABEL_4;
    if ( !CmIsStateSeparationEnabled() )
      goto LABEL_4;
    LODWORD(v11) = PnpCtxRegQueryInfoKey(v11, (int)KeyHandle, (int)&a6, 0, 0LL, 0LL, 0LL);
    if ( (int)v11 < 0 )
      goto LABEL_4;
    if ( v16 < (unsigned int)a6 )
    {
      LODWORD(v11) = -1073741595;
      goto LABEL_4;
    }
    LODWORD(v11) = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 9, (__int64)&KeyHandle);
    if ( (int)v11 < 0 )
      goto LABEL_4;
    LODWORD(v11) = RegRtlEnumKey(KeyHandle, v16 - (unsigned int)a6, PoolWithTag, &a5);
  }
LABEL_29:
  if ( (int)v11 < 0 )
    goto LABEL_4;
  v12 = PiCMReturnBufferResultData(v11, 2 * a5, 0, PoolWithTag, 2 * a5, v19, a3, a4, v6);
LABEL_5:
  v10 = v12;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
  return (unsigned int)v10;
}
