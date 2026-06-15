/*
 * XREFs of ?GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z @ 0x1800C5C2C
 * Callers:
 *     s_afxOpenAudioEffectsWatcher @ 0x1800C6940 (s_afxOpenAudioEffectsWatcher.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AC9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCOnDeviceWorkItem@@PEAV312@1@Z @ 0x1800B9C98 (-NewNode@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@.c)
 *     ??0AudioEffectsWatcher@@QEAA@XZ @ 0x1800C5930 (--0AudioEffectsWatcher@@QEAA@XZ.c)
 *     ??_GAudioEffectsWatcher@@QEAAPEAXI@Z @ 0x1800C5BA4 (--_GAudioEffectsWatcher@@QEAAPEAXI@Z.c)
 *     ?Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z @ 0x1800C5DE0 (-Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z.c)
 *     ?ReleaseAppRef@AudioEffectsWatcher@@QEAAKXZ @ 0x1800C6578 (-ReleaseAppRef@AudioEffectsWatcher@@QEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioEffectsWatcherFactory::GetWatcher(
        AudioEffectsWatcherFactory *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        struct AudioEffectsWatcher **a5)
{
  struct AudioEffectsWatcher **v8; // rsi
  _QWORD *i; // rdi
  __int64 v10; // rbx
  AudioEffectsWatcher *v11; // rax
  AudioEffectsWatcher *v12; // rbx
  int v13; // edi
  __int64 *v14; // rax
  AudioEffectsWatcherFactory *v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = this;
  v8 = a5;
  *a5 = 0LL;
  EnterCriticalSection(&TheAudioEffectsWatcherFactory);
  a5 = (struct AudioEffectsWatcher **)&TheAudioEffectsWatcherFactory;
  for ( i = (_QWORD *)qword_18019FF58; i; i = (_QWORD *)*i )
  {
    v10 = i[2];
    if ( CompareStringOrdinal(a2, -1, *(LPCWCH *)(v10 + 24), -1, 1) == 2
      && a3 == *(_DWORD *)(v10 + 32)
      && a4 == *(_DWORD *)(v10 + 36) )
    {
      if ( ++*(_DWORD *)(v10 + 72) < 0x3FFFFFFFu )
      {
        v13 = 0;
        *v8 = (struct AudioEffectsWatcher *)v10;
        goto LABEL_22;
      }
      AudioEffectsWatcher::ReleaseAppRef((AudioEffectsWatcher *)v10);
      goto LABEL_14;
    }
  }
  v11 = (AudioEffectsWatcher *)operator new(0xE8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v11;
  if ( v11 )
    v12 = AudioEffectsWatcher::AudioEffectsWatcher(v11);
  else
    v12 = 0LL;
  v16 = v12;
  if ( !v12 )
  {
LABEL_14:
    v13 = -2147024882;
    goto LABEL_22;
  }
  v13 = AudioEffectsWatcher::Init(v12, a2, a3, a4);
  if ( v13 >= 0 )
  {
    v14 = ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::NewNode(
            (__int64)&qword_18019FF58,
            (__int64 *)&v16,
            xmmword_18019FF60);
    if ( (_QWORD)xmmword_18019FF60 )
      *(_QWORD *)xmmword_18019FF60 = v14;
    else
      qword_18019FF58 = (__int64)v14;
    *(_QWORD *)&xmmword_18019FF60 = v14;
    *((_QWORD *)v12 + 10) = v14;
    ++*((_DWORD *)v12 + 18);
    *v8 = v12;
    v13 = 0;
    v12 = 0LL;
  }
  if ( v12 )
    AudioEffectsWatcher::`scalar deleting destructor'(v12);
LABEL_22:
  LeaveCriticalSection(&TheAudioEffectsWatcherFactory);
  return (unsigned int)v13;
}
