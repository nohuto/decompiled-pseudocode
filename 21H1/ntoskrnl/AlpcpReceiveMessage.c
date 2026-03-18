/*
 * XREFs of AlpcpReceiveMessage @ 0x14060AA80
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x14060A800 (NtAlpcSendWaitReceivePort.c)
 * Callees:
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     AlpcpExposeAttributes @ 0x14060B170 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveMessagePort @ 0x14060B9B0 (AlpcpReceiveMessagePort.c)
 *     AlpcpReadMessageData @ 0x14060CE80 (AlpcpReadMessageData.c)
 *     AlpcpCancelMessage @ 0x14064ACC0 (AlpcpCancelMessage.c)
 *     AlpcpDestroyBlob @ 0x1406B875C (AlpcpDestroyBlob.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1406BF1F0 (AlpcpReceiveDirectMessagePort.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1406CAB5C (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1406D58C8 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpExposeCapturedContextAttribute @ 0x1406DEBD0 (AlpcpExposeCapturedContextAttribute.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1408BE314 (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall AlpcpReceiveMessage(__int64 *a1, unsigned __int64 a2, unsigned __int64 *a3, _DWORD *a4, __int64 *a5)
{
  unsigned __int64 *v6; // r9
  struct _KTHREAD *CurrentThread; // r8
  unsigned int v9; // r10d
  int v10; // edx
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v13; // rcx
  int v14; // r14d
  __int64 v15; // rax
  int v16; // r13d
  ULONG v17; // r8d
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  ULONG v27; // eax
  ULONG v28; // ecx
  ULONG v29; // edx
  unsigned int v30; // eax
  unsigned int v31; // r14d
  ULONG_PTR v32; // rdi
  __int16 v33; // ax
  unsigned __int16 v34; // ax
  unsigned __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int16 v38; // ax
  __int16 v39; // ax
  __int16 v40; // dx
  __int64 v41; // r9
  int v42; // edx
  ULONG_PTR v43; // rsi
  char v44; // cl
  signed __int64 BugCheckParameter4; // rcx
  unsigned __int8 v47; // [rsp+30h] [rbp-A8h]
  unsigned int v48; // [rsp+34h] [rbp-A4h]
  int v49; // [rsp+38h] [rbp-A0h]
  int v50; // [rsp+3Ch] [rbp-9Ch]
  int v51; // [rsp+40h] [rbp-98h]
  unsigned int v52; // [rsp+50h] [rbp-88h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-80h] BYREF
  __int64 v54; // [rsp+60h] [rbp-78h]
  unsigned __int64 v55; // [rsp+68h] [rbp-70h]
  __int64 v56; // [rsp+70h] [rbp-68h] BYREF
  struct _KTHREAD *v57; // [rsp+78h] [rbp-60h]
  __int64 v58; // [rsp+80h] [rbp-58h]
  _OWORD v59[2]; // [rsp+88h] [rbp-50h] BYREF
  int v60; // [rsp+E0h] [rbp+8h]
  unsigned __int64 v61; // [rsp+E0h] [rbp+8h]

  v60 = (int)a1;
  v6 = a3;
  BugCheckParameter2 = 0LL;
  v55 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v57 = CurrentThread;
  v9 = *((_DWORD *)a1 + 12);
  v52 = v9;
  v54 = *a1;
  v58 = v54;
  v47 = CurrentThread->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  v10 = v47;
  v56 = 0LL;
  v55 = -1LL;
  v51 = 0;
  v50 = 0;
  if ( v47 )
  {
    v11 = (__int64)a5;
    if ( a5 )
    {
      if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
        v11 = 0x7FFFFFFF0000LL;
      v56 = *(_QWORD *)v11;
      a5 = &v56;
    }
    v12 = v9 & 0xC0000000;
    v13 = a2;
    if ( (v9 & 0xC0000000) == 0x80000000 )
    {
      if ( (a2 & 3) != 0 )
        goto LABEL_65;
      if ( a2 >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v13 = *(_BYTE *)v13;
      *(_BYTE *)(v13 + 23) = *(_BYTE *)(v13 + 23);
    }
    else
    {
      if ( (a2 & 3) != 0 )
        goto LABEL_65;
      if ( a2 >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v13 = *(_BYTE *)v13;
      *(_BYTE *)(v13 + 39) = *(_BYTE *)(v13 + 39);
    }
    v14 = v9 & 0x1000000;
    if ( (v9 & 0x1000000) != 0 )
    {
      if ( v12 == 0x80000000 )
      {
        v51 = *(_DWORD *)(a2 + 16);
        v50 = *(_DWORD *)(a2 + 20);
      }
      else
      {
        v51 = *(_DWORD *)(a2 + 24);
        v50 = *(_DWORD *)(a2 + 32);
      }
    }
    if ( !a4 )
    {
      v16 = 0;
      v49 = 0;
      goto LABEL_36;
    }
    v15 = (__int64)a4;
    if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    v16 = *(_DWORD *)v15;
    v17 = 8;
    if ( v12 == 0x80000000 )
    {
      if ( v16 < 0 )
        v17 = 20;
      v27 = v17 + 16;
      if ( (v16 & 0x40000000) == 0 )
        v27 = v17;
      v28 = v27 + 20;
      if ( (v16 & 0x20000000) == 0 )
        v28 = v27;
      v29 = v28 + 16;
      if ( (v16 & 0x10000000) == 0 )
        v29 = v28;
      if ( (v16 & 0x8000000) != 0 )
        v29 += 24;
      v23 = v29 + 8;
      if ( (v16 & 0x2000000) == 0 )
        v23 = v29;
      v17 = 4;
    }
    else
    {
      v18 = 8;
      if ( v16 < 0 )
        v18 = 32;
      v19 = v18 + 32;
      if ( (v16 & 0x40000000) == 0 )
        v19 = v18;
      v20 = v19 + 32;
      if ( (v16 & 0x20000000) == 0 )
        v20 = v19;
      v21 = v20 + 24;
      if ( (v16 & 0x10000000) == 0 )
        v21 = v20;
      v22 = v21 + 24;
      if ( (v16 & 0x8000000) == 0 )
        v22 = v21;
      if ( (v16 & 0x4000000) != 0 )
        v22 += 8;
      v23 = v22 + 8;
      if ( (v16 & 0x2000000) == 0 )
        v23 = v22;
    }
    v24 = (__int64)a4;
    if ( (unsigned __int64)(v23 - 1) > 0xFFE )
    {
      ProbeForWrite(a4, (unsigned int)v23, v17);
      v6 = a3;
LABEL_35:
      v49 = v16;
LABEL_36:
      if ( v6 )
      {
        v25 = (__int64)v6;
        if ( (unsigned __int64)v6 >= 0x7FFFFFFF0000LL )
          v25 = 0x7FFFFFFF0000LL;
        v55 = *(_QWORD *)v25;
        v26 = (__int64)v6;
        if ( (unsigned __int64)v6 >= 0x7FFFFFFF0000LL )
          v26 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v26 = *(_QWORD *)v26;
        v16 = v49;
      }
      LODWORD(a1) = v60;
      v10 = v47;
      goto LABEL_66;
    }
    if ( ((v17 - 1) & (unsigned int)a4) == 0 )
    {
      if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
        v24 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v24 = *(_BYTE *)v24;
      *(_BYTE *)(v24 + (unsigned int)v23 - 1) = *(_BYTE *)(v24 + (unsigned int)v23 - 1);
      goto LABEL_35;
    }
LABEL_65:
    ExRaiseDatatypeMisalignment();
  }
  v14 = v9 & 0x1000000;
  if ( (v9 & 0x1000000) != 0 )
  {
    v51 = *(_DWORD *)(a2 + 24);
    v50 = *(_DWORD *)(a2 + 32);
  }
  if ( a4 )
    v16 = *a4;
  else
    v16 = 0;
  if ( v6 )
    v55 = *v6;
  if ( (CurrentThread->MiscFlags & 0x400) != 0 )
    LOBYTE(v10) = 1;
LABEL_66:
  if ( v14 )
    v30 = AlpcpReceiveDirectMessagePort((_DWORD)a1, v51, v50, (unsigned int)&BugCheckParameter2, v16);
  else
    v30 = AlpcpReceiveMessagePort((_DWORD)a1, v10, (_DWORD)a5, (unsigned int)&BugCheckParameter2, v16);
  v48 = v30;
  v31 = v30;
  if ( !v30 )
  {
    v32 = BugCheckParameter2;
    v33 = 24;
    if ( (v52 & 0xC0000000) != 0x80000000 )
      v33 = 40;
    v34 = *(_WORD *)(BugCheckParameter2 + 240) + v33;
    if ( a3 && (v61 = v34, v34 > v55) )
    {
      memset(v59, 0, sizeof(v59));
      v31 = AlpcpReturnMessageOnInsufficientBuffer(v54, BugCheckParameter2, v59);
      v48 = v31;
      if ( v31 == -1073741789 )
      {
        *a3 = v61;
        AlpcpExposeCapturedContextAttribute(v52, v59, (unsigned int)v16, a4);
      }
    }
    else
    {
      *(_QWORD *)(BugCheckParameter2 + 200) = v57;
      if ( (v52 & 0xC0000000) == 0x80000000 )
      {
        v38 = *(_WORD *)(v32 + 240);
        *(_WORD *)a2 = v38;
        *(_WORD *)(a2 + 2) = v38 + 24;
        v39 = *(_WORD *)(v32 + 246);
        if ( v39 )
          *(_WORD *)(a2 + 6) = v39 - 16;
        else
          *(_WORD *)(a2 + 6) = 0;
        v40 = *(_WORD *)(v32 + 244) | 0x1000;
        *(_WORD *)(a2 + 4) = v40;
        *(_DWORD *)(a2 + 8) = *(_DWORD *)(v32 + 248);
        *(_DWORD *)(a2 + 12) = *(_DWORD *)(v32 + 256);
        *(_DWORD *)(a2 + 16) = *(_DWORD *)(v32 + 264);
        *(_DWORD *)(a2 + 20) = *(_DWORD *)(v32 + 272);
        *(_DWORD *)(a2 + 20) = *(_DWORD *)(v32 + 272);
        if ( (*(_DWORD *)(v54 + 256) & 0x1000) != 0 )
          *(_WORD *)(a2 + 4) = v40 & 0xC00F;
        v35 = a2 + 24;
      }
      else
      {
        *(_OWORD *)a2 = *(_OWORD *)(v32 + 240);
        *(_OWORD *)(a2 + 16) = *(_OWORD *)(v32 + 256);
        *(_QWORD *)(a2 + 32) = *(_QWORD *)(v32 + 272);
        if ( (*(_DWORD *)(v54 + 256) & 0x1000) != 0 )
          *(_WORD *)(a2 + 4) &= 0xC00Fu;
        v35 = a2 + 40;
      }
      if ( *(_QWORD *)(v32 + 176) )
        AlpcpGetDataFromUserVaSafe(v32, v35);
      else
        AlpcpReadMessageData(v32, v35);
      if ( a4 )
        AlpcpExposeAttributes(v54, v52, v32, v16, (__int64)a4);
    }
    v41 = v54;
    if ( v31 != -1073741789 && *(_QWORD *)(v32 + 64) == v54 )
    {
      *(_QWORD *)(v32 + 64) = 0LL;
      *(_QWORD *)(v32 + 56) = 0LL;
    }
    if ( ((v31 + 0x80000000) & 0x80000000) != 0 || v31 == -1073741789 )
    {
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v32, v36, v37, v41);
      v42 = 0;
      v43 = v32 - 48;
      v44 = *(_BYTE *)(v32 - 48 + 16);
      if ( (v44 & 1) != 0 )
      {
        v42 = 0x10000 - *(__int16 *)(v43 + 18);
        *(_BYTE *)(v43 + 16) = v44 & 0xFE;
        *(_WORD *)(v43 + 18) = 0;
      }
      if ( v42 > 0 )
      {
        BugCheckParameter4 = -v42 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v43 + 24), -v42);
        if ( BugCheckParameter4 <= 0 )
        {
          if ( BugCheckParameter4 )
            KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
          AlpcpDestroyBlob(BugCheckParameter2, 1LL, v37, v41);
          v32 = 0LL;
        }
        v31 = v48;
      }
      if ( v32 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v43 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v43 + 32);
        KeAbPostRelease(v43 + 32);
        return v48;
      }
    }
    else
    {
      *(_QWORD *)(v32 + 200) = 0LL;
      AlpcpCancelMessage(v41, v32, 0x10000LL);
    }
  }
  return v31;
}
