/*
 * XREFs of ?CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z @ 0x1C01DB008
 * Callers:
 *     ForwardTouchMessage @ 0x1C01DBEFC (ForwardTouchMessage.c)
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z @ 0x1C01DAC9C (-AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z.c)
 *     ?CopyTouchInputListSorted@@YAHPEBUtagTOUCHINPUTLIST@@PEAU1@HPEAIPEAH@Z @ 0x1C01DADBC (-CopyTouchInputListSorted@@YAHPEBUtagTOUCHINPUTLIST@@PEAU1@HPEAIPEAH@Z.c)
 */

struct HTOUCHINPUT__ *__fastcall CreateValidTouchInputInfo(
        struct tagTHREADINFO *a1,
        __int64 a2,
        unsigned int a3,
        struct tagTOUCHINPUT *const a4)
{
  struct HTOUCHINPUT__ *v4; // rdi
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  NTSTATUS v10; // ecx
  int v11; // eax
  struct tagTOUCHINPUT *v12; // rbx
  ULONG v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-2Ch]
  struct tagTOUCHINPUT *v19[2]; // [rsp+38h] [rbp-28h]
  _DWORD v20[2]; // [rsp+48h] [rbp-18h] BYREF
  struct tagTOUCHINPUT *v21; // [rsp+50h] [rbp-10h]
  __int64 v22; // [rsp+58h] [rbp-8h]
  unsigned int v23; // [rsp+88h] [rbp+28h] BYREF

  v4 = 0LL;
  v22 = 0LL;
  v23 = 0;
  v8 = 48LL * a3;
  *(_OWORD *)v19 = 0LL;
  if ( v8 > 0xFFFFFFFF )
  {
    v10 = -1073741675;
    goto LABEL_10;
  }
  v18 = 0;
  v17 = a3;
  v19[0] = (struct tagTOUCHINPUT *)Win32AllocPool((unsigned int)v8, 1952871253LL);
  if ( !v19[0] )
  {
    v10 = -1073741801;
LABEL_10:
    v14 = RtlNtStatusToDosError(v10);
    UserSetLastError(v14, v15, v16);
    return 0LL;
  }
  v20[0] = a3;
  v20[1] = a3;
  v21 = a4;
  v11 = CopyTouchInputListSorted((const struct tagTOUCHINPUTLIST *)v20, (struct tagTOUCHINPUTLIST *)&v17, v9, &v23);
  v12 = v19[0];
  if ( v11 )
    v4 = AllocTouchInputInfo(a1, v18, v19[0], v23);
  if ( v12 )
    Win32FreePool(v12);
  return v4;
}
