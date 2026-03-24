/*
 * XREFs of ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x1801CBA7C
 * Callers:
 *     ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x1801CB7F8 (-SendPendingCallbacks@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x1800ACF50 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1801C8390 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x1801C85BC (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ @ 0x1801C9F10 (-HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ.c)
 *     ?SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z @ 0x1801CBE2C (-SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020FB94 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CInteractionTracker::SendPendingStateChangeCallbacks(CInteractionTracker *this, char a2)
{
  _QWORD *v2; // rsi
  __int64 v4; // r8
  __int64 v5; // r12
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  int v8; // eax
  __int64 v9; // rdi
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rcx
  unsigned __int16 v15; // r9
  __int64 v16; // r10
  _QWORD *v17; // rdx
  __int64 v18; // rax
  __int16 v19; // cx
  CInteractionTracker *v20; // rcx
  __int128 v21; // xmm0
  __int128 *v22; // rax
  unsigned int ChannelCallbackId; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int16 v27; // r9
  __int64 v28; // r10
  int v29; // eax
  __int128 v30; // [rsp+98h] [rbp-80h]
  __int128 v31; // [rsp+A8h] [rbp-70h]
  __int64 v32; // [rsp+D8h] [rbp-40h] BYREF
  int v33; // [rsp+E0h] [rbp-38h]
  __int64 v34; // [rsp+E8h] [rbp-30h]
  int v35; // [rsp+F0h] [rbp-28h]
  __int64 v36; // [rsp+F8h] [rbp-20h]
  int v37; // [rsp+100h] [rbp-18h]
  __int64 v38; // [rsp+108h] [rbp-10h]
  int v39; // [rsp+110h] [rbp-8h]
  __int64 v40; // [rsp+118h] [rbp+0h] BYREF
  int v41; // [rsp+120h] [rbp+8h]
  _QWORD v42[2]; // [rsp+128h] [rbp+10h] BYREF
  _QWORD v43[2]; // [rsp+138h] [rbp+20h] BYREF
  _QWORD v44[2]; // [rsp+148h] [rbp+30h] BYREF
  _QWORD v45[2]; // [rsp+158h] [rbp+40h] BYREF
  _BYTE v46[64]; // [rsp+168h] [rbp+50h] BYREF
  void *retaddr; // [rsp+1C0h] [rbp+A8h]

  v2 = (_QWORD *)((char *)this + 472);
  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 1080LL);
  v5 = *(_QWORD *)(v4 + 48);
  v6 = *((_DWORD *)this + 124) - 1;
  if ( !a2 )
    v6 = *((_DWORD *)this + 124);
  v7 = 0;
  if ( v6 )
  {
    v8 = *((_DWORD *)this + 43);
    v9 = 0LL;
    do
    {
      if ( v8 )
      {
        v10 = *(_DWORD *)(v9 + *v2 + 12);
        v32 = *(_QWORD *)(v9 + *v2 + 4);
        v33 = v10;
        CInteractionTracker::SendValuesChangedCallbackIfNecessary(this, &v32, v4, 0LL);
      }
      v11 = *(_DWORD *)(v9 + *v2);
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( !v13 )
          {
            if ( CInteractionTracker::AreInteractionAnimationsAlive(this)
              || CInteractionTracker::HasDefaultAnimations(v20) )
            {
              v22 = (__int128 *)CInteractionTracker::CalculateInertiaCallbackValues((__int64)this, (__int64)v46);
              v30 = *v22;
              v21 = v22[2];
              v31 = v22[1];
            }
            else
            {
              v30 = *(_OWORD *)((char *)this + 572);
              v21 = *(_OWORD *)((char *)this + 604);
              v31 = *(_OWORD *)((char *)this + 588);
            }
            v35 = DWORD2(v21);
            v34 = v21;
            v37 = DWORD2(v31);
            v36 = v31;
            v38 = v30;
            v39 = DWORD2(v30);
            ChannelCallbackId = CNotificationResource::GetChannelCallbackId(this);
            v43[1] = *((unsigned int *)this + 14);
            v43[0] = ChannelCallbackId;
            CoreUICallSend(v5, v43, 2LL, 8LL, 1, &unk_1802CE74B);
            if ( *((_BYTE *)this + 626) )
              *((_BYTE *)this + 626) = 0;
            goto LABEL_21;
          }
          if ( v13 != 1 )
            ModuleFailFastForHRESULT(2147942487LL, retaddr);
          v14 = (unsigned int)CNotificationResource::GetChannelCallbackId(this);
          v17 = v42;
          v18 = *((unsigned int *)this + 14);
          v42[0] = v14;
          v19 = 5;
          v42[1] = v18;
        }
        else
        {
          v24 = (unsigned int)CNotificationResource::GetChannelCallbackId(this);
          v17 = v44;
          v25 = *((unsigned int *)this + 14);
          v44[0] = v24;
          v19 = 4;
          v44[1] = v25;
        }
        CoreUICallSend(v5, v17, 2LL, v15, v19, v16);
      }
      else
      {
        v26 = (unsigned int)CNotificationResource::GetChannelCallbackId(this);
        v45[1] = *((unsigned int *)this + 14);
        v45[0] = v26;
        CoreUICallSend(v5, v45, 2LL, v27, 3, v28);
        *((_DWORD *)this + 45) = 0;
      }
LABEL_21:
      if ( !*((_DWORD *)this + 43) )
      {
        v29 = *(_DWORD *)(v9 + *v2 + 12);
        v40 = *(_QWORD *)(v9 + *v2 + 4);
        v41 = v29;
        CInteractionTracker::SendValuesChangedCallbackIfNecessary(this, &v40, v4, 0LL);
      }
      ++v7;
      v8 = *(_DWORD *)(v9 + *v2);
      v9 += 24LL;
      *((_DWORD *)this + 43) = v8;
    }
    while ( v7 < v6 );
  }
  DynArray<CInteractionTracker::PendingStateChangeInfo,0>::ShiftLeft(v2, v6);
}
