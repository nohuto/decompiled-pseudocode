/*
 * XREFs of sub_180064B30 @ 0x180064B30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180064A68 @ 0x180064A68 (sub_180064A68.c)
 *     sub_180065224 @ 0x180065224 (sub_180065224.c)
 *     sub_1800661E4 @ 0x1800661E4 (sub_1800661E4.c)
 */

int __fastcall sub_180064B30(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 v4; // rax

  sub_180064A68(a1, a2, a3);
  LODWORD(v4) = GetCurrentThreadId();
  if ( dword_1800B4FAC != (_DWORD)v4 )
  {
    if ( _InterlockedIncrement(&dword_1800B4FB0) < 4 )
    {
      dword_1800B4FAC = v4;
      v4 = sub_180065224();
      if ( v4 )
        LODWORD(v4) = sub_1800661E4(v4, a1);
      dword_1800B4FAC = 0;
    }
    _InterlockedDecrement(&dword_1800B4FB0);
  }
  return v4;
}
