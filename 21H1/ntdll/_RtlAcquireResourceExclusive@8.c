/*
 * XREFs of _RtlAcquireResourceExclusive@8 @ 0x4B2EBDC0
 * Callers:
 *     _RtlConvertSharedToExclusive@4 @ 0x4B34A510 (_RtlConvertSharedToExclusive@4.c)
 * Callees:
 *     _ZwWaitForSingleObject@12 @ 0x4B2F29A0 (_ZwWaitForSingleObject@12.c)
 *     __alldiv @ 0x4B2F6300 (__alldiv.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 *     _RtlpPossibleDeadlock@4 @ 0x4B34A99E (_RtlpPossibleDeadlock@4.c)
 */

char __stdcall RtlAcquireResourceExclusive(int a1, char a2)
{
  int v2; // ecx
  volatile signed __int32 *v3; // edi
  int v5; // edi
  int *v6; // eax
  int v7; // eax
  bool v8; // zf
  signed __int32 v9; // ecx
  int v10; // eax
  int *v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+10h] [ebp-8h]

  v2 = *(_DWORD *)(a1 + 40);
  v3 = (volatile signed __int32 *)(a1 + 40);
  if ( v2 < 0 && *(void **)(a1 + 44) == NtCurrentTeb()->ClientId.UniqueThread )
  {
    _InterlockedDecrement(v3);
    return 1;
  }
  else
  {
    while ( 1 )
    {
      if ( !v2 && !_InterlockedCompareExchange(v3, -1, 0) )
      {
        *(_DWORD *)(a1 + 44) = NtCurrentTeb()->ClientId.UniqueThread;
        return 1;
      }
      if ( !a2 )
        break;
      ++*(_DWORD *)(*(_DWORD *)(a1 + 52) + 20);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 36));
      v2 = *v3;
      if ( !*v3 )
      {
        v12 = *(_DWORD *)(a1 + 36);
        v8 = v12 == 0;
        if ( v12 > 0 )
        {
          v9 = *(_DWORD *)(a1 + 36);
          do
          {
            v10 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 36), v9 - 1, v9);
            if ( v10 == v9 )
              break;
            v9 = v10;
            v12 = v10;
          }
          while ( v10 > 0 );
          v3 = (volatile signed __int32 *)(a1 + 40);
          v2 = 0;
          v8 = v12 == 0;
        }
        if ( !v8 )
          continue;
      }
      v5 = 0;
      while ( 1 )
      {
        v6 = (*(_BYTE *)(a1 + 48) & 1) != 0 ? 0 : &RtlpTimeout;
        v11 = v6;
        v7 = ZwWaitForSingleObject(*(_DWORD *)(a1 + 32), 0, v6);
        if ( v7 != 258 )
          break;
        DbgPrintEx(101, 0, "RTL: Acquire Exclusive Sem Timeout %d (%I64u secs)\n", v5, *(_QWORD *)v11 / -10000000LL);
        DbgPrintEx(101, 0, "RTL: Resource at %p\n", (const void *)a1);
        if ( (unsigned int)++v5 > 2 )
          RtlpPossibleDeadlock(a1);
        DbgPrintEx(101, 0, "RTL: Re-Waiting\n");
      }
      v3 = (volatile signed __int32 *)(a1 + 40);
      if ( v7 < 0 )
        RtlRaiseStatus(v7);
      v2 = *v3;
    }
    return 0;
  }
}
