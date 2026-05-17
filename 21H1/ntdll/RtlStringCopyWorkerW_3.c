/*
 * XREFs of RtlStringCopyWorkerW_3 @ 0x4B33FBA8
 * Callers:
 *     _LdrpGetFileDriverStoreRoot@12 @ 0x4B2E7D5F (_LdrpGetFileDriverStoreRoot@12.c)
 * Callees:
 *     <none>
 */

int __thiscall RtlStringCopyWorkerW_3(_WORD *this, int a2, int a3, int a4)
{
  int v5; // eax
  int v6; // esi
  __int16 v7; // di
  int result; // eax

  v5 = 351;
  v6 = a3 - (_DWORD)this;
  do
  {
    if ( !a4 )
      break;
    v7 = *(_WORD *)((char *)this + v6);
    if ( !v7 )
      break;
    *this++ = v7;
    --a4;
    --v5;
  }
  while ( v5 );
  if ( !v5 )
    --this;
  result = v5 != 0 ? 0 : -2147483643;
  *this = 0;
  return result;
}
