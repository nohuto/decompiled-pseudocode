/*
 * XREFs of ??1CAutoUnlockBuffer@?$COPMSimpleBufferPool@U_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@@@QEAA@XZ @ 0x1C0141268
 * Callers:
 *     NtGdiGetCOPPCompatibleOPMInformation @ 0x1C0141BE0 (NtGdiGetCOPPCompatibleOPMInformation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall COPMSimpleBufferPool<_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS>::CAutoUnlockBuffer::~CAutoUnlockBuffer(
        __int64 a1)
{
  __int64 *v1; // rbx
  struct _SLIST_ENTRY *v2; // rdi
  __int64 v3; // rbx

  v1 = *(__int64 **)(a1 + 8);
  if ( v1 )
  {
    v2 = *(struct _SLIST_ENTRY **)a1;
    if ( *(_QWORD *)a1 )
    {
      v3 = *v1;
      ++*(_DWORD *)(v3 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v3) < *(_WORD *)(v3 + 16) )
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v3, v2);
      }
      else
      {
        ++*(_DWORD *)(v3 + 32);
        (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v3 + 56))(v2, v3);
      }
    }
  }
}
