/*
 * XREFs of ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800C0560
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x18005D304 (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18005D96C (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180072324 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800BBF40 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1800BE26C (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x1800BE338 (WPP_SF_qd.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeSoftware::InitializeAPOs(
        CVolumeSoftware *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  CVolumeSoftware *v5; // rsi
  int v6; // edi
  char *v7; // r14
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  __int64 i; // r15
  struct _RTL_CRITICAL_SECTION *v10; // rcx
  unsigned int v11; // eax
  unsigned int j; // edi
  _OWORD *v13; // rax
  int v14; // eax
  int *v16; // rbx
  unsigned int v17; // [rsp+30h] [rbp-98h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+38h] [rbp-90h]
  char *v19; // [rsp+40h] [rbp-88h]
  ATL::CAtlException *v20; // [rsp+48h] [rbp-80h] BYREF
  _OWORD v21[7]; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v23; // [rsp+E0h] [rbp+18h] BYREF
  struct IAudioProcessingObject **v24; // [rsp+E8h] [rbp+20h]

  v24 = a4;
  v5 = this;
  v23 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x37u,
      (__int64)&WPP_0837af417b5438e10b8c3569af41ec07_Traceguids,
      this);
  }
  if ( !a3 )
    return 0;
  v7 = (char *)v5 + 256;
  v19 = (char *)v5 + 256;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 256));
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)v5 + 256);
  v18 = (struct _RTL_CRITICAL_SECTION *)((char *)v5 + 256);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= a3 )
    {
      if ( *((_QWORD *)v5 + 31) )
      {
LABEL_23:
        v11 = v23;
        if ( *((_DWORD *)v5 + 31) != v23 && *((_DWORD *)v5 + 31) )
        {
          for ( j = 1; ; ++j )
          {
            v17 = j;
            if ( j >= v11 )
            {
              *((_DWORD *)v5 + 31) = v11;
              break;
            }
            v13 = (_OWORD *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                              (_QWORD *)v5 + 11,
                              0LL);
            try
            {
              v21[0] = *v13;
              v21[1] = v13[1];
              v21[2] = v13[2];
              v21[3] = v13[3];
              ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow(
                (_QWORD *)v5 + 11,
                j,
                (__int64)v21);
            }
            catch ( ATL::CAtlException *v20 )
            {
              v16 = (int *)v20;
              if ( *(_DWORD *)v20 == -1073741571 )
                _o__resetstkoflw();
              v6 = *v16;
              if ( *v16 < 0 )
              {
                if ( !v19 )
                  goto LABEL_41;
                v10 = v18;
LABEL_15:
                LeaveCriticalSection(v10);
                goto LABEL_41;
              }
              v5 = this;
              v8 = v18;
              j = v17;
              v7 = v19;
            }
            v11 = v23;
          }
        }
        if ( v7 )
          LeaveCriticalSection(v8);
        v14 = (*(__int64 (__fastcall **)(CVolumeSoftware *))(*(_QWORD *)v5 + 216LL))(v5);
        v6 = v14;
        if ( v14 >= 0 )
        {
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_qd(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x39u,
              (__int64)&WPP_0837af417b5438e10b8c3569af41ec07_Traceguids,
              v5,
              v14);
          }
          goto LABEL_41;
        }
      }
      else
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x38u, (__int64)&WPP_0837af417b5438e10b8c3569af41ec07_Traceguids);
        }
        v6 = -2147467262;
        if ( v5 != (CVolumeSoftware *)-256LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 256));
      }
LABEL_42:
      AudSrvTraceLoggingErrorHelper("CVolumeSoftware::InitializeAPOs", 2254, v6);
      return (unsigned int)v6;
    }
    Microsoft::WRL::WeakRef::~WeakRef((CVolumeSoftware *)((char *)v5 + 248));
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64))v24[i]->lpVtbl->QueryInterface)(
           v24[i],
           &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
           (__int64)v5 + 248) >= 0 )
      break;
LABEL_12:
    ;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)v5 + 31) + 40LL))(*((_QWORD *)v5 + 31), &v23);
  if ( v6 >= 0 )
  {
    if ( *((_QWORD *)v5 + 31) )
      goto LABEL_23;
    goto LABEL_12;
  }
  if ( v5 != (CVolumeSoftware *)-256LL )
  {
    v10 = (struct _RTL_CRITICAL_SECTION *)((char *)v5 + 256);
    goto LABEL_15;
  }
LABEL_41:
  if ( v6 < 0 )
    goto LABEL_42;
  return (unsigned int)v6;
}
