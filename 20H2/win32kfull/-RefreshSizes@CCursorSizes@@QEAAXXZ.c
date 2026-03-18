/*
 * XREFs of ?RefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C0027F24
 * Callers:
 *     EditionUpdateCursorSizes @ 0x1C0027F00 (EditionUpdateCursorSizes.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C0028410 (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 *     ??0CCursorSizes@@QEAA@XZ @ 0x1C012C8AC (--0CCursorSizes@@QEAA@XZ.c)
 * Callees:
 *     GetCursorSizeFromIndex @ 0x1C00281C8 (GetCursorSizeFromIndex.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C00C0A48 (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C010347C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D1B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?UpdateBaseSize@Cursor@InputTraceLogging@@SAXI@Z @ 0x1C01D396C (-UpdateBaseSize@Cursor@InputTraceLogging@@SAXI@Z.c)
 *     ?_CleanupUnneededSystemCursorSizes@@YAXI@Z @ 0x1C01D3A04 (-_CleanupUnneededSystemCursorSizes@@YAXI@Z.c)
 */

void __fastcall CCursorSizes::RefreshSizes(CCursorSizes *this)
{
  unsigned __int8 (__fastcall ***v2)(char *); // rbx
  unsigned int v3; // r15d
  int v4; // r12d
  __int128 v5; // xmm0
  unsigned int v6; // esi
  __int128 v7; // xmm1
  _DWORD *v8; // r14
  INT CursorSizeFromIndex; // eax
  INT v10; // eax
  __int64 i; // rdx
  __int128 v12; // xmm1
  int *v13; // rcx
  __int64 v14; // r9
  int v15; // r8d
  _DWORD *v16; // rdx
  __int64 v17; // r10
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rbx
  char v21; // r13
  bool v22; // zf
  CCursorSizes *v23; // r13
  unsigned __int16 v24; // cx
  unsigned __int64 v25; // rax
  unsigned int v26; // edi
  int v27; // [rsp+3Ch] [rbp-95h] BYREF
  __int64 v28; // [rsp+40h] [rbp-91h] BYREF
  CCursorSizes *v29; // [rsp+48h] [rbp-89h]
  _OWORD v30[2]; // [rsp+50h] [rbp-81h] BYREF
  __int64 v31; // [rsp+70h] [rbp-61h]
  _OWORD v32[2]; // [rsp+78h] [rbp-59h] BYREF
  __int64 v33; // [rsp+98h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+A0h] [rbp-31h] BYREF
  int *v35; // [rsp+C0h] [rbp-11h]
  __int64 v36; // [rsp+C8h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+D0h] [rbp-1h] BYREF
  __int64 *v38; // [rsp+F0h] [rbp+1Fh]
  __int64 v39; // [rsp+F8h] [rbp+27h]

  v29 = this;
  v2 = (unsigned __int8 (__fastcall ***)(char *))((char *)this + 64);
  v3 = *(_DWORD *)UPDWORDPointer(8232LL);
  if ( (**v2)((char *)v2) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 72, 0LL);
    *((_QWORD *)this + 10) = KeGetCurrentThread();
    if ( !(**v2)((char *)this + 64) )
      CPushLock::ReleaseLock((CCursorSizes *)((char *)this + 64));
  }
  v4 = *((_DWORD *)this + 1);
  v5 = *(_OWORD *)((char *)this + 24);
  *((_DWORD *)this + 1) = v3;
  v6 = 0;
  v7 = *(_OWORD *)((char *)this + 40);
  v8 = (_DWORD *)((char *)this + 24);
  v30[0] = v5;
  v31 = *((_QWORD *)this + 7);
  v30[1] = v7;
  do
  {
    CursorSizeFromIndex = GetCursorSizeFromIndex(v6);
    v10 = EngMulDiv(CursorSizeFromIndex, v3, 32);
    *v8 = 0;
    ++v6;
    v8[1] = v10;
    v8 += 2;
  }
  while ( v6 < 5 );
  for ( i = *(_QWORD *)(gpDispInfo + 104LL); i; i = *(_QWORD *)(i + 56) )
  {
    v24 = *(_WORD *)(*(_QWORD *)(i + 40) + 68LL);
    if ( v24 >= 0x90u )
    {
      if ( v24 >= 0xC0u )
      {
        if ( v24 >= 0x120u )
          v25 = (-(__int64)(v24 < 0x180u) & 0xFFFFFFFFFFFFFFF8uLL) + 56;
        else
          v25 = 40LL;
      }
      else
      {
        v25 = 32LL;
      }
    }
    else
    {
      v25 = 24LL;
    }
    *(_DWORD *)((char *)this + v25) = 1;
  }
  v12 = *(_OWORD *)((char *)this + 40);
  v32[0] = *(_OWORD *)((char *)this + 24);
  v33 = *((_QWORD *)this + 7);
  v32[1] = v12;
  CPushLock::ReleaseLock((CCursorSizes *)((char *)this + 64));
  if ( v3 != v4 )
    InputTraceLogging::Cursor::UpdateBaseSize(v3);
  v13 = (int *)v32;
  v14 = 5LL;
  do
  {
    v15 = *v13;
    v16 = v30;
    v17 = 5LL;
    do
    {
      if ( v15 && *v16 && v13[1] == v16[1] )
      {
        v15 = 0;
        *v16 = 0;
      }
      v16 += 2;
      --v17;
    }
    while ( v17 );
    *v13 = v15;
    v13 += 2;
    --v14;
  }
  while ( v14 );
  v18 = qword_1C032FB48;
  v19 = 5LL;
  v20 = 0LL;
  v21 = 0;
  do
  {
    if ( *(_DWORD *)((char *)v30 + v20) )
    {
      v26 = *(_DWORD *)((char *)v30 + v20 + 4);
      if ( (unsigned int)dword_1C032FB30 > 5 && (qword_1C032FB40 & 8) != 0 && (v18 & 8) == v18 )
      {
        v27 = *(_DWORD *)((char *)v30 + v20 + 4);
        v35 = &v27;
        v36 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C032FB30, (int)&dword_1C02EED28, 0, 0, 3u, &v34);
      }
      _CleanupUnneededSystemCursorSizes(v26);
      v18 = qword_1C032FB48;
    }
    if ( *(_DWORD *)((char *)v32 + v20) )
    {
      v21 = 1;
      if ( (unsigned int)dword_1C032FB30 > 5 && (qword_1C032FB40 & 8) != 0 && (v18 & 8) == v18 )
      {
        LODWORD(v28) = *(_DWORD *)((char *)v32 + v20 + 4);
        v38 = &v28;
        v39 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C032FB30, (int)&dword_1C02EECF4, 0, 0, 3u, &v37);
        v18 = qword_1C032FB48;
      }
    }
    v20 += 8LL;
    --v19;
  }
  while ( v19 );
  v22 = v21 == 0;
  v23 = v29;
  if ( !v22 )
  {
    _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 4u);
    KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
  }
  CCursorSizes::UpdateGlobalCursorSize(v23, (const struct tagPOINT *)(gpsi + 4960LL), 1);
}
