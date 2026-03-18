/*
 * XREFs of NtDCompositionGetBatchId @ 0x1C001F030
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionGetBatchId(int a1, unsigned int a2, _DWORD *a3, __int64 a4)
{
  __int64 v5; // r8
  _DWORD *v7; // rdx
  _DWORD *v8; // rdi
  int v9; // esi
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v13; // rbx
  struct _RTL_GENERIC_TABLE *v14; // rcx
  _QWORD *v15; // rax
  struct _ERESOURCE *v16; // rdi
  int v17; // r12d
  int Buffer; // [rsp+38h] [rbp-50h] BYREF
  __int64 v20; // [rsp+3Ch] [rbp-4Ch]
  int v21; // [rsp+44h] [rbp-44h]

  v5 = a2;
  if ( !a3 )
    return (unsigned int)-1073741811;
  v7 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v7 = (_DWORD *)MmUserProbeAddress;
  *v7 = *v7;
  v8 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(MmUserProbeAddress, v7, v5, a4);
  if ( CurrentProcessWin32Process )
    v11 = *(_QWORD *)(CurrentProcessWin32Process + 256);
  if ( v11 )
  {
    v13 = *(struct _ERESOURCE **)(v11 + 8);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v13, 1u);
    v14 = *(struct _RTL_GENERIC_TABLE **)v11;
    v10 = 0LL;
    Buffer = a1;
    v20 = 0LL;
    v21 = 0;
    v15 = RtlLookupElementGenericTable(v14, &Buffer);
    if ( v15 )
      v10 = v15[1];
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v8 = 0LL;
    }
    else
    {
      v9 = -1073741790;
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v11 + 8));
    KeLeaveCriticalRegion();
  }
  else
  {
    v9 = -1073741823;
  }
  if ( v10 )
  {
    v16 = *(struct _ERESOURCE **)(v10 + 32);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v16, 1u);
    v8 = (_DWORD *)v10;
  }
  if ( v9 >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8) == 1 )
      goto LABEL_16;
    v9 = -1073741811;
    (**(void (__fastcall ***)(_DWORD *))v8)(v8);
  }
  v8 = 0LL;
LABEL_16:
  if ( v9 >= 0 )
  {
    if ( a2 == 2 )
    {
      v17 = v8[96];
    }
    else if ( a2 )
    {
      if ( a2 == 1 )
        v17 = v8[95];
      else
        v17 = 0;
    }
    else
    {
      v17 = v8[94];
    }
    (**(void (__fastcall ***)(_DWORD *))v8)(v8);
    *a3 = v17;
  }
  return (unsigned int)v9;
}
