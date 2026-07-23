/*
 * XREFs of RtlpInheritAcl @ 0x180039EA0
 * Callers:
 *     RtlpNewSecurityObject @ 0x180038B7C (RtlpNewSecurityObject.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E75EC (RtlpConvertAclToAutoInherit.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpInheritAcl2 @ 0x18003A094 (RtlpInheritAcl2.c)
 */

__int64 __fastcall RtlpInheritAcl(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        __int64 a13,
        int a14,
        PVOID *a15,
        _BYTE *a16,
        _DWORD *a17)
{
  void *ProcessHeap; // rsi
  PVOID *v22; // rbx
  unsigned int v23; // ecx
  int v24; // r14d
  PVOID Heap; // rax
  __int64 v26; // r9
  unsigned int v27; // edi
  int v29; // [rsp+20h] [rbp-98h]
  int v30; // [rsp+28h] [rbp-90h]
  int v31; // [rsp+D0h] [rbp+18h] BYREF

  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( a3 || a1 )
  {
    v22 = a15;
    v23 = 200;
    v31 = 200;
    v24 = 0;
    while ( 1 )
    {
      Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v23);
      *v22 = Heap;
      if ( !Heap )
        break;
      LOBYTE(v26) = a4;
      LOBYTE(v30) = a6;
      LOBYTE(v29) = a5;
      v27 = RtlpInheritAcl2(a1, a2, a3, v26, v29, v30, a7, a8, a9, a10, a11, a12, a13, a14, &v31, Heap, a16, a17);
      if ( (v27 & 0x80000000) == 0 )
      {
        if ( !v31 )
        {
          RtlFreeHeap(ProcessHeap, 0, *v22);
          *v22 = 0LL;
        }
        return v27;
      }
      RtlFreeHeap(ProcessHeap, 0, *v22);
      *v22 = 0LL;
      if ( v27 != -1073741789 )
        return v27;
      if ( (unsigned int)++v24 >= 2 )
        return v27;
      v23 = v31;
    }
    return 3221225495LL;
  }
  else
  {
    *a16 = 0;
    *a17 = a5 != 0 ? 0x400 : 0;
    *a15 = 0LL;
    return 2147483659LL;
  }
}
