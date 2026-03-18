/*
 * XREFs of MiInitializePartitions @ 0x140AF50EC
 * Callers:
 *     MiCreatePfnDatabase @ 0x140AF4DB0 (MiCreatePfnDatabase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializePartitions(int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( !a1 )
  {
    qword_140C51F00 = 0LL;
    qword_140C51F08 = 0LL;
    qword_140C51F28 = (PRTL_BITMAP)&dword_140C51F30;
    dword_140C51F30 = 1;
    qword_140C51F38 = (__int64)dword_140C51F10;
    dword_140C51F10[0] |= 1u;
    qword_140C51F20 = (__int64)&qword_140C51F18;
    qword_140C51F18 = (__int64)&qword_140C51F18;
    qword_140C51F40 = (__int64)&MiSystemPartition;
    qword_140C51F48 = (__int64)&qword_140C51F40;
  }
  return result;
}
