/*
 * XREFs of CmGetKeyFlags @ 0x140621510
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A78 (CmQueryLayeredKey.c)
 *     CmQueryKey @ 0x1406E4F70 (CmQueryKey.c)
 * Callees:
 *     CmEqualTrans @ 0x14066440C (CmEqualTrans.c)
 *     CmListGetPrevElement @ 0x140768C48 (CmListGetPrevElement.c)
 */

__int64 __fastcall CmGetKeyFlags(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  unsigned int v6; // ebx
  __int64 v8; // rbp
  __int64 PrevElement; // rax
  __int64 v10; // rdi
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(a1 + 184);
  v11 = 0LL;
  v6 = v4 & 0xF;
  if ( a2 )
  {
    v8 = a1 + 208;
    while ( 1 )
    {
      PrevElement = CmListGetPrevElement(v8, &v11, a3, a4);
      v10 = PrevElement;
      if ( !PrevElement )
        break;
      if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(PrevElement + 56), a2) && *(_DWORD *)(v10 + 68) == 7 )
        return *(unsigned int *)(v10 + 88);
    }
  }
  return v6;
}
