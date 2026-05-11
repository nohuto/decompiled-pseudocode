/*
 * XREFs of PropertyGetSetSampleRate @ 0x1C0027B10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0013270 (_guard_dispatch_icall_nop.c)
 *     IsSampleRateInRange @ 0x1C0023D18 (IsSampleRateInRange.c)
 */

__int64 __fastcall PropertyGetSetSampleRate(IRP *a1, __int64 a2, unsigned int *a3)
{
  int v6; // ebx
  PKSPIN PinFromIrp; // rax
  PVOID Context; // rdi
  __int64 v9; // r14
  __int64 v10; // r10

  v6 = -1073741811;
  PinFromIrp = KsGetPinFromIrp(a1);
  if ( PinFromIrp )
  {
    Context = PinFromIrp->Context;
    if ( (*(_DWORD *)(a2 + 20) & 1) != 0 )
    {
      v6 = 0;
      *a3 = *((_DWORD *)Context + 26);
LABEL_7:
      a1->IoStatus.Information = 4LL;
      return (unsigned int)v6;
    }
    v9 = *((_QWORD *)Context + 18);
    if ( IsSampleRateInRange(v9, *a3) )
    {
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v9 + 128) + 64LL))(v10);
      if ( v6 >= 0 )
      {
        *((_DWORD *)Context + 26) = *a3;
        goto LABEL_7;
      }
    }
  }
  return (unsigned int)v6;
}
