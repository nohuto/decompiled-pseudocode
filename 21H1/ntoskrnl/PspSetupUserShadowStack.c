/*
 * XREFs of PspSetupUserShadowStack @ 0x140905F5C
 * Callers:
 *     PspAllocateThread @ 0x14070559C (PspAllocateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     RtlLocateExtendedFeature @ 0x1405899F0 (RtlLocateExtendedFeature.c)
 *     MmFreeVirtualMemory @ 0x14062E1C0 (MmFreeVirtualMemory.c)
 *     PspReserveAndCommitUserShadowStack @ 0x140905CA0 (PspReserveAndCommitUserShadowStack.c)
 *     RtlCalculateUserShadowStackSizes @ 0x14090B874 (RtlCalculateUserShadowStackSizes.c)
 */

__int64 __fastcall PspSetupUserShadowStack(
        _KPROCESS *BugCheckParameter1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4,
        unsigned int a5)
{
  __int64 result; // rax
  _DWORD *v10; // r9
  int v11; // esi
  __int64 v12; // r8
  _DWORD *v13; // r9
  _QWORD *ExtendedFeature; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // [rsp+30h] [rbp-31h] BYREF
  __int64 v17; // [rsp+38h] [rbp-29h] BYREF
  __int64 v18; // [rsp+40h] [rbp-21h] BYREF
  ULONG_PTR v19; // [rsp+48h] [rbp-19h] BYREF
  _OWORD v20[3]; // [rsp+50h] [rbp-11h] BYREF

  v17 = 0LL;
  v19 = 0LL;
  v16 = 0LL;
  memset(v20, 0, sizeof(v20));
  result = RtlCalculateUserShadowStackSizes(a3, &v16, &v19);
  if ( (int)result >= 0 )
  {
    KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)v20, v10);
    v18 = 0LL;
    v11 = PspReserveAndCommitUserShadowStack(v16, v19, a5, &v18, &v17);
    if ( v11 < 0 )
    {
      v15 = v18;
    }
    else
    {
      if ( (*(_DWORD *)(a2 + 48) & 0x100040) == 0x100040 )
      {
        ExtendedFeature = RtlLocateExtendedFeature((PCONTEXT_EX)(a2 + 1232), 0xBu, 0LL);
        if ( ExtendedFeature )
        {
          *(_QWORD *)(*(int *)(a2 + 1248) + a2 + 1232) |= 0x800uLL;
          ExtendedFeature[1] = v17;
          *ExtendedFeature = 1LL;
        }
      }
      *(_QWORD *)(a3 + 64) = v18;
      *a4 |= 8u;
      v15 = 0LL;
    }
    if ( v15 )
    {
      v17 = 0LL;
      v16 = v15;
      MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, &v16, &v17, 0x8000, 0, 0x40000000u);
    }
    KiUnstackDetachProcess((__int64)v20, 0LL, v12, v13);
    return (unsigned int)v11;
  }
  return result;
}
