/*
 * XREFs of CmGetVisibleSubkeyCount @ 0x14067E8E0
 * Callers:
 *     CmDeleteKey @ 0x14067E1BC (CmDeleteKey.c)
 *     CmpQueryKeyDataFromCache @ 0x1406A4E90 (CmpQueryKeyDataFromCache.c)
 *     CmpQueryKeyDataFromNode @ 0x1407C3490 (CmpQueryKeyDataFromNode.c)
 * Callees:
 *     CmEqualTrans @ 0x140721FD0 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x140AB4218 (CmListGetNextElement.c)
 */

__int64 __fastcall CmGetVisibleSubkeyCount(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rbp
  __int64 NextElement; // rax
  __int64 v8; // r8
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(a2 + 20) + *(_DWORD *)(a2 + 24);
  v11 = 0LL;
  if ( a1 && a3 )
  {
    v6 = a1 + 208;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(v6, &v11, 32LL);
      v9 = NextElement;
      if ( !NextElement )
        break;
      if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(NextElement + 56), a3, v8) )
      {
        v10 = *(_DWORD *)(v9 + 68);
        if ( v10 == 1 )
        {
          ++v4;
        }
        else if ( v10 == 3 )
        {
          --v4;
        }
      }
    }
  }
  return v4;
}
