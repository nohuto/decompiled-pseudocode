/*
 * XREFs of EtwpLogPmcCounterRundown @ 0x14093DE88
 * Callers:
 *     EtwpStopLoggerInstance @ 0x14061F054 (EtwpStopLoggerInstance.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x14093DA54 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14035AD50 (EtwpLogKernelEvent.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall EtwpLogPmcCounterRundown(__int64 a1, unsigned int a2)
{
  _QWORD *PoolWithTag; // rbx
  char *v5; // r15
  void *v6; // rcx
  __int64 v7; // rdi
  unsigned int v8; // esi
  unsigned int v9; // r9d
  __int64 v10; // rbp
  char *v11; // r14
  const WCHAR *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // [rsp+80h] [rbp+18h] BYREF
  int v16; // [rsp+88h] [rbp+20h] BYREF

  v16 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(16 * (EtwpMaxPmcCounter + 1)), 0x74777445u);
  if ( PoolWithTag )
  {
    v5 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(24 * EtwpMaxPmcCounter), 0x74777445u);
    if ( v5 )
    {
      v7 = *(_QWORD *)(a1 + 1000);
      if ( !*(_DWORD *)(v7 + 20) )
        return;
      v8 = 0;
      v15 = *(_DWORD *)(v7 + 20);
      *PoolWithTag = &v15;
      PoolWithTag[1] = 4LL;
      v9 = v15;
      if ( v15 )
      {
        do
        {
          v16 = 0;
          v10 = v8;
          v11 = &v5[24 * v8];
          *(_DWORD *)v11 = *(_DWORD *)(*(_QWORD *)v7 + 4LL * v8);
          if ( ((int (__fastcall *)(__int64, __int64, char *, int *))off_140C00A68[0])(1LL, 24LL, v11, &v16) < 0 )
            v12 = L"Unknown";
          else
            v12 = (const WCHAR *)*((_QWORD *)v11 + 2);
          v13 = -1LL;
          do
            ++v13;
          while ( v12[v13] );
          ++v8;
          v14 = 2 * (v10 + 1);
          PoolWithTag[v14] = v12;
          PoolWithTag[v14 + 1] = (unsigned int)(2 * v13 + 2);
          v9 = v15;
        }
        while ( v8 < v15 );
      }
      EtwpLogKernelEvent((__int64)PoolWithTag, EtwpHostSiloState, a2, v9 + 1, 0xF30u, 0x401802u);
      ExFreePoolWithTag(PoolWithTag, 0);
      v6 = v5;
    }
    else
    {
      v6 = PoolWithTag;
    }
    ExFreePoolWithTag(v6, 0);
  }
}
