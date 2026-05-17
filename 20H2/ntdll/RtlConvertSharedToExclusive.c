/*
 * XREFs of RtlConvertSharedToExclusive @ 0x18007E410
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireResourceExclusive @ 0x180064BE0 (RtlAcquireResourceExclusive.c)
 *     ZwReleaseSemaphore @ 0x18009D1F0 (ZwReleaseSemaphore.c)
 *     RtlRaiseStatus @ 0x180102820 (RtlRaiseStatus.c)
 */

char __fastcall RtlConvertSharedToExclusive(__int64 a1)
{
  struct _TEB *v1; // rax
  int v3; // ett
  int v4; // eax
  unsigned __int32 v5; // ecx
  int v6; // eax
  signed __int32 v7; // r8d
  bool v8; // zf
  int v9; // eax
  int v10; // eax
  signed __int32 v11; // edx
  bool v12; // zf
  int v13; // eax
  int v14; // eax
  char v16; // [rsp+30h] [rbp+8h] BYREF

  LODWORD(v1) = *(_DWORD *)(a1 + 68);
  if ( (int)v1 >= 0 )
  {
    if ( (_DWORD)v1 == 1 )
    {
      while ( 1 )
      {
        v3 = (int)v1;
        LODWORD(v1) = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 68), -1, (signed __int32)v1);
        if ( v3 == (_DWORD)v1 )
          break;
        if ( (_DWORD)v1 != 1 )
          goto LABEL_7;
      }
      v1 = NtCurrentTeb();
      *(_QWORD *)(a1 + 72) = v1->ClientId.UniqueThread;
    }
    else
    {
LABEL_7:
      v4 = *(_DWORD *)(a1 + 68);
      if ( v4 >= 0 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 68), 0xFFFFFFFF) == 1 )
        {
          v11 = *(_DWORD *)(a1 + 64);
          v12 = v11 == 0;
          if ( v11 > 0 )
          {
            do
            {
              v13 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), v11 - 1, v11);
              if ( v11 == v13 )
                break;
              v11 = v13;
            }
            while ( v13 > 0 );
            v12 = v11 == 0;
          }
          if ( !v12 )
          {
            v14 = ZwReleaseSemaphore(*(_QWORD *)(a1 + 56), 1LL, &v16);
            if ( v14 < 0 )
              RtlRaiseStatus((unsigned int)v14);
          }
        }
      }
      else
      {
        if ( v4 == -1 )
          *(_QWORD *)(a1 + 72) = 0LL;
        if ( !_InterlockedIncrement((volatile signed __int32 *)(a1 + 68)) )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            v5 = _InterlockedExchange((volatile __int32 *)(a1 + 48), 0);
            if ( v5 )
            {
              v6 = ZwReleaseSemaphore(*(_QWORD *)(a1 + 40), v5, &v16);
              if ( v6 < 0 )
                RtlRaiseStatus((unsigned int)v6);
            }
          }
          v7 = *(_DWORD *)(a1 + 64);
          v8 = v7 == 0;
          if ( v7 > 0 )
          {
            do
            {
              v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), v7 - 1, v7);
              if ( v7 == v9 )
                break;
              v7 = v9;
            }
            while ( v9 > 0 );
            v8 = v7 == 0;
          }
          if ( !v8 )
          {
            v10 = ZwReleaseSemaphore(*(_QWORD *)(a1 + 56), 1LL, &v16);
            if ( v10 < 0 )
              RtlRaiseStatus((unsigned int)v10);
          }
        }
      }
      LOBYTE(v1) = RtlAcquireResourceExclusive(a1, 1);
    }
  }
  return (char)v1;
}
