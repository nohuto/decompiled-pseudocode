/*
 * XREFs of NVMeCompleteSubmissionQueueRequests @ 0x1C000BC98
 * Callers:
 *     NVMeControllerCompleteAllIORequests @ 0x1C000C1C4 (NVMeControllerCompleteAllIORequests.c)
 *     NVMeLunCompleteAllIORequests @ 0x1C000E5CC (NVMeLunCompleteAllIORequests.c)
 * Callees:
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005200 (_guard_dispatch_icall_nop.c)
 *     IsInternalSrb @ 0x1C0009150 (IsInternalSrb.c)
 *     NVMeRequestComplete @ 0x1C000F470 (NVMeRequestComplete.c)
 */

void __fastcall NVMeCompleteSubmissionQueueRequests(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        char a5,
        char a6,
        char a7)
{
  __int64 v9; // rbp
  __int64 v11; // rdi
  __int64 v12; // rbx
  unsigned __int8 v13; // cl
  int v14; // r11d
  __int64 SrbExtension; // rax
  void (__fastcall *v16)(__int64, __int64, _QWORD); // rax

  if ( a3 )
  {
    v9 = a3;
    v11 = 0LL;
    do
    {
      v12 = _InterlockedExchange64((volatile __int64 *)(v11 + *(_QWORD *)(a2 + 32)), 0LL);
      if ( v12 )
      {
        v13 = *(_BYTE *)(v12 + 2) == 40 ? *(_BYTE *)(*(unsigned int *)(v12 + 52) + v12 + 10) : *(_BYTE *)(v12 + 7);
        v14 = v13;
        if ( (a6 != 1 || !IsInternalSrb(a1, v12)) && (a5 == 1 || a4 == v14) )
        {
          SrbExtension = GetSrbExtension(v12);
          *(_BYTE *)(v12 + 3) = a7;
          v16 = *(void (__fastcall **)(__int64, __int64, _QWORD))(SrbExtension + 4224);
          if ( v16 )
            v16(a1, v12, 0LL);
          NVMeRequestComplete(a1, v12, 0LL);
          ++*(_DWORD *)(a2 + 132);
          _InterlockedDecrement16((volatile signed __int16 *)(a2 + 128));
        }
      }
      v11 += 16LL;
      --v9;
    }
    while ( v9 );
  }
}
