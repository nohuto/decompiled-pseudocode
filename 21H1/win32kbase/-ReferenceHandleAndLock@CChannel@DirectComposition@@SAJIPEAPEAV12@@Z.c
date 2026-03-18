/*
 * XREFs of ?ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C00B9DE0
 * Callers:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C00B8C98 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C00B9D7C (-ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CChannel::ReferenceHandleAndLock(
        __int64 a1,
        struct DirectComposition::CChannel **a2)
{
  int v3; // ebp
  unsigned int v4; // esi
  __int64 v5; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // r14
  struct _ERESOURCE *v8; // rbx
  struct _RTL_GENERIC_TABLE *v9; // rcx
  _QWORD *v10; // rax
  struct _ERESOURCE *v11; // rbx
  int Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+24h] [rbp-24h]
  int v15; // [rsp+2Ch] [rbp-1Ch]

  v3 = a1;
  v4 = 0;
  v5 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process && (v7 = *(_QWORD *)(CurrentProcessWin32Process + 256)) != 0 )
  {
    v8 = *(struct _ERESOURCE **)(v7 + 8);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v8, 1u);
    v9 = *(struct _RTL_GENERIC_TABLE **)v7;
    Buffer = v3;
    v14 = 0LL;
    v15 = 0;
    v10 = RtlLookupElementGenericTable(v9, &Buffer);
    if ( v10 )
      v5 = v10[1];
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    else
      v4 = -1073741790;
    ExReleaseResourceLite(*(PERESOURCE *)(v7 + 8));
    KeLeaveCriticalRegion();
  }
  else
  {
    v4 = -1073741823;
  }
  if ( v5 )
  {
    v11 = *(struct _ERESOURCE **)(v5 + 32);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v11, 1u);
    *a2 = (struct DirectComposition::CChannel *)v5;
  }
  return v4;
}
