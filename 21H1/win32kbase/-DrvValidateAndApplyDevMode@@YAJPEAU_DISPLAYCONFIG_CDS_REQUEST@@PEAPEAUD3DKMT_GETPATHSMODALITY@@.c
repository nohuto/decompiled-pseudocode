/*
 * XREFs of ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00AB8A4
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0098260 (DrvSetDisplayConfig.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C00ABAF0 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C8250 (DrvDxgkLogCodePointPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvValidateAndApplyDevMode(
        struct _DISPLAYCONFIG_CDS_REQUEST *a1,
        struct D3DKMT_GETPATHSMODALITY **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdi
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 result; // rax
  struct D3DKMT_GETPATHSMODALITY *v15; // rcx
  struct _devicemodeW *v16; // r14
  __int64 *v17; // rsi
  __int64 v18; // rcx
  int v19; // eax
  int v20; // edx
  int v21; // eax
  __int64 v22; // rax
  bool v23; // zf
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  int v38; // [rsp+50h] [rbp-30h] BYREF
  __int64 v39; // [rsp+54h] [rbp-2Ch]
  int v40; // [rsp+5Ch] [rbp-24h]
  int v41; // [rsp+60h] [rbp-20h]
  int v42; // [rsp+64h] [rbp-1Ch]
  int v43; // [rsp+68h] [rbp-18h]
  int v44; // [rsp+6Ch] [rbp-14h]
  __int64 v45; // [rsp+70h] [rbp-10h]
  int v46; // [rsp+B0h] [rbp+30h] BYREF
  int v47; // [rsp+B8h] [rbp+38h] BYREF

  v44 = 0;
  v46 = 0;
  v47 = 0;
  if ( !a2 || !a1 || !*((_QWORD *)a1 + 4) )
  {
    v29 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v29);
  }
  v6 = *(_QWORD *)a1;
  if ( ((*(_QWORD *)a1 + 4LL) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*(_DWORD *)(v6 + 160) & 0x800000) == 0 )
  {
    v30 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v30);
  }
  v38 = *((_DWORD *)a1 + 2) != 0 ? 6 : 4;
  v39 = *(_QWORD *)(v6 + 248);
  v7 = *(_DWORD *)(v6 + 256);
  v41 = -1;
  v40 = v7;
  v45 = *((_QWORD *)a1 + 4);
  v42 = -2;
  v43 = -2;
  v8 = ((__int64 (__fastcall *)(int *))qword_1C0252900)(&v38);
  v12 = v8;
  LODWORD(v13) = -1073741266;
  if ( v8 == -1073741266 )
  {
    *((_DWORD *)a1 + 13) = 2;
    *((_DWORD *)a1 + 12) = -2;
    v31 = (_QWORD *)WdLogNewEntry5_WdWarning();
    v31[3] = -1073741266LL;
    v31[4] = *((_QWORD *)a1 + 4);
    v31[5] = *((int *)a1 + 13);
    v31[6] = *((int *)a1 + 12);
    WdLogEvent5_WdWarning(v31);
    return (unsigned int)v13;
  }
  result = 3221225485LL;
  if ( (_DWORD)v12 == -1073741811 )
  {
    *((_DWORD *)a1 + 13) = 3;
    *((_DWORD *)a1 + 12) = -2;
    return result;
  }
  if ( (int)v12 < 0 )
  {
    *((_DWORD *)a1 + 13) = 4;
    *((_DWORD *)a1 + 12) = -2;
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9, v11);
    v36[3] = v12;
    v36[4] = *((_QWORD *)a1 + 4);
    v36[5] = *((int *)a1 + 13);
    v36[6] = *((int *)a1 + 12);
    WdLogEvent5_WdError(v36);
    return (unsigned int)v12;
  }
  v15 = *a2;
  v16 = 0LL;
  if ( *a2 )
  {
    v11 = 0LL;
    if ( *((_WORD *)v15 + 10) )
    {
      while ( 1 )
      {
        v9 = 272LL * (unsigned int)v11;
        if ( *(_DWORD *)((char *)v15 + v9 + 72) == *(_DWORD *)(v6 + 256)
          && *(_DWORD *)((char *)v15 + v9 + 64) == *(_DWORD *)(v6 + 248)
          && *(_DWORD *)((char *)v15 + v9 + 68) == *(_DWORD *)(v6 + 252) )
        {
          break;
        }
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= *((unsigned __int16 *)v15 + 10) )
          goto LABEL_15;
      }
      v16 = *(struct _devicemodeW **)((char *)v15 + v9 + 272);
    }
  }
LABEL_15:
  v17 = (__int64 *)((char *)a1 + 40);
  v18 = *((_QWORD *)a1 + 5);
  if ( v18 )
  {
    Win32FreePool(v18, v9, v11);
    *v17 = 0LL;
  }
  v19 = DrvProbeAndCaptureDevmode(
          (struct tagGRAPHICS_DEVICE *)v6,
          (struct _devicemodeW **)a1 + 5,
          &v47,
          &v46,
          *((struct _devicemodeW **)a1 + 4),
          0,
          *((_DWORD *)a1 + 3),
          *((_DWORD *)a1 + 2),
          0,
          v16);
  v13 = v19;
  if ( v19 < 0 )
  {
    *((_DWORD *)a1 + 13) = 4;
    *((_DWORD *)a1 + 12) = -2;
    DrvDxgkLogCodePointPacket(58LL, 0LL, 0LL);
    v35 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32, v34);
    v35[3] = v13;
    v35[4] = *((_QWORD *)a1 + 4);
    v35[5] = *((int *)a1 + 13);
    v35[6] = *((int *)a1 + 12);
    WdLogEvent5_WdError(v35);
    return (unsigned int)v13;
  }
  if ( *((_DWORD *)a1 + 4) && v46 )
    v20 = 8;
  else
    v20 = 0;
  v38 = v20 | (v46 == 0 ? 0x10 : 0) | (*((_DWORD *)a1 + 2) != 0 ? 2 : 0);
  v39 = *(_QWORD *)(v6 + 248);
  v21 = *(_DWORD *)(v6 + 256);
  v41 = -1;
  v40 = v21;
  v22 = *v17;
  v42 = -2;
  v43 = -2;
  if ( !v22 )
    v22 = *((_QWORD *)a1 + 4);
  v23 = *((_DWORD *)a1 + 5) == 0;
  v45 = v22;
  if ( v23 || *((_DWORD *)a1 + 6) )
    v24 = ((__int64 (__fastcall *)(struct D3DKMT_GETPATHSMODALITY **, int *))qword_1C0252AA0)(a2, &v38);
  else
    v24 = ((__int64 (__fastcall *)(int *))qword_1C0252900)(&v38);
  v28 = v24;
  if ( v24 >= 0 )
    return 0LL;
  *((_DWORD *)a1 + 12) = -1;
  *((_DWORD *)a1 + 13) = 8;
  v37 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25, v27);
  v37[3] = v28;
  v37[4] = v45;
  v37[5] = *((int *)a1 + 13);
  v37[6] = *((int *)a1 + 12);
  WdLogEvent5_WdError(v37);
  return (unsigned int)v28;
}
