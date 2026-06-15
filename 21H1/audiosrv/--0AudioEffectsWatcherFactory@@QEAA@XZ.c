/*
 * XREFs of ??0AudioEffectsWatcherFactory@@QEAA@XZ @ 0x1800549A0
 * Callers:
 *     _dynamic_initializer_for__TheAudioEffectsWatcherFactory__ @ 0x180001980 (_dynamic_initializer_for__TheAudioEffectsWatcherFactory__.c)
 * Callees:
 *     <none>
 */

AudioEffectsWatcherFactory *__fastcall AudioEffectsWatcherFactory::AudioEffectsWatcherFactory(
        AudioEffectsWatcherFactory *this)
{
  AudioEffectsWatcherFactory *result; // rax

  InitializeCriticalSectionEx(&TheAudioEffectsWatcherFactory, 0, 0);
  qword_18019FF58 = 0LL;
  result = (AudioEffectsWatcherFactory *)&TheAudioEffectsWatcherFactory;
  dword_18019FF80 = 10;
  xmmword_18019FF60 = 0LL;
  xmmword_18019FF70 = 0LL;
  return result;
}
