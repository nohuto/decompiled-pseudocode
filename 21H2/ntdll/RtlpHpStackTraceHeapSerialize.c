/*
 * XREFs of RtlpHpStackTraceHeapSerialize @ 0x180109400
 * Callers:
 *     <none>
 * Callees:
 *     RtlpWalkHeapInternal @ 0x180002560 (RtlpWalkHeapInternal.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlLockHeap @ 0x18005F990 (RtlLockHeap.c)
 *     RtlUnlockHeap @ 0x18005FA30 (RtlUnlockHeap.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1160 (_guard_dispatch_icall_nop.c)
 *     RtlpHpStackTraceAllocFindMapping @ 0x180108DC8 (RtlpHpStackTraceAllocFindMapping.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18010938C (RtlpHpStackTraceHeapGetContext.c)
 */

__int64 __fastcall RtlpHpStackTraceHeapSerialize(__int64 a1, __int64 a2)
{
  int v3; // r15d
  int Context; // eax
  __int64 v6; // rbx
  bool v7; // zf
  unsigned __int64 v8; // rdx
  int v9; // esi
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 Mapping; // rax
  __int64 v13; // r8
  __int64 (__fastcall *v14)(__int64 *, __int64, __int64); // rax
  __int64 v16; // [rsp+20h] [rbp-59h] BYREF
  __int64 v17; // [rsp+28h] [rbp-51h] BYREF
  __int64 v18; // [rsp+30h] [rbp-49h]
  __int64 v19; // [rsp+38h] [rbp-41h]
  __int128 v20; // [rsp+40h] [rbp-39h] BYREF
  __int128 v21; // [rsp+50h] [rbp-29h]
  __int128 v22; // [rsp+60h] [rbp-19h]
  _QWORD v23[2]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v24; // [rsp+80h] [rbp+7h]
  __int64 v25; // [rsp+88h] [rbp+Fh]

  v3 = 0;
  Context = RtlpHpStackTraceHeapGetContext(a1, 0, &v16);
  v6 = v16;
  v23[0] = 524290LL;
  if ( Context < 0 )
    v6 = 0LL;
  v23[1] = a1;
  v7 = *(_DWORD *)(a1 + 16) == -571548178;
  v16 = v6;
  if ( v7 )
  {
    v25 = *(_QWORD *)(a1 + 128) << 12;
    v25 += *(_QWORD *)(a1 + 88) << 12;
    v24 = *(_QWORD *)(a1 + 136) << 12;
    v6 = v16;
    v24 += *(_QWORD *)(a1 + 96) << 12;
  }
  else
  {
    v24 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
    v25 = *(_QWORD *)(a1 + 568);
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(a2 + 16))(v23, 32LL, *(_QWORD *)(a2 + 24));
  if ( v9 >= 0 )
  {
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    if ( v6 )
    {
      v3 = 1;
      RtlAcquireSRWLockShared((volatile signed __int64 *)(v6 + 8), v8, v10, v11);
      ++*(_DWORD *)v6;
    }
    RtlLockHeap(a1);
    while ( (int)RtlpWalkHeapInternal(a1, (__int64)&v20) >= 0 )
    {
      if ( (BYTE2(v21) & 1) != 0 )
      {
        v19 = *((_QWORD *)&v20 + 1);
        v17 = v20;
        v18 = 0LL;
        if ( v6 )
        {
          Mapping = RtlpHpStackTraceAllocFindMapping(v6, v20);
          if ( Mapping )
            v18 = *(_QWORD *)(Mapping + 16);
        }
        else
        {
          v18 = 0LL;
        }
        v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(a2 + 16))(&v17, 24LL, *(_QWORD *)(a2 + 24));
        if ( v9 < 0 )
          goto LABEL_20;
      }
    }
    v13 = *(_QWORD *)(a2 + 24);
    v14 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64))(a2 + 16);
    v17 = 305450479LL;
    v19 = 0xFFFFFFFFLL;
    v18 = 0LL;
    v9 = v14(&v17, 24LL, v13);
    if ( v9 >= 0 )
      v9 = 0;
LABEL_20:
    RtlUnlockHeap(a1);
    if ( v3 )
    {
      --*(_DWORD *)v6;
      RtlReleaseSRWLockShared((volatile signed __int64 *)(v6 + 8));
    }
  }
  return (unsigned int)v9;
}
