/*
 * XREFs of HalpPicSetLineState @ 0x1404DD050
 * Callers:
 *     <none>
 * Callees:
 *     HalpIoDelay @ 0x1403F9EB0 (HalpIoDelay.c)
 *     WRITE_PORT_USHORT_PAIR @ 0x1404BDD2C (WRITE_PORT_USHORT_PAIR.c)
 *     READ_PORT_USHORT_PAIR @ 0x1404DD174 (READ_PORT_USHORT_PAIR.c)
 */

__int64 __fastcall HalpPicSetLineState(_DWORD *a1, __int64 a2, __int64 a3)
{
  bool v6; // bl
  _DWORD *v7; // rdi
  int v8; // esi
  unsigned __int16 v9; // ax
  int v10; // ecx
  int v11; // ebx
  int v12; // edx
  int v13; // ecx

  if ( *(_BYTE *)(a3 + 4) )
    return 3221225659LL;
  v6 = 0;
  v7 = (_DWORD *)(a2 + 4);
  if ( *a1 == 45056 )
  {
    v6 = *v7 == 2;
    v8 = 0;
  }
  else
  {
    v8 = 8;
  }
  v9 = READ_PORT_USHORT_PAIR(1232LL, 1233LL);
  if ( *(_DWORD *)(a3 + 8) || v6 )
    v10 = v9 & ~(1 << (v8 + *(_BYTE *)(a2 + 4)));
  else
    v10 = v9 | (1 << (v8 + *(_BYTE *)v7));
  WRITE_PORT_USHORT_PAIR(0x4D0u, 0x4D1u, v10);
  v11 = (unsigned __int16)READ_PORT_USHORT_PAIR(33LL, 161LL);
  HalpIoDelay();
  v12 = v8 + *v7;
  if ( (*(_DWORD *)(a3 + 12) & 1) != 0 )
    v13 = v11 & ~(1 << v12);
  else
    v13 = v11 | (1 << v12);
  WRITE_PORT_USHORT_PAIR(0x21u, 0xA1u, v13);
  HalpIoDelay();
  return 0LL;
}
