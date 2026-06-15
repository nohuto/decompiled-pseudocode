/*
 * XREFs of ??$_Emplace_reallocate@AEBQEAUIAudioStreamInfo@@@?$vector@PEAUIAudioStreamInfo@@V?$allocator@PEAUIAudioStreamInfo@@@std@@@std@@QEAAPEAPEAUIAudioStreamInfo@@QEAPEAU2@AEBQEAU2@@Z @ 0x180033F80
 * Callers:
 *     ?AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x180033E60 (-AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z.c)
 *     ?AddStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x1800E4A80 (-AddStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BD0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180056810 (--2@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x180074C5B (memmove_0.c)
 */

_QWORD *__fastcall std::vector<IAudioStreamInfo *>::_Emplace_reallocate<IAudioStreamInfo * const &>(
        _QWORD *a1,
        _BYTE *a2,
        _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  SIZE_T v12; // r15
  unsigned __int64 v13; // rdi
  HANDLE ProcessHeap; // rax
  _QWORD *v15; // rdi
  _QWORD *v16; // rsi
  _BYTE *v17; // r8
  _BYTE *v18; // rdx
  void *v19; // rcx
  size_t v20; // r8
  unsigned __int64 v22; // rcx
  void *v23; // rax

  v6 = (__int64)&a2[-*a1] >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) || (v11 = v10 + v9, v10 + v9 < v8) )
    v11 = v8;
  v12 = v11;
  v13 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
  {
    v13 = -1LL;
  }
  else if ( v12 < 512 )
  {
    if ( v12 * 8 )
    {
      ProcessHeap = GetProcessHeap();
      v15 = HeapAlloc(ProcessHeap, 0, v12 * 8);
      goto LABEL_9;
    }
    goto LABEL_21;
  }
  v22 = v13 + 39;
  if ( v13 + 39 < v13 )
    v22 = -1LL;
  v23 = operator new(v22);
  if ( v23 )
  {
    v15 = (_QWORD *)(((unsigned __int64)v23 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v15 - 1) = v23;
    goto LABEL_9;
  }
  _o__invalid_parameter_noinfo_noreturn();
  __debugbreak();
LABEL_21:
  v15 = 0LL;
LABEL_9:
  v16 = &v15[v6];
  *v16 = *a3;
  v17 = (_BYTE *)a1[1];
  v18 = (_BYTE *)*a1;
  v19 = v15;
  if ( a2 == v17 )
  {
    v20 = v17 - v18;
  }
  else
  {
    memmove_0(v15, v18, a2 - v18);
    v19 = v16 + 1;
    v20 = a1[1] - (_QWORD)a2;
    v18 = a2;
  }
  memmove_0(v19, v18, v20);
  if ( *a1 )
    std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  *a1 = v15;
  a1[1] = &v15[v8];
  a1[2] = &v15[v12];
  return v16;
}
