/*
 * XREFs of CmGetVisibleSubkeyCount @ 0x14066000C
 * Callers:
 *     CmpQueryKeyDataFromCache @ 0x14065F57C (CmpQueryKeyDataFromCache.c)
 *     CmpQueryKeyDataFromNode @ 0x14065F940 (CmpQueryKeyDataFromNode.c)
 *     CmDeleteKey @ 0x140660814 (CmDeleteKey.c)
 * Callees:
 *     CmListGetNextElement @ 0x1405E17C4 (CmListGetNextElement.c)
 *     CmEqualTrans @ 0x14066440C (CmEqualTrans.c)
 */

__int64 __fastcall CmGetVisibleSubkeyCount(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  _QWORD **v6; // rbp
  char *NextElement; // rax
  char *v8; // rdi
  int v9; // eax
  _QWORD *v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(a2 + 20) + *(_DWORD *)(a2 + 24);
  v10 = 0LL;
  if ( a1 && a3 )
  {
    v6 = (_QWORD **)(a1 + 208);
    while ( 1 )
    {
      NextElement = CmListGetNextElement(v6, &v10, 32);
      v8 = NextElement;
      if ( !NextElement )
        break;
      if ( (unsigned __int8)CmEqualTrans(*((_QWORD *)NextElement + 7), a3) )
      {
        v9 = *((_DWORD *)v8 + 17);
        if ( v9 == 1 )
        {
          ++v4;
        }
        else if ( v9 == 3 )
        {
          --v4;
        }
      }
    }
  }
  return v4;
}
