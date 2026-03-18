/*
 * XREFs of EtwpRegisterUMProvider @ 0x140796040
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     EtwpUpdateEnableMask @ 0x14079488C (EtwpUpdateEnableMask.c)
 *     EtwpGetSchematizedFilterSize @ 0x140796390 (EtwpGetSchematizedFilterSize.c)
 *     EtwpFindOrCreateGuidEntry @ 0x140796798 (EtwpFindOrCreateGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x140796B04 (EtwpUnreferenceGuidEntry.c)
 *     EtwpTrackProviderRegistration @ 0x140796C40 (EtwpTrackProviderRegistration.c)
 *     EtwpApplyScopeFilters @ 0x140796D80 (EtwpApplyScopeFilters.c)
 *     EtwpAddUmRegEntry @ 0x140796F10 (EtwpAddUmRegEntry.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14079809C (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x140882EB0 (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpCopySchematizedFilters @ 0x1409F4FB4 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpRegisterUMProvider(int a1, __int64 a2, unsigned int a3, char a4, _DWORD *a5)
{
  int v8; // edi
  bool v9; // zf
  __int64 v10; // rax
  int GuidEntry; // r15d
  _QWORD *v12; // r14
  struct _KTHREAD *v13; // rax
  __int64 v14; // rdx
  _DWORD *v15; // rsi
  _DWORD *v16; // r15
  PVOID v17; // rcx
  int SchematizedFilterSize; // eax
  unsigned int v19; // ecx
  _BYTE *v20; // rdi
  char v21; // dl
  int v22; // r9d
  __int64 v23; // rcx
  char v24; // al
  unsigned __int8 v25; // r14
  __int64 v26; // rax
  _DWORD *v27; // r12
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD *v31; // rbx
  __int64 v32; // rax
  int v34; // edx
  struct _KTHREAD *CurrentThread; // rax
  char v36; // dl
  unsigned __int16 v37; // [rsp+30h] [rbp-20h] BYREF
  PVOID P; // [rsp+38h] [rbp-18h] BYREF
  PVOID Object; // [rsp+40h] [rbp-10h] BYREF
  __int64 v40; // [rsp+48h] [rbp-8h] BYREF
  __int64 v41; // [rsp+88h] [rbp+38h] BYREF

  P = 0LL;
  v40 = 0LL;
  v8 = *(_DWORD *)(a2 + 16);
  v37 = *(_WORD *)(a2 + 20);
  v10 = *(_QWORD *)a2 - SecurityProviderGuid;
  v9 = *(_QWORD *)a2 == (_QWORD)SecurityProviderGuid;
  Object = 0LL;
  LOBYTE(v41) = 0;
  if ( v9 )
    v10 = *(_QWORD *)(a2 + 8) - *((_QWORD *)&SecurityProviderGuid + 1);
  if ( !v10 )
    return 3221225506LL;
  GuidEntry = EtwpFindOrCreateGuidEntry(a1, a2, (unsigned int)(v8 - 2) > 1, 1, (__int64)&P);
  if ( GuidEntry )
  {
    v31 = P;
  }
  else
  {
    v12 = P;
    if ( *((_QWORD *)P + 50) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v12[50] + 408LL, 0LL);
      *(_QWORD *)(v12[50] + 416LL) = KeGetCurrentThread();
    }
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)P + 408, 0LL);
    LOBYTE(v14) = -1;
    v15 = P;
    v16 = a5;
    v17 = P;
    *((_QWORD *)P + 52) = KeGetCurrentThread();
    *v16 = 160;
    SchematizedFilterSize = EtwpGetSchematizedFilterSize(v17, v14);
    v19 = 160;
    if ( SchematizedFilterSize )
    {
      v19 = SchematizedFilterSize + 176;
      *v16 = SchematizedFilterSize + 176;
    }
    if ( v19 > a3 )
    {
      GuidEntry = -1073741789;
    }
    else
    {
      GuidEntry = EtwpAddUmRegEntry((_DWORD)v15, v8, v37, *(_QWORD *)(a2 + 32), (__int64)&Object, (__int64)&v40);
      if ( GuidEntry >= 0 )
      {
        if ( a4 )
        {
          _InterlockedOr16((volatile signed __int16 *)Object + 49, 0x100u);
          v15 = P;
        }
        v20 = Object;
        *(_QWORD *)(a2 + 24) = v40;
        if ( v15[24] )
          EtwpUpdateEnableMask((__int64)v15, (v20[98] & 8) != 0, 0, 1, v20 + 100);
        v21 = v20[98];
        LOBYTE(v37) = v20[100];
        EtwpApplyScopeFilters((_DWORD)v20, (v21 & 8) != 0, 0, 0, (__int64)&v37);
        v23 = v12[50];
        if ( v23 )
        {
          if ( *(_DWORD *)(v23 + 96) )
            EtwpUpdateEnableMask(v23, (v20[98] & 8) != 0, 1, 1, v20 + 102);
          LOBYTE(v22) = 1;
          v36 = v20[98];
          LOBYTE(v41) = v20[102];
          EtwpApplyScopeFilters((_DWORD)v20, (v36 & 8) != 0, 0, v22, (__int64)&v41);
        }
        if ( (v20[98] & 8) != 0 )
        {
          v20[100] = v37;
          v24 = v41;
          v20[102] = v41;
        }
        else
        {
          v20[100] &= v37;
          v20[102] &= v41;
          v24 = v20[102];
        }
        v25 = v20[100];
        if ( v25 || v24 )
        {
          EtwpComputeRegEntryEnableInfo(v20, a2 + 112);
          v34 = *((_BYTE *)v15 + 91) & 1;
          BYTE3(v41) = 0;
          *(_DWORD *)(a2 + 152) = v34;
          LOWORD(v41) = *((_WORD *)v15 + 44);
          BYTE2(v41) = *((_BYTE *)v15 + 90);
          HIDWORD(v41) = v15[20];
          v26 = v41;
        }
        else
        {
          v26 = 0LL;
          *(_OWORD *)(a2 + 112) = 0LL;
          *(_OWORD *)(a2 + 128) = 0LL;
          *(_DWORD *)(a2 + 152) = 0;
        }
        v27 = a5;
        *(_QWORD *)(a2 + 144) = v26;
        *v27 = 160;
        v28 = EtwpGetSchematizedFilterSize(v15, v25);
        if ( v28 )
        {
          *v27 = v28 + 176;
          *(_DWORD *)(a2 + 172) = 0x80000000;
          *(_DWORD *)(a2 + 168) = v28;
          *(_QWORD *)(a2 + 160) = 136LL;
          EtwpCopySchematizedFilters((void *)(a2 + 176));
          v28 = 1;
        }
        *(_DWORD *)(a2 + 156) = v28;
        *(_DWORD *)(a2 + 44) = *v27;
        EtwpTrackProviderRegistration(v20);
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER) )
          EtwpEventWriteTemplateSessAndProv(v29, &ETW_EVENT_PROVIDER_REGISTER, v30, 1LL, 0LL, a2);
      }
    }
    *((_QWORD *)v15 + 52) = 0LL;
    ExReleasePushLockEx((ULONG_PTR)(v15 + 102), 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v31 = P;
    v32 = *((_QWORD *)P + 50);
    if ( v32 )
    {
      *(_QWORD *)(v32 + 416) = 0LL;
      ExReleasePushLockEx(v31[50] + 408LL, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v31 = P;
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
  if ( v31 )
    EtwpUnreferenceGuidEntry(v31);
  return (unsigned int)GuidEntry;
}
