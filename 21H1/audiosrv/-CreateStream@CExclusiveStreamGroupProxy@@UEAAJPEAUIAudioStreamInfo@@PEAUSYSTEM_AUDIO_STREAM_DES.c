/*
 * XREFs of ?CreateStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800E5090
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800D8048 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?AddStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x1800E49C0 (-AddStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z.c)
 */

__int64 __fastcall CExclusiveStreamGroupProxy::CreateStream(
        unsigned __int64 this,
        struct IAudioStreamInfo *a2,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a3,
        struct IAudioGraphCallback *a4,
        unsigned int a5,
        struct SYSTEM_AUDIO_STREAM *a6)
{
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v7; // rdi
  int v10; // eax
  unsigned int v11; // ebp
  __int64 v13; // rcx
  _OWORD *v14; // rax
  __int64 v15; // rdx
  __int128 v16; // xmm1
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rax
  struct IAudioGraphCallback *v20; // rcx
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v7 = a3;
  v10 = (*(__int64 (__fastcall **)(_QWORD, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, struct SYSTEM_AUDIO_STREAM *))(**(_QWORD **)(this + 80) + 24LL))(
          *(_QWORD *)(this + 80),
          a3,
          a4,
          a6);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v13 = 2LL;
    v14 = (_OWORD *)(this + 272);
    v15 = 128LL;
    do
    {
      *v14 = *(_OWORD *)v7;
      v14[1] = *((_OWORD *)v7 + 1);
      v14[2] = *((_OWORD *)v7 + 2);
      v14[3] = *((_OWORD *)v7 + 3);
      v14[4] = *((_OWORD *)v7 + 4);
      v14[5] = *((_OWORD *)v7 + 5);
      v14[6] = *((_OWORD *)v7 + 6);
      v14 += 8;
      v16 = *((_OWORD *)v7 + 7);
      v7 = (struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *)((char *)v7 + 128);
      *(v14 - 1) = v16;
      --v13;
    }
    while ( v13 );
    *v14 = *(_OWORD *)v7;
    v14[1] = *((_OWORD *)v7 + 1);
    v14[2] = *((_OWORD *)v7 + 2);
    v17 = *(_QWORD *)(this + 40);
    *(_QWORD *)(this + 400) = v17;
    v18 = *(unsigned __int16 *)(v17 + 16);
    v19 = *(_QWORD *)(this + 48);
    *(_DWORD *)(this + 392) = v18 + 18;
    *(_QWORD *)(this + 424) = v19;
    v20 = *(struct IAudioGraphCallback **)(this + 576);
    if ( v20 != a4 )
    {
      if ( a4 )
      {
        (*(void (__fastcall **)(struct IAudioGraphCallback *, __int64))(*(_QWORD *)a4 + 8LL))(a4, 128LL);
        v20 = *(struct IAudioGraphCallback **)(this + 576);
      }
      *(_QWORD *)(this + 576) = a4;
      if ( v20 )
        (*(void (__fastcall **)(struct IAudioGraphCallback *, __int64))(*(_QWORD *)v20 + 16LL))(v20, v15);
    }
    *((_QWORD *)a6 + 6) = this & -(__int64)(this != 8);
    v21 = *(_QWORD *)(this + 264);
    while ( v21 >= 0 )
    {
      if ( (_DWORD)v21 != 0x7FFFFFFF )
      {
        v22 = v21;
        v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(this + 264), v21 + 1, v21);
        if ( v22 != v21 )
          continue;
      }
      goto LABEL_16;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
      (Microsoft::WRL::Details *)(2 * v21 + 16),
      (volatile int *)v15);
LABEL_16:
    CBaseStreamGroupProxy::AddStream((CBaseStreamGroupProxy *)this, a2, a6, a5);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57A,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v10);
    return v11;
  }
}
