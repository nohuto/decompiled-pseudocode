/*
 * XREFs of ?ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0060010
 * Callers:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C005EEC8 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C005FFAC (-ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CChannel::ReferenceHandleAndLock(
        __int64 a1,
        struct DirectComposition::CChannel **a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // ebp
  unsigned int v6; // esi
  __int64 v7; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // r14
  struct _ERESOURCE *v10; // rbx
  struct _RTL_GENERIC_TABLE *v11; // rcx
  _QWORD *v12; // rax
  struct _ERESOURCE *v13; // rbx
  int Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+24h] [rbp-24h]
  int v17; // [rsp+2Ch] [rbp-1Ch]

  v5 = a1;
  v6 = 0;
  v7 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3, a4);
  if ( CurrentProcessWin32Process && (v9 = *(_QWORD *)(CurrentProcessWin32Process + 256)) != 0 )
  {
    v10 = *(struct _ERESOURCE **)(v9 + 8);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v10, 1u);
    v11 = *(struct _RTL_GENERIC_TABLE **)v9;
    Buffer = v5;
    v16 = 0LL;
    v17 = 0;
    v12 = RtlLookupElementGenericTable(v11, &Buffer);
    if ( v12 )
      v7 = v12[1];
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    else
      v6 = -1073741790;
    ExReleaseResourceLite(*(PERESOURCE *)(v9 + 8));
    KeLeaveCriticalRegion();
  }
  else
  {
    v6 = -1073741823;
  }
  if ( v7 )
  {
    v13 = *(struct _ERESOURCE **)(v7 + 32);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v13, 1u);
    *a2 = (struct DirectComposition::CChannel *)v7;
  }
  return v6;
}
