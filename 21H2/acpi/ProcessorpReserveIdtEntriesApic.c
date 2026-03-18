/*
 * XREFs of ProcessorpReserveIdtEntriesApic @ 0x1C009F3F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ProcessorpReserveIdtEntriesApic(
        void *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        _OWORD *a9)
{
  _OWORD *UserData; // rdi
  char v13; // r14
  int v14; // esi
  int v15; // ecx
  UCHAR v16; // bl
  __int64 v17; // rsi
  unsigned __int8 i; // bp
  ULONG ProcessorIndexFromNumber; // eax
  struct _RTL_RANGE_LIST *v20; // rcx
  NTSTATUS v21; // r14d
  struct _PROCESSOR_NUMBER v23; // [rsp+50h] [rbp-48h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+58h] [rbp-40h] BYREF
  ULONGLONG Start; // [rsp+60h] [rbp-38h]

  UserData = (_OWORD *)ExAllocatePool2(256LL, 32LL, 1232102209LL);
  if ( !UserData )
    return 3221225626LL;
  v13 = a7;
  v14 = ((__int64 (__fastcall *)(void *, __int64, __int64, _QWORD, unsigned int, int, int, int))ProcessorFindIdtEntries)(
          a1,
          a2,
          a4,
          a5,
          a3,
          a6,
          a7,
          a8);
  if ( v14 < 0 )
  {
    ExFreePoolWithTag(UserData, 0);
    return (unsigned int)v14;
  }
  LODWORD(Start) = *(_DWORD *)(a4 + 32);
  v15 = Start;
  *UserData = 0LL;
  *((_WORD *)UserData + 4) = *(_WORD *)(a4 + 24);
  *((_DWORD *)UserData + 4) = a3;
  *((_DWORD *)UserData + 5) = v15;
  v16 = (a3 >= 0xFFF00000 ? 4 : 0) | ((a6 & 1) + 1);
  *((_DWORD *)UserData + 6) = a5;
  v17 = *(_QWORD *)(a4 + 16);
  for ( i = 0; ; ++i )
  {
    if ( !v17 )
    {
      *a9 = *UserData;
      a9[1] = UserData[1];
      return 0LL;
    }
    if ( _bittest64(&v17, i) )
    {
      v23.Group = *(_WORD *)(a4 + 24);
      *(_WORD *)&v23.Number = i;
      ProcNumber = v23;
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
      if ( ProcessorIndexFromNumber != -1 && ProcessorIndexFromNumber < ProcessorInstanceCount )
      {
        v20 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + ProcessorIndexFromNumber);
        if ( v20 )
          break;
      }
    }
LABEL_13:
    v17 &= ~(1LL << i);
  }
  if ( a8 == 1 )
    ++v20;
  v21 = RtlAddRange(v20, (unsigned int)Start, a5 + (unsigned int)Start - 1LL, v16, 2 * (v13 & 1) + 1, UserData, a1);
  if ( v21 >= 0 )
  {
    v13 = a7;
    *(_QWORD *)UserData |= 1LL << i;
    goto LABEL_13;
  }
  ExFreePoolWithTag(UserData, 0);
  return (unsigned int)v21;
}
