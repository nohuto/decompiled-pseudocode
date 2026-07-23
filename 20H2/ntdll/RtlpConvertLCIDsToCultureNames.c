/*
 * XREFs of RtlpConvertLCIDsToCultureNames @ 0x1800F04E0
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x1800F13E0 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlLCIDToCultureName @ 0x18003B020 (RtlLCIDToCultureName.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     LdrpMultiSZCchLength @ 0x18003EFCC (LdrpMultiSZCchLength.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     wcsnlen @ 0x180092020 (wcsnlen.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 *     RtlUnicodeStringToLcid @ 0x1800EF888 (RtlUnicodeStringToLcid.c)
 */

__int64 __fastcall RtlpConvertLCIDsToCultureNames(WCHAR *SourceString, _QWORD *a2)
{
  PCWSTR v3; // rsi
  unsigned int v4; // r14d
  unsigned int v5; // edi
  unsigned int v6; // ebx
  void *ProcessHeap; // rcx
  _DWORD *Heap; // r15
  _DWORD *v9; // r12
  LCID v10; // ebx
  int v11; // ecx
  unsigned __int64 Length; // rbx
  unsigned int v14; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int16 v15; // [rsp+24h] [rbp-DCh]
  _UNICODE_STRING String; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v19[4]; // [rsp+50h] [rbp-B0h] BYREF
  char v20; // [rsp+60h] [rbp-A0h] BYREF

  v15 = 0;
  v3 = SourceString;
  v4 = 0;
  v5 = 0;
  if ( !a2 || !SourceString || *a2 || (int)LdrpMultiSZCchLength(SourceString, (__int64)a2, &v14) < 0 )
    return 3221225485LL;
  v6 = 2 * v14;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v14 *= 2;
  Heap = RtlAllocateHeap(ProcessHeap, 0, 0x2A8uLL);
  v9 = Heap;
  while ( 1 )
  {
    if ( !*v3 || !v6 )
    {
LABEL_16:
      *v9 = 0;
      goto LABEL_17;
    }
    if ( v4 >= 4 )
      goto LABEL_20;
    v17 = 2 * (unsigned int)wcsnlen(v3, (unsigned __int64)v6 >> 1);
    RtlInitUnicodeString(&DestinationString, v3);
    if ( (int)RtlUnicodeStringToLcid(&DestinationString, &v19[v4]) < 0 )
      goto LABEL_20;
    v10 = v19[v4];
    String.Buffer = (wchar_t *)&v20;
    *(_DWORD *)&String.Length = 11141120;
    if ( !RtlLCIDToCultureName(v10, &String) )
      goto LABEL_20;
    v11 = 0;
    if ( v4 )
      break;
LABEL_14:
    v15 += String.Length + 2;
    if ( v15 >= 0x2A7u )
    {
      v5 = -1073741595;
      goto LABEL_21;
    }
    Length = String.Length;
    memmove(v9, String.Buffer, String.Length + 2LL);
    ++v4;
    v3 = (PCWSTR)((char *)v3 + (unsigned int)v17 + 2);
    v14 += -2 - v17;
    v9 = (_DWORD *)((char *)v9 + 2 * (Length >> 1) + 2);
    v6 = v14;
    if ( !v3 )
      goto LABEL_16;
  }
  while ( v10 != v19[v11] )
  {
    if ( ++v11 >= v4 )
      goto LABEL_14;
  }
LABEL_20:
  v5 = -1073741811;
LABEL_21:
  if ( !Heap )
  {
LABEL_17:
    *a2 = Heap;
    return v5;
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v5;
}
