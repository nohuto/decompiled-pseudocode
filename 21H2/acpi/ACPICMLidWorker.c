/*
 * XREFs of ACPICMLidWorker @ 0x1C004DD90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     ACPIButtonEvent @ 0x1C002C7AC (ACPIButtonEvent.c)
 */

__int64 __fastcall ACPICMLidWorker(__int64 a1, char a2)
{
  char v2; // di
  __int64 result; // rax
  void *v6; // rcx
  void *v7; // r8
  __int64 v8; // rdx
  BOOL v9; // edi
  KIRQL v10; // al
  __int64 v11; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0;
  v11 = 0LL;
  result = ACPIGet(a1, 1145654367, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v11, 0LL);
  if ( (int)result >= 0 )
  {
    v9 = v11 != 0;
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
    *(_BYTE *)(a1 + 192) = v9;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 184), v10);
    return ACPIButtonEvent(*(_QWORD *)(a1 + 768), (v9 ? 0x80000000 : 4) | (((a2 & 1) + 2) << 18));
  }
  else
  {
    v6 = &unk_1C006FB8B;
    v7 = &unk_1C006FB8B;
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      v2 = a1;
      if ( (v8 & 0x200000000000LL) != 0 )
      {
        v6 = *(void **)(a1 + 608);
        if ( (v8 & 0x400000000000LL) != 0 )
          v7 = *(void **)(a1 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return WPP_RECORDER_SF_Lqss(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               2u,
               0x11u,
               0x18u,
               (__int64)&WPP_72d86d3b604930d5754709d36f3716bf_Traceguids,
               result,
               v2,
               (__int64)v6,
               (__int64)v7);
  }
  return result;
}
