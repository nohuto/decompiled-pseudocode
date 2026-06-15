/*
 * XREFs of ?RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x18003577C
 * Callers:
 *     ?RegisterAudioStateMonitor@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x18001C930 (-RegisterAudioStateMonitor@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEB.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003F90 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000F720 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18001E1A4 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??1?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x18001F448 (--1-$unique_ptr@UAudioStateMonitor@@U-$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@X.c)
 *     ?GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAKPEBG@Z @ 0x180035CA8 (-GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA-AW4__MIDL___MIDL_itf_audio.c)
 *     ??$_Insert_unverified@AEAU?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@1@@Z @ 0x180035E2C (--$_Insert_unverified@AEAU-$pair@$$CB_KV-$unique_ptr@UAudioStateMonitor@@U-$default_delete@UAudi.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003F69C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioStateMonitorManager::RegisterAudioStateMonitor(
        AudioStateMonitorManager *this,
        enum AUDIO_DIRECTION *a2,
        enum _AUDIO_STREAM_CATEGORY *a3,
        const unsigned __int16 *a4,
        unsigned __int64 *a5)
{
  AudioStateMonitorManager *v8; // rdi
  struct _RTL_CRITICAL_SECTION *v9; // r15
  void **v10; // rax
  __int64 v11; // rdx
  void *v12; // rcx
  void **v13; // rsi
  __int64 v14; // rdx
  _DWORD *v15; // rax
  void *v16; // rbp
  DWORD LastError; // ebx
  unsigned __int64 v18; // r9
  int v19; // eax
  unsigned int v20; // ebx
  unsigned __int64 v21; // r9
  _DWORD *v22; // rax
  void *v23; // rcx
  int SoundLevelForExtendedAudioCategory; // ebx
  _DWORD *v25; // rax
  void *v26; // rcx
  char *v27; // rbp
  __int64 v28; // rbx
  _QWORD *v29; // rdi
  _QWORD *v30; // rax
  __int64 v32; // [rsp+20h] [rbp-58h]
  void *v33[2]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v34[16]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v8 = this;
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v33[1] = v9;
  v10 = (void **)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v10;
  if ( v10 )
  {
    *v10 = 0LL;
    v10[1] = 0LL;
    v10[2] = 0LL;
    v10[3] = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  v33[0] = v13;
  if ( !v13 )
  {
    v14 = 80LL;
LABEL_39:
    v20 = -2147024882;
    goto LABEL_40;
  }
  if ( a2 )
  {
    v15 = operator new(4uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v15 )
      *v15 = *(_DWORD *)a2;
    else
      v15 = 0LL;
    v12 = *v13;
    *v13 = v15;
    if ( v12 )
    {
      operator delete(v12, (const struct std::nothrow_t *)4);
      v15 = *v13;
    }
    if ( !v15 )
    {
      v14 = 84LL;
      goto LABEL_39;
    }
  }
  if ( a4 )
  {
    v16 = v13[2];
    if ( v16 )
    {
      LastError = GetLastError();
      CoTaskMemFree(v16);
      SetLastError(LastError);
    }
    v13[2] = 0LL;
    v18 = -1LL;
    do
      ++v18;
    while ( a4[v18] );
    v19 = _AllocStringWorker<CTCoAllocPolicy>((__int64)v12, v11, a4, v18, v32, (unsigned __int16 **)v13 + 2);
    v20 = v19;
    if ( v19 < 0 )
    {
      v21 = (unsigned int)v19;
      v14 = 89LL;
LABEL_41:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\audiostatemonitormanager\\audiostatemonitormanager.cpp",
        (const char *)v21);
      goto LABEL_45;
    }
    v8 = this;
  }
  if ( a3 )
  {
    v22 = operator new(4uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v22 )
      *v22 = 0;
    else
      v22 = 0LL;
    if ( !v22 )
    {
      v14 = 96LL;
      goto LABEL_39;
    }
    if ( *a3 > (unsigned int)AudioCategory_Media )
    {
      v20 = -2147024809;
      v14 = 97LL;
LABEL_40:
      v21 = v20;
      goto LABEL_41;
    }
    *v22 = *a3;
    v23 = v13[1];
    v13[1] = v22;
    if ( v23 )
      operator delete(v23, (const struct std::nothrow_t *)4);
  }
  SoundLevelForExtendedAudioCategory = AudioStateMonitorManager::GetSoundLevelForExtendedAudioCategory(
                                         v8,
                                         a2,
                                         v13[1],
                                         a4);
  v25 = operator new(4uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v25 )
    *v25 = SoundLevelForExtendedAudioCategory;
  else
    v25 = 0LL;
  v26 = v13[3];
  v13[3] = v25;
  if ( v26 )
  {
    operator delete(v26, (const struct std::nothrow_t *)4);
    v25 = v13[3];
  }
  if ( !v25 )
  {
    v14 = 104LL;
    goto LABEL_39;
  }
  v33[0] = 0LL;
  v27 = (char *)v8 + 56;
  v28 = **((_QWORD **)v8 + 8);
  if ( *((_QWORD *)v8 + 9) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("list<T> too long");
  v29 = *(_QWORD **)(v28 + 8);
  v30 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  v30[2] = v13;
  v30[3] = v13;
  *v30 = v28;
  v30[1] = v29;
  ++*((_QWORD *)v27 + 2);
  *(_QWORD *)(v28 + 8) = v30;
  *v29 = v30;
  std::_Hash<std::_Umap_traits<unsigned __int64,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>,0>>::_Insert_unverified<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>>>>(
    v27,
    v34,
    **((_QWORD **)v27 + 1) + 16LL);
  *a5 = (unsigned __int64)v13;
  v20 = 0;
LABEL_45:
  wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>::~unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>(v33);
  if ( v9 )
    LeaveCriticalSection(v9);
  return v20;
}
