/*
 * XREFs of ProtectedContentAccessCheck @ 0x1C0022DAC
 * Callers:
 *     ValidateNewParent @ 0x1C0022CCC (ValidateNewParent.c)
 * Callees:
 *     IsWindowContentProtected @ 0x1C0022F38 (IsWindowContentProtected.c)
 */

_BOOL8 __fastcall ProtectedContentAccessCheck(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v8; // rax
  __int64 v9; // rbx

  v2 = a1;
  if ( a1 )
  {
    do
    {
      v3 = v2[13];
      if ( v3 )
      {
        v4 = v2[3];
        v5 = 0LL;
        if ( v4 )
        {
          v6 = *(_QWORD *)(v4 + 8);
          if ( v6 )
            v5 = *(_QWORD *)(v6 + 24);
        }
        if ( v3 == v5 )
          break;
      }
      v2 = (_QWORD *)v2[13];
    }
    while ( v3 );
  }
  if ( !v2 )
    return 1LL;
  if ( (*(_BYTE *)(v2[5] + 234LL) & 0x40) != 0 )
  {
    v8 = v2[2];
    if ( *(_QWORD *)(v8 + 1392) )
      v2 = *(_QWORD **)(v8 + 1392);
  }
  if ( !(unsigned int)IsWindowContentProtected(v2) )
    return 1LL;
  v9 = *(_QWORD *)(v2[2] + 416LL);
  return v9 == PsGetCurrentProcessWin32Process()
      || v9 == *(_QWORD *)(a1[2] + 416LL) && (*(_DWORD *)(gptiCurrent + 1224LL) & 0x40000) != 0;
}
