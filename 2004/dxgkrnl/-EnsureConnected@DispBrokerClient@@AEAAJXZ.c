/*
 * XREFs of ?EnsureConnected@DispBrokerClient@@AEAAJXZ @ 0x1C01612E8
 * Callers:
 *     ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x1C01611B0 (-ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00192B8 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     DXGKCALLONEXIT__lambda_d7c4861ef0734605370a98f05df27570___ @ 0x1C0019528 (DXGKCALLONEXIT__lambda_d7c4861ef0734605370a98f05df27570___.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     _lambda_d7c4861ef0734605370a98f05df27570_::operator() @ 0x1C0161550 (_lambda_d7c4861ef0734605370a98f05df27570_--operator().c)
 */

__int64 __fastcall DispBrokerClient::EnsureConnected(unsigned int **this)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  wchar_t *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rbx
  HANDLE v14; // rcx
  unsigned int v15; // ebx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp-90h] BYREF
  _QWORD *v28; // [rsp+80h] [rbp-88h] BYREF
  __int64 v29; // [rsp+88h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v31[4]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v32; // [rsp+C0h] [rbp-48h]
  __int128 v33; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v34; // [rsp+E8h] [rbp-20h]
  unsigned __int64 *v35; // [rsp+F0h] [rbp-18h]
  _BYTE v36[48]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v37[10]; // [rsp+128h] [rbp+20h] BYREF
  unsigned __int16 v38[56]; // [rsp+178h] [rbp+70h] BYREF
  WCHAR SourceString[56]; // [rsp+1E8h] [rbp+E0h] BYREF

  LODWORD(v25) = 0;
  v2 = KeQueryInterruptTimePrecise(&v27);
  v28 = 0LL;
  *(_QWORD *)&v33 = this;
  *((_QWORD *)&v33 + 1) = &v28;
  v34 = &v25;
  v27 = v2 / 0xA;
  v35 = &v27;
  DXGKCALLONEXIT__lambda_d7c4861ef0734605370a98f05df27570_((__int64)v36, &v33);
  memset(v38, 0, 0x6CuLL);
  memset(SourceString, 0, 0x6CuLL);
  LODWORD(v25) = RtlStringCchPrintfW(v38, 0x36uLL, (size_t *)L"\\Sessions\\%d", **this);
  if ( (int)v25 < 0 )
  {
    v17 = WdLogNewEntry5_WdError(v4, v3);
    v18 = (int)v25;
    *(_QWORD *)(v17 + 32) = 0LL;
LABEL_22:
    *(_QWORD *)(v17 + 24) = v18;
    WdLogEvent5_WdError(v17);
LABEL_12:
    v15 = v25;
    goto LABEL_13;
  }
  v5 = L"%s\\BaseNamedObjects\\DispBrokerPort";
  if ( !*((_BYTE *)this + 9) )
    v5 = (wchar_t *)L"%s\\Windows\\DispBrokerPort";
  LODWORD(v25) = RtlStringCchPrintfW(SourceString, 0x36uLL, (size_t *)v5, v38);
  if ( (int)v25 < 0 )
  {
    v17 = WdLogNewEntry5_WdError(v7, v6);
    v18 = (int)v25;
    *(_QWORD *)(v17 + 32) = 1LL;
    goto LABEL_22;
  }
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v31[0] = 48LL;
  v31[3] = 512LL;
  v31[1] = 0LL;
  v31[2] = 0LL;
  v32 = 0LL;
  memset(v37, 0, 0x48uLL);
  v37[2] = 65280LL;
  LODWORD(v37[0]) = 0x100000;
  v29 = -150000000LL;
  Handle = 0LL;
  v8 = ZwAlpcConnectPort(&Handle, &DestinationString, v31, v37, 1179648, 0LL, 0LL, 0LL, 0LL, 0LL, &v29);
  LODWORD(v25) = v8;
  if ( v8 == 258 )
  {
    LODWORD(v25) = -1073741505;
    v17 = WdLogNewEntry5_WdError(v10, v9);
    v18 = (int)v25;
    goto LABEL_22;
  }
  if ( v8 == 192 )
  {
    LODWORD(v25) = -1073741749;
    v17 = WdLogNewEntry5_WdError(v10, v9);
    v18 = (int)v25;
    *(_QWORD *)(v17 + 32) = 3LL;
    goto LABEL_22;
  }
  if ( v8 < 0 )
  {
    v17 = WdLogNewEntry5_WdError(v10, v9);
    v18 = (int)v25;
    *(_QWORD *)(v17 + 32) = 2LL;
    goto LABEL_22;
  }
  v11 = operator new[](0x10uLL, 0x4B677844u, PagedPool);
  v13 = v11;
  if ( v11 )
  {
    v14 = Handle;
    *(_DWORD *)v11 = 0;
    v11[1] = v14;
    if ( !v14 )
    {
      v19 = WdLogNewEntry5_WdAssertion(0LL, v12);
      *(_QWORD *)(v19 + 24) = 34LL;
      WdLogEvent5_WdAssertion(v19);
    }
  }
  else
  {
    v13 = 0LL;
  }
  v28 = v13;
  if ( v13 )
    goto LABEL_12;
  ZwClose(Handle);
  v24 = WdLogNewEntry5_WdLowResource(v21, v20, v22, v23);
  *(_QWORD *)(v24 + 24) = 275LL;
  WdLogEvent5_WdLowResource(v24);
  v15 = -1073741801;
LABEL_13:
  if ( v36[32] )
    lambda_d7c4861ef0734605370a98f05df27570_::operator()(v36);
  return v15;
}
