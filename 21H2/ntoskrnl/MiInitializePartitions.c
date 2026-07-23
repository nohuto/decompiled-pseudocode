/*
 * XREFs of MiInitializePartitions @ 0x140A4499C
 * Callers:
 *     MiCreatePfnDatabase @ 0x140A446BC (MiCreatePfnDatabase.c)
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializePartitions(int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( !a1 )
  {
    qword_140C4E640 = 0LL;
    qword_140C4E648 = 0LL;
    qword_140C4E668 = (PRTL_BITMAP)&dword_140C4E670;
    dword_140C4E670 = 1;
    qword_140C4E678 = (__int64)dword_140C4E650;
    dword_140C4E650[0] |= 1u;
    qword_140C4E660 = (__int64)&qword_140C4E658;
    qword_140C4E658 = (__int64)&qword_140C4E658;
    qword_140C4E680 = (__int64)&MiSystemPartition;
    qword_140C4E688 = (__int64)&qword_140C4E680;
  }
  return result;
}
