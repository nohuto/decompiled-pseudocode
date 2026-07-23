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

NTSTATUS __cdecl RtlGuardCheckLongJumpTarget(PVOID PcValue, BOOL IsFastFail, PBOOL IsLongJumpTarget)
{
  void *v3; // ebx
  ULONG_PTR *v4; // edi
  int (__cdecl *v5)(void *, const void *, const void *); // esi
  int v6; // eax
  char v7; // bl
  _BYTE *v8; // esi
  _DWORD *Config; // eax
  _DWORD *v11; // ecx
  int v12; // eax
  rsize_t v13; // [esp-18h] [ebp-30h]
  int (__cdecl *v14)(void *, const void *, const void *); // [esp-8h] [ebp-20h]
  void *v15; // [esp-4h] [ebp-1Ch]
  int v16; // [esp+0h] [ebp-18h] BYREF
  PVOID BaseOfImage; // [esp+4h] [ebp-14h]
  int v18; // [esp+8h] [ebp-10h]
  int v19; // [esp+Ch] [ebp-Ch]
  char *Key; // [esp+10h] [ebp-8h] BYREF
  unsigned __int64 PolicyValue; // [esp+14h] [ebp-4h] BYREF

  LOBYTE(v6) = LdrControlFlowGuardEnforced();
  if ( !v6 )
  {
    if ( IsLongJumpTarget )
      *(_BYTE *)IsLongJumpTarget = 1;
    return 0;
  }
  v15 = v3;
  v7 = 0;
  v14 = v5;
  if ( (unsigned int)PcValue < dword_4B3A9374[0] || (unsigned int)PcValue >= dword_4B3A9374[0] + dword_4B3A9378[0] )
  {
    RtlpxLookupFunctionTable(PcValue, (int)&v16, (int)&PolicyValue + 4, v4);
  }
  else
  {
    v16 = dword_4B3A9370[0];
    BaseOfImage = (PVOID)dword_4B3A9370[1];
    v18 = dword_4B3A9370[2];
    v19 = dword_4B3A9370[3];
  }
  v8 = BaseOfImage;
  if ( BaseOfImage )
  {
    Config = LdrImageDirectoryEntryToLoadConfig(BaseOfImage);
    v11 = Config;
    if ( !Config )
      goto LABEL_11;
    if ( *Config < 0x78u )
      goto LABEL_11;
    if ( (Config[22] & 0x10000) == 0 )
      goto LABEL_11;
    Key = (char *)((_BYTE *)PcValue - v8);
    v12 = (Config[22] >> 28) + 4;
    if ( v11[29] )
    {
      HIDWORD(v13) = v12;
      LODWORD(v13) = v11[29];
      if ( bsearch_s(&Key, (const void *)v11[28], v13, (unsigned int)RtlpTargetCompare, v14, v15) )
        goto LABEL_11;
    }
LABEL_20:
    if ( !IsFastFail )
      RtlFailFast2((void *)0x26);
    goto LABEL_12;
  }
  if ( RtlQueryProtectedPolicy((PGUID)&stru_4B2A3A68, &PolicyValue) < 0 || !(_DWORD)PolicyValue )
    goto LABEL_20;
LABEL_11:
  v7 = 1;
LABEL_12:
  if ( IsLongJumpTarget )
    *(_BYTE *)IsLongJumpTarget = v7;
  return 0;
}
