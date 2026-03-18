/*
 * XREFs of PnpGetMultiSzLength @ 0x140754040
 * Callers:
 *     PnpAllocateMultiSZ @ 0x140753F7C (PnpAllocateMultiSZ.c)
 *     PiSwStartCreate @ 0x1408AA89C (PiSwStartCreate.c)
 *     PnpCompareMultiSz @ 0x1408ADE64 (PnpCompareMultiSz.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x1402DF438 (RtlStringCchLengthW.c)
 */

__int64 __fastcall PnpGetMultiSzLength(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r9
  NTSTATUS v6; // r8d
  __int64 *v7; // r11
  size_t v8; // rcx
  size_t v9; // rdx
  size_t v10; // r10
  size_t v11; // rax
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  pcchLength = 0LL;
  *a3 = 0LL;
  v4 = 0LL;
  do
  {
    v6 = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a1 + 2 * v4), a2 - v4, &pcchLength);
    if ( v6 < 0 )
      break;
    v8 = *v7;
    v9 = -1LL;
    v10 = pcchLength;
    v11 = *v7 + pcchLength;
    if ( v11 >= *v7 )
      v9 = *v7 + pcchLength;
    v6 = v11 < *v7 ? 0xC0000095 : 0;
    *v7 = v9;
    if ( v11 < v8 )
      break;
    v4 = -1LL;
    if ( v9 + 1 >= v9 )
      v4 = v9 + 1;
    v6 = v9 + 1 < v9 ? 0xC0000095 : 0;
    *v7 = v4;
    if ( v9 + 1 < v9 )
      break;
  }
  while ( v10 );
  return (unsigned int)v6;
}
