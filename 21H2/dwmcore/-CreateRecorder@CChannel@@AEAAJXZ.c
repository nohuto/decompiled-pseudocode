/*
 * XREFs of ?CreateRecorder@CChannel@@AEAAJXZ @ 0x1800D96E0
 * Callers:
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18005D71C (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 * Callees:
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180059580 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CChannel::CreateRecorder(CChannel *this)
{
  struct CCommandBatch **v1; // rdi
  int v2; // ebx
  PSLIST_ENTRY v3; // rax
  unsigned int v4; // ecx
  PSLIST_ENTRY v5; // rcx
  struct _SLIST_ENTRY *Next; // rdx
  struct _SLIST_ENTRY **v7; // r9
  PSLIST_ENTRY v8; // r8
  struct _SLIST_ENTRY **v9; // r10
  int v10; // eax
  __int64 v11; // rcx

  v1 = (struct CCommandBatch **)((char *)this + 160);
  v2 = 0;
  v3 = InterlockedPopEntrySList((PSLIST_HEADER)(*((_QWORD *)this + 6) + 192LL));
  if ( v3 )
  {
    v5 = v3 - 4;
    Next = v3[-4].Next;
    if ( Next != &v3[-4] )
    {
      v7 = (struct _SLIST_ENTRY **)*((_QWORD *)&v5->Next + 1);
      if ( *(&Next->Next + 1) != v5
        || *v7 != v5
        || (*v7 = Next,
            v8 = v5 + 1,
            *((_QWORD *)&Next->Next + 1) = v7,
            v9 = (struct _SLIST_ENTRY **)*((_QWORD *)&v5[1].Next + 1),
            *(&v5[1].Next->Next + 1) != &v5[1])
        || *v9 != v8
        || *(&Next->Next->Next + 1) != Next
        || *v7 != Next )
      {
        __fastfail(3u);
      }
      *v9 = Next;
      *((_QWORD *)&v5[1].Next + 1) = *((_QWORD *)&Next->Next + 1);
      **((_QWORD **)&Next->Next + 1) = v8;
      *((_QWORD *)&Next->Next + 1) = v9;
    }
    v5[2].Next = 0LL;
    *((_DWORD *)&v5[2].Next + 2) = 0;
    *((_DWORD *)&v5[2].Next + 3) = 0;
    v5[3].Next = 0LL;
    *((_DWORD *)&v5[3].Next + 2) = 0;
    *((_QWORD *)&v5->Next + 1) = v5;
    v5->Next = v5;
    *v1 = (struct CCommandBatch *)v5;
  }
  else
  {
    v10 = CCommandBatch::Create(v4, v1);
    v2 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x20Bu, 0LL);
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v2, 0x11Du, 0LL);
  }
  return (unsigned int)v2;
}
