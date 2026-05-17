/*
 * XREFs of _RtlGuardCheckLongJumpTarget@12 @ 0x4B3639C0
 * Callers:
 *     <none>
 * Callees:
 *     _LdrImageDirectoryEntryToLoadConfig@4 @ 0x4B2BA82F (_LdrImageDirectoryEntryToLoadConfig@4.c)
 *     _RtlpxLookupFunctionTable@8 @ 0x4B2BD6C0 (_RtlpxLookupFunctionTable@8.c)
 *     _LdrControlFlowGuardEnforced@0 @ 0x4B2D0100 (_LdrControlFlowGuardEnforced@0.c)
 *     _RtlQueryProtectedPolicy@8 @ 0x4B2ED030 (_RtlQueryProtectedPolicy@8.c)
 *     _bsearch_s @ 0x4B2F8220 (_bsearch_s.c)
 *     @RtlFailFast2@8 @ 0x4B308720 (@RtlFailFast2@8.c)
 */

int __stdcall RtlGuardCheckLongJumpTarget(char *a1, char a2, char *a3)
{
  char v3; // bl
  _BYTE *v4; // esi
  _DWORD *Config; // eax
  _DWORD *v7; // ecx
  rsize_t v8; // eax
  int v9; // [esp+0h] [ebp-18h] BYREF
  _BYTE *v10; // [esp+4h] [ebp-14h]
  int v11; // [esp+8h] [ebp-10h]
  int v12; // [esp+Ch] [ebp-Ch]
  int Key; // [esp+10h] [ebp-8h] BYREF
  int v14; // [esp+14h] [ebp-4h] BYREF
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  if ( !LdrControlFlowGuardEnforced() )
  {
    if ( a3 )
      *a3 = 1;
    return 0;
  }
  v3 = 0;
  if ( (unsigned int)a1 < dword_4B3A9374[0] || (unsigned int)a1 >= dword_4B3A9374[0] + dword_4B3A9378[0] )
  {
    RtlpxLookupFunctionTable(&v9, a1, (int)&savedregs);
  }
  else
  {
    v9 = dword_4B3A9370[0];
    v10 = (_BYTE *)dword_4B3A9370[1];
    v11 = dword_4B3A9370[2];
    v12 = dword_4B3A9370[3];
  }
  v4 = v10;
  if ( v10 )
  {
    Config = LdrImageDirectoryEntryToLoadConfig(v10);
    v7 = Config;
    if ( !Config )
      goto LABEL_11;
    if ( *Config < 0x78u )
      goto LABEL_11;
    if ( (Config[22] & 0x10000) == 0 )
      goto LABEL_11;
    Key = a1 - v4;
    v8 = (Config[22] >> 28) + 4;
    if ( v7[29] )
    {
      if ( bsearch_s(
             &Key,
             (const void *)v7[28],
             v7[29],
             v8,
             (_CoreCrtSecureSearchSortCompareFunction)RtlpTargetCompare,
             0) )
      {
        goto LABEL_11;
      }
    }
LABEL_20:
    if ( !a2 )
      RtlFailFast2((void *)0x26);
    goto LABEL_12;
  }
  if ( RtlQueryProtectedPolicy(dword_4B2A3A68, &v14) < 0 || !v14 )
    goto LABEL_20;
LABEL_11:
  v3 = 1;
LABEL_12:
  if ( a3 )
    *a3 = v3;
  return 0;
}
