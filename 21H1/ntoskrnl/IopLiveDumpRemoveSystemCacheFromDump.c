/*
 * XREFs of IopLiveDumpRemoveSystemCacheFromDump @ 0x1409A97D4
 * Callers:
 *     IopLiveDumpPopulateBitmapForDump @ 0x1409A94F8 (IopLiveDumpPopulateBitmapForDump.c)
 * Callees:
 *     IopLiveDumpGetMillisecondCounter @ 0x140502E3C (IopLiveDumpGetMillisecondCounter.c)
 *     MmRemoveSystemCacheFromDump @ 0x14053306C (MmRemoveSystemCacheFromDump.c)
 */

void __fastcall IopLiveDumpRemoveSystemCacheFromDump(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 MillisecondCounter; // rbx
  ULONG_PTR BugCheckParameter2[5]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+48h] [rbp-10h]

  BugCheckParameter2[3] = 0LL;
  MillisecondCounter = 0LL;
  v7 = 0LL;
  *a3 = 0LL;
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  BugCheckParameter2[4] = 0LL;
  BugCheckParameter2[0] = 0LL;
  LODWORD(v7) = v7 | 1;
  BugCheckParameter2[2] = a1 + 600;
  BugCheckParameter2[1] = (ULONG_PTR)IoFreeDumpRange;
  MmRemoveSystemCacheFromDump((ULONG_PTR)BugCheckParameter2);
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
    *a3 = IopLiveDumpGetMillisecondCounter(0) - MillisecondCounter;
}
