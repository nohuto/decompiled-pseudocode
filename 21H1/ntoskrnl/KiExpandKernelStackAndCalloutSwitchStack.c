/*
 * XREFs of KiExpandKernelStackAndCalloutSwitchStack @ 0x140354580
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x1403544A0 (KeExpandKernelStackAndCalloutInternal.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x140208360 (KeQueryCurrentStackInformationEx.c)
 *     MmGrowKernelStackEx @ 0x14031B660 (MmGrowKernelStackEx.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1403546E0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KeGetCurrentStackPointer @ 0x1403F6520 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall KiExpandKernelStackAndCalloutSwitchStack(int a1, int a2, unsigned __int64 a3, int a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 CurrentStackPointer; // rax
  __int64 v11; // r8
  _DWORD *v12; // r9
  char *StackLimit; // r12
  __int64 v14; // rbp
  char *v15; // rdi
  unsigned __int8 CurrentIrql; // cl
  unsigned __int64 v18; // rax
  char *v19; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v20[6]; // [rsp+38h] [rbp-30h] BYREF
  int v21; // [rsp+80h] [rbp+18h] BYREF

  v19 = 0LL;
  v20[0] = 0LL;
  v21 = 0;
  if ( a3 > 0x11800 )
    return 3221225713LL;
  CurrentThread = KeGetCurrentThread();
  CurrentStackPointer = KeGetCurrentStackPointer();
  StackLimit = (char *)CurrentThread->StackLimit;
  v14 = CurrentStackPointer;
  v15 = (char *)(*((_QWORD *)CurrentThread->InitialStack + 1) & 0xFFFFFFFFFFFFFFFEuLL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql == 2 )
  {
    if ( (a4 & 2) != 0 )
      return 3221225714LL;
    v18 = KeGetCurrentStackPointer();
    if ( !KeQueryCurrentStackInformationEx(v18, &v21, &v19, v20) )
      __fastfail(4u);
    if ( v21 == 1 || v21 == 10 )
    {
      StackLimit = v19;
      v15 = v19;
    }
  }
  else
  {
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0xAu, 2uLL, CurrentIrql, 0LL, 0LL);
    if ( a3 == (unsigned int)KeKernelStackSize || a3 == 24576 && (unsigned int)KeKernelStackSize >= 0x6000 )
      a4 |= 5u;
  }
  if ( v14 - (__int64)v15 < a3
    || (a4 & 1) != 0
    || v14 - (__int64)StackLimit < a3 && (int)MmGrowKernelStackEx(v14, a3, v11, v12) < 0 )
  {
    return KiExpandKernelStackAndCalloutOnStackSegment(a1, a2, a3, a4, a5);
  }
  else
  {
    return 3221226635LL;
  }
}
