/*
 * XREFs of ?OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z @ 0x1801D82B8
 * Callers:
 *     ?s_OnReceiveInputThreadMessage@CInputManager@@KAJPEAXPEBXH@Z @ 0x180223730 (-s_OnReceiveInputThreadMessage@CInputManager@@KAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x1800965EC (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 */

void __fastcall CManipulation::OnEdgyDetected(CManipulation *this, const struct EdgyDetectedParams *a2)
{
  __int64 v2; // rcx
  __int128 *v3; // r9
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // ecx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  int v11; // [rsp+20h] [rbp-78h]
  __int64 v12; // [rsp+38h] [rbp-60h]
  _QWORD v13[2]; // [rsp+40h] [rbp-58h] BYREF
  _OWORD v14[3]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v15; // [rsp+80h] [rbp-18h]

  if ( CNotificationResource::ShouldNotify(this) )
  {
    v5 = *(_QWORD *)(v2 + 48);
    v6 = *(unsigned int *)(v2 + 56);
    if ( v5 )
      v7 = *(_DWORD *)(v5 + 68);
    else
      v7 = 0;
    v8 = *v3;
    v9 = v3[1];
    v13[0] = v7;
    v14[0] = v8;
    v10 = v3[2];
    v14[1] = v9;
    *(_QWORD *)&v9 = *((_QWORD *)v3 + 6);
    LOWORD(v11) = 0;
    v13[1] = v6;
    v14[2] = v10;
    v15 = v9;
    CoreUICallSend(v4, v13, 2LL, 12LL, v11, &unk_1802CFB32, (unsigned int)v14, v12);
  }
}
