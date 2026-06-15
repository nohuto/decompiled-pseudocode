/*
 * XREFs of sub_180045DC0 @ 0x180045DC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800384DC @ 0x1800384DC (sub_1800384DC.c)
 *     sub_180045E2C @ 0x180045E2C (sub_180045E2C.c)
 *     sub_1800B5B00 @ 0x1800B5B00 (sub_1800B5B00.c)
 */

int __fastcall sub_180045DC0(__int64 a1)
{
  char *v2; // rax

  sub_180045E2C();
  LODWORD(v2) = GetCurrentThreadId();
  if ( dword_18019E3F4 != (_DWORD)v2 )
  {
    if ( _InterlockedIncrement(&dword_18019E7C0) < 4 )
    {
      dword_18019E3F4 = (int)v2;
      v2 = sub_1800384DC(0);
      if ( v2 )
        LODWORD(v2) = sub_1800B5B00(v2, a1);
      dword_18019E3F4 = 0;
    }
    _InterlockedDecrement(&dword_18019E7C0);
  }
  return (int)v2;
}
