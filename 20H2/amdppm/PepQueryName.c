/*
 * XREFs of PepQueryName @ 0x1C003398C
 * Callers:
 *     RegisterKernelPlatformStates @ 0x1C0030FB4 (RegisterKernelPlatformStates.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C0032D0C (PepNotifyQueryCoordinatedStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C003338C (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepQueryVetoList @ 0x1C0033AF4 (PepQueryVetoList.c)
 * Callees:
 *     memset @ 0x1C000EDC0 (memset.c)
 */

__int64 __fastcall PepQueryName(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // ebx
  SIZE_T v8; // rbx
  PVOID PoolWithTag; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx
  _WORD *v12; // rax
  __int64 v13; // rdx
  __int16 v14; // cx
  _OWORD v16[2]; // [rsp+20h] [rbp-28h] BYREF

  v16[0] = 0LL;
  LODWORD(v16[0]) = a2;
  v7 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1104), a3, v16);
  if ( !v7 )
  {
    v8 = 2 * (unsigned int)WORD2(v16[0]) + 2;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x72637250u);
    v10 = (unsigned __int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v8);
      v11 = *(_QWORD *)(a1 + 1104);
      *((_QWORD *)&v16[0] + 1) = v10;
      v7 = PoFxProcessorNotification(v11, a3, v16);
      if ( !v7 )
      {
        v12 = (_WORD *)v10;
        *(_OWORD *)a4 = 0LL;
        v13 = 0x7FFFLL;
        do
        {
          if ( !*v12 )
            break;
          ++v12;
          --v13;
        }
        while ( v13 );
        v7 = v13 == 0 ? 0xC000000D : 0;
        if ( v13 )
        {
          if ( a4 )
          {
            v14 = 2 * (v13 != 0 ? 0x7FFF - v13 : 0);
            *(_QWORD *)(a4 + 8) = v10;
            *(_WORD *)a4 = v14;
            *(_WORD *)(a4 + 2) = v14 + 2;
          }
          else
          {
            v7 = -1073741811;
          }
        }
        v10 &= -(__int64)(v7 != 0);
      }
      if ( v10 )
        ExFreePoolWithTag((PVOID)v10, 0x72637250u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v7;
}
