/*
 * XREFs of MiWakeZeroingThreads @ 0x1402FF3D0
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x140234F10 (MiInsertPageInFreeOrZeroedList.c)
 *     MiWakePageZeroing @ 0x1402FF128 (MiWakePageZeroing.c)
 *     MiZeroNodePages @ 0x1403B0220 (MiZeroNodePages.c)
 *     MiZeroLargePageThread @ 0x1403B3D10 (MiZeroLargePageThread.c)
 * Callees:
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 */

unsigned int __fastcall MiWakeZeroingThreads(__int64 a1, char a2)
{
  unsigned int result; // eax
  int v4; // r14d
  unsigned int v5; // ecx
  int v6; // ebp
  unsigned __int8 *v7; // rbx
  __int64 v8; // rdi

  result = *(_DWORD *)(a1 + 156);
  v4 = a2 & 1;
  if ( (a2 & 1) == 0 )
  {
    v5 = *(_DWORD *)(a1 + 160);
    if ( v5 )
      result = v5;
  }
  if ( result )
  {
    v6 = a2 & 4;
    v7 = (unsigned __int8 *)(*(_QWORD *)(a1 + 144) + 4LL);
    v8 = result;
    do
    {
      if ( v6 )
        *v7 |= 2u;
      if ( v4 || (result = *v7, (result & 4) != 0) )
      {
        result = *v7;
        if ( (result & 1) != 0 )
        {
          *v7 &= ~1u;
          ++*(_DWORD *)(a1 + 164);
          result = KeSetEvent((PRKEVENT)(v7 + 12), 0, 0);
        }
      }
      v7 += 40;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
