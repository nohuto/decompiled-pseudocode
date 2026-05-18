/*
 * XREFs of sub_180114720 @ 0x180114720
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800915B4 @ 0x1800915B4 (sub_1800915B4.c)
 *     sub_180111C40 @ 0x180111C40 (sub_180111C40.c)
 *     sub_1801147FC @ 0x1801147FC (sub_1801147FC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

__int64 __fastcall sub_180114720(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rax
  volatile signed __int64 *v6; // rbx
  __int128 v7; // xmm0
  __int64 v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-48h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_QWORD *)a2 || (result = *(_QWORD *)(a2 + 8)) != 0 )
  {
    v5 = o__aligned_malloc(160LL, 8LL);
    v6 = (volatile signed __int64 *)v5;
    if ( !v5 )
    {
      sub_1800915B4(pExceptionObject);
      throw (std::bad_alloc *)pExceptionObject;
    }
    v7 = *(_OWORD *)a2;
    *(_QWORD *)(v5 + 152) = 127LL;
    v9 = v7;
    sub_180111C40(v5, &v9);
    v8 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = v6;
    if ( v8 )
    {
      o__aligned_free(v8);
      v6 = *(volatile signed __int64 **)(a1 + 112);
    }
    _InterlockedExchangeAdd64(v6 + 18, 0LL);
    return sub_1801147FC((void *)v6);
  }
  return result;
}
