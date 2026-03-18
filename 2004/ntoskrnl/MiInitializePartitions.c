/*
 * XREFs of MiInitializePartitions @ 0x140A3DBDC
 * Callers:
 *     MiCreatePfnDatabase @ 0x140A3D8FC (MiCreatePfnDatabase.c)
 *     MiInitSystem @ 0x140A521D4 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializePartitions(int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( !a1 )
  {
    qword_140C4E400 = 0LL;
    qword_140C4E408 = 0LL;
    qword_140C4E428 = (PRTL_BITMAP)&dword_140C4E430;
    dword_140C4E430 = 1;
    qword_140C4E438 = (__int64)dword_140C4E410;
    dword_140C4E410[0] |= 1u;
    qword_140C4E420 = (__int64)&qword_140C4E418;
    qword_140C4E418 = (__int64)&qword_140C4E418;
    qword_140C4E440 = (__int64)&MiSystemPartition;
    qword_140C4E448 = (__int64)&qword_140C4E440;
  }
  return result;
}
