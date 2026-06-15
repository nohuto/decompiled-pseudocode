/*
 * XREFs of ?HandleDriverNotification@CDriverListener@@AEAAXPEBXK@Z @ 0x1800333EC
 * Callers:
 *     ?s_DriverWnfCallback@CDriverListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180033560 (-s_DriverWnfCallback@CDriverListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDriverListener::HandleDriverNotification(CDriverListener *this, _OWORD *a2, int a3)
{
  __int64 v4; // rax
  _OWORD *v5; // r8
  __int128 v6; // xmm1
  int v7; // [rsp+50h] [rbp+18h] BYREF

  if ( a3 == 488 && a2 )
  {
    v4 = 3LL;
    v5 = (_OWORD *)((char *)this + 8);
    do
    {
      *v5 = *a2;
      v5[1] = a2[1];
      v5[2] = a2[2];
      v5[3] = a2[3];
      v5[4] = a2[4];
      v5[5] = a2[5];
      v5[6] = a2[6];
      v5 += 8;
      v6 = a2[7];
      a2 += 8;
      *(v5 - 1) = v6;
      --v4;
    }
    while ( v4 );
    *v5 = *a2;
    v7 = 1;
    v5[1] = a2[1];
    v5[2] = a2[2];
    v5[3] = a2[3];
    v5[4] = a2[4];
    v5[5] = a2[5];
    *((_QWORD *)v5 + 12) = *((_QWORD *)a2 + 12);
    if ( (int)RtlPublishWnfStateData(WNF_AVLC_SHOW_VOLUMELIMITWARNING, 0LL, &v7, 4LL, 0LL) >= 0 )
      *((_DWORD *)this + 124) = 1;
  }
}
