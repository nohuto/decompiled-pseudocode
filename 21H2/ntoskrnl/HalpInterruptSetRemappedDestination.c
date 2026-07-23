/*
 * XREFs of HalpInterruptSetRemappedDestination @ 0x1404BBA08
 * Callers:
 *     HalpInterruptSetDestination @ 0x1403784E0 (HalpInterruptSetDestination.c)
 * Callees:
 *     HalpInterruptDestinationToTarget @ 0x140378880 (HalpInterruptDestinationToTarget.c)
 *     HalpInterruptRemapUpdateDeliveryMode @ 0x1403CE22C (HalpInterruptRemapUpdateDeliveryMode.c)
 *     HalpInterruptGetRemappedLineState @ 0x1404BB950 (HalpInterruptGetRemappedLineState.c)
 *     HalpIommuUpdateRemappingTableEntry @ 0x1404C5874 (HalpIommuUpdateRemappingTableEntry.c)
 */

__int64 __fastcall HalpInterruptSetRemappedDestination(unsigned int *a1, _DWORD *a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rcx
  ULONG_PTR *v7; // rax
  __int64 v8; // rcx
  _DWORD v10[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+28h] [rbp-48h]
  _DWORD *v12; // [rsp+30h] [rbp-40h]
  _OWORD v13[3]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v14; // [rsp+68h] [rbp-8h]
  ULONG_PTR *v15; // [rsp+98h] [rbp+28h] BYREF

  v4 = 0;
  v15 = 0LL;
  v14 = 0LL;
  memset(v13, 0, sizeof(v13));
  v10[1] = 0;
  if ( (int)HalpInterruptGetRemappedLineState(a1, a2, &v15, (__int64)v13) >= 0 )
  {
    v11 = a3;
    v10[0] = 1;
    v12 = a2 + 10;
    if ( (int)HalpInterruptDestinationToTarget(v6, (__int64)v10, (__int64)&v13[1] + 8) >= 0 )
    {
      HalpInterruptRemapUpdateDeliveryMode((__int64)a2, (__int64)v13);
      LOBYTE(v8) = *a2 == 3;
      HalpIommuUpdateRemappingTableEntry(v8, a2[10] & 0x3FFFFFFF, v13);
      return v4;
    }
    v7 = v15;
    HalpInterruptLastProblem = 22;
    if ( v15 )
    {
      *(ULONG_PTR *)((char *)v15 + 292) = 22LL;
      v7[38] = (ULONG_PTR)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
      *((_DWORD *)v7 + 78) = 853;
    }
  }
  else
  {
    HalpInterruptLastProblem = 18;
  }
  return (unsigned int)-1073741275;
}
