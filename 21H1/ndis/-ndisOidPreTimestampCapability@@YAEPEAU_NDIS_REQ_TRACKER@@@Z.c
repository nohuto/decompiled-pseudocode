/*
 * XREFs of ?ndisOidPreTimestampCapability@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C001EAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     memmove @ 0x1C003F400 (memmove.c)
 */

unsigned __int8 __fastcall ndisOidPreTimestampCapability(struct _NDIS_MINIPORT_BLOCK **a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rdi
  char v2; // bl
  struct _NDIS_MINIPORT_BLOCK *v3; // rsi
  int v6; // ebx
  unsigned __int16 *p_Type; // rbp
  KIRQL v8; // dl
  unsigned __int16 v9; // r9
  KIRQL v10; // dl
  size_t v11; // r8
  KIRQL v12; // dl
  KIRQL NewIrql; // [rsp+60h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = 0;
  v3 = a1[4];
  NewIrql = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xD0u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)v1,
      v3);
  if ( *((_DWORD *)&v3->Header + 1) )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return 1;
  }
  if ( *a1 )
  {
    v6 = 54;
    if ( v3->PcwDatapathEventMask < 0x36u )
    {
      LODWORD(v3->OpenQueue) = 54;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    else
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v1, &NewIrql);
      if ( *(_DWORD *)&v3->Reserved4.Length == 10485761 )
      {
        p_Type = (unsigned __int16 *)&v1->HwTimestampCapabilities->Header.Type;
        if ( !p_Type )
        {
          v10 = NewIrql;
          *((_DWORD *)a1 + 10) = -1073741637;
          v2 = 1;
          v1->MiniportThread = 0LL;
          KeReleaseSpinLock(&v1->Lock, v10);
          if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            return v2;
          v9 = 209;
          goto LABEL_11;
        }
      }
      else
      {
        p_Type = (unsigned __int16 *)&v1->HwTimestampCurrentConfig->Header.Type;
        if ( !p_Type )
        {
          v8 = NewIrql;
          *((_DWORD *)a1 + 10) = -1073741637;
          v2 = 1;
          v1->MiniportThread = 0LL;
          KeReleaseSpinLock(&v1->Lock, v8);
          if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            return v2;
          v9 = 210;
LABEL_11:
          WPP_RECORDER_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xBu,
            v9,
            (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
            (char)v1,
            v3);
          return v2;
        }
      }
      v11 = p_Type[1];
      if ( p_Type[1] >= 0x36u )
        v11 = 54LL;
      memmove(v3->Reserved4.Buffer, p_Type, v11);
      if ( p_Type[1] < 0x36u )
        v6 = p_Type[1];
      v12 = NewIrql;
      HIDWORD(v3->Reserved28) = v6;
      v1->MiniportThread = 0LL;
      KeReleaseSpinLock(&v1->Lock, v12);
      *((_DWORD *)a1 + 10) = 0;
    }
    return 1;
  }
  return v2;
}
