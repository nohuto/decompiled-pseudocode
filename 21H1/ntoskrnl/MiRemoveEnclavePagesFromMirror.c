/*
 * XREFs of MiRemoveEnclavePagesFromMirror @ 0x1409AD008
 * Callers:
 *     MiMirrorBlackPhase @ 0x1403ED2F4 (MiMirrorBlackPhase.c)
 * Callees:
 *     MiMirrorOmitPagesFromCopy @ 0x140382B5C (MiMirrorOmitPagesFromCopy.c)
 */

_QWORD *__fastcall MiRemoveEnclavePagesFromMirror(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *result; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx

  result = (_QWORD *)qword_140C4EDC0;
  v6 = 0LL;
  while ( result )
  {
    v6 = result;
    result = (_QWORD *)*result;
  }
  while ( v6 )
  {
    MiMirrorOmitPagesFromCopy(a1, v6[3], v6[4], a4);
    result = (_QWORD *)v6[1];
    v7 = v6;
    if ( result )
    {
      v8 = (_QWORD *)*result;
      v6 = (_QWORD *)v6[1];
      if ( *result )
      {
        do
        {
          result = (_QWORD *)*v8;
          v6 = v8;
          v8 = result;
        }
        while ( result );
      }
    }
    else
    {
      while ( 1 )
      {
        v6 = (_QWORD *)(v6[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v6 || (_QWORD *)*v6 == v7 )
          break;
        v7 = v6;
      }
    }
  }
  return result;
}
