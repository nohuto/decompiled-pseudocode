/*
 * XREFs of MiInitializePartitions @ 0x140A43E7C
 * Callers:
 *     MiCreatePfnDatabase @ 0x140A43B9C (MiCreatePfnDatabase.c)
 *     MiInitSystem @ 0x140A52854 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializePartitions(int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( !a1 )
  {
    qword_140C4E480 = 0LL;
    qword_140C4E488 = 0LL;
    qword_140C4E4A8 = (PRTL_BITMAP)&dword_140C4E4B0;
    dword_140C4E4B0 = 1;
    qword_140C4E4B8 = (__int64)dword_140C4E490;
    dword_140C4E490[0] |= 1u;
    qword_140C4E4A0 = (__int64)&qword_140C4E498;
    qword_140C4E498 = (__int64)&qword_140C4E498;
    qword_140C4E4C0 = (__int64)&MiSystemPartition;
    qword_140C4E4C8 = (__int64)&qword_140C4E4C0;
  }
  return result;
}
