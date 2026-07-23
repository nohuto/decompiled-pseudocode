/*
 * XREFs of MmVerifierTrimMemory @ 0x1409C6C04
 * Callers:
 *     ViKeRaiseIrqlSanityChecks @ 0x1409DD27C (ViKeRaiseIrqlSanityChecks.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x14035B1A0 (RtlpGetStackLimits.c)
 *     KeGetCurrentStackPointer @ 0x1403FE7B0 (KeGetCurrentStackPointer.c)
 *     MiTrimAllSystemPagableMemory @ 0x14053C280 (MiTrimAllSystemPagableMemory.c)
 */

char *MmVerifierTrimMemory()
{
  int v0; // ebx
  char *result; // rax
  char v2; // di
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  v3 = 0LL;
  v4 = 0LL;
  result = (char *)MEMORY[0xFFFFF78000000320];
  if ( (MEMORY[0xFFFFF78000000320] & MmVerifierTrimFrequency) == 0 )
  {
    result = (char *)RtlpGetStackLimits((__int64)&v3, (__int64)&v4);
    if ( (_BYTE)result )
    {
      result = &KeGetCurrentStackPointer()[-v3];
      if ( (unsigned __int64)result > 0x1A30 )
      {
        ++dword_140C2A8C0;
        v2 = ViTrimSpaces;
        LOBYTE(v0) = ViTrimSpaces < 0;
        if ( (ViTrimSpaces & 1) != 0 )
        {
          result = (char *)MiTrimAllSystemPagableMemory(0, v0);
          if ( (_DWORD)result == 1 )
            ++dword_140C2A8C4;
        }
        if ( (v2 & 2) != 0 )
        {
          result = (char *)MiTrimAllSystemPagableMemory(1, v0);
          if ( (_DWORD)result == 1 )
            ++dword_140C2A8DC;
        }
        if ( (v2 & 4) != 0 )
        {
          result = (char *)MiTrimAllSystemPagableMemory(2, v0);
          if ( (_DWORD)result == 1 )
            ++dword_140C2A914;
        }
      }
    }
  }
  return result;
}
