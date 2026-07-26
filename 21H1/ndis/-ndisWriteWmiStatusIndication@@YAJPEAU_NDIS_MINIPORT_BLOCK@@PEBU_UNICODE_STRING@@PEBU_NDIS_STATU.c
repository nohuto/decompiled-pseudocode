/*
 * XREFs of ?ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATUS_INDICATION@@HPEBXK@Z @ 0x1C001BBFC
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001C4F8 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ndisCoIndicateStatusInternal @ 0x1C00BBF20 (ndisCoIndicateStatusInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C0018E88 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C003F400 (memmove.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C005FA88 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

__int64 __fastcall ndisWriteWmiStatusIndication(
        struct _NDIS_MINIPORT_BLOCK *a1,
        const struct _UNICODE_STRING *a2,
        const struct _NDIS_STATUS_INDICATION *a3,
        unsigned int a4,
        int *Src,
        unsigned int a6)
{
  _NDIS_GUID *v7; // r9
  unsigned int Flags; // eax
  bool v12; // r11
  _NDIS_GUID *pNdisGuidMap; // rdx
  int v14; // ecx
  unsigned int v15; // r8d
  int v16; // edx
  __int64 result; // rax
  size_t v18; // rbx
  unsigned int v19; // eax
  unsigned int v20; // r15d
  int v21; // eax
  int v22; // ecx
  PVOID v23; // r14
  _NDIS_GUID *v24; // rcx
  unsigned int *v25; // rdi
  _DWORD *v26; // rdi
  unsigned int v27; // eax
  NTSTATUS v28; // ebx
  unsigned int v29; // [rsp+40h] [rbp-20h]
  _NDIS_GUID *v30; // [rsp+48h] [rbp-18h] BYREF
  PVOID WnodeEventItem; // [rsp+50h] [rbp-10h] BYREF
  int v32; // [rsp+A0h] [rbp+40h] BYREF
  bool v33; // [rsp+B8h] [rbp+58h]

  WnodeEventItem = 0LL;
  v32 = 0;
  v7 = 0LL;
  v30 = 0LL;
  Flags = a1->Flags;
  v12 = a4 - 1073807371 <= 1;
  v33 = v12;
  if ( (Flags & 0x80u) == 0 )
  {
    pNdisGuidMap = a1->pNdisGuidMap;
    v14 = -1073741823;
    if ( pNdisGuidMap )
    {
      v15 = 0;
      if ( a1->cNdisGuidMap )
      {
        while ( (pNdisGuidMap->Flags & 2) == 0 || pNdisGuidMap->Oid != a4 )
        {
          ++v15;
          ++pNdisGuidMap;
          if ( v15 >= a1->cNdisGuidMap )
            goto LABEL_9;
        }
        v14 = 0;
        v30 = pNdisGuidMap;
        v7 = pNdisGuidMap;
      }
    }
LABEL_9:
    if ( v14 < 0 )
      return (unsigned int)v14;
LABEL_10:
    if ( v7 )
    {
      v16 = v7->Flags;
      if ( v16 < 0 && (a3->Flags & 1) == 0 )
      {
        v18 = Src != 0LL ? a6 : 0;
        v19 = v18 + 4;
        if ( (v16 & 0x10) == 0 )
          v19 = Src != 0LL ? a6 : 0;
        v29 = v19;
        v20 = v19;
        if ( (v16 & 0x200) != 0 )
        {
          v21 = a1->MiniportName.Length + 46;
        }
        else
        {
          if ( !v12 )
          {
LABEL_20:
            ndisSetupWmiNode(a1, a2, v20, (__int128 *)v7, (struct tagWNODE_SINGLE_INSTANCE **)&WnodeEventItem);
            v23 = WnodeEventItem;
            if ( WnodeEventItem )
            {
              v24 = v30;
              v25 = (unsigned int *)((char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14));
              if ( (v30->Flags & 0x200) != 0 )
              {
                *v25 = v20 - 4;
                v26 = v25 + 1;
                *v26 = 2621699;
                v26[1] = a1->IfIndex;
                *((_QWORD *)v26 + 1) = a1->NetLuid.Value;
                v26[6] = a3->PortNumber;
                if ( a3->DestinationHandle == &ndisIntReqWmi )
                  *((_QWORD *)v26 + 2) = a3->RequestId;
                v26[7] = a1->MiniportName.Length;
                v26[8] = v29 + 40;
                memmove((char *)v26 + v29 + 40, a1->MiniportName.Buffer, a1->MiniportName.Length);
                v24 = v30;
                v25 = v26 + 10;
              }
              v27 = v24->Flags;
              if ( (_DWORD)v18 )
              {
                if ( (v27 & 0x10) != 0 )
                {
                  *v25++ = (unsigned int)v18 / v24->Size;
                }
                else if ( a4 == 1073807384 && (a3->Flags & 4) != 0 )
                {
                  v32 = 3;
                  Src = &v32;
                  v18 = 4LL;
                }
                memmove(v25, Src, v18);
                v25 = (unsigned int *)((char *)v25 + v18);
              }
              else if ( (v27 & 0x10) != 0 )
              {
                *v25++ = 0;
              }
              if ( v33 )
                memmove(v25, a1->MiniportName.Buffer, a1->MiniportName.Length);
              v28 = IoWMIWriteEvent(v23);
              if ( v28 >= 0 )
                return (unsigned int)v28;
            }
            else
            {
              v28 = -1073741670;
            }
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                2u,
                0x18u,
                0x36u,
                (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
                (char)a1,
                v28);
            if ( (byte_1C00E6081 & 0x10) != 0 )
              McTemplateK0qqq_EtwWriteTransfer(v22, (unsigned int)&IoWMIWriteEventFailed, (_DWORD)a1 + 4008, v28, 3, 0);
            if ( v23 )
              ExFreePoolWithTag(v23, 0);
            return (unsigned int)v28;
          }
          v21 = a1->MiniportName.Length + 2;
        }
        v20 += v21;
        goto LABEL_20;
      }
    }
    return (unsigned int)v14;
  }
  result = ((__int64 (__fastcall *)(void *, _QWORD, _NDIS_GUID **))a1->DriverHandle->CxBlock->Chars.EvtCxGetWmiEventGuid)(
             a1->MiniportAdapterContext,
             a4,
             &v30);
  v14 = result;
  if ( (int)result >= 0 )
  {
    v7 = v30;
    v12 = v33;
    goto LABEL_10;
  }
  return result;
}
