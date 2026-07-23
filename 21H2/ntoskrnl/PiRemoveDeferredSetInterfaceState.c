/*
 * XREFs of PiRemoveDeferredSetInterfaceState @ 0x14078162C
 * Callers:
 *     IopProcessSetInterfaceState @ 0x14074929C (IopProcessSetInterfaceState.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiRemoveDeferredSetInterfaceState(__int64 a1, const UNICODE_STRING *a2)
{
  void **v2; // rsi
  UNICODE_STRING *v4; // rbx
  unsigned int v5; // ebp
  void **v7; // rdi
  void **Buffer; // rax

  v2 = (void **)(a1 + 608);
  v4 = *(UNICODE_STRING **)(a1 + 608);
  v5 = -1073741823;
  if ( v4 != (UNICODE_STRING *)(a1 + 608) )
  {
    while ( 1 )
    {
      v7 = *(void ***)&v4->Length;
      if ( RtlEqualUnicodeString(v4 + 1, a2, 1u) )
        break;
      v4 = (UNICODE_STRING *)v7;
      if ( v7 == v2 )
        return v5;
    }
    if ( v7[1] != v4 || (Buffer = (void **)v4->Buffer, *Buffer != v4) )
      __fastfail(3u);
    *Buffer = v7;
    v7[1] = Buffer;
    ExFreePoolWithTag(v4[1].Buffer, 0);
    ExFreePoolWithTag(v4, 0);
    return 0;
  }
  return v5;
}
