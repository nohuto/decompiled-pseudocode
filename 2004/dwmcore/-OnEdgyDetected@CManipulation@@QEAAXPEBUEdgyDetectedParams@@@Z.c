/*
 * XREFs of ?OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z @ 0x1801D5938
 * Callers:
 *     ?s_OnReceiveInputThreadMessage@CInputManager@@KAJPEAXPEBXH@Z @ 0x180220D60 (-s_OnReceiveInputThreadMessage@CInputManager@@KAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x1800A01FC (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
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
  _QWORD v11[2]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v12; // [rsp+50h] [rbp-48h]
  __int128 v13; // [rsp+60h] [rbp-38h]
  __int128 v14; // [rsp+70h] [rbp-28h]
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
    v11[0] = v7;
    v12 = v8;
    v10 = v3[2];
    v13 = v9;
    *(_QWORD *)&v9 = *((_QWORD *)v3 + 6);
    v11[1] = v6;
    v14 = v10;
    v15 = v9;
    CoreUICallSend(v4, v11, 2LL, 12LL, 0, &unk_1802CCE42);
  }
}
