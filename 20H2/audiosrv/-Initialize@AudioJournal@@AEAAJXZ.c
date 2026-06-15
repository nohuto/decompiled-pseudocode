/*
 * XREFs of ?Initialize@AudioJournal@@AEAAJXZ @ 0x180053124
 * Callers:
 *     ??0AudioJournal@@QEAA@XZ @ 0x1800534E8 (--0AudioJournal@@QEAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x180052F34 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ?ReadStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z @ 0x1800532CC (-ReadStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z.c)
 *     ?ReadLastLogTime@AudioJournal@@AEAA?AT_ULARGE_INTEGER@@XZ @ 0x18005340C (-ReadLastLogTime@AudioJournal@@AEAA-AT_ULARGE_INTEGER@@XZ.c)
 *     ?ReadVersion@AudioJournal@@AEAAHXZ @ 0x18005347C (-ReadVersion@AudioJournal@@AEAAHXZ.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 *     ?ResetData@AudioJournal@@AEAAX_N@Z @ 0x1800F654C (-ResetData@AudioJournal@@AEAAX_N@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800F6660 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?WriteStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z @ 0x1800F6684 (-WriteStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z.c)
 *     ?WriteValue@AudioJournal@@AEAAJPEBGKPEAEK@Z @ 0x1800F6730 (-WriteValue@AudioJournal@@AEAAJPEBGKPEAEK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioJournal::Initialize(AudioJournal *this)
{
  unsigned int v1; // ebx
  int PersistedStateLocation; // eax
  AudioJournal *v3; // rcx
  AudioJournal *v4; // rcx
  union _ULARGE_INTEGER v5; // rcx
  AudioJournal *v6; // rcx
  AudioJournal *v7; // rcx
  int v8; // eax
  int v9; // edi
  _QWORD v11[8]; // [rsp+40h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  struct _FILETIME SystemTimeAsFileTime; // [rsp+A0h] [rbp+20h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+A8h] [rbp+28h]

  SystemTimeAsFileTime = (struct _FILETIME)this;
  EnterCriticalSection(&CriticalSection);
  v14 = &CriticalSection;
  v1 = 0;
  if ( !g_AudioJournal )
  {
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"AudioJournal",
                               0LL,
                               L"SOFTWARE\\Microsoft\\Multimedia\\Audio\\Journal",
                               0LL);
    if ( PersistedStateLocation < 0 )
    {
      v1 = wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x53,
             (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
             (const char *)(unsigned int)PersistedStateLocation,
             (int)&word_18019F4E8);
    }
    else
    {
      memset_0(&unk_18019F038, 0, 0x4B0uLL);
      dword_18019F4B0 = 100;
      GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
      *(struct _FILETIME *)&qword_18019F030 = SystemTimeAsFileTime;
      if ( (unsigned int)AudioJournal::ReadVersion(v3) == 1 )
      {
        v5 = **(union _ULARGE_INTEGER **)&AudioJournal::ReadLastLogTime(v4);
        *(union _ULARGE_INTEGER *)&qword_18019F030 = v5;
        if ( !v5.QuadPart )
        {
          GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
          *(struct _FILETIME *)&qword_18019F030 = SystemTimeAsFileTime;
          AudioJournal::WriteValue((AudioJournal *)&g_AudioJournal, L"LastLogTime", 0xBu, &qword_18019F030, 8u);
        }
        if ( AudioJournal::ReadStreamInfo(
               (AudioJournal *)v5.QuadPart,
               (struct AudioJournal::StreamInfo *)&unk_18019F038) < 0 )
          AudioJournal::WriteStreamInfo(
            (AudioJournal *)&g_AudioJournal,
            (struct AudioJournal::StreamInfo *)&unk_18019F038);
        if ( AudioJournal::ReadStreamInfo(v6, (struct AudioJournal::StreamInfo *)&unk_18019F290) < 0 )
          AudioJournal::WriteStreamInfo(
            (AudioJournal *)&g_AudioJournal,
            (struct AudioJournal::StreamInfo *)&unk_18019F290);
        if ( AudioJournal::ReadStreamInfo(v7, (struct AudioJournal::StreamInfo *)&unk_18019F420) < 0 )
          AudioJournal::WriteStreamInfo(
            (AudioJournal *)&g_AudioJournal,
            (struct AudioJournal::StreamInfo *)&unk_18019F420);
      }
      else
      {
        AudioJournal::ResetData((AudioJournal *)&g_AudioJournal, 1);
      }
      v11[0] = off_180154B58;
      v11[1] = &g_AudioJournal;
      v11[7] = v11;
      v8 = CSerialWorkQueue::QueueRecurringItem(
             (__int64)&unk_18019EF80,
             180000LL,
             0xDBBA0u,
             (__int64)v11,
             &qword_18019F028);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7C,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
          (const char *)(unsigned int)v8);
        v1 = v9;
      }
      else
      {
        g_AudioJournal = 1;
      }
    }
  }
  LeaveCriticalSection(&CriticalSection);
  return v1;
}
