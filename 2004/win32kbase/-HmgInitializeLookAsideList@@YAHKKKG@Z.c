/*
 * XREFs of ?HmgInitializeLookAsideList@@YAHKKKG@Z @ 0x1C0008BE4
 * Callers:
 *     HmgCreate @ 0x1C00087BC (HmgCreate.c)
 * Callees:
 *     Win32AllocPagedLookasideList @ 0x1C0008C50 (Win32AllocPagedLookasideList.c)
 */

_BOOL8 __fastcall HmgInitializeLookAsideList(unsigned int a1, unsigned int a2, __int64 a3, unsigned __int16 a4)
{
  __int64 v4; // rbx
  void **v5; // rax
  _BOOL8 result; // rax

  result = 0;
  if ( a1 << 24 < 0xCF9E93B9 )
  {
    v4 = a1;
    *((_DWORD *)&laSize + a1) = a2;
    v5 = (void **)Win32AllocPagedLookasideList(a2, (a1 << 24) + 811691079, (a1 << 24) + 811691079, a4);
    (&pHmgLookAsideList)[v4] = v5;
    if ( v5 )
      return 1;
  }
  return result;
}
