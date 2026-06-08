/*
 * XREFs of PepQueryVetoList @ 0x1C00327B4
 * Callers:
 *     QueryPepCapabilites @ 0x1C0034670 (QueryPepCapabilites.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000ED80 (memset.c)
 *     PepQueryName @ 0x1C003264C (PepQueryName.c)
 */

__int64 __fastcall PepQueryVetoList(__int64 a1)
{
  unsigned int Name; // edi
  SIZE_T v3; // rdi
  unsigned int *PoolWithTag; // rax
  unsigned int *v5; // rbx
  __int64 i; // rax
  unsigned int v7; // esi
  unsigned int j; // esi
  void *v9; // rcx
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0;
  if ( (int)PoFxProcessorNotification(*(_QWORD *)(a1 + 1104), 24LL, &v11) >= 0 && v11 )
  {
    v3 = 16 * v11 + 8;
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x72637250u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v3);
      *v5 = v11;
      for ( i = 0LL; (unsigned int)i < *v5; i = v7 )
      {
        v7 = i + 1;
        Name = PepQueryName(a1, (int)i + 1, 0x19u, (__int64)&v5[4 * i + 2]);
        if ( Name )
          goto LABEL_12;
      }
      Name = ((__int64 (__fastcall *)(unsigned int *))qword_1C0013648)(v5);
      if ( !Name )
      {
        qword_1C00139C0 = (__int64)v5;
        v5 = 0LL;
      }
LABEL_12:
      if ( v5 )
      {
        for ( j = 0; j < *v5; ++j )
        {
          v9 = *(void **)&v5[4 * j + 4];
          if ( v9 )
            ExFreePoolWithTag(v9, 0x72637250u);
        }
        ExFreePoolWithTag(v5, 0x72637250u);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return 0;
  }
  return Name;
}
