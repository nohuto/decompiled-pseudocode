/*
 * XREFs of SepCloseCachedTokenHandles @ 0x1402DE958
 * Callers:
 *     SepDereferenceCachedHandlesEntry @ 0x1405EE7DC (SepDereferenceCachedHandlesEntry.c)
 *     SepSetTokenCachedHandles @ 0x140677FE4 (SepSetTokenCachedHandles.c)
 * Callees:
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 */

__int64 __fastcall SepCloseCachedTokenHandles(unsigned int a1, HANDLE *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  NTSTATUS v5; // eax

  v2 = 0;
  if ( a1 )
  {
    v4 = a1;
    do
    {
      v5 = ZwClose(*a2++);
      if ( v5 < 0 )
        v2 = v5;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}
