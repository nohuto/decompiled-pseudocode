/*
 * XREFs of ?RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x14004B150
 * Callers:
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x14000F580 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 * Callees:
 *     ??1?$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ @ 0x140003220 (--1-$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?CopyTo@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x14004674C (-CopyTo@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CConnectionInstance::RemoveCaptureConnection(
        CConnectionInstance *this,
        struct IAudioProcessor *a2,
        __int64 a3)
{
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // edx
  __int64 v10; // [rsp+50h] [rbp+20h] BYREF
  __int64 v11; // [rsp+68h] [rbp+38h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 40);
    if ( v7 == 2 )
    {
      if ( (int)ATL::CComPtrBase<IAudioProcessingObject>::CopyTo((_QWORD *)(*(_QWORD *)(v6 + 32) + 40LL), &v11) < 0 )
        goto LABEL_16;
      (*(void (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD))(*(_QWORD *)a2 + 96LL))(
        a2,
        a3,
        v11,
        *((_QWORD *)this + 1));
      Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>(&v11);
    }
    else if ( ((v7 - 1) & 0xFFFFFFFD) == 0 )
    {
      if ( (****(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(v6 + 32))(
             **(_QWORD **)(v6 + 32),
             &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
             &v10) < 0 )
        goto LABEL_16;
      (*(void (__fastcall **)(struct IAudioProcessor *, __int64, __int64))(*(_QWORD *)a2 + 120LL))(a2, a3, v10);
      Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>(&v10);
    }
  }
  v8 = *((_QWORD *)this + 3);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 40);
    if ( v9 == 2 )
    {
      if ( (int)ATL::CComPtrBase<IAudioProcessingObject>::CopyTo((_QWORD *)(*(_QWORD *)(v8 + 32) + 40LL), &v11) >= 0 )
      {
        (*(void (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD))(*(_QWORD *)a2 + 80LL))(
          a2,
          a3,
          v11,
          *((_QWORD *)this + 1));
        Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>(&v11);
      }
    }
    else if ( ((v9 - 1) & 0xFFFFFFF9) == 0
           && v9 != 7
           && (****(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(v8 + 32))(
                **(_QWORD **)(v8 + 32),
                &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
                &v10) >= 0 )
    {
      (*(void (__fastcall **)(struct IAudioProcessor *, __int64, __int64))(*(_QWORD *)a2 + 120LL))(a2, a3, v10);
      Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>(&v10);
    }
  }
LABEL_16:
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
}
