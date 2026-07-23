/*
 * XREFs of PiDmLookupObject @ 0x14062B90C
 * Callers:
 *     PiDmGetObject @ 0x14062B87C (PiDmGetObject.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140748AB8 (PiDmRemoveCacheReferenceForObject.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1402528A0 (RtlLookupElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PiDmInitializeComparisonObject @ 0x14062B9B4 (PiDmInitializeComparisonObject.c)
 */

__int64 __fastcall PiDmLookupObject(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  PVOID v5; // rax
  _BYTE *Buffer; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v8[112]; // [rsp+30h] [rbp-88h] BYREF

  memset(v8, 0, sizeof(v8));
  v4 = 0LL;
  Buffer = v8;
  if ( a2 )
  {
    if ( (int)PiDmInitializeComparisonObject(a2, *(unsigned int *)(a1 + 208), v8) >= 0 )
    {
      v5 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 104), &Buffer);
      if ( v5 )
        return *(_QWORD *)v5;
    }
  }
  return v4;
}
