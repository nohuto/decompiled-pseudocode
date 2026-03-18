/*
 * XREFs of IsParentBandValid @ 0x1C0106B20
 * Callers:
 *     xxxSetWindowData @ 0x1C00A6E64 (xxxSetWindowData.c)
 * Callees:
 *     IsTopLevelParent @ 0x1C0106B78 (IsTopLevelParent.c)
 */

_BOOL8 __fastcall IsParentBandValid(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  _BOOL8 result; // rax

  result = 1;
  if ( !(unsigned int)IsTopLevelParent(a2) )
  {
    v4 = *(_QWORD *)(v2 + 40);
    if ( *(char *)(v4 + 235) >= 0 )
    {
      v5 = *(_QWORD *)(v3 + 40);
      if ( *(_DWORD *)(v4 + 236) != *(_DWORD *)(v5 + 236) || ((*(_BYTE *)(v4 + 234) ^ *(_BYTE *)(v5 + 234)) & 0x20) != 0 )
        return 0;
    }
  }
  return result;
}
