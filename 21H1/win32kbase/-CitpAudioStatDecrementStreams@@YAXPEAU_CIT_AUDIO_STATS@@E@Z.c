/*
 * XREFs of ?CitpAudioStatDecrementStreams@@YAXPEAU_CIT_AUDIO_STATS@@E@Z @ 0x1C00C75B8
 * Callers:
 *     ?CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C00320CC (-CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     CitProcessCallout @ 0x1C006AF60 (CitProcessCallout.c)
 * Callees:
 *     ?CitpAudioStatSnapDelta@@YAXPEAU_CIT_AUDIO_STATS@@@Z @ 0x1C00C75E4 (-CitpAudioStatSnapDelta@@YAXPEAU_CIT_AUDIO_STATS@@@Z.c)
 */

void __fastcall CitpAudioStatDecrementStreams(struct _CIT_AUDIO_STATS *a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // al

  v2 = *((_BYTE *)a1 + 3);
  if ( v2 )
  {
    if ( v2 > a2 )
    {
      *((_BYTE *)a1 + 3) = v2 - a2;
    }
    else
    {
      *((_BYTE *)a1 + 3) = 0;
      CitpAudioStatSnapDelta(a1);
    }
  }
}
