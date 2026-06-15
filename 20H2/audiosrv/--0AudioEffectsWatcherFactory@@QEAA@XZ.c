/*
 * XREFs of ??0AudioEffectsWatcherFactory@@QEAA@XZ @ 0x180054300
 * Callers:
 *     _dynamic_initializer_for__TheAudioEffectsWatcherFactory__ @ 0x1800014F0 (_dynamic_initializer_for__TheAudioEffectsWatcherFactory__.c)
 * Callees:
 *     <none>
 */

AudioEffectsWatcherFactory *__fastcall AudioEffectsWatcherFactory::AudioEffectsWatcherFactory(
        AudioEffectsWatcherFactory *this)
{
  AudioEffectsWatcherFactory *result; // rax

  InitializeCriticalSectionEx(&TheAudioEffectsWatcherFactory, 0, 0);
  qword_18019EEE8 = 0LL;
  result = (AudioEffectsWatcherFactory *)&TheAudioEffectsWatcherFactory;
  dword_18019EF10 = 10;
  xmmword_18019EEF0 = 0LL;
  xmmword_18019EF00 = 0LL;
  return result;
}
