/*
 * XREFs of ??$_Emplace_reallocate@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180005E1C
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUID@@@Z @ 0x180005A20 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUI.c)
 *     ?RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z @ 0x1800CADBC (-RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BE0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180056710 (--2@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180058BB4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800C6B58 (--$_Uninitialized_move@PEAV-$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>(
        SIZE_T *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  SIZE_T v12; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v14; // rax
  __int64 *v15; // r8
  __int64 *v16; // rcx
  _QWORD *v17; // rdx
  unsigned __int64 v19; // rcx
  void *v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+20h] [rbp-48h]

  v6 = (__int64)((__int64)a2 - *a1) >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v7 + 1;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  v22 = 8 * v11;
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  if ( v12 >= 0x1000 )
  {
    v19 = v12 + 39;
    if ( v12 + 39 < v12 )
      v19 = -1LL;
    v20 = operator new(v19);
    if ( !v20 )
    {
      _o__invalid_parameter_noinfo_noreturn();
      goto LABEL_23;
    }
    v12 = ((unsigned __int64)v20 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
    *(_QWORD *)(v12 - 8) = v20;
  }
  else if ( v12 )
  {
    ProcessHeap = GetProcessHeap();
    v12 = (SIZE_T)HeapAlloc(ProcessHeap, 0, v12);
  }
  v6 = v12 + 8 * v6;
  v14 = *a3;
  *a3 = 0LL;
  *(_QWORD *)v6 = v14;
  v15 = (__int64 *)a1[1];
  v16 = (__int64 *)*a1;
  if ( a2 == v15 )
  {
    v17 = (_QWORD *)v12;
    while ( v16 != v15 )
    {
LABEL_23:
      v21 = *v16;
      *v16 = 0LL;
      *v17++ = v21;
      ++v16;
    }
  }
  else
  {
    std::_Uninitialized_move<wil::com_ptr_t<IAudioStreamVolumeCallback,wil::err_returncode_policy> *,wil::com_ptr_t<IAudioStreamVolumeCallback,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IAudioStreamVolumeCallback,wil::err_returncode_policy>>>(
      v16,
      a2,
      v12);
    std::_Uninitialized_move<wil::com_ptr_t<IAudioStreamVolumeCallback,wil::err_returncode_policy> *,wil::com_ptr_t<IAudioStreamVolumeCallback,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IAudioStreamVolumeCallback,wil::err_returncode_policy>>>(
      a2,
      a1[1],
      v6 + 8);
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>>(*a1, a1[1]);
    std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v12;
  a1[1] = v12 + 8 * v8;
  a1[2] = v12 + v22;
  return v6;
}
