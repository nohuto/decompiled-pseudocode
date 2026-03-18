/*
 * XREFs of ?GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z @ 0x1C01AFEBC
 * Callers:
 *     NtInputSpaceRegionFromPoint @ 0x1C012DDD0 (NtInputSpaceRegionFromPoint.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0166484 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     RIMSetPointerDeviceInputSpace @ 0x1C01672D0 (RIMSetPointerDeviceInputSpace.c)
 * Callees:
 *     <none>
 */

char __fastcall InputConfig::GetInputSpace(struct _LUID a1, struct CLockedInputSpace *a2)
{
  CInputConfig *v3; // r14
  DWORD LowPart; // ebx
  char v5; // di
  CInputConfig *v6; // rax
  CInputConfig *i; // rcx
  _DWORD *v8; // rax
  LONG HighPart; // [rsp+34h] [rbp+Ch]

  HighPart = a1.HighPart;
  *(_QWORD *)a2 = 0LL;
  v3 = gpInputConfig;
  LowPart = a1.LowPart;
  KeEnterCriticalRegion();
  v5 = 1;
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v6 = *(CInputConfig **)v3;
  for ( i = **(CInputConfig ***)v3; v6 != v3; i = *(CInputConfig **)i )
  {
    v8 = (_DWORD *)((char *)v6 + 16);
    if ( !v8 )
      break;
    if ( LowPart == *v8 && HighPart == v8[1] )
    {
      *(_QWORD *)a2 = v8;
      goto LABEL_9;
    }
    v6 = i;
  }
  v5 = 0;
LABEL_9:
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  return v5;
}
