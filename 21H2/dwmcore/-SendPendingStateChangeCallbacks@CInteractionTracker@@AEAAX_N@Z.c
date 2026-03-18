/*
 * XREFs of ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x18011412C
 * Callers:
 *     ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x180113EA8 (-SendPendingCallbacks@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x180040830 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x180113E04 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x1802196D8 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ @ 0x18021B2B4 (-HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ.c)
 *     ?SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z @ 0x18021CE08 (-SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CInteractionTracker::SendPendingStateChangeCallbacks(CInteractionTracker *this, char a2)
{
  __int64 *v2; // rsi
  __int64 v4; // r12
  unsigned int v5; // r14d
  unsigned int v6; // r15d
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // r8
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
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int16 v28; // r9
  __int64 v29; // r10
  int v30; // eax
  __int128 v31; // [rsp+98h] [rbp-80h]
  __int128 v32; // [rsp+A8h] [rbp-70h]
  __int64 v33; // [rsp+D8h] [rbp-40h] BYREF
  int v34; // [rsp+E0h] [rbp-38h]
  __int64 v35; // [rsp+E8h] [rbp-30h]
  int v36; // [rsp+F0h] [rbp-28h]
  __int64 v37; // [rsp+F8h] [rbp-20h]
  int v38; // [rsp+100h] [rbp-18h]
  __int64 v39; // [rsp+108h] [rbp-10h]
  int v40; // [rsp+110h] [rbp-8h]
  __int64 v41; // [rsp+118h] [rbp+0h] BYREF
  int v42; // [rsp+120h] [rbp+8h]
  _QWORD v43[2]; // [rsp+128h] [rbp+10h] BYREF
  _QWORD v44[2]; // [rsp+138h] [rbp+20h] BYREF
  _QWORD v45[2]; // [rsp+148h] [rbp+30h] BYREF
  _QWORD v46[2]; // [rsp+158h] [rbp+40h] BYREF
  _BYTE v47[64]; // [rsp+168h] [rbp+50h] BYREF
  void *retaddr; // [rsp+1C0h] [rbp+A8h]

  v2 = (__int64 *)((char *)this + 480);
  v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1240LL) + 40LL);
  v5 = *((_DWORD *)this + 126) - 1;
  if ( !a2 )
    v5 = *((_DWORD *)this + 126);
  v6 = 0;
  if ( v5 )
  {
    v7 = *((_DWORD *)this + 45);
    v8 = 0LL;
    v9 = *v2;
    do
    {
      if ( v7 )
      {
        v10 = *(_DWORD *)(v8 + v9 + 12);
        v33 = *(_QWORD *)(v8 + v9 + 4);
        v34 = v10;
        CInteractionTracker::SendValuesChangedCallbackIfNecessary(this, &v33, v9, 0LL);
        v9 = *v2;
      }
      v11 = *(_DWORD *)(v8 + v9);
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
              v22 = (__int128 *)CInteractionTracker::CalculateInertiaCallbackValues(this, v47);
              v31 = *v22;
              v21 = v22[2];
              v32 = v22[1];
            }
            else
            {
              v31 = *(_OWORD *)((char *)this + 580);
              v21 = *(_OWORD *)((char *)this + 612);
              v32 = *(_OWORD *)((char *)this + 596);
            }
            v36 = DWORD2(v21);
            v35 = v21;
            v38 = DWORD2(v32);
            v37 = v32;
            v39 = v31;
            v40 = DWORD2(v31);
            ChannelCallbackId = CNotificationResource::GetChannelCallbackId(this);
            v44[1] = *((unsigned int *)this + 16);
            v44[0] = ChannelCallbackId;
            CoreUICallSend(v4, v44, 2LL, 11LL, 1, &unk_18032C3D6);
            if ( *((_BYTE *)this + 634) )
              *((_BYTE *)this + 634) = 0;
            goto LABEL_21;
          }
          if ( v13 != 1 )
            ModuleFailFastForHRESULT(2147942487LL, retaddr);
          v14 = (unsigned int)CNotificationResource::GetChannelCallbackId(this);
          v17 = v43;
          v18 = *((unsigned int *)this + 16);
          v43[0] = v14;
          v19 = 5;
          v43[1] = v18;
        }
        else
        {
          v25 = (unsigned int)CNotificationResource::GetChannelCallbackId(this);
          v17 = v45;
          v26 = *((unsigned int *)this + 16);
          v45[0] = v25;
          v19 = 4;
          v45[1] = v26;
        }
        CoreUICallSend(v4, v17, 2LL, v15, v19, v16);
      }
      else
      {
        v27 = (unsigned int)CNotificationResource::GetChannelCallbackId(this);
        v46[1] = *((unsigned int *)this + 16);
        v46[0] = v27;
        CoreUICallSend(v4, v46, 2LL, v28, 3, v29);
        *((_DWORD *)this + 47) = 0;
      }
LABEL_21:
      if ( !*((_DWORD *)this + 45) )
      {
        v30 = *(_DWORD *)(v8 + *v2 + 12);
        v41 = *(_QWORD *)(v8 + *v2 + 4);
        v42 = v30;
        CInteractionTracker::SendValuesChangedCallbackIfNecessary(this, &v41, v24, 0LL);
      }
      v9 = *v2;
      ++v6;
      v7 = *(_DWORD *)(v8 + *v2);
      v8 += 24LL;
      *((_DWORD *)this + 45) = v7;
    }
    while ( v6 < v5 );
  }
  DynArray<CInteractionTracker::PendingStateChangeInfo,0>::ShiftLeft(v2, v5);
}
