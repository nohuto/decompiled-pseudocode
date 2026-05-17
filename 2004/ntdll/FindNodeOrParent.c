/*
 * XREFs of FindNodeOrParent @ 0x18005BBDC
 * Callers:
 *     RtlDeleteElementGenericTableAvl @ 0x18005B7A0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x18005B9D0 (RtlInsertElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x18005BB70 (RtlLookupElementGenericTableFullAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x18005BBB0 (RtlLookupElementGenericTableAvl.c)
 *     RtlLookupFirstMatchingElementGenericTableAvl @ 0x180089F40 (RtlLookupFirstMatchingElementGenericTableAvl.c)
 *     RtlEnumerateGenericTableLikeADirectory @ 0x1800F75C0 (RtlEnumerateGenericTableLikeADirectory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FindNodeOrParent(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // rax

  if ( !*(_DWORD *)(a1 + 44) )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = 1;
  while ( 1 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 72))(a1, a2, v6 + 32);
    if ( !v8 )
      break;
    if ( v8 != 1 )
      goto LABEL_8;
    v9 = *(_QWORD *)(v6 + 16);
    if ( !v9 )
    {
      v7 = 3;
      goto LABEL_8;
    }
LABEL_6:
    v6 = v9;
  }
  v9 = *(_QWORD *)(v6 + 8);
  if ( v9 )
    goto LABEL_6;
  v7 = 2;
LABEL_8:
  *a3 = v6;
  return v7;
}
