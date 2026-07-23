/*
 * XREFs of _RtlpWakeSRWLock@12 @ 0x4B2E3BAB
 * Callers:
 *     _LdrpGetDllPath@28 @ 0x4B2B27D0 (_LdrpGetDllPath@28.c)
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _TppWorkerFindTask@12 @ 0x4B2B6930 (_TppWorkerFindTask@12.c)
 *     _LdrpGetFromMUIMemCache@16 @ 0x4B2BD4F0 (_LdrpGetFromMUIMemCache@16.c)
 *     _RtlpxLookupFunctionTable@8 @ 0x4B2BD6C0 (_RtlpxLookupFunctionTable@8.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 *     _LdrGetProcedureAddressForCaller@24 @ 0x4B2CCED0 (_LdrGetProcedureAddressForCaller@24.c)
 *     _RtlReleasePath@4 @ 0x4B2DE7B0 (_RtlReleasePath@4.c)
 *     _RtlpOptimizeSRWLockList@8 @ 0x4B2E3B53 (_RtlpOptimizeSRWLockList@8.c)
 *     _RtlConvertSRWLockExclusiveToShared@4 @ 0x4B34A3C0 (_RtlConvertSRWLockExclusiveToShared@4.c)
 * Callees:
 *     _ZwAlertThreadByThreadId@4 @ 0x4B2F3080 (_ZwAlertThreadByThreadId@4.c)
 */

NTSTATUS __fastcall RtlpWakeSRWLock(volatile signed __int32 *a1, char a2, signed __int32 a3)
{
  volatile signed __int32 *v4; // esi
  _DWORD *v6; // edi
  int v7; // esi
  int v8; // edi
  NTSTATUS result; // eax
  int v10; // edi
  void *v11; // edx
  _DWORD *v12; // eax
  char v13; // [esp+Bh] [ebp-5h]

  v4 = a1;
  v13 = a2;
  while ( a2 || (a3 & 1) == 0 )
  {
LABEL_4:
    v6 = (_DWORD *)(a3 & 0xFFFFFFF0);
    v7 = *(_DWORD *)((a3 & 0xFFFFFFF0) + 4);
    if ( !v7 )
    {
      do
      {
        v12 = v6;
        v6 = (_DWORD *)*v6;
        v6[2] = v12;
        v7 = v6[1];
      }
      while ( !v7 );
      if ( v6 != (_DWORD *)(a3 & 0xFFFFFFF0) )
        *(_DWORD *)((a3 & 0xFFFFFFF0) + 4) = v7;
    }
    if ( (*(_DWORD *)(v7 + 20) & 1) != 0 )
    {
      if ( v13 )
      {
        result = -5;
        _InterlockedAnd(a1, 0xFFFFFFFB);
        return result;
      }
      v8 = *(_DWORD *)(v7 + 8);
      if ( v8 )
      {
        *(_DWORD *)((a3 & 0xFFFFFFF0) + 4) = v8;
        *(_DWORD *)(v7 + 8) = 0;
        result = -5;
        _InterlockedAnd(a1, 0xFFFFFFFB);
        do
        {
LABEL_9:
          v10 = *(_DWORD *)(v7 + 8);
          v11 = *(void **)(v7 + 12);
          _interlockedbittestandset((volatile signed __int32 *)(v7 + 20), 2u);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)(v7 + 20), 1u) )
            result = ZwAlertThreadByThreadId(v11);
          v7 = v10;
        }
        while ( v10 );
        return result;
      }
    }
    result = _InterlockedCompareExchange(a1, v13 != 0 ? 0x11 : 0, a3);
    if ( result == a3 )
      goto LABEL_9;
    a3 = result;
    v4 = a1;
    a2 = v13;
  }
  while ( 1 )
  {
    result = _InterlockedCompareExchange(v4, a3 - 4, a3);
    if ( result == a3 )
      return result;
    a3 = result;
    if ( (result & 1) == 0 )
      goto LABEL_4;
  }
}
