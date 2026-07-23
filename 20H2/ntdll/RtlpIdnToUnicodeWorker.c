/*
 * XREFs of RtlpIdnToUnicodeWorker @ 0x18000C7A0
 * Callers:
 *     RtlIdnToUnicode @ 0x18000C6F0 (RtlIdnToUnicode.c)
 * Callees:
 *     punycode_decode @ 0x18000C918 (punycode_decode.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlStringCchLengthW @ 0x18003B284 (RtlStringCchLengthW.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 *     RtlIsNormalizedString @ 0x1801009F0 (RtlIsNormalizedString.c)
 */

__int64 __fastcall RtlpIdnToUnicodeWorker(int a1, wchar_t *a2, int a3, void *a4, int *a5, void *Src, int Normalized)
{
  void *v7; // r15
  wchar_t *v8; // r11
  char v9; // di
  int *v10; // r14
  const WCHAR *v11; // r13
  wchar_t v12; // si
  __int64 result; // rax
  __int64 v14; // r12
  __int64 v15; // r8
  LONG v16; // ebx
  _BYTE *Heap; // rsi
  __int64 i; // rcx
  __int16 v19; // dx
  __int64 j; // rax
  int v21; // [rsp+48h] [rbp-18h] BYREF
  __int64 v22; // [rsp+50h] [rbp-10h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+48h] BYREF
  void *v24; // [rsp+B8h] [rbp+58h]

  v24 = a4;
  v7 = a4;
  v8 = a2;
  v9 = a1;
  if ( !a2 )
    return 3221225485LL;
  v10 = a5;
  if ( !a5 || *a5 < 0 || a3 < -1 || *a5 > 0 && !a4 )
    return 3221225485LL;
  if ( (a1 & 0xFFFFFFF0) != 0 )
    return 3221225485LL;
  if ( a3 == -1 )
  {
    if ( (int)RtlStringCchLengthW(a2, 515LL, &v21) < 0 )
      return 3221227286LL;
    a3 = v21 + 1;
  }
  v11 = (const WCHAR *)Src;
  v12 = v8[a3 - 1];
  Normalized = v9 & 4;
  result = punycode_decode(v8, Normalized != 0, (v9 & 2) != 0, (__int64)&v23, (__int64)&v22);
  if ( (int)result < 0 )
    return result;
  if ( !v12 )
    return 3221227286LL;
  if ( (v9 & 8) != 0 || (_BYTE)v23 )
    goto LABEL_13;
  v14 = v22;
  if ( Normalized )
  {
    if ( RtlIsNormalizedString(1u, v11, (v22 - (__int64)v11) >> 1, (PBOOLEAN)&Normalized) < 0 || !(_BYTE)Normalized )
      return 3221227286LL;
  }
  v15 = (v14 - (__int64)v11) >> 1;
  if ( v15 < 511 - (v12 == 0) )
  {
    v16 = 511 - (2 - (v12 != 0)) - v15;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v16);
    if ( !Heap )
      return 3221225495LL;
    if ( v16 > 0 )
    {
      for ( i = 0LL; i < v16; ++i )
      {
        v19 = *(_WORD *)(v14 + 2 * i + 2);
        if ( (unsigned __int16)(v19 - 65) <= 0x19u )
        {
          *(_WORD *)(v14 + 2 * i + 2) = v19 + 32;
          Heap[i] = 1;
        }
      }
    }
    if ( RtlIsNormalizedString((((v9 & 1) == 0) << 8) + 13, (PCWSTR)(v14 + 2), v16, (PBOOLEAN)&Normalized) >= 0
      && (_BYTE)Normalized )
    {
      if ( v16 > 0 )
      {
        for ( j = 0LL; j < v16; ++j )
        {
          if ( Heap[j] == 1 )
            *(_WORD *)(v14 + 2 * j + 2) -= 32;
        }
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      v7 = v24;
      goto LABEL_13;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    return 3221227286LL;
  }
LABEL_13:
  if ( v7 && *v10 )
  {
    if ( *v10 < 511 )
      return 3221225507LL;
    memmove(v7, v11, 0x3FEuLL);
  }
  *v10 = 511;
  return 0LL;
}
