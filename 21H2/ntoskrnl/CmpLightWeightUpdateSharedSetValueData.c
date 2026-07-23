/*
 * XREFs of CmpLightWeightUpdateSharedSetValueData @ 0x1405DF3F4
 * Callers:
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1405E1D18 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140731B78 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 * Callees:
 *     CmListGetNextElement @ 0x1405E17C4 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpLightWeightUpdateSharedSetValueData(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 result; // rax
  _DWORD *v4; // r9
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = a2 + 208;
  while ( 1 )
  {
    result = CmListGetNextElement(v2, &v5, 32LL);
    if ( !result )
      break;
    if ( (unsigned int)(*(_DWORD *)(result + 68) - 4) <= 2 )
    {
      *(_QWORD *)(result + 104) = v4;
      ++*v4;
    }
  }
  return result;
}
