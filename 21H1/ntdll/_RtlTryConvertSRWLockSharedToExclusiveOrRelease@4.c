/*
 * XREFs of _RtlTryConvertSRWLockSharedToExclusiveOrRelease@4 @ 0x4B34A410
 * Callers:
 *     <none>
 * Callees:
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 */

bool __stdcall RtlTryConvertSRWLockSharedToExclusiveOrRelease(volatile signed __int32 *a1)
{
  signed __int32 v1; // edx
  signed __int32 v2; // eax
  _DWORD *i; // edx
  int v5; // ecx

  v1 = *a1;
  if ( (*a1 & 1) == 0 )
    RtlRaiseStatus(-1073741212);
  if ( (v1 & 2) != 0 )
  {
LABEL_6:
    if ( (v1 & 8) != 0 )
    {
      for ( i = (_DWORD *)(v1 & 0xFFFFFFF0); ; i = (_DWORD *)*i )
      {
        v5 = i[1];
        if ( v5 )
          break;
      }
      if ( _InterlockedDecrement((volatile signed __int32 *)(v5 + 16)) > 0 )
        return 0;
      _InterlockedExchangeAdd(a1, 0xFFFFFFF8);
    }
    return 1;
  }
  else
  {
    while ( 1 )
    {
      v2 = _InterlockedCompareExchange(a1, v1 - 16, v1);
      if ( v2 == v1 )
        return (v2 & 0xFFFFFFF0) == 16;
      v1 = v2;
      if ( (v2 & 2) != 0 )
        goto LABEL_6;
    }
  }
}
