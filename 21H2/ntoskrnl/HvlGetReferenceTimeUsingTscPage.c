/*
 * XREFs of HvlGetReferenceTimeUsingTscPage @ 0x14038E130
 * Callers:
 *     HvlGetReferenceTime @ 0x14038E0FC (HvlGetReferenceTime.c)
 * Callees:
 *     HvlpGetRegister64 @ 0x1404FA190 (HvlpGetRegister64.c)
 */

__int64 __fastcall HvlGetReferenceTimeUsingTscPage(_DWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  int v4; // ebx
  __int64 result; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  while ( 1 )
  {
    v3 = (unsigned __int64)HvlpReferenceTscPage;
    v4 = *(_DWORD *)HvlpReferenceTscPage;
    if ( !*(_DWORD *)HvlpReferenceTscPage )
      break;
    if ( MEMORY[0xFFFFF78000000294] )
    {
      __asm { rdtscp }
    }
    else
    {
      if ( KeGetCurrentPrcb()->CpuVendor == 2 )
      {
        _mm_lfence();
      }
      else if ( KeGetCurrentPrcb()->CpuVendor == 1 )
      {
        _mm_mfence();
      }
      v3 = __rdtsc();
      LODWORD(a2) = HIDWORD(v3);
      v3 = (unsigned int)v3;
      a2 = (unsigned int)a2;
    }
    a2 = *((_QWORD *)HvlpReferenceTscPage + 2)
       + (((v3 | (a2 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
    v6 = a2;
    if ( *(_DWORD *)HvlpReferenceTscPage == v4 )
      goto LABEL_13;
  }
  HvlpGetRegister64(589828LL, &v6);
LABEL_13:
  result = v6;
  if ( a1 )
    *a1 = v4;
  return result;
}
