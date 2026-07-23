/*
 * XREFs of EtwpUpdatePmcCounters @ 0x14093B0DC
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140938730 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     EtwpAllocatePmcData @ 0x1409398D0 (EtwpAllocatePmcData.c)
 */

__int64 __fastcall EtwpUpdatePmcCounters(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // r12d
  __int64 result; // rax
  __int64 v8; // r14
  __int64 i; // r8
  unsigned int v10; // r15d
  unsigned int j; // edi
  __int64 k; // rsi
  signed __int32 v13[22]; // [rsp+0h] [rbp-58h] BYREF

  v6 = KeNumberProcessors_0;
  if ( !a3 || a3 > EtwpMaxPmcCounter || *(_DWORD *)(a1 + 316) == 1 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 1000) || (result = EtwpAllocatePmcData(a1), !(_DWORD)result) )
  {
    v8 = *(_QWORD *)(a1 + 1000);
    if ( *(_DWORD *)(v8 + 20) )
    {
      return 3221226243LL;
    }
    else
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v13[12] = i;
        if ( (unsigned int)i >= a3 )
          break;
        *(_DWORD *)(*(_QWORD *)v8 + 4 * i) = *(_DWORD *)(a2 + 4 * i);
      }
      v10 = 0;
      for ( j = 0; j < v6; ++j )
      {
        v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64))off_140C007D0[0])(
                j,
                *(_QWORD *)v8,
                a3,
                v8 + 8 * (j + 3LL));
        if ( v10 )
          break;
      }
      if ( v10 )
      {
        for ( k = 0LL; (unsigned int)k < j; k = (unsigned int)(k + 1) )
        {
          ((void (__fastcall *)(_QWORD))off_140C007E0[0])(*(_QWORD *)(v8 + 8 * k + 24));
          *(_QWORD *)(v8 + 8 * k + 24) = 0LL;
        }
      }
      else
      {
        *(_DWORD *)(v8 + 20) = a3;
        _InterlockedOr(v13, 0);
        _InterlockedOr((volatile signed __int32 *)(a1 + 832), 0x800u);
      }
      return v10;
    }
  }
  return result;
}
