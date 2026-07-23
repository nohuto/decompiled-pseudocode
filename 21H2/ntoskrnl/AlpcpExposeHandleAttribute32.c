/*
 * XREFs of AlpcpExposeHandleAttribute32 @ 0x1405FC09C
 * Callers:
 *     AlpcpExposeAttributes @ 0x1406D7AE0 (AlpcpExposeAttributes.c)
 * Callees:
 *     AlpcpExposeHandleAttribute @ 0x1406D8150 (AlpcpExposeHandleAttribute.c)
 */

__int64 __fastcall AlpcpExposeHandleAttribute32(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  result = AlpcpExposeHandleAttribute(a1, a2, &v7);
  if ( (*a4 & 0x10000000) != 0 )
  {
    *a3 = v7;
    a3[1] = DWORD2(v7);
    a3[2] = v8;
    result = HIDWORD(v8);
    a3[3] = HIDWORD(v8);
  }
  return result;
}
