/*
 * XREFs of MiIoPagesInRun @ 0x140242FC4
 * Callers:
 *     MiFillSystemPtes @ 0x1402CB7F0 (MiFillSystemPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIoPagesInRun(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r9
  _QWORD *v3; // r8

  v2 = 0LL;
  v3 = (_QWORD *)(48 * a1 - 0x57FFFFFFFD8LL);
  do
  {
    if ( a1 <= 0xFFFFFFFFFLL && ((*v3 >> 50) & 1) != 0 )
      break;
    ++v2;
    if ( !--a2 )
      break;
    ++a1;
    v3 += 6;
  }
  while ( (a1 & 0x1FF) != 0 );
  return v2;
}
