/*
 * XREFs of IoMapTransfer @ 0x140390AC0
 * Callers:
 *     HalpAllocateAdapterCallbackV2 @ 0x140458340 (HalpAllocateAdapterCallbackV2.c)
 * Callees:
 *     IoMapTransferInternal @ 0x140390C08 (IoMapTransferInternal.c)
 *     Feature_Servicing_DmarPremapLaHibernate__private_IsEnabled @ 0x140416F84 (Feature_Servicing_DmarPremapLaHibernate__private_IsEnabled.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

PHYSICAL_ADDRESS __stdcall IoMapTransfer(
        PDMA_ADAPTER DmaAdapter,
        PMDL Mdl,
        PVOID MapRegisterBase,
        PVOID CurrentVa,
        PULONG Length,
        BOOLEAN WriteToDevice)
{
  bool v7; // zf
  ULONG v9; // eax
  PHYSICAL_ADDRESS result; // rax
  unsigned int v11; // ebp
  unsigned __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  int IsEnabled; // eax
  _QWORD *v17; // r8
  _DWORD v18[2]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-30h]
  unsigned __int64 v20; // [rsp+50h] [rbp-28h]
  __int128 v21; // [rsp+58h] [rbp-20h] BYREF
  __int64 v22; // [rsp+68h] [rbp-10h]

  v18[1] = 0;
  v7 = *(_DWORD *)&DmaAdapter[32].Version == 3;
  v21 = 0LL;
  v22 = 0LL;
  *((_BYTE *)&DmaAdapter[32].Size + 2) = 1;
  if ( v7 )
  {
    v9 = *(_DWORD *)(&DmaAdapter[15].Size + 1);
    if ( *Length > v9 )
      *Length = v9;
  }
  result.QuadPart = IoMapTransferInternal(
                      (_DWORD)DmaAdapter,
                      (_DWORD)Mdl,
                      (_DWORD)MapRegisterBase,
                      (_DWORD)CurrentVa,
                      (__int64)Length,
                      WriteToDevice,
                      0);
  v11 = result.LowPart & 0xFFF;
  if ( *(_DWORD *)&DmaAdapter[32].Version == 3 )
  {
    v12 = ((result.LowPart & 0xFFF) + *Length + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    if ( *((_BYTE *)MapRegisterBase + 64) )
    {
      IsEnabled = Feature_Servicing_DmarPremapLaHibernate__private_IsEnabled();
      v17 = (_QWORD *)*((_QWORD *)MapRegisterBase + 3);
      if ( IsEnabled )
      {
        result.QuadPart = *((_QWORD *)MapRegisterBase + 4) + v11 + *v17 + *((unsigned int *)MapRegisterBase + 4);
        *((_DWORD *)MapRegisterBase + 4) += v12;
      }
      else
      {
        return (PHYSICAL_ADDRESS)(*((_QWORD *)MapRegisterBase + 4) + v11 + *v17);
      }
    }
    else
    {
      v13 = *((_QWORD *)MapRegisterBase + 5);
      v18[0] = 1;
      v19 = result.QuadPart & 0xFFFFFFFFFFFFF000uLL;
      v14 = *((_QWORD *)MapRegisterBase + 3);
      v20 = v12;
      ((void (__fastcall *)(__int64, __int64, __int64, _DWORD *, __int128 *))qword_140C4BE00)(v14, v13, 3LL, v18, &v21);
      v15 = (_QWORD *)v21;
      *((_QWORD *)MapRegisterBase + 5) += v12;
      return (PHYSICAL_ADDRESS)(*v15 + *((_QWORD *)&v21 + 1) + v11);
    }
  }
  return result;
}
