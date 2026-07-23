/*
 * XREFs of AlpcpReceiveMessage @ 0x1406D73D0
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x1406D7150 (NtAlpcSendWaitReceivePort.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x1405E4E4C (AlpcpDestroyBlob.c)
 *     AlpcpExposeCapturedContextAttribute @ 0x1405F1EC0 (AlpcpExposeCapturedContextAttribute.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1405F30D0 (AlpcpReceiveDirectMessagePort.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x140605F88 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     AlpcpCancelMessage @ 0x1406D277C (AlpcpCancelMessage.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1406D31BC (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpReadMessageData @ 0x1406D6F60 (AlpcpReadMessageData.c)
 *     AlpcpExposeAttributes @ 0x1406D7AE0 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveMessagePort @ 0x1406D8320 (AlpcpReceiveMessagePort.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1408C2D34 (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall AlpcpReceiveMessage(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, int *a4, __int64 *a5)
{
  unsigned __int64 *v6; // r9
  struct _KTHREAD *CurrentThread; // r8
  int v9; // r10d
  int v10; // edx
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v13; // rcx
  int v14; // r14d
  __int64 v15; // rax
  int v16; // r12d
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
  void *v35; // rdx
  __int16 v36; // ax
  __int16 v37; // dx
  __int64 v38; // r9
  int v39; // edx
  ULONG_PTR v40; // rsi
  char v41; // cl
  signed __int64 BugCheckParameter4; // rcx
  unsigned __int8 v44; // [rsp+30h] [rbp-A8h]
  unsigned int v45; // [rsp+34h] [rbp-A4h]
  int v46; // [rsp+38h] [rbp-A0h]
  int v47; // [rsp+3Ch] [rbp-9Ch]
  int v48; // [rsp+40h] [rbp-98h]
  int v49; // [rsp+50h] [rbp-88h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-80h] BYREF
  __int64 v51; // [rsp+60h] [rbp-78h]
  unsigned __int64 v52; // [rsp+68h] [rbp-70h]
  __int64 v53; // [rsp+70h] [rbp-68h] BYREF
  struct _KTHREAD *v54; // [rsp+78h] [rbp-60h]
  __int64 v55; // [rsp+80h] [rbp-58h]
  _OWORD v56[2]; // [rsp+88h] [rbp-50h] BYREF
  __int64 v57; // [rsp+E0h] [rbp+8h]
  unsigned __int64 v58; // [rsp+E0h] [rbp+8h]

  v57 = a1;
  v6 = a3;
  BugCheckParameter2 = 0LL;
  v52 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v54 = CurrentThread;
  v9 = *(_DWORD *)(a1 + 48);
  v49 = v9;
  v51 = *(_QWORD *)a1;
  v55 = v51;
  v44 = CurrentThread->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
  v10 = v44;
  v53 = 0LL;
  v52 = -1LL;
  v48 = 0;
  v47 = 0;
  if ( v44 )
  {
    v11 = (__int64)a5;
    if ( a5 )
    {
      if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
        v11 = 0x7FFFFFFF0000LL;
      v53 = *(_QWORD *)v11;
      a5 = &v53;
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
        v48 = *(_DWORD *)(a2 + 16);
        v47 = *(_DWORD *)(a2 + 20);
      }
      else
      {
        v48 = *(_DWORD *)(a2 + 24);
        v47 = *(_DWORD *)(a2 + 32);
      }
    }
    if ( !a4 )
    {
      v16 = 0;
      v46 = 0;
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
      v46 = v16;
LABEL_36:
      if ( v6 )
      {
        v25 = (__int64)v6;
        if ( (unsigned __int64)v6 >= 0x7FFFFFFF0000LL )
          v25 = 0x7FFFFFFF0000LL;
        v52 = *(_QWORD *)v25;
        v26 = (__int64)v6;
        if ( (unsigned __int64)v6 >= 0x7FFFFFFF0000LL )
          v26 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v26 = *(_QWORD *)v26;
        v16 = v46;
      }
      a1 = v57;
      v10 = v44;
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
    v48 = *(_DWORD *)(a2 + 24);
    v47 = *(_DWORD *)(a2 + 32);
  }
  if ( a4 )
    v16 = *a4;
  else
    v16 = 0;
  if ( v6 )
    v52 = *v6;
  if ( (CurrentThread->MiscFlags & 0x400) != 0 )
    LOBYTE(v10) = 1;
LABEL_66:
  if ( v14 )
    v30 = AlpcpReceiveDirectMessagePort((__int64 *)a1, v48, v47, &BugCheckParameter2, v16);
  else
    v30 = AlpcpReceiveMessagePort(a1, v10, (_DWORD)a5, (unsigned int)&BugCheckParameter2, v16);
  v45 = v30;
  v31 = v30;
  if ( !v30 )
  {
    v32 = BugCheckParameter2;
    v33 = 24;
    if ( (v49 & 0xC0000000) != 0x80000000 )
      v33 = 40;
    v34 = *(_WORD *)(BugCheckParameter2 + 240) + v33;
    if ( a3 && (v58 = v34, v34 > v52) )
    {
      memset(v56, 0, sizeof(v56));
      v31 = AlpcpReturnMessageOnInsufficientBuffer(v51, (_QWORD *)BugCheckParameter2, v56);
      v45 = v31;
      if ( v31 == -1073741789 )
      {
        *a3 = v58;
        AlpcpExposeCapturedContextAttribute(v49, v56, v16, (__int64)a4);
      }
    }
    else
    {
      *(_QWORD *)(BugCheckParameter2 + 200) = v54;
      if ( (v49 & 0xC0000000) == 0x80000000 )
      {
        *(_WORD *)a2 = *(_WORD *)(v32 + 240);
        *(_WORD *)(a2 + 2) = *(_WORD *)(v32 + 240) + 24;
        v36 = *(_WORD *)(v32 + 246);
        if ( v36 )
          *(_WORD *)(a2 + 6) = v36 - 16;
        else
          *(_WORD *)(a2 + 6) = 0;
        v37 = *(_WORD *)(v32 + 244) | 0x1000;
        *(_WORD *)(a2 + 4) = v37;
        *(_DWORD *)(a2 + 8) = *(_DWORD *)(v32 + 248);
        *(_DWORD *)(a2 + 12) = *(_DWORD *)(v32 + 256);
        *(_DWORD *)(a2 + 16) = *(_DWORD *)(v32 + 264);
        *(_DWORD *)(a2 + 20) = *(_DWORD *)(v32 + 272);
        *(_DWORD *)(a2 + 20) = *(_DWORD *)(v32 + 272);
        if ( (*(_DWORD *)(v51 + 256) & 0x1000) != 0 )
          *(_WORD *)(a2 + 4) = v37 & 0xC00F;
        v35 = (void *)(a2 + 24);
      }
      else
      {
        *(_OWORD *)a2 = *(_OWORD *)(v32 + 240);
        *(_OWORD *)(a2 + 16) = *(_OWORD *)(v32 + 256);
        *(_QWORD *)(a2 + 32) = *(_QWORD *)(v32 + 272);
        if ( (*(_DWORD *)(v51 + 256) & 0x1000) != 0 )
          *(_WORD *)(a2 + 4) &= 0xC00Fu;
        v35 = (void *)(a2 + 40);
      }
      if ( *(_QWORD *)(v32 + 176) )
        AlpcpGetDataFromUserVaSafe(v32, v35);
      else
        AlpcpReadMessageData(v32, (char *)v35);
      if ( a4 )
        AlpcpExposeAttributes(v51, v49, v32, v16, (__int64)a4);
    }
    v38 = v51;
    if ( v31 != -1073741789 && *(_QWORD *)(v32 + 64) == v51 )
    {
      *(_QWORD *)(v32 + 64) = 0LL;
      *(_QWORD *)(v32 + 56) = 0LL;
    }
    if ( ((v31 + 0x80000000) & 0x80000000) != 0 || v31 == -1073741789 )
    {
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v32);
      v39 = 0;
      v40 = v32 - 48;
      v41 = *(_BYTE *)(v32 - 48 + 16);
      if ( (v41 & 1) != 0 )
      {
        v39 = 0x10000 - *(__int16 *)(v40 + 18);
        *(_BYTE *)(v40 + 16) = v41 & 0xFE;
        *(_WORD *)(v40 + 18) = 0;
      }
      if ( v39 > 0 )
      {
        BugCheckParameter4 = -v39 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + 24), -v39);
        if ( BugCheckParameter4 <= 0 )
        {
          if ( BugCheckParameter4 )
            KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
          AlpcpDestroyBlob(BugCheckParameter2, 1);
          v32 = 0LL;
        }
        v31 = v45;
      }
      if ( v32 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v40 + 32);
        KeAbPostRelease(v40 + 32);
        return v45;
      }
    }
    else
    {
      *(_QWORD *)(v32 + 200) = 0LL;
      AlpcpCancelMessage(v38, v32, 0x10000);
    }
  }
  return v31;
}
