/*
 * XREFs of MiInitializePartitions @ 0x140A4399C
 * Callers:
 *     MiCreatePfnDatabase @ 0x140A436BC (MiCreatePfnDatabase.c)
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializePartitions(int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( !a1 )
  {
    qword_140C4E600 = 0LL;
    qword_140C4E608 = 0LL;
    qword_140C4E628 = (PRTL_BITMAP)&dword_140C4E630;
    dword_140C4E630 = 1;
    qword_140C4E638 = (__int64)dword_140C4E610;
    dword_140C4E610[0] |= 1u;
    qword_140C4E620 = (__int64)&qword_140C4E618;
    qword_140C4E618 = (__int64)&qword_140C4E618;
    qword_140C4E640 = (__int64)&MiSystemPartition;
    qword_140C4E648 = (__int64)&qword_140C4E640;
  }
  return result;
}
