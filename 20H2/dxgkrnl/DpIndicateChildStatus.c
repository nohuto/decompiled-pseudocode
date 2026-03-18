/*
 * XREFs of DpIndicateChildStatus @ 0x1C004FCB0
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C0053E48 (DpiMiracastTearDownAssociation.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A4FC (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DpiFdoQueueConnectionChangePackage @ 0x1C0020AD8 (DpiFdoQueueConnectionChangePackage.c)
 *     DpiFdoInitializeConnectionChangePackage @ 0x1C0020B94 (DpiFdoInitializeConnectionChangePackage.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C0039544 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpIndicateChildStatus(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // edi
  unsigned int *v3; // rsi
  __int64 v4; // r14
  char v5; // r15
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v6; // ebp
  __int64 v7; // rbx
  _QWORD *v8; // r12
  __int64 v9; // r8
  bool v10; // zf
  __int64 v11; // rbx
  __int64 v12; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD v16[10]; // [rsp+40h] [rbp-88h] BYREF

  v2 = 0;
  v3 = a2;
  v4 = a1;
  v5 = 0;
  v6 = D3DKMDT_VOT_UNINITIALIZED;
  if ( !a1 )
    goto LABEL_18;
  if ( !a2 )
    goto LABEL_18;
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 || *(_DWORD *)(v7 + 16) != 1953656900 || *(_DWORD *)(v7 + 20) != 2 )
    goto LABEL_18;
  v8 = v16;
  memset(v16, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v16[1]);
  a2 = (unsigned int *)*v3;
  a1 = (unsigned int)a2;
  v16[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v16[4]) = (_DWORD)a2;
  LODWORD(v16[3]) = 12;
  LOBYTE(v16[6]) = -1;
  if ( *(_QWORD *)(v7 + 5704) )
    v8 = *(_QWORD **)(v7 + 5704);
  if ( !(_DWORD)a2 )
  {
    if ( !*(_BYTE *)(v7 + 1154) )
      return v2;
    v5 = 1;
LABEL_31:
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
      McTemplateK0pqtqq_EtwWriteTransfer(
        a1,
        &EventDxgkCbIndicateChildStatus,
        v9,
        v4,
        v3[1],
        (_DWORD)a2,
        *((unsigned __int8 *)v3 + 8),
        v6);
    v15 = DpiFdoInitializeConnectionChangePackage(
            (__int64)v8,
            v3[1],
            *((_BYTE *)v3 + 8) != 0 ? 10 : 8,
            v6,
            0,
            *(_BYTE *)(v7 + 1159) == 0,
            v5,
            0);
    if ( v15 )
      return (unsigned int)DpiFdoQueueConnectionChangePackage(v7, v15, 1);
    else
      return (unsigned int)-1073741670;
  }
  a1 = (unsigned int)((_DWORD)a2 - 1);
  if ( (_DWORD)a2 == 1 )
  {
    v10 = *(_DWORD *)(v7 + 3224) == v3[1];
LABEL_17:
    if ( v10 )
      goto LABEL_18;
    goto LABEL_31;
  }
  a1 = (unsigned int)((_DWORD)a2 - 2);
  if ( (_DWORD)a2 == 2 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v14[3] = v3[1];
    v14[4] = *(_QWORD *)(v7 + 24);
    v14[5] = *((unsigned __int8 *)v3 + 8);
    WdLogEvent5_WdEvent(v14);
    return v2;
  }
  if ( (_DWORD)a2 == 3 )
  {
    if ( *(_BYTE *)(v7 + 1158) && *(_DWORD *)(v7 + 3224) == -1 )
    {
      if ( !*(_BYTE *)(v7 + 2692) && IsInternalVideoOutput((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)v3[3]) )
        goto LABEL_18;
      v6 = v3[3];
      v10 = v6 == D3DKMDT_VOT_MIRACAST;
    }
    else
    {
      if ( !*(_QWORD *)(v7 + 3232) )
      {
        v11 = -1073741637LL;
        goto LABEL_19;
      }
      if ( *(_DWORD *)(v7 + 3224) != v3[1]
        || (v6 = v3[3], IsInternalVideoOutput(v6))
        || v6 == D3DKMDT_VOT_INDIRECT_WIRED )
      {
LABEL_18:
        v11 = -1073741811LL;
LABEL_19:
        v2 = v11;
        v12 = WdLogNewEntry5_WdError(a1, a2);
        *(_QWORD *)(v12 + 24) = v11;
        WdLogEvent5_WdError(v12);
        return v2;
      }
      v10 = v6 == (D3DKMDT_VOT_SVIDEO_7PIN|D3DKMDT_VOT_INDIRECT_WIRED);
    }
    goto LABEL_17;
  }
  return v2;
}
