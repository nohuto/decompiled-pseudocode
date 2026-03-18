/*
 * XREFs of NtDCompositionCommitChannel @ 0x1C00B8D00
 * Callers:
 *     <none>
 * Callees:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C00B8F90 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 *     ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObject@2@@Z @ 0x1C00B9704 (-SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObje.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C01D6084 (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall NtDCompositionCommitChannel(int a1, _DWORD *a2, bool *a3, int a4, void *a5)
{
  _DWORD *v5; // r12
  _BYTE *v6; // rdx
  DirectComposition::CApplicationChannel *v7; // rsi
  int v8; // r14d
  __int64 v9; // r15
  __int64 v10; // r13
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v12; // rdi
  struct _RTL_GENERIC_TABLE *v13; // rcx
  _QWORD *v14; // rax
  struct _ERESOURCE *v15; // rdi
  struct DirectComposition::SynchronizationObject *v16; // rdi
  bool v17; // r14
  bool v18; // r13
  int v19; // ebx
  struct DirectComposition::SynchronizationObject *v21; // [rsp+40h] [rbp-68h] BYREF
  struct DirectComposition::CBatch *v22; // [rsp+48h] [rbp-60h] BYREF
  struct DirectComposition::CBatch *v23; // [rsp+50h] [rbp-58h] BYREF
  DirectComposition::CApplicationChannel *v24; // [rsp+58h] [rbp-50h]
  int Buffer; // [rsp+60h] [rbp-48h] BYREF
  __int64 v26; // [rsp+64h] [rbp-44h]
  int v27; // [rsp+6Ch] [rbp-3Ch]

  v5 = a2;
  if ( !a3 )
    return (unsigned int)-1073741811;
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_DWORD *)MmUserProbeAddress;
    *a2 = *a2;
  }
  v6 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v6 = (_BYTE *)MmUserProbeAddress;
  *v6 = *v6;
  v7 = 0LL;
  v24 = 0LL;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(MmUserProbeAddress);
  if ( CurrentProcessWin32Process )
    v10 = *(_QWORD *)(CurrentProcessWin32Process + 256);
  if ( v10 )
  {
    v12 = *(struct _ERESOURCE **)(v10 + 8);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v12, 1u);
    v13 = *(struct _RTL_GENERIC_TABLE **)v10;
    Buffer = a1;
    v26 = 0LL;
    v27 = 0;
    v14 = RtlLookupElementGenericTable(v13, &Buffer);
    if ( v14 )
      v9 = v14[1];
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v7 = v24;
    }
    else
    {
      v8 = -1073741790;
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v10 + 8));
    KeLeaveCriticalRegion();
  }
  else
  {
    v8 = -1073741823;
  }
  if ( v9 )
  {
    v15 = *(struct _ERESOURCE **)(v9 + 32);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v15, 1u);
    v7 = (DirectComposition::CApplicationChannel *)v9;
  }
  if ( v8 < 0 )
    goto LABEL_37;
  if ( (*(unsigned int (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)v7 + 8LL))(v7) != 1 )
  {
    v8 = -1073741811;
    (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v7)(v7);
LABEL_37:
    v7 = 0LL;
  }
  if ( v8 < 0 )
  {
    v18 = 0;
    v19 = 0;
  }
  else
  {
    v16 = 0LL;
    v21 = 0LL;
    if ( a5 )
    {
      DirectComposition::SynchronizationObject::ResolveHandle(a5, 1u, 1, &v21);
      v16 = v21;
    }
    do
    {
      v22 = 0LL;
      v23 = 0LL;
      v17 = DirectComposition::CApplicationChannel::BuildBatch(v7, &v22, &v23, a4 != 0);
      if ( v22 )
        DirectComposition::CApplicationChannel::SubmitBatch(v7, v22, v23, *((_BYTE *)v7 + 48) & 1, v16);
    }
    while ( !v17 );
    v18 = *((_DWORD *)v7 + 129) != 0;
    v8 = 0;
    v19 = *((_DWORD *)v7 + 94);
    if ( v16 )
      ObfDereferenceObject(v16);
    (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v7)(v7);
  }
  if ( v8 >= 0 )
  {
    if ( v5 )
      *v5 = v19;
    *a3 = v18;
  }
  return (unsigned int)v8;
}
