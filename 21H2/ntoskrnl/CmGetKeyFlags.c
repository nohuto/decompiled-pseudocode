/*
 * XREFs of CmGetKeyFlags @ 0x1406EB534
 * Callers:
 *     CmQueryLayeredKey @ 0x140226200 (CmQueryLayeredKey.c)
 *     CmQueryKey @ 0x1407C1B70 (CmQueryKey.c)
 * Callees:
 *     CmListGetPrevElement @ 0x140721F88 (CmListGetPrevElement.c)
 *     CmEqualTrans @ 0x140721FD0 (CmEqualTrans.c)
 */

__int64 __fastcall CmGetKeyFlags(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  unsigned int v6; // ebx
  __int64 v8; // rbp
  __int64 PrevElement; // rax
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(a1 + 184);
  v12 = 0LL;
  v6 = v4 & 0xF;
  if ( a2 )
  {
    v8 = a1 + 208;
    while ( 1 )
    {
      PrevElement = CmListGetPrevElement(v8, &v12, a3, a4);
      v11 = PrevElement;
      if ( !PrevElement )
        break;
      if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(PrevElement + 56), a2, v10) && *(_DWORD *)(v11 + 68) == 7 )
        return *(unsigned int *)(v11 + 88);
    }
  }
  return v6;
}
