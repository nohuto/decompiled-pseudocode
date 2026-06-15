/*
 * XREFs of ?GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z @ 0x1800C0100
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     floorf_0 @ 0x180074B13 (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_dd @ 0x1800C2F2C (WPP_SF_dd.c)
 *     WPP_SF_g @ 0x1800C2FD0 (WPP_SF_g.c)
 */

__int64 __fastcall CVolumeControlBase::GetVolumeStepInfo(CVolumeControlBase *this, unsigned int *a2, unsigned int *a3)
{
  int v5; // edi
  int v7; // ebx
  unsigned int v8; // r9d
  float v9; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 || !a3 )
  {
    v5 = -2147467261;
LABEL_3:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetVolumeStepInfo", 250, v5);
    return (unsigned int)v5;
  }
  *a2 = 0;
  *a3 = *((_DWORD *)this + 14);
  v5 = (*(__int64 (__fastcall **)(CVolumeControlBase *, float *))(*(_QWORD *)this + 112LL))(this, &v9);
  if ( v5 < 0 )
    goto LABEL_3;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_g(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_0837af417b5438e10b8c3569af41ec07_Traceguids);
  }
  v7 = *((_DWORD *)this + 14) - 1;
  v8 = (int)floorf_0((float)((float)v7 * v9) + 0.5);
  if ( v8 >= v7 )
    v8 = v7;
  *a2 = v8;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_0837af417b5438e10b8c3569af41ec07_Traceguids);
  }
  return (unsigned int)v5;
}
