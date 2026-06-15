/*
 * XREFs of sub_180106E0C @ 0x180106E0C
 * Callers:
 *     sub_180109240 @ 0x180109240 (sub_180109240.c)
 * Callees:
 *     sub_180106850 @ 0x180106850 (sub_180106850.c)
 *     sub_180106DAC @ 0x180106DAC (sub_180106DAC.c)
 *     sub_180108588 @ 0x180108588 (sub_180108588.c)
 *     sub_18010A130 @ 0x18010A130 (sub_18010A130.c)
 *     sub_18010B4E4 @ 0x18010B4E4 (sub_18010B4E4.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180106E0C(__int64 a1, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  char v7; // al

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  sub_18010A130("Sarm::CSpatialAudioResourceManager::HandleAppVolumePolicyChange", 810LL);
  v5 = sub_180106850(a1, a2);
  v6 = v5;
  if ( v5 )
  {
    v7 = sub_18010B4E4(v5);
    if ( v7 != *(_BYTE *)(v6 + 88) )
    {
      *(_BYTE *)(v6 + 88) = v7;
      if ( v7 )
        sub_180108588(a1, a2);
      else
        sub_180106DAC(a1, a2);
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}
