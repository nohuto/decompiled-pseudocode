/*
 * XREFs of ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00BA904
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00B1BD0 (DrvSetDisplayConfig.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C00BAB50 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C8880 (DrvDxgkLogCodePointPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvValidateAndApplyDevMode(
        struct _DISPLAYCONFIG_CDS_REQUEST *a1,
        struct D3DKMT_GETPATHSMODALITY **a2,
        __int64 a3)
{
  __int64 v5; // rdi
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 result; // rax
  struct D3DKMT_GETPATHSMODALITY *v14; // rcx
  struct _devicemodeW *v15; // r14
  unsigned int v16; // r8d
  __int64 v17; // rdx
  __int64 *v18; // rsi
  __int64 v19; // rcx
  int v20; // eax
  int v21; // edx
  int v22; // eax
  __int64 v23; // rax
  bool v24; // zf
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  int v39; // [rsp+50h] [rbp-30h] BYREF
  __int64 v40; // [rsp+54h] [rbp-2Ch]
  int v41; // [rsp+5Ch] [rbp-24h]
  int v42; // [rsp+60h] [rbp-20h]
  int v43; // [rsp+64h] [rbp-1Ch]
  int v44; // [rsp+68h] [rbp-18h]
  int v45; // [rsp+6Ch] [rbp-14h]
  __int64 v46; // [rsp+70h] [rbp-10h]
  int v47; // [rsp+B0h] [rbp+30h] BYREF
  int v48; // [rsp+B8h] [rbp+38h] BYREF

  v45 = 0;
  v47 = 0;
  v48 = 0;
  if ( !a2 || !a1 || !*((_QWORD *)a1 + 4) )
  {
    v30 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
    WdLogEvent5_WdAssertion(v30);
  }
  v5 = *(_QWORD *)a1;
  if ( ((*(_QWORD *)a1 + 4LL) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*(_DWORD *)(v5 + 160) & 0x800000) == 0 )
  {
    v31 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
    WdLogEvent5_WdAssertion(v31);
  }
  v39 = *((_DWORD *)a1 + 2) != 0 ? 6 : 4;
  v40 = *(_QWORD *)(v5 + 248);
  v6 = *(_DWORD *)(v5 + 256);
  v42 = -1;
  v41 = v6;
  v46 = *((_QWORD *)a1 + 4);
  v43 = -2;
  v44 = -2;
  v7 = ((__int64 (__fastcall *)(int *))qword_1C024C8E0)(&v39);
  v11 = v7;
  LODWORD(v12) = -1073741266;
  if ( v7 == -1073741266 )
  {
    *((_DWORD *)a1 + 13) = 2;
    *((_DWORD *)a1 + 12) = -2;
    v32 = (_QWORD *)WdLogNewEntry5_WdWarning();
    v32[3] = -1073741266LL;
    v32[4] = *((_QWORD *)a1 + 4);
    v32[5] = *((int *)a1 + 13);
    v32[6] = *((int *)a1 + 12);
    WdLogEvent5_WdWarning(v32);
    return (unsigned int)v12;
  }
  result = 3221225485LL;
  if ( (_DWORD)v11 == -1073741811 )
  {
    *((_DWORD *)a1 + 13) = 3;
    *((_DWORD *)a1 + 12) = -2;
    return result;
  }
  if ( (int)v11 < 0 )
  {
    *((_DWORD *)a1 + 13) = 4;
    *((_DWORD *)a1 + 12) = -2;
    v37 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8, v10);
    v37[3] = v11;
    v37[4] = *((_QWORD *)a1 + 4);
    v37[5] = *((int *)a1 + 13);
    v37[6] = *((int *)a1 + 12);
    WdLogEvent5_WdError(v37);
    return (unsigned int)v11;
  }
  v14 = *a2;
  v15 = 0LL;
  if ( *a2 )
  {
    v16 = 0;
    if ( *((_WORD *)v14 + 10) )
    {
      while ( 1 )
      {
        v17 = 272LL * v16;
        if ( *(_DWORD *)((char *)v14 + v17 + 72) == *(_DWORD *)(v5 + 256)
          && *(_DWORD *)((char *)v14 + v17 + 64) == *(_DWORD *)(v5 + 248)
          && *(_DWORD *)((char *)v14 + v17 + 68) == *(_DWORD *)(v5 + 252) )
        {
          break;
        }
        if ( ++v16 >= *((unsigned __int16 *)v14 + 10) )
          goto LABEL_15;
      }
      v15 = *(struct _devicemodeW **)((char *)v14 + v17 + 272);
    }
  }
LABEL_15:
  v18 = (__int64 *)((char *)a1 + 40);
  v19 = *((_QWORD *)a1 + 5);
  if ( v19 )
  {
    Win32FreePool(v19);
    *v18 = 0LL;
  }
  v20 = DrvProbeAndCaptureDevmode(
          (struct tagGRAPHICS_DEVICE *)v5,
          (struct _devicemodeW **)a1 + 5,
          &v48,
          &v47,
          *((struct _devicemodeW **)a1 + 4),
          0,
          *((_DWORD *)a1 + 3),
          *((_DWORD *)a1 + 2),
          0,
          v15);
  v12 = v20;
  if ( v20 < 0 )
  {
    *((_DWORD *)a1 + 13) = 4;
    *((_DWORD *)a1 + 12) = -2;
    DrvDxgkLogCodePointPacket(58LL, 0LL, 0LL, 0LL);
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33, v35);
    v36[3] = v12;
    v36[4] = *((_QWORD *)a1 + 4);
    v36[5] = *((int *)a1 + 13);
    v36[6] = *((int *)a1 + 12);
    WdLogEvent5_WdError(v36);
    return (unsigned int)v12;
  }
  if ( *((_DWORD *)a1 + 4) && v47 )
    v21 = 8;
  else
    v21 = 0;
  v39 = v21 | (v47 == 0 ? 0x10 : 0) | (*((_DWORD *)a1 + 2) != 0 ? 2 : 0);
  v40 = *(_QWORD *)(v5 + 248);
  v22 = *(_DWORD *)(v5 + 256);
  v42 = -1;
  v41 = v22;
  v23 = *v18;
  v43 = -2;
  v44 = -2;
  if ( !v23 )
    v23 = *((_QWORD *)a1 + 4);
  v24 = *((_DWORD *)a1 + 5) == 0;
  v46 = v23;
  if ( v24 || *((_DWORD *)a1 + 6) )
    v25 = ((__int64 (__fastcall *)(struct D3DKMT_GETPATHSMODALITY **, int *))qword_1C024CA80)(a2, &v39);
  else
    v25 = ((__int64 (__fastcall *)(int *))qword_1C024C8E0)(&v39);
  v29 = v25;
  if ( v25 >= 0 )
    return 0LL;
  *((_DWORD *)a1 + 12) = -1;
  *((_DWORD *)a1 + 13) = 8;
  v38 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26, v28);
  v38[3] = v29;
  v38[4] = v46;
  v38[5] = *((int *)a1 + 13);
  v38[6] = *((int *)a1 + 12);
  WdLogEvent5_WdError(v38);
  return (unsigned int)v29;
}
