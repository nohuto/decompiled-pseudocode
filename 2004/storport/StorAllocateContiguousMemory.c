/*
 * XREFs of StorAllocateContiguousMemory @ 0x1C0071904
 * Callers:
 *     StorPortGetAdditionalCrashDumpArea @ 0x1C0014CDC (StorPortGetAdditionalCrashDumpArea.c)
 *     RaidDmaAllocateUncachedExtension @ 0x1C0032E50 (RaidDmaAllocateUncachedExtension.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D730 (_guard_dispatch_icall_nop.c)
 */

__int64 StorAllocateContiguousMemory(__int64 *a1, unsigned int a2, __int64 a3, ...)
{
  __int64 v3; // rsi
  __int64 v5; // r9
  unsigned int v6; // r10d
  void *ContiguousNodeMemory; // rax
  __int64 v8; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v10; // rcx
  __int64 result; // rax
  _QWORD v12[5]; // [rsp+50h] [rbp-28h] BYREF
  int v13; // [rsp+80h] [rbp+8h] BYREF
  PHYSICAL_ADDRESS v14; // [rsp+90h] [rbp+18h] BYREF
  __int64 v15; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  __int64 v17; // [rsp+A0h] [rbp+28h]
  __int64 v18; // [rsp+A8h] [rbp+30h]
  __int64 v19; // [rsp+B0h] [rbp+38h]
  PHYSICAL_ADDRESS *v20; // [rsp+B8h] [rbp+40h]
  va_list va1; // [rsp+C0h] [rbp+48h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, _QWORD);
  v17 = va_arg(va1, _QWORD);
  v18 = va_arg(va1, _QWORD);
  v19 = va_arg(va1, _QWORD);
  v20 = va_arg(va1, PHYSICAL_ADDRESS *);
  v14.QuadPart = 0LL;
  v13 = 0;
  v3 = *a1;
  v12[0] = a3;
  if ( (_DWORD)v18 )
  {
    v6 = -(int)v18 & (a2 + v18 - 1);
    v5 = v6;
  }
  else
  {
    v5 = v17;
    v6 = a2;
  }
  if ( *((_BYTE *)a1 + 8) && *((_DWORD *)a1 + 7) == 3 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64 *, _QWORD, _DWORD, int *, _DWORD, PHYSICAL_ADDRESS *))(*(_QWORD *)(v3 + 8) + 272LL))(
           v3,
           v12,
           (__int64 *)va,
           v6,
           0,
           &v13,
           v19,
           &v14);
    if ( v8 )
    {
      PhysicalAddress = v14;
      goto LABEL_6;
    }
  }
  else
  {
    ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(v6, a3, v15, v5, 4, v19);
    v8 = (__int64)ContiguousNodeMemory;
    if ( ContiguousNodeMemory )
    {
      PhysicalAddress = MmGetPhysicalAddress(ContiguousNodeMemory);
LABEL_6:
      v10 = (__int64)v20;
      v20[1] = PhysicalAddress;
      result = 0LL;
      *(_QWORD *)v10 = v8;
      *(_DWORD *)(v10 + 16) = a2;
      return result;
    }
  }
  return 3221225495LL;
}
