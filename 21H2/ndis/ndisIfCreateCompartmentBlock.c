/*
 * XREFs of ndisIfCreateCompartmentBlock @ 0x1C0034B50
 * Callers:
 *     ?ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ @ 0x1C003487C (-ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ.c)
 *     ndisIfCreateCompartment @ 0x1C00B2688 (ndisIfCreateCompartment.c)
 * Callees:
 *     WPP_RECORDER_SF_LqL @ 0x1C000F720 (WPP_RECORDER_SF_LqL.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C0017D3C (WPP_RECORDER_SF_Lq.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     ndisIfFindAvailableCompartmentId @ 0x1C00B2E1C (ndisIfFindAvailableCompartmentId.c)
 */

__int64 __fastcall ndisIfCreateCompartmentBlock(unsigned int a1, _OWORD *a2, unsigned __int16 *a3, _QWORD *a4)
{
  int v5; // ebx
  unsigned int v8; // ebp
  char *PoolWithTag; // rax
  int v10; // edx
  int v11; // r8d
  char *v12; // rdi
  size_t v13; // r8
  KIRQL v14; // si
  struct _NDIS_IF_COMPARTMENT_BLOCK *i; // rax
  __int64 *v16; // rcx
  __int64 v17; // rax
  NTSTATUS v19; // eax
  unsigned int AvailableCompartmentId; // eax

  v5 = 0;
  v8 = a1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xAu,
      (struct _GUID *)&WPP_f54e675e1845396bafe5da195840d2ea_Traceguids,
      a1,
      a3);
  *a4 = 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x6D0uLL, 0x6669444Eu);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v5 = -1073741670;
    goto LABEL_16;
  }
  memset(PoolWithTag, 0, 0x6D0uLL);
  *((_DWORD *)v12 + 4) = v8;
  *((_QWORD *)v12 + 4) = v12 + 24;
  *((_QWORD *)v12 + 3) = v12 + 24;
  *((_QWORD *)v12 + 217) = v12 + 1728;
  *((_QWORD *)v12 + 216) = v12 + 1728;
  *(_QWORD *)(v12 + 44) = 1LL;
  if ( a3 )
  {
    v13 = 1640LL;
    if ( a3[1] < 0x668u )
      v13 = a3[1];
    memmove(v12 + 64, a3, v13);
    goto LABEL_8;
  }
  v19 = ExUuidCreate((UUID *)v12 + 5);
  v5 = v19;
  if ( v19 >= 0 )
  {
    if ( v19 == 1073872982 )
      v5 = 0;
LABEL_8:
    v14 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    if ( a2 )
    {
      AvailableCompartmentId = ndisIfFindAvailableCompartmentId(a2);
      if ( !AvailableCompartmentId )
      {
        v5 = -1073741270;
        goto LABEL_14;
      }
      *((_DWORD *)v12 + 4) = AvailableCompartmentId;
      v8 = AvailableCompartmentId;
      *(_OWORD *)(v12 + 1144) = *a2;
    }
    if ( !v5 )
    {
      for ( i = qword_1C00E4B00;
            i != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00E4B00;
            i = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)i )
      {
        if ( *((_DWORD *)i + 4) == v8 )
        {
          v5 = -1073741270;
          KeReleaseSpinLock(&ndisIfListLock, v14);
          goto LABEL_31;
        }
        if ( *((_DWORD *)i + 4) > v8 )
          break;
      }
      v16 = (__int64 *)*((_QWORD *)i + 1);
      v17 = *v16;
      if ( *(__int64 **)(*v16 + 8) != v16 )
        __fastfail(3u);
      *(_QWORD *)v12 = v17;
      *((_QWORD *)v12 + 1) = v16;
      *(_QWORD *)(v17 + 8) = v12;
      *v16 = (__int64)v12;
      _InterlockedIncrement(&dword_1C00E60D8);
    }
LABEL_14:
    KeReleaseSpinLock(&ndisIfListLock, v14);
    if ( v5 >= 0 )
    {
      *a4 = v12;
      goto LABEL_16;
    }
  }
LABEL_31:
  ExFreePoolWithTag(v12, 0);
  LOBYTE(v12) = 0;
LABEL_16:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      v11,
      0xBu,
      (struct _GUID *)&WPP_f54e675e1845396bafe5da195840d2ea_Traceguids,
      v8,
      (char)v12,
      v5);
  return (unsigned int)v5;
}
