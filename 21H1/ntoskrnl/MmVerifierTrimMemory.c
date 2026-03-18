/*
 * XREFs of MmVerifierTrimMemory @ 0x1409C2BE4
 * Callers:
 *     ViKeRaiseIrqlSanityChecks @ 0x1409D920C (ViKeRaiseIrqlSanityChecks.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x140208310 (RtlpGetStackLimits.c)
 *     KeGetCurrentStackPointer @ 0x1403F6520 (KeGetCurrentStackPointer.c)
 *     MiTrimAllSystemPagableMemory @ 0x140536520 (MiTrimAllSystemPagableMemory.c)
 */

char *MmVerifierTrimMemory()
{
  unsigned int v0; // ebx
  char *result; // rax
  __int64 v2; // r8
  _DWORD *v3; // r9
  char v4; // di
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  v5 = 0LL;
  v6 = 0LL;
  result = (char *)MEMORY[0xFFFFF78000000320];
  if ( (MEMORY[0xFFFFF78000000320] & MmVerifierTrimFrequency) == 0 )
  {
    result = (char *)RtlpGetStackLimits((__int64)&v5, (__int64)&v6);
    if ( (_BYTE)result )
    {
      result = &KeGetCurrentStackPointer()[-v5];
      if ( (unsigned __int64)result > 0x1A30 )
      {
        ++dword_140C2A820;
        v4 = ViTrimSpaces;
        LOBYTE(v0) = ViTrimSpaces < 0;
        if ( (ViTrimSpaces & 1) != 0 )
        {
          result = (char *)MiTrimAllSystemPagableMemory(0, (_DWORD *)v0, v2, v3);
          if ( (_DWORD)result == 1 )
            ++dword_140C2A824;
        }
        if ( (v4 & 2) != 0 )
        {
          result = (char *)MiTrimAllSystemPagableMemory(1, (_DWORD *)v0, v2, v3);
          if ( (_DWORD)result == 1 )
            ++dword_140C2A83C;
        }
        if ( (v4 & 4) != 0 )
        {
          result = (char *)MiTrimAllSystemPagableMemory(2, (_DWORD *)v0, v2, v3);
          if ( (_DWORD)result == 1 )
            ++dword_140C2A874;
        }
      }
    }
  }
  return result;
}
