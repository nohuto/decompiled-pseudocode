/*
 * XREFs of _LdrpGenSecurityCookie@4 @ 0x4B2B9827
 * Callers:
 *     _LdrInitSecurityCookie@20 @ 0x4B2B9EDA (_LdrInitSecurityCookie@20.c)
 * Callees:
 *     _NtQueryPerformanceCounter@8 @ 0x4B2F2C90 (_NtQueryPerformanceCounter@8.c)
 */

unsigned int __fastcall LdrpGenSecurityCookie(int a1)
{
  int v1; // edi
  int v2; // esi
  LARGE_INTEGER PerformanceCounter; // [esp+Ch] [ebp-14h] BYREF
  int v5; // [esp+14h] [ebp-Ch]
  int v6; // [esp+18h] [ebp-8h]
  unsigned int v7; // [esp+1Ch] [ebp-4h]

  v5 = a1;
  v7 = MEMORY[0x7FFE0004];
  v1 = MEMORY[0x7FFE0018] ^ (int)NtCurrentTeb()->ClientId.UniqueProcess ^ (int)NtCurrentTeb()->ClientId.UniqueThread ^ MEMORY[0x7FFE0014];
  v6 = v1;
  if ( MEMORY[0x7FFE0004] < 0x1000000u )
  {
    while ( MEMORY[0x7FFE0324] != MEMORY[0x7FFE0328] )
      _mm_pause();
    v1 = v6;
    v2 = v7 * (MEMORY[0x7FFE0324] << 8) + ((v7 * (unsigned __int64)MEMORY[0x7FFE0320]) >> 24);
  }
  else
  {
    v2 = (MEMORY[0x7FFE0004] * (unsigned __int64)MEMORY[0x7FFE0320]) >> 24;
  }
  NtQueryPerformanceCounter(&PerformanceCounter, 0);
  return v5 ^ v1 ^ PerformanceCounter.LowPart ^ PerformanceCounter.HighPart ^ v2;
}
