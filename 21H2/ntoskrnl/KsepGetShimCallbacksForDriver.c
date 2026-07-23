/*
 * XREFs of KsepGetShimCallbacksForDriver @ 0x140758810
 * Callers:
 *     KseShimDriverIoCallbacks @ 0x1407586E4 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     KsepLogInfo @ 0x1403712F8 (KsepLogInfo.c)
 *     KsepLogError @ 0x140371AC4 (KsepLogError.c)
 *     memset @ 0x140414300 (memset.c)
 *     KsepDebugPrint @ 0x140527128 (KsepDebugPrint.c)
 *     RtlAssert @ 0x140588A40 (RtlAssert.c)
 *     KsepIsModuleShimmed @ 0x14075BA98 (KsepIsModuleShimmed.c)
 */

__int64 __fastcall KsepGetShimCallbacksForDriver(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 v12; // rax
  _DWORD *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r14
  _DWORD *v16; // rdx
  unsigned int v17; // r15d
  __int64 v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+20h] [rbp-48h]
  int v24; // [rsp+78h] [rbp+10h]
  __int64 v25; // [rsp+80h] [rbp+18h]
  __int64 v26; // [rsp+88h] [rbp+20h] BYREF

  v2 = 0;
  v26 = 0LL;
  if ( !a2 )
  {
    v6 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    dword_140C2AAC4[2 * v6] = -1073740768;
    KsepHistoryErrors[2 * v6] = 459523;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("IoCallbacks != NULL", "minkernel\\ntos\\kshim\\kseloader.c", 0x303u, 0LL);
  }
  memset(a2, 0, 0x100uLL);
  if ( !(unsigned int)KsepIsModuleShimmed(&KseEngine, a1, &v26) )
    return (unsigned int)-1073741275;
  v7 = *(_DWORD *)(v26 + 24);
  v8 = *(_QWORD *)(v26 + 32);
  if ( v7 )
  {
    v9 = v8 + 72;
    v25 = *(unsigned int *)(v26 + 24);
    v23 = v8 + 72;
    v10 = v7;
    while ( 1 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)v9 + 28LL) & 4) == 0 )
      {
        v11 = *(_QWORD *)(*(_QWORD *)v9 + 16LL);
        if ( !v11 )
        {
          v12 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140C2AAC4[2 * v12] = -1073740768;
          KsepHistoryErrors[2 * v12] = 459576;
          if ( (KsepDebugFlag & 4) != 0 )
          {
            RtlAssert("CurrentShim != NULL", "minkernel\\ntos\\kshim\\kseloader.c", 0x338u, 0LL);
            v10 = v25;
          }
        }
        v13 = *(_DWORD **)(v11 + 48);
        v14 = 0LL;
        v24 = 0;
        if ( *v13 != 4 )
          break;
      }
LABEL_48:
      v9 += 80LL;
      --v10;
      v23 = v9;
      v25 = v10;
      if ( !v10 )
        goto LABEL_49;
    }
    v15 = 0LL;
    while ( 1 )
    {
      v16 = v13;
      if ( v13[v15] == 3 )
      {
        v17 = 0;
        if ( **(_DWORD **)&v13[v15 + 4] != 2 )
          break;
      }
LABEL_46:
      v14 = (unsigned int)(v14 + 1);
      v13 = v16;
      v24 = v14;
      v15 = 6 * v14;
      if ( v16[6 * v14] == 4 )
      {
        v9 = v23;
        v10 = v25;
        goto LABEL_48;
      }
    }
    v18 = 0LL;
    while ( 1 )
    {
      v19 = *(_QWORD *)&v13[v15 + 4];
      switch ( *(_DWORD *)(v18 + v19 + 8) )
      {
        case 1:
          if ( *a2 )
          {
            v21 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
            KsepHistoryErrors[2 * (unsigned int)v21] = 459604;
            goto LABEL_40;
          }
          *a2 = *(_QWORD *)(v18 + v19 + 16);
          break;
        case 2:
          if ( a2[1] )
          {
            v21 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
            KsepHistoryErrors[2 * (unsigned int)v21] = 459619;
            goto LABEL_40;
          }
          a2[1] = *(_QWORD *)(v18 + v19 + 16);
          break;
        case 3:
          if ( a2[2] )
          {
            v21 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
            KsepHistoryErrors[2 * (unsigned int)v21] = 459634;
            goto LABEL_40;
          }
          a2[2] = *(_QWORD *)(v18 + v19 + 16);
          break;
        case 4:
          if ( a2[3] )
          {
            v21 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
            KsepHistoryErrors[2 * (unsigned int)v21] = 459649;
            goto LABEL_40;
          }
          a2[3] = *(_QWORD *)(v18 + v19 + 16);
          break;
        default:
          v20 = (unsigned int)(*(_DWORD *)(v18 + v19 + 8) - 100);
          if ( (unsigned int)v20 > 0x1B )
          {
            v22 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
            dword_140C2AAC4[2 * v22] = -1073741811;
            KsepHistoryErrors[2 * v22] = 459680;
            if ( (KsepDebugFlag & 2) != 0 )
              KsepDebugPrint(9LL, "KSE: Invalid callback code encountered: %u\n", *(_DWORD *)(v18 + v19 + 8));
            KsepLogError(9, "KSE: Invalid callback code encountered: %u\n", *(_DWORD *)(v18 + v19 + 8));
            break;
          }
          if ( a2[v20 + 4] )
          {
            v21 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
            KsepHistoryErrors[2 * (unsigned int)v21] = 459667;
LABEL_40:
            dword_140C2AAC4[2 * v21] = -1073741823;
            if ( (KsepDebugFlag & 2) != 0 )
              KsepDebugPrint(9LL, "KSE: Two shims are hooking same callback! \n", v14);
            KsepLogError(9, "KSE: Two shims are hooking same callback! \n", v14);
            break;
          }
          a2[(unsigned int)v20 + 4] = *(_QWORD *)(v18 + v19 + 16);
          break;
      }
      v16 = *(_DWORD **)(v11 + 48);
      ++v17;
      v13 = v16;
      v18 = 32LL * v17;
      if ( *(_DWORD *)(v18 + *(_QWORD *)&v16[v15 + 4]) == 2 )
      {
        LODWORD(v14) = v24;
        goto LABEL_46;
      }
    }
  }
LABEL_49:
  KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 459700LL;
  if ( (KsepDebugFlag & 1) != 0 )
    KsepDebugPrint(9LL, "KSE: GetShimCallbacks succeeded\n");
  KsepLogInfo(9LL, (__int64)"KSE: GetShimCallbacks succeeded\n");
  return v2;
}
