/*
 * XREFs of ?SendBindCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJIHPEAU_CSM_BUFFER_INFO_WRAPPER@@IPEA_K@Z @ 0x1C02896E8
 * Callers:
 *     ?VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHPEAU_CSM_BUFFER_INFO_WRAPPER@@IPEA_K@Z @ 0x1C02B24B0 (-VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHPEAU_CSM_BUFFER_INFO_WRAPPER@@IPEA_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 */

__int64 __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendBindCompositionSurface(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this,
        int a2,
        int a3,
        struct _CSM_BUFFER_INFO_WRAPPER *a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  _OWORD *v10; // rax
  __int64 v11; // rcx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v29; // [rsp+30h] [rbp-D0h] BYREF
  int v30; // [rsp+38h] [rbp-C8h] BYREF
  int v31; // [rsp+3Ch] [rbp-C4h]
  int v32; // [rsp+40h] [rbp-C0h]
  int v33; // [rsp+44h] [rbp-BCh]
  unsigned __int64 v34; // [rsp+48h] [rbp-B8h]
  _DWORD v35[6]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v36[1040]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v37; // [rsp+478h] [rbp+378h]
  int v38; // [rsp+47Ch] [rbp+37Ch]

  v35[5] = 0;
  v38 = 0;
  v35[0] = 1886220131;
  v35[2] = 5;
  v35[1] = -1073741823;
  memset(v36, 0, sizeof(v36));
  v33 = 0;
  v10 = v36;
  v34 = 0LL;
  v11 = 8LL;
  v30 = 1886220131;
  v31 = -1073741823;
  v32 = 6;
  v29 = 24;
  v35[3] = a2;
  v35[4] = a3;
  do
  {
    v12 = *((_OWORD *)a4 + 1);
    *v10 = *(_OWORD *)a4;
    v13 = *((_OWORD *)a4 + 2);
    v10[1] = v12;
    v14 = *((_OWORD *)a4 + 3);
    v10[2] = v13;
    v15 = *((_OWORD *)a4 + 4);
    v10[3] = v14;
    v16 = *((_OWORD *)a4 + 5);
    v10[4] = v15;
    v17 = *((_OWORD *)a4 + 6);
    v10[5] = v16;
    v18 = *((_OWORD *)a4 + 7);
    a4 = (struct _CSM_BUFFER_INFO_WRAPPER *)((char *)a4 + 128);
    v10[6] = v17;
    v10 += 8;
    *(v10 - 1) = v18;
    --v11;
  }
  while ( v11 );
  v19 = *((_QWORD *)this + 1);
  *v10 = *(_OWORD *)a4;
  v37 = a5;
  v20 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, int *, unsigned int *))(*(_QWORD *)v19 + 32LL))(
          v19,
          v35,
          1072LL,
          &v30,
          &v29);
  v24 = v20;
  if ( v20 < 0 )
  {
    v25 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v25 + 24) = v24;
    WdLogEvent5_WdWarning(v25);
    return (unsigned int)v24;
  }
  if ( v29 != 24 )
  {
    v26 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    v27 = v29;
LABEL_7:
    *(_QWORD *)(v26 + 24) = v27;
    *(_QWORD *)(v26 + 32) = -1073741823LL;
    WdLogEvent5_WdWarning(v26);
    LODWORD(v24) = -1073741823;
    return (unsigned int)v24;
  }
  if ( v32 != 6 )
  {
    v26 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    v27 = v32;
    goto LABEL_7;
  }
  LODWORD(v24) = v31;
  if ( v31 >= 0 )
    *a6 = v34;
  return (unsigned int)v24;
}
