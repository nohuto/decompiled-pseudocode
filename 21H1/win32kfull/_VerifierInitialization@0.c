/*
 * XREFs of _VerifierInitialization@0 @ 0x2932B8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall VerifierInitialization()
{
  int v0; // esi
  NTSTATUS IsVerifierEnabled; // eax
  ULONG v2; // edx
  int result; // eax
  ULONG VerifierFlags; // [esp+4h] [ebp-4h] BYREF

  v0 = 0;
  VerifierFlags = 0;
  IsVerifierEnabled = MmIsVerifierEnabled(&VerifierFlags);
  if ( IsVerifierEnabled >= 0 || IsVerifierEnabled == -1073741820 )
  {
    v2 = VerifierFlags;
    if ( (VerifierFlags & 0xF) == 0 || (VerifierFlags & 0x400000) != 0 )
      goto LABEL_4;
    if ( !G_fServiceSession )
    {
      v0 = 1;
      v2 = VerifierFlags & 0xFFFFFFF7;
      dword_269040 = 1;
      goto LABEL_4;
    }
    KeQuerySystemTime(&GreBootTime);
    if ( MmAddVerifierThunks(&off_24D540, 0x78u) >= 0 )
      v0 = 1;
  }
  v2 = VerifierFlags;
LABEL_4:
  result = v0;
  gvs = v0 != 0 ? v2 & 0xFFFFFFF7 : 0;
  return result;
}
