/*
 * XREFs of PspSiloInitializeUserSharedData @ 0x140902A0C
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409022A0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     PsGetServerSiloGlobals @ 0x1402D70B4 (PsGetServerSiloGlobals.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402E1A10 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402E1A30 (PsAttachSiloToCurrentThread.c)
 *     MmCreateSection @ 0x140642E30 (MmCreateSection.c)
 *     MmMapViewInSystemSpace @ 0x1406E94F0 (MmMapViewInSystemSpace.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x14076605C (RtlpGetNtProductTypeFromRegistry.c)
 *     PspSiloInitializeSuiteMask @ 0x1409027FC (PspSiloInitializeSuiteMask.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x14090286C (PspSiloInitializeSystemRootBuffer.c)
 */

__int64 __fastcall PspSiloInitializeUserSharedData(struct _LIST_ENTRY *a1)
{
  __int64 result; // rax
  struct _DMA_ADAPTER *v3; // rbx
  NTSTATUS v4; // edi
  _QWORD *ServerSiloGlobals; // rdi
  struct _LIST_ENTRY *v6; // r14
  int NtProductTypeFromRegistry; // ebx
  __int64 v8; // rsi
  PVOID Section; // [rsp+78h] [rbp+38h] BYREF
  PVOID MappedBase; // [rsp+80h] [rbp+40h] BYREF
  ULONG_PTR ViewSize; // [rsp+88h] [rbp+48h] BYREF

  MappedBase = 0LL;
  Section = 0LL;
  ViewSize = 584LL;
  result = MmCreateSection((int)&Section, 983071LL, 0, &ViewSize, 4, 0x8000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v3 = (struct _DMA_ADAPTER *)Section;
    ViewSize = 0LL;
    v4 = MmMapViewInSystemSpace(Section, &MappedBase, &ViewSize);
    if ( v4 >= 0 )
    {
      ServerSiloGlobals = PsGetServerSiloGlobals((__int64)a1);
      ServerSiloGlobals[139] = MappedBase;
      ServerSiloGlobals[140] = v3;
      v6 = PsAttachSiloToCurrentThread(a1);
      *(_DWORD *)ServerSiloGlobals[139] = -1;
      NtProductTypeFromRegistry = PspSiloInitializeSystemRootBuffer((__int64)a1);
      if ( NtProductTypeFromRegistry >= 0 )
      {
        v8 = ServerSiloGlobals[139];
        LODWORD(Section) = 0;
        NtProductTypeFromRegistry = RtlpGetNtProductTypeFromRegistry(&Section);
        if ( NtProductTypeFromRegistry >= 0 )
        {
          *(_DWORD *)(v8 + 16) = (_DWORD)Section;
          NtProductTypeFromRegistry = PspSiloInitializeSuiteMask(ServerSiloGlobals[139]);
          if ( NtProductTypeFromRegistry >= 0 )
          {
            *(_DWORD *)(ServerSiloGlobals[139] + 24LL) = -1;
            NtProductTypeFromRegistry = 0;
          }
        }
      }
      PsDetachSiloFromCurrentThread(v6);
      return (unsigned int)NtProductTypeFromRegistry;
    }
    else
    {
      HalPutDmaAdapter(v3);
      return (unsigned int)v4;
    }
  }
  return result;
}
