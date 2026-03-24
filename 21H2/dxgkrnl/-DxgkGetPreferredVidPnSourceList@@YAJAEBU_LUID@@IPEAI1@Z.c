/*
 * XREFs of ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x1C0162E60
 * Callers:
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C0162C24 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004130 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007658 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C0019758 (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C011F70C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkGetPreferredVidPnSourceList(const struct _LUID *a1, __int64 a2, char *a3, char *a4)
{
  __int64 v5; // r13
  const struct _LUID *v7; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  DXGADAPTER *v12; // rsi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  ADAPTER_DISPLAY *v17; // r15
  int v18; // ebp
  __int64 v19; // rdx
  int v20; // r11d
  __int64 v21; // rcx
  char *v22; // rbx
  __int64 v23; // r12
  unsigned __int64 v24; // rdi
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // esi
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned int v32; // eax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned __int64 v37; // [rsp+20h] [rbp-E8h] BYREF
  const struct _LUID *v38; // [rsp+28h] [rbp-E0h]
  _BYTE v39[144]; // [rsp+30h] [rbp-D8h] BYREF

  v5 = (unsigned int)a2;
  v38 = a1;
  v7 = a1;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v7, &v37);
  v12 = v9;
  if ( !v9 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    LODWORD(v16) = -1073741811;
    v33[3] = v7->HighPart;
    v33[4] = v7->LowPart;
    v33[5] = -1073741811LL;
    WdLogEvent5_WdError(v33);
    return (unsigned int)v16;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v39, v9, 0LL);
  DXGADAPTER::ReleaseReference(v12);
  v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v39, 0LL);
  v16 = v13;
  if ( v13 < 0 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
    goto LABEL_35;
  }
  v17 = (ADAPTER_DISPLAY *)*((_QWORD *)v12 + 337);
  if ( !v17 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
    v16 = -1073741811LL;
    goto LABEL_35;
  }
  v18 = 0;
  v19 = 0LL;
  v20 = -1;
  if ( (_DWORD)v5 )
  {
    do
    {
      v21 = *(unsigned int *)&a4[4 * v19];
      v16 = (unsigned int)v19;
      if ( (_DWORD)v21 != -1 )
      {
        if ( (unsigned int)v21 >= *((_DWORD *)v17 + 20) )
        {
          v34 = (_QWORD *)WdLogNewEntry5_WdError(v21, v19);
          v35 = *(unsigned int *)&a4[4 * v16];
          LODWORD(v16) = -1071774972;
          v34[3] = v35;
          v34[4] = v7->HighPart;
          v34[5] = v7->LowPart;
          v34[6] = -1071774972LL;
          goto LABEL_36;
        }
        v18 |= 1 << v21;
      }
      v19 = (unsigned int)(v19 + 1);
    }
    while ( (unsigned int)v19 < (unsigned int)v5 );
    v22 = a4;
    v37 = a3 - a4;
    v23 = v5;
    v24 = v37;
    do
    {
      if ( *(_DWORD *)v22 == v20 )
      {
        v25 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(v17, *(_DWORD *)&v22[v24]);
        v28 = v25;
        if ( v25 != v20 )
        {
          if ( v25 >= *((_DWORD *)v17 + 20) )
          {
            v36 = WdLogNewEntry5_WdAssertion(v27, v26);
            *(_QWORD *)(v36 + 24) = 8465LL;
            WdLogEvent5_WdAssertion(v36);
            v20 = -1;
          }
          if ( ((1 << v28) & v18) == 0 )
          {
            *(_DWORD *)v22 = v28;
            v18 |= 1 << v28;
          }
        }
      }
      v22 += 4;
      --v23;
    }
    while ( v23 );
    v7 = v38;
  }
  v29 = 0LL;
  v30 = 0LL;
  if ( !(_DWORD)v5 )
  {
LABEL_19:
    LODWORD(v16) = 0;
    goto LABEL_20;
  }
  while ( *(_DWORD *)a4 != v20 )
  {
LABEL_18:
    v30 = (unsigned int)(v30 + 1);
    a4 += 4;
    if ( (unsigned int)v30 >= (unsigned int)v5 )
      goto LABEL_19;
  }
  v32 = *((_DWORD *)v17 + 20);
  while ( (unsigned int)v29 < v32 && _bittest(&v18, v29) )
    v29 = (unsigned int)(v29 + 1);
  if ( (unsigned int)v29 < v32 )
  {
    *(_DWORD *)a4 = v29;
    v18 |= 1 << v29;
    v29 = (unsigned int)(v29 + 1);
    goto LABEL_18;
  }
  v34 = (_QWORD *)WdLogNewEntry5_WdError(v29, v30);
  v16 = -1071774975LL;
LABEL_35:
  v34[3] = v7->HighPart;
  v34[4] = v7->LowPart;
  v34[5] = v16;
LABEL_36:
  WdLogEvent5_WdError(v34);
LABEL_20:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39, v30);
  return (unsigned int)v16;
}
