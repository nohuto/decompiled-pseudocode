/*
 * XREFs of ?Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ @ 0x18032AF90
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18032DAB0 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 wil::details::in1diag3::Log_IfFailedWithExpected(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4,
        unsigned int a5,
        unsigned int a6,
        ...)
{
  unsigned int v6; // eax
  unsigned int v8; // ebx
  unsigned int *v9; // r8

  v6 = 0;
  v8 = (unsigned int)a4;
  if ( (int)a4 < 0 )
  {
    if ( a5 )
    {
      v9 = &a5;
      do
      {
        v9 += 2;
        if ( (_DWORD)a4 == *v9 )
          break;
        ++v6;
      }
      while ( v6 < a5 );
    }
    if ( v6 == a5 )
      wil::details::in1diag3::_Log_Hr(this, a2, a3, (const char *)(unsigned int)a4);
  }
  return v8;
}
