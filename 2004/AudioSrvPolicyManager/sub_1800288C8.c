/*
 * XREFs of sub_1800288C8 @ 0x1800288C8
 * Callers:
 *     sub_18002A580 @ 0x18002A580 (sub_18002A580.c)
 *     sub_18002A698 @ 0x18002A698 (sub_18002A698.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800288C8(_QWORD *a1)
{
  _QWORD *v2; // rax
  _DWORD *v3; // rdx
  unsigned int v4; // ebx

  EnterCriticalSection(&CriticalSection);
  v2 = (_QWORD *)qword_18004FF98;
  *a1 = 0LL;
  while ( v2 )
  {
    v3 = (_DWORD *)v2[2];
    v2 = (_QWORD *)*v2;
    if ( *v3 && v3[86] )
    {
      *a1 = v3;
      break;
    }
  }
  v4 = *a1 == 0LL ? 0x490 : 0;
  LeaveCriticalSection(&CriticalSection);
  return v4;
}
