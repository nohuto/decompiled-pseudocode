/*
 * XREFs of MiInitializePartitions @ 0x140A449A4
 * Callers:
 *     MiCreatePfnDatabase @ 0x140A446C4 (MiCreatePfnDatabase.c)
 *     MiInitSystem @ 0x140A4C4D4 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializePartitions(int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( !a1 )
  {
    qword_140C4E540 = 0LL;
    qword_140C4E548 = 0LL;
    qword_140C4E568 = (PRTL_BITMAP)&dword_140C4E570;
    dword_140C4E570 = 1;
    qword_140C4E578 = (__int64)dword_140C4E550;
    dword_140C4E550[0] |= 1u;
    qword_140C4E560 = (__int64)&qword_140C4E558;
    qword_140C4E558 = (__int64)&qword_140C4E558;
    qword_140C4E580 = (__int64)&MiSystemPartition;
    qword_140C4E588 = (__int64)&qword_140C4E580;
  }
  return result;
}
