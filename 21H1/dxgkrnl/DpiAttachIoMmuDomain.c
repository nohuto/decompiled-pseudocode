/*
 * XREFs of DpiAttachIoMmuDomain @ 0x1C02CD30C
 * Callers:
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0211DD4 (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     IoMmuMarkDomainAsAttached @ 0x1C0055388 (IoMmuMarkDomainAsAttached.c)
 *     DpiGetIoMmuContextFromDevice @ 0x1C00558A4 (DpiGetIoMmuContextFromDevice.c)
 */

__int64 __fastcall DpiAttachIoMmuDomain(__int64 a1)
{
  __int64 IoMmuContextFromDevice; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  KSPIN_LOCK *v5; // rbp
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rax

  IoMmuContextFromDevice = DpiGetIoMmuContextFromDevice(a1);
  v3 = *(_QWORD *)(a1 + 64);
  LODWORD(v4) = 0;
  v5 = (KSPIN_LOCK *)IoMmuContextFromDevice;
  if ( *(_DWORD *)(v3 + 504) )
  {
    v6 = 0LL;
    if ( !*(_DWORD *)(v3 + 2736) )
    {
LABEL_12:
      IoMmuMarkDomainAsAttached(v5);
      return (unsigned int)v4;
    }
    while ( 1 )
    {
      v7 = ((__int64 (__fastcall *)(KSPIN_LOCK, _QWORD, _QWORD, __int64))qword_1C00AFF38)(
             v5[1],
             *(_QWORD *)(*(_QWORD *)(v3 + 2728) + 8 * v6),
             0LL,
             1LL);
      v4 = v7;
      if ( v7 < 0 )
        break;
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *(_DWORD *)(v3 + 2736) )
        goto LABEL_11;
    }
    if ( (_DWORD)v6 )
    {
      v11 = 0LL;
      v12 = (unsigned int)v6;
      do
      {
        ((void (__fastcall *)(KSPIN_LOCK, _QWORD, _QWORD))qword_1C00AFF40)(
          v5[1],
          *(_QWORD *)(v11 + *(_QWORD *)(v3 + 2728)),
          0LL);
        v11 += 8LL;
        --v12;
      }
      while ( v12 );
    }
    v13 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v13 + 24) = (unsigned int)v6;
    *(_QWORD *)(v13 + 32) = v4;
    WdLogEvent5_WdWarning(v13);
  }
  else
  {
    LODWORD(v4) = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, __int64))qword_1C00AFF38)(
                    *(_QWORD *)(IoMmuContextFromDevice + 8),
                    a1,
                    0LL,
                    1LL);
  }
LABEL_11:
  if ( (int)v4 >= 0 )
    goto LABEL_12;
  return (unsigned int)v4;
}
