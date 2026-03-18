/*
 * XREFs of ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C000E870
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C006C8A0 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C000EABC (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C9780 (DrvDxgkLogCodePointPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvValidateAndApplyDevMode(
        struct _DISPLAYCONFIG_CDS_REQUEST *a1,
        struct D3DKMT_GETPATHSMODALITY **a2)
{
  __int64 v4; // rdi
  int v5; // eax
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 result; // rax
  __int64 v10; // rcx
  struct _devicemodeW *v11; // r14
  unsigned int v12; // r8d
  __int64 v13; // rdx
  __int64 *v14; // rsi
  __int64 v15; // rcx
  int v16; // eax
  int v17; // edx
  int v18; // eax
  __int64 v19; // rax
  bool v20; // zf
  int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // rdx
  int v32; // [rsp+50h] [rbp-30h] BYREF
  __int64 v33; // [rsp+54h] [rbp-2Ch]
  int v34; // [rsp+5Ch] [rbp-24h]
  int v35; // [rsp+60h] [rbp-20h]
  int v36; // [rsp+64h] [rbp-1Ch]
  int v37; // [rsp+68h] [rbp-18h]
  int v38; // [rsp+6Ch] [rbp-14h]
  __int64 v39; // [rsp+70h] [rbp-10h]
  int v40; // [rsp+B0h] [rbp+30h] BYREF
  int v41; // [rsp+B8h] [rbp+38h] BYREF

  v38 = 0;
  v40 = 0;
  v41 = 0;
  if ( !a2 || !a1 || !*((_QWORD *)a1 + 4) )
  {
    v23 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v23);
  }
  v4 = *(_QWORD *)a1;
  if ( ((*(_QWORD *)a1 + 4LL) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*(_DWORD *)(v4 + 160) & 0x800000) == 0 )
  {
    v24 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v24);
  }
  v32 = *((_DWORD *)a1 + 2) != 0 ? 6 : 4;
  v33 = *(_QWORD *)(v4 + 248);
  v5 = *(_DWORD *)(v4 + 256);
  v35 = -1;
  v34 = v5;
  v39 = *((_QWORD *)a1 + 4);
  v36 = -2;
  v37 = -2;
  v6 = ((__int64 (__fastcall *)(int *))qword_1C024A8E0)(&v32);
  v7 = v6;
  LODWORD(v8) = -1073741266;
  if ( v6 == -1073741266 )
  {
    *((_DWORD *)a1 + 13) = 2;
    *((_DWORD *)a1 + 12) = -2;
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning();
    v25[3] = -1073741266LL;
    v25[4] = *((_QWORD *)a1 + 4);
    v25[5] = *((int *)a1 + 13);
    v25[6] = *((int *)a1 + 12);
    WdLogEvent5_WdWarning(v25);
    return (unsigned int)v8;
  }
  result = 3221225485LL;
  if ( (_DWORD)v7 == -1073741811 )
  {
    *((_DWORD *)a1 + 13) = 3;
    *((_DWORD *)a1 + 12) = -2;
    return result;
  }
  if ( (int)v7 < 0 )
  {
    *((_DWORD *)a1 + 13) = 4;
    *((_DWORD *)a1 + 12) = -2;
    v28 = (_QWORD *)WdLogNewEntry5_WdError();
    v28[3] = v7;
    v28[4] = *((_QWORD *)a1 + 4);
    v28[5] = *((int *)a1 + 13);
    v28[6] = *((int *)a1 + 12);
    WdLogEvent5_WdError(v28, v29);
    return (unsigned int)v7;
  }
  v10 = (__int64)*a2;
  v11 = 0LL;
  if ( *a2 )
  {
    v12 = 0;
    if ( *(_WORD *)(v10 + 20) )
    {
      while ( 1 )
      {
        v13 = 272LL * v12;
        if ( *(_DWORD *)(v13 + v10 + 72) == *(_DWORD *)(v4 + 256)
          && *(_DWORD *)(v13 + v10 + 64) == *(_DWORD *)(v4 + 248)
          && *(_DWORD *)(v13 + v10 + 68) == *(_DWORD *)(v4 + 252) )
        {
          break;
        }
        if ( ++v12 >= *(unsigned __int16 *)(v10 + 20) )
          goto LABEL_15;
      }
      v11 = *(struct _devicemodeW **)(v13 + v10 + 272);
    }
  }
LABEL_15:
  v14 = (__int64 *)((char *)a1 + 40);
  v15 = *((_QWORD *)a1 + 5);
  if ( v15 )
  {
    Win32FreePool(v15);
    *v14 = 0LL;
  }
  v16 = DrvProbeAndCaptureDevmode(
          (struct tagGRAPHICS_DEVICE *)v4,
          (struct _devicemodeW **)a1 + 5,
          &v41,
          &v40,
          *((struct _devicemodeW **)a1 + 4),
          0,
          *((_DWORD *)a1 + 3),
          *((_DWORD *)a1 + 2),
          0,
          v11);
  v8 = v16;
  if ( v16 < 0 )
  {
    *((_DWORD *)a1 + 13) = 4;
    *((_DWORD *)a1 + 12) = -2;
    DrvDxgkLogCodePointPacket(58LL, 0LL, 0LL, 0LL);
    v26 = (_QWORD *)WdLogNewEntry5_WdError();
    v26[3] = v8;
    v26[4] = *((_QWORD *)a1 + 4);
    v26[5] = *((int *)a1 + 13);
    v26[6] = *((int *)a1 + 12);
    WdLogEvent5_WdError(v26, v27);
    return (unsigned int)v8;
  }
  if ( *((_DWORD *)a1 + 4) && v40 )
    v17 = 8;
  else
    v17 = 0;
  v32 = v17 | (v40 == 0 ? 0x10 : 0) | (*((_DWORD *)a1 + 2) != 0 ? 2 : 0);
  v33 = *(_QWORD *)(v4 + 248);
  v18 = *(_DWORD *)(v4 + 256);
  v35 = -1;
  v34 = v18;
  v19 = *v14;
  v36 = -2;
  v37 = -2;
  if ( !v19 )
    v19 = *((_QWORD *)a1 + 4);
  v20 = *((_DWORD *)a1 + 5) == 0;
  v39 = v19;
  if ( v20 || *((_DWORD *)a1 + 6) )
    v21 = ((__int64 (__fastcall *)(struct D3DKMT_GETPATHSMODALITY **, int *))qword_1C024AA80)(a2, &v32);
  else
    v21 = ((__int64 (__fastcall *)(int *))qword_1C024A8E0)(&v32);
  v22 = v21;
  if ( v21 >= 0 )
    return 0LL;
  *((_DWORD *)a1 + 12) = -1;
  *((_DWORD *)a1 + 13) = 8;
  v30 = (_QWORD *)WdLogNewEntry5_WdError();
  v30[3] = v22;
  v30[4] = v39;
  v30[5] = *((int *)a1 + 13);
  v30[6] = *((int *)a1 + 12);
  WdLogEvent5_WdError(v30, v31);
  return (unsigned int)v22;
}
