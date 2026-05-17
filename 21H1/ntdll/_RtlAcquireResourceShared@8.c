/*
 * XREFs of _RtlAcquireResourceShared@8 @ 0x4B2EB3B0
 * Callers:
 *     <none>
 * Callees:
 *     _ZwWaitForSingleObject@12 @ 0x4B2F29A0 (_ZwWaitForSingleObject@12.c)
 *     __alldiv @ 0x4B2F6300 (__alldiv.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 *     _RtlpPossibleDeadlock@4 @ 0x4B34A99E (_RtlpPossibleDeadlock@4.c)
 */

char __stdcall RtlAcquireResourceShared(int a1, char a2)
{
  int v2; // edi
  signed __int32 v3; // ecx
  volatile signed __int32 *v4; // esi
  signed __int32 v5; // eax
  bool v7; // zf
  signed __int32 v8; // esi
  int v9; // eax
  int v10; // esi
  int v11; // eax
  int v12; // [esp+10h] [ebp-8h]
  int *v13; // [esp+14h] [ebp-4h]

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 40);
  v4 = (volatile signed __int32 *)(a1 + 40);
  if ( v3 < 0 && *(void **)(a1 + 44) == NtCurrentTeb()->ClientId.UniqueThread )
  {
    _InterlockedDecrement(v4);
    return 1;
  }
  else
  {
    while ( 1 )
    {
      while ( v3 >= 0 )
      {
        v5 = _InterlockedCompareExchange(v4, v3 + 1, v3);
        if ( v5 == v3 )
          return 1;
        v3 = v5;
      }
      if ( !a2 )
        break;
      ++*(_DWORD *)(*(_DWORD *)(v2 + 52) + 20);
      _InterlockedIncrement((volatile signed __int32 *)(v2 + 28));
      v3 = *v4;
      if ( *(int *)v4 >= 0 )
      {
        v12 = *(_DWORD *)(v2 + 28);
        v7 = v12 == 0;
        if ( v12 > 0 )
        {
          v8 = *(_DWORD *)(v2 + 28);
          do
          {
            v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 28), v8 - 1, v8);
            if ( v9 == v8 )
              break;
            v8 = v9;
            v12 = v9;
          }
          while ( v9 > 0 );
          v2 = a1;
          v7 = v12 == 0;
          v4 = (volatile signed __int32 *)(a1 + 40);
        }
        if ( !v7 )
          continue;
      }
      v10 = 0;
      while ( 1 )
      {
        v13 = (*(_DWORD *)(v2 + 48) & 1) == 0 ? &RtlpTimeout : 0;
        v11 = ZwWaitForSingleObject(*(_DWORD *)(v2 + 24), 0, v13);
        if ( v11 != 258 )
          break;
        DbgPrintEx(101, 0, "RTL: Acquire Shared Sem Timeout %d(%I64u secs)\n", v10, *(_QWORD *)v13 / -10000000LL);
        DbgPrintEx(101, 0, "RTL: Resource at %p\n", (const void *)v2);
        if ( (unsigned int)++v10 > 2 )
          RtlpPossibleDeadlock(v2);
        DbgPrintEx(101, 0, "RTL: Re-Waiting\n");
      }
      v4 = (volatile signed __int32 *)(v2 + 40);
      if ( v11 < 0 )
        RtlRaiseStatus(v11);
      v3 = *v4;
    }
    return 0;
  }
}
