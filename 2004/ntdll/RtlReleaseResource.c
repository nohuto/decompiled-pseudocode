/*
 * XREFs of RtlReleaseResource @ 0x180064C10
 * Callers:
 *     <none>
 * Callees:
 *     ZwReleaseSemaphore @ 0x18009CF50 (ZwReleaseSemaphore.c)
 *     RtlRaiseStatus @ 0x180102310 (RtlRaiseStatus.c)
 */

__int64 __fastcall RtlReleaseResource(__int64 a1)
{
  __int64 result; // rax
  signed __int32 v3; // edx
  bool v4; // zf
  signed __int32 v5; // r8d
  bool v6; // zf
  unsigned __int32 v7; // ecx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  result = *(unsigned int *)(a1 + 68);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1 )
      *(_QWORD *)(a1 + 72) = 0LL;
    if ( !_InterlockedIncrement((volatile signed __int32 *)(a1 + 68)) )
    {
      result = *(unsigned int *)(a1 + 48);
      if ( (_DWORD)result )
      {
        v7 = _InterlockedExchange((volatile __int32 *)(a1 + 48), 0);
        if ( v7 )
        {
          result = ZwReleaseSemaphore(*(_QWORD *)(a1 + 40), v7, &v8);
          if ( (int)result < 0 )
            RtlRaiseStatus((unsigned int)result);
        }
      }
      v5 = *(_DWORD *)(a1 + 64);
      v6 = v5 == 0;
      if ( v5 > 0 )
      {
        do
        {
          result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), v5 - 1, v5);
          if ( v5 == (_DWORD)result )
            break;
          v5 = result;
        }
        while ( (int)result > 0 );
        v6 = v5 == 0;
      }
      if ( !v6 )
      {
        result = ZwReleaseSemaphore(*(_QWORD *)(a1 + 56), 1LL, &v8);
        if ( (int)result < 0 )
          RtlRaiseStatus((unsigned int)result);
      }
    }
  }
  else
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 68), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      v3 = *(_DWORD *)(a1 + 64);
      v4 = v3 == 0;
      if ( v3 > 0 )
      {
        do
        {
          result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), v3 - 1, v3);
          if ( v3 == (_DWORD)result )
            break;
          v3 = result;
        }
        while ( (int)result > 0 );
        v4 = v3 == 0;
      }
      if ( !v4 )
      {
        result = ZwReleaseSemaphore(*(_QWORD *)(a1 + 56), 1LL, &v8);
        if ( (int)result < 0 )
          RtlRaiseStatus((unsigned int)result);
      }
    }
  }
  return result;
}
