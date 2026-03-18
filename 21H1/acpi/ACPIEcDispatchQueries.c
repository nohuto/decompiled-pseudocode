/*
 * XREFs of ACPIEcDispatchQueries @ 0x1C0053D78
 * Callers:
 *     ACPIEcCompleteQueryMethod @ 0x1C0053D00 (ACPIEcCompleteQueryMethod.c)
 *     ACPIEcServiceIoLoop @ 0x1C0054314 (ACPIEcServiceIoLoop.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 *     ACPIEcRunQueryMethod @ 0x1C0053EF4 (ACPIEcRunQueryMethod.c)
 *     ACPIEcUnloadPending @ 0x1C00AED10 (ACPIEcUnloadPending.c)
 */

void __fastcall ACPIEcDispatchQueries(__int64 a1)
{
  KSPIN_LOCK *v2; // r14
  __int64 v3; // r9
  unsigned __int64 v4; // rdx
  unsigned int v5; // esi
  __int64 v6; // r8
  void (__fastcall *v7)(_QWORD, __int64); // rdi
  __int64 v8; // rbx
  KIRQL v9; // r10
  unsigned int v10; // ebx
  KIRQL v11; // al
  unsigned __int8 v12; // al
  bool v13; // zf
  KIRQL v14; // dl

  v2 = (KSPIN_LOCK *)(a1 + 88);
  while ( 1 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(v2);
    if ( !*(_BYTE *)(a1 + 445) )
      break;
    v3 = *(unsigned __int8 *)(a1 + 445);
    v4 = (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a1 + 448) + 24 * v3 + 1) >> 5;
    v5 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 448) + 24 * v3 + 1);
    *(_DWORD *)(a1 + 4 * v4 + 124) &= ~(1 << (*(_BYTE *)(*(_QWORD *)(a1 + 448) + 24 * v3 + 1) & 0x1F));
    v6 = *(_QWORD *)(a1 + 448);
    *(_BYTE *)(a1 + 445) = *(_BYTE *)(v6 + 24 * v3);
    v7 = *(void (__fastcall **)(_QWORD, __int64))(v6 + 24 * v3 + 8);
    v8 = *(_QWORD *)(v6 + 24 * v3 + 16);
    KeReleaseSpinLock(v2, v9);
    v7(v5, v8);
  }
  if ( !*(_BYTE *)(a1 + 122) )
  {
    while ( 1 )
    {
      v12 = *(_BYTE *)(a1 + 444);
      if ( !v12 )
        break;
      v10 = v12;
      *(_DWORD *)(a1 + 4 * ((unsigned __int64)v12 >> 5) + 124) &= ~(1 << (v12 & 0x1F));
      *(_BYTE *)(a1 + 444) = *(_BYTE *)(v12 + a1 + 188);
      *(_BYTE *)(a1 + 122) = 1;
      KeReleaseSpinLock(v2, v9);
      ACPIEcRunQueryMethod(a1, v10);
      v11 = KeAcquireSpinLockRaiseToDpc(v2);
      v9 = v11;
      if ( *(_BYTE *)(a1 + 122) == 1 )
      {
        *(_BYTE *)(a1 + 122) = 2;
        v14 = v11;
        goto LABEL_11;
      }
    }
    v13 = *(_BYTE *)(a1 + 121) == 1;
    *(_BYTE *)(a1 + 122) = 0;
    if ( v13 )
      ACPIEcUnloadPending(a1);
  }
  v14 = v9;
LABEL_11:
  KeReleaseSpinLock(v2, v14);
}
