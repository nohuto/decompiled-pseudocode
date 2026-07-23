/*
 * XREFs of KiExpandKernelStackAndCalloutOnStackSegment @ 0x140334F80
 * Callers:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x140334E20 (KiExpandKernelStackAndCalloutSwitchStack.c)
 * Callees:
 *     MmCreateKernelStack @ 0x1403352B0 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x1403358C0 (MmDeleteKernelStack.c)
 *     KeReleaseMutant @ 0x14034D200 (KeReleaseMutant.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeQueryCurrentStackInformationEx @ 0x14035B1F0 (KeQueryCurrentStackInformationEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KeGetCurrentStackPointer @ 0x1403FE7B0 (KeGetCurrentStackPointer.c)
 *     KiSwitchKernelStackAndCallout @ 0x140402880 (KiSwitchKernelStackAndCallout.c)
 */

__int64 __fastcall KiExpandKernelStackAndCalloutOnStackSegment(
        ULONG_PTR a1,
        ULONG_PTR a2,
        unsigned __int64 a3,
        char a4,
        __int64 a5)
{
  char v5; // bl
  __int64 v6; // r14
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 v8; // bp
  unsigned int v9; // r15d
  unsigned __int8 CurrentIrql; // r13
  __int64 v11; // rsi
  unsigned int v12; // r12d
  int v13; // ecx
  int v14; // ebx
  __int64 KernelStack; // rax
  __int64 v16; // rsi
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  int MiscFlags; // eax
  int v20; // r12d
  __int64 CurrentStackPointer; // rax
  unsigned int v22; // ebx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  bool v27; // zf
  unsigned __int8 v28; // al
  LARGE_INTEGER *Timeout; // [rsp+30h] [rbp-68h]
  __int64 v30; // [rsp+38h] [rbp-60h] BYREF
  __int64 v31; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v32[10]; // [rsp+48h] [rbp-50h] BYREF
  int v35; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v36; // [rsp+B8h] [rbp+20h]

  v5 = a4;
  v30 = 0LL;
  v6 = a3;
  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  v9 = 0;
  Timeout = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v11 = a5;
  if ( CurrentIrql == 2 )
  {
    Timeout = (LARGE_INTEGER *)&v30;
    if ( a5 )
      v8 = 16;
  }
  if ( (a4 & 8) != 0 && a5 )
    v8 = 16;
  v12 = 0;
  if ( a3 > (unsigned int)KeKernelStackSize )
  {
    v8 |= 1u;
    v12 = 1;
    v9 = 1;
    if ( a5 && *(_BYTE *)(a5 + 4) )
      v12 = 5;
  }
  else
  {
    v5 = a4 | 4;
    v6 = 0LL;
  }
  v36 = v9;
  if ( (v8 & 0xF0) == 0 )
  {
    v13 = v12 | 2;
    if ( (v5 & 2) != 0 )
      v13 = v12;
    v12 = v13 | 0x10;
    v14 = v5 & 4;
    if ( !v14 )
      v12 = v13;
    KernelStack = MmCreateKernelStack(
                    v12,
                    *(unsigned __int8 *)(*(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 192) + 146LL),
                    CurrentThread);
    v9 |= 4u;
    v16 = KernelStack;
    if ( !v14 )
      v9 = v36;
    if ( KernelStack )
      goto LABEL_13;
    v11 = a5;
  }
  if ( !v11 || (v8 & 1) != 0 && !*(_BYTE *)(v11 + 4) )
    return 3221225495LL;
  if ( _bittestandset((signed __int32 *)&CurrentThread->116, 0xFu) )
    v8 |= 4u;
  if ( KeWaitForSingleObject((PVOID)(v11 + 8), WrCalloutStack, 0, 0, Timeout) == 258 )
  {
    CurrentThread->MiscFlags ^= (CurrentThread->MiscFlags ^ (v8 << 13)) & 0x8000;
    return 3221227272LL;
  }
  v24 = *(unsigned __int8 *)(v11 + 6);
  if ( (unsigned __int8)v24 >= *(_BYTE *)(v11 + 5) )
  {
    KeReleaseMutant((PRKMUTANT)(v11 + 8), 1, 0, 0);
    return 3221225495LL;
  }
  v16 = *(_QWORD *)(v11 + 8 * v24 + 64);
  v8 |= 8u;
  v25 = a5;
  *(_BYTE *)(a5 + 6) = v24 + 1;
  if ( (v8 & 1) == 0 && *(_BYTE *)(v25 + 4) )
  {
    LOBYTE(v12) = 5;
    v6 = 71680LL;
    v8 |= 1u;
  }
LABEL_13:
  *(_QWORD *)(v16 - 48) = v16;
  v17 = v16 - 48;
  if ( (v8 & 1) != 0 )
    v18 = v16 - 73727;
  else
    v18 = v16 - (unsigned int)KeKernelStackSize + 1;
  *(_QWORD *)(v17 + 8) = v18;
  *(_QWORD *)(v17 + 16) = CurrentThread->StackBase;
  *(_QWORD *)(v17 + 40) = CurrentThread->InitialStack;
  if ( (v12 & 1) != 0 )
  {
    v17 |= 1uLL;
    if ( (v12 & 4) != 0 )
      v17 |= 2uLL;
  }
  MiscFlags = CurrentThread->MiscFlags;
  if ( (MiscFlags & 0x1000) != 0 )
  {
    v8 |= 2u;
    LOBYTE(v36) = 2;
  }
  else
  {
    LOBYTE(v36) = 0;
    CurrentThread->MiscFlags = MiscFlags | 0x1000;
  }
  v20 = 0;
  v32[0] = 0LL;
  v31 = 0LL;
  v35 = 0;
  CurrentStackPointer = KeGetCurrentStackPointer();
  KeQueryCurrentStackInformationEx(CurrentStackPointer, &v35, v32, &v31);
  if ( v35 == 10 )
  {
    v20 = 1;
    __writegsbyte(0x80A6u, 1u);
  }
  v22 = KiSwitchKernelStackAndCallout(a2, a1, v17, v6);
  if ( v20 )
    __writegsbyte(0x80A6u, 0);
  if ( (v8 & 8) != 0 )
  {
    v26 = a5;
    v27 = (*(_BYTE *)(a5 + 6))-- == 1;
    if ( v27 && (v8 & 4) == 0 )
      CurrentThread->MiscFlags &= ~0x8000u;
    KeReleaseMutant((PRKMUTANT)(v26 + 8), 1, 0, 0);
  }
  else
  {
    MmDeleteKernelStack(v16, v9);
  }
  if ( !(_BYTE)v36 )
    CurrentThread->MiscFlags &= ~0x1000u;
  if ( KeGetCurrentIrql() != CurrentIrql )
  {
    v28 = KeGetCurrentIrql();
    KeBugCheckEx(0xC8u, ((CurrentIrql | ((unsigned __int64)v28 << 8)) << 8) | 2, a1, a2, 0LL);
  }
  return v22;
}
