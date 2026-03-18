/*
 * XREFs of CmGetKCBCacheSecurity @ 0x1405E7754
 * Callers:
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1405E76D4 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14063DCA4 (CmpSetSecurityDescriptorInfo.c)
 * Callees:
 *     CmEqualTrans @ 0x140643290 (CmEqualTrans.c)
 *     CmListGetPrevElement @ 0x140654590 (CmListGetPrevElement.c)
 */

__int64 __fastcall CmGetKCBCacheSecurity(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // rbp
  __int64 PrevElement; // rax
  __int64 v7; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 88);
  if ( a2 )
  {
    v8 = 0LL;
    v5 = a1 + 208;
    while ( 1 )
    {
      PrevElement = CmListGetPrevElement(v5, &v8);
      v7 = PrevElement;
      if ( !PrevElement )
        break;
      if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(PrevElement + 56), a2) && *(_DWORD *)(v7 + 68) == 9 )
        return *(_QWORD *)(v7 + 88);
    }
  }
  return v2;
}
