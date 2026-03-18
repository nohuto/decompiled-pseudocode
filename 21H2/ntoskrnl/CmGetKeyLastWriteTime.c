/*
 * XREFs of CmGetKeyLastWriteTime @ 0x1406A50C8
 * Callers:
 *     CmpQueryKeyDataFromCache @ 0x1406A4E90 (CmpQueryKeyDataFromCache.c)
 *     CmpQueryKeyDataFromNode @ 0x1407C3490 (CmpQueryKeyDataFromNode.c)
 * Callees:
 *     CmListGetPrevElement @ 0x140721F88 (CmListGetPrevElement.c)
 *     CmEqualTrans @ 0x140721FD0 (CmEqualTrans.c)
 */

__int64 __fastcall CmGetKeyLastWriteTime(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v7; // rbp
  __int64 PrevElement; // rax
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0LL;
  if ( a2 )
  {
    v5 = *(_QWORD *)(a2 + 4);
    if ( !a1 )
      return v5;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 168);
  }
  if ( a3 )
  {
    v7 = a1 + 208;
    while ( 1 )
    {
      PrevElement = CmListGetPrevElement(v7, &v11, a3, a4);
      v10 = PrevElement;
      if ( !PrevElement )
        break;
      if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(PrevElement + 56), a3, v9) && *(_DWORD *)(v10 + 68) == 8 )
        return *(_QWORD *)(v10 + 88);
    }
  }
  return v5;
}
