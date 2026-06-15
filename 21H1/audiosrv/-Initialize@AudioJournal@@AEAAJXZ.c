/*
 * XREFs of ?Initialize@AudioJournal@@AEAAJXZ @ 0x1800537C4
 * Callers:
 *     ??0AudioJournal@@QEAA@XZ @ 0x180053B88 (--0AudioJournal@@QEAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x1800535D4 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ?ReadStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z @ 0x18005396C (-ReadStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z.c)
 *     ?ReadLastLogTime@AudioJournal@@AEAA?AT_ULARGE_INTEGER@@XZ @ 0x180053AAC (-ReadLastLogTime@AudioJournal@@AEAA-AT_ULARGE_INTEGER@@XZ.c)
 *     ?ReadVersion@AudioJournal@@AEAAHXZ @ 0x180053B1C (-ReadVersion@AudioJournal@@AEAAHXZ.c)
 *     memset_0 @ 0x18006B59C (memset_0.c)
 *     ?ResetData@AudioJournal@@AEAAX_N@Z @ 0x1800F711C (-ResetData@AudioJournal@@AEAAX_N@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800F7230 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?WriteStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z @ 0x1800F7254 (-WriteStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z.c)
 *     ?WriteValue@AudioJournal@@AEAAJPEBGKPEAEK@Z @ 0x1800F7300 (-WriteValue@AudioJournal@@AEAAJPEBGKPEAEK@Z.c)
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
             (int)&word_1801A0558);
    }
    else
    {
      memset_0(&unk_1801A00A8, 0, 0x4B0uLL);
      dword_1801A0520 = 100;
      GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
      *(struct _FILETIME *)&qword_1801A00A0 = SystemTimeAsFileTime;
      if ( (unsigned int)AudioJournal::ReadVersion(v3) == 1 )
      {
        v5 = **(union _ULARGE_INTEGER **)&AudioJournal::ReadLastLogTime(v4);
        *(union _ULARGE_INTEGER *)&qword_1801A00A0 = v5;
        if ( !v5.QuadPart )
        {
          GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
          *(struct _FILETIME *)&qword_1801A00A0 = SystemTimeAsFileTime;
          AudioJournal::WriteValue((AudioJournal *)&g_AudioJournal, L"LastLogTime", 0xBu, &qword_1801A00A0, 8u);
        }
        if ( AudioJournal::ReadStreamInfo(
               (AudioJournal *)v5.QuadPart,
               (struct AudioJournal::StreamInfo *)&unk_1801A00A8) < 0 )
          AudioJournal::WriteStreamInfo(
            (AudioJournal *)&g_AudioJournal,
            (struct AudioJournal::StreamInfo *)&unk_1801A00A8);
        if ( AudioJournal::ReadStreamInfo(v6, (struct AudioJournal::StreamInfo *)&unk_1801A0300) < 0 )
          AudioJournal::WriteStreamInfo(
            (AudioJournal *)&g_AudioJournal,
            (struct AudioJournal::StreamInfo *)&unk_1801A0300);
        if ( AudioJournal::ReadStreamInfo(v7, (struct AudioJournal::StreamInfo *)&unk_1801A0490) < 0 )
          AudioJournal::WriteStreamInfo(
            (AudioJournal *)&g_AudioJournal,
            (struct AudioJournal::StreamInfo *)&unk_1801A0490);
      }
      else
      {
        AudioJournal::ResetData((AudioJournal *)&g_AudioJournal, 1);
      }
      v11[0] = off_180155B58;
      v11[1] = &g_AudioJournal;
      v11[7] = v11;
      v8 = CSerialWorkQueue::QueueRecurringItem(
             (__int64)&unk_18019FFF0,
             180000LL,
             0xDBBA0u,
             (__int64)v11,
             &qword_1801A0098);
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
