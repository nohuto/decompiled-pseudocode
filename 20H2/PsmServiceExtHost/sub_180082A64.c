/*
 * XREFs of sub_180082A64 @ 0x180082A64
 * Callers:
 *     sub_180083178 @ 0x180083178 (sub_180083178.c)
 * Callees:
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180026040 @ 0x180026040 (sub_180026040.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_18008299C @ 0x18008299C (sub_18008299C.c)
 *     sub_180082F84 @ 0x180082F84 (sub_180082F84.c)
 *     sub_1800830E8 @ 0x1800830E8 (sub_1800830E8.c)
 */

__int64 __fastcall sub_180082A64(__int64 a1, __int64 a2, __int64 *a3)
{
  PVOID Heap; // rax
  __int64 v7; // rbx
  int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v14; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v15; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v16; // [rsp+70h] [rbp-90h] BYREF
  WCHAR SourceString[264]; // [rsp+80h] [rbp-80h] BYREF

  v12 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x68uLL);
  v7 = (__int64)Heap;
  if ( Heap )
  {
    memset(Heap, 0, 0x68uLL);
    sub_18001E380();
    *(_QWORD *)(v7 + 24) = sub_180026040(a2);
    sub_18000F390();
    v9 = *(_QWORD *)(v7 + 24) + 24LL;
    *(_BYTE *)(v7 + 32) = 5;
    sub_1800830E8(v9, 0LL, SourceString);
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (unsigned int)sub_180082F84(&v16) )
    {
      v8 = -1073741823;
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 8);
      v14 = v16;
      v15 = xmmword_1800A39A0;
      v8 = SleepstudyHelperCreateBlockerFromGuid(v10, &v15, &v14, &DestinationString, 3, &v12);
      if ( v8 >= 0 )
      {
        v8 = SleepstudyHelperBuildBlocker(v12, v7 + 56);
        if ( v8 >= 0 )
        {
          *(_OWORD *)(v7 + 40) = v14;
          *a3 = v7;
          v7 = 0LL;
          v12 = 0LL;
          v8 = 0;
        }
      }
    }
  }
  else
  {
    v8 = -1073741801;
  }
  if ( v12 )
    SleepstudyHelperDestroyBlockerBuilder();
  if ( v7 )
  {
    sub_18008299C(v7);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v7);
  }
  return (unsigned int)v8;
}
