/*
 * XREFs of FindNodeOrParent_0 @ 0x1402DF210
 * Callers:
 *     RtlEnumerateGenericTableLikeADirectory @ 0x1402DEB90 (RtlEnumerateGenericTableLikeADirectory.c)
 *     RtlInsertElementGenericTableAvl @ 0x1402DEF50 (RtlInsertElementGenericTableAvl.c)
 *     RtlLookupFirstMatchingElementGenericTableAvl @ 0x1403A0300 (RtlLookupFirstMatchingElementGenericTableAvl.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FindNodeOrParent_0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 i; // rbx
  int v7; // eax
  __int64 result; // rax

  if ( !*(_DWORD *)(a1 + 44) )
    return 0LL;
  for ( i = *(_QWORD *)(a1 + 16); ; i = *(_QWORD *)(i + 16) )
  {
    while ( 1 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 72))(a1, a2, i + 32);
      if ( v7 )
        break;
      if ( !*(_QWORD *)(i + 8) )
      {
        result = 2LL;
        goto LABEL_8;
      }
      i = *(_QWORD *)(i + 8);
    }
    if ( v7 != 1 )
      break;
    if ( !*(_QWORD *)(i + 16) )
    {
      result = 3LL;
      goto LABEL_8;
    }
  }
  result = 1LL;
LABEL_8:
  *a3 = i;
  return result;
}
