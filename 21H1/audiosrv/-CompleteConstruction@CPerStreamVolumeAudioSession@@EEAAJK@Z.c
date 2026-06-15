/*
 * XREFs of ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180003020
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x180003298 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ?Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ @ 0x1800032C8 (-Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ.c)
 *     ?TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x180003444 (-TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800206E0 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x1800510D4 (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006ABC0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::CompleteConstruction(CPerStreamVolumeAudioSession *this, char a2)
{
  const unsigned __int16 *Buffer; // rax
  int v5; // eax
  int MixFormat; // edi
  void *v7; // rcx
  bool v8; // of
  unsigned __int64 v9; // rax
  _DWORD *v10; // rax
  void *v11; // rdi
  _DWORD *v12; // rdx
  unsigned int i; // ecx
  __int64 v14; // rax
  int v15; // esi
  void *v16; // rcx
  __int64 v18; // rcx
  unsigned int v19; // eax
  int SessionConfiguration; // eax
  HANDLE ProcessHeap; // rax
  int v22; // [rsp+20h] [rbp-68h]
  struct _GUID v23; // [rsp+40h] [rbp-48h] BYREF
  LPVOID *p_pv; // [rsp+50h] [rbp-38h]
  struct tWAVEFORMATEX *v25; // [rsp+58h] [rbp-30h] BYREF
  char v26; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  LPVOID pv; // [rsp+90h] [rbp+8h] BYREF
  CEndpointCharacteristics *v29; // [rsp+A0h] [rbp+18h] BYREF

  v29 = 0LL;
  Buffer = CAudioEndpointId::GetBuffer((CPerStreamVolumeAudioSession *)((char *)this + 656));
  v5 = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                  + 24LL))(
         g_pEndpointCharacteristicsCache,
         Buffer,
         0LL,
         0LL);
  MixFormat = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x669,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v5,
      (int)&v29);
  }
  else
  {
    pv = 0LL;
    v23 = GUID_00000000_0000_0000_0000_000000000000;
    p_pv = &pv;
    v25 = 0LL;
    v26 = 1;
    MixFormat = CEndpointCharacteristics::GetMixFormat(v29, eHostProcessConnector, &v23, &v25);
    if ( v26 )
    {
      v7 = *p_pv;
      *p_pv = v25;
      if ( v7 )
        CoTaskMemFree(v7);
    }
    if ( MixFormat < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x673,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)MixFormat,
        (int)&v29);
    }
    else
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 808));
      v9 = 4LL * *((unsigned __int16 *)pv + 1);
      v8 = (*((unsigned __int16 *)pv + 1) * (unsigned __int128)4uLL) >> 64 != 0;
      *((_DWORD *)this + 240) = *((unsigned __int16 *)pv + 1);
      if ( v8 )
        v9 = -1LL;
      v10 = operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
      v11 = (void *)*((_QWORD *)this + 121);
      v12 = v10;
      *((_QWORD *)this + 121) = v10;
      if ( v11 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v11);
        v12 = (_DWORD *)*((_QWORD *)this + 121);
      }
      if ( v12 )
      {
        for ( i = 0; i < *((_DWORD *)this + 240); v12[v14] = 1065353216 )
          v14 = i++;
        if ( this != (CPerStreamVolumeAudioSession *)-808LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 808));
        v15 = a2 & 2;
        *((_BYTE *)this + 984) = v15 != 0;
        if ( !v15 )
          goto LABEL_16;
        v18 = *((_QWORD *)this + 124);
        *((_QWORD *)this + 124) = 0LL;
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        v19 = CPerStreamVolumeAudioSession::TryOpenSessionPropertyStore(this, (struct IPropertyStore **)this + 124);
        if ( (int)wil::details::in1diag3::Log_IfFailedWithExpected(
                    retaddr,
                    (void *)0x690,
                    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                    (const char *)v19,
                    2,
                    2) >= 0
          && *((_QWORD *)this + 124)
          && (SessionConfiguration = CPerStreamVolumeAudioSession::LoadSessionConfiguration(this),
              MixFormat = SessionConfiguration,
              SessionConfiguration < 0) )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x694,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (const char *)(unsigned int)SessionConfiguration,
            v22);
        }
        else
        {
LABEL_16:
          MixFormat = 0;
        }
      }
      else
      {
        MixFormat = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x67B,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
          (const char *)0x8007000ELL,
          (int)&v29);
        if ( this != (CPerStreamVolumeAudioSession *)-808LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 808));
      }
    }
    v16 = pv;
    pv = 0LL;
    if ( v16 )
      CoTaskMemFree(v16);
  }
  if ( v29 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v29 + 16LL))(v29);
  return (unsigned int)MixFormat;
}
