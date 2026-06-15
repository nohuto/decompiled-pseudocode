/*
 * XREFs of ?Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ @ 0x1800032C8
 * Callers:
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180003020 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D6F0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 wil::details::in1diag3::Log_IfFailedWithExpected(
        wil::details::in1diag3 *this,
        void *a2,
        unsigned int a3,
        const char *a4,
        unsigned int a5,
        ...)
{
  unsigned int v5; // eax
  unsigned int v7; // ebx
  unsigned int *v8; // r8
  int v10; // [rsp+20h] [rbp-8h]

  v5 = 0;
  v7 = (unsigned int)a4;
  if ( (int)a4 < 0 )
  {
    if ( a5 )
    {
      v8 = &a5;
      do
      {
        v8 += 2;
        if ( (_DWORD)a4 == *v8 )
          break;
        ++v5;
      }
      while ( v5 < a5 );
    }
    if ( v5 == a5 )
      wil::details::in1diag3::_Log_Hr(this, a2, a3, (const char *)(unsigned int)a4, v10);
  }
  return v7;
}
