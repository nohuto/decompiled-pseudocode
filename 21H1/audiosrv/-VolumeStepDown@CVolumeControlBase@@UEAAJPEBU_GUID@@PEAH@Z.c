/*
 * XREFs of ?VolumeStepDown@CVolumeControlBase@@UEAAJPEBU_GUID@@PEAH@Z @ 0x1800C2BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     floorf_0 @ 0x180074B13 (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800BBF40 (WPP_SF_.c)
 */

__int64 __fastcall CVolumeControlBase::VolumeStepDown(CVolumeControlBase *this, const struct _GUID *a2, int *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  float v9; // xmm6_4
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  float v12; // [rsp+50h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xFu, (__int64)&WPP_0837af417b5438e10b8c3569af41ec07_Traceguids);
  }
  v6 = (*(__int64 (__fastcall **)(CVolumeControlBase *, float *))(*(_QWORD *)this + 112LL))(this, &v12);
  if ( v6 < 0 )
  {
    v7 = 300LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9 = (float)(*((_DWORD *)this + 14) - 1);
  v12 = floorf_0((float)((float)(v9 * v12) + 0.5) - 1.0) / v9;
  if ( v12 <= 0.0 )
    v12 = 0.0;
  v6 = (*(__int64 (__fastcall **)(CVolumeControlBase *, __int64, const struct _GUID *, int *))(*(_QWORD *)this + 96LL))(
         this,
         v10,
         a2,
         a3);
  if ( v6 < 0 )
  {
    v7 = 305LL;
    goto LABEL_7;
  }
  return 0LL;
}
