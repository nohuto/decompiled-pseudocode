/*
 * XREFs of SecureDump_GetSecureDumpSettings @ 0x1403BBF30
 * Callers:
 *     KeCapturePersistentThreadState @ 0x1404FF5A0 (KeCapturePersistentThreadState.c)
 *     IopInitializeCrashDump @ 0x14079F868 (IopInitializeCrashDump.c)
 *     IoCaptureLiveDump @ 0x140891CF8 (IoCaptureLiveDump.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SecureDump_GetSecureDumpSettings(__int64 a1)
{
  int v1; // eax

  if ( !a1 )
    return 3221225485LL;
  if ( SecureDmpEncryptionContext == 2 )
  {
    *(_BYTE *)a1 = byte_140C4C794;
    *(_DWORD *)(a1 + 4) = pbInput;
    *(_BYTE *)(a1 + 1) = dword_140C4C7D8 == 1;
    v1 = dword_140C4C7E0;
  }
  else
  {
    v1 = 0;
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 8) = v1;
  return 0LL;
}
