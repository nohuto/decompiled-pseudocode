/*
 * XREFs of NdisFreeSharedMemory @ 0x1C0063780
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x1C005F0A4 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 */

void __stdcall NdisFreeSharedMemory(NDIS_HANDLE NdisHandle, NDIS_HANDLE AllocationHandle)
{
  NDIS_HANDLE v2; // rbp
  int v5; // ecx
  _QWORD *v6; // rsi
  __int64 v7; // rcx
  _QWORD *v8; // rcx
  NDIS_HANDLE *v9; // rax
  NDIS_HANDLE *v10; // rcx
  NDIS_HANDLE *v11; // rdx
  _QWORD *v12; // rcx
  NDIS_HANDLE *v13; // rdx
  KIRQL v14; // dl
  int v15; // [rsp+20h] [rbp-28h]
  KIRQL NewIrql; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  NewIrql = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0x17u,
      (struct _GUID *)&WPP_b95a1582eedd34623c72b3aa5f8cd533_Traceguids,
      AllocationHandle);
  if ( NdisHandle )
  {
    if ( *(_BYTE *)NdisHandle == 18 )
    {
      v2 = NdisHandle;
      NdisHandle = (NDIS_HANDLE)*((_QWORD *)NdisHandle + 2);
    }
    else if ( *(_BYTE *)NdisHandle != 17 )
    {
      goto LABEL_28;
    }
    if ( AllocationHandle )
    {
      v5 = *((_DWORD *)AllocationHandle + 12);
      if ( (v5 & 0xF) == 1 )
      {
        v6 = (_QWORD *)*((_QWORD *)NdisHandle + 63);
        if ( !v6 )
          goto LABEL_28;
        v7 = v6[3];
        if ( !v7 )
          goto LABEL_28;
        LOBYTE(v15) = 1;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)(v7 + 8) + 24LL))(
          v7,
          *((unsigned int *)AllocationHandle + 36),
          *((_QWORD *)AllocationHandle + 13),
          *((_QWORD *)AllocationHandle + 19),
          v15);
        ndisDereferenceDmaAdapter(v6);
      }
      else
      {
        if ( (v5 & 0xF) != 2 )
        {
          if ( (v5 & 4) != 0 )
          {
            if ( v2 )
              goto LABEL_19;
          }
          else if ( (v5 & 8) == 0 )
          {
            goto LABEL_28;
          }
          (*((void (__fastcall **)(_QWORD, _QWORD))AllocationHandle + 10))(
            *((_QWORD *)AllocationHandle + 11),
            *((_QWORD *)AllocationHandle + 12));
          goto LABEL_19;
        }
        MmFreeContiguousMemorySpecifyCache(
          *((PVOID *)AllocationHandle + 19),
          *((unsigned int *)AllocationHandle + 36),
          MmCached);
      }
LABEL_19:
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)NdisHandle, &NewIrql);
      v8 = *(_QWORD **)AllocationHandle;
      if ( *(NDIS_HANDLE *)(*(_QWORD *)AllocationHandle + 8LL) == AllocationHandle )
      {
        v9 = (NDIS_HANDLE *)*((_QWORD *)AllocationHandle + 1);
        if ( *v9 == AllocationHandle )
        {
          *v9 = v8;
          v8[1] = v9;
          if ( v2 )
          {
            v10 = (NDIS_HANDLE *)*((_QWORD *)AllocationHandle + 2);
            if ( v10[1] != (char *)AllocationHandle + 16 )
              goto LABEL_31;
            v11 = (NDIS_HANDLE *)*((_QWORD *)AllocationHandle + 3);
            if ( *v11 != (char *)AllocationHandle + 16 )
              goto LABEL_31;
            *v11 = v10;
            v10[1] = v11;
          }
          v12 = (_QWORD *)*((_QWORD *)AllocationHandle + 4);
          if ( (NDIS_HANDLE)v12[1] == (char *)AllocationHandle + 32 )
          {
            v13 = (NDIS_HANDLE *)*((_QWORD *)AllocationHandle + 5);
            if ( *v13 == (char *)AllocationHandle + 32 )
            {
              *v13 = v12;
              v12[1] = v13;
              v14 = NewIrql;
              *((_QWORD *)NdisHandle + 65) = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)NdisHandle + 12, v14);
              ExFreePoolWithTag(AllocationHandle, 0);
              goto LABEL_28;
            }
          }
        }
      }
LABEL_31:
      __fastfail(3u);
    }
  }
LABEL_28:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0x18u,
      (struct _GUID *)&WPP_b95a1582eedd34623c72b3aa5f8cd533_Traceguids);
}
