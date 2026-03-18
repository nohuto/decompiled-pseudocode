/*
 * XREFs of ?PrepareCSMBufferInfo@CEndpointResourceStateManager@@QEAAX_NPEAUFlipManagerObject@@_KPEAUCSM_BUFFER_INFO@@@Z @ 0x1C006B938
 * Callers:
 *     ?PrepareUpdateTokensForDwm@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@PEAVCFlipPropertySet@@AEAU_LIST_ENTRY@@@Z @ 0x1C006C258 (-PrepareUpdateTokensForDwm@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@PEAVCFlipP.c)
 * Callees:
 *     memset @ 0x1C0027400 (memset.c)
 */

void __fastcall CEndpointResourceStateManager::PrepareCSMBufferInfo(
        CEndpointResourceStateManager **this,
        unsigned __int8 a2,
        struct FlipManagerObject *a3,
        __int64 a4,
        struct CSM_BUFFER_INFO *a5)
{
  int v6; // ebx
  CEndpointResourceStateManager *i; // rdx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax

  v6 = a2;
  memset(a5, 0, 0x410uLL);
  *(_DWORD *)a5 = 3;
  *((_DWORD *)a5 + 34) = 2 * v6 + 2;
  *((_QWORD *)a5 + 111) = a3;
  *((_QWORD *)a5 + 112) = a4;
  for ( i = *this; i != (CEndpointResourceStateManager *)this; i = *(CEndpointResourceStateManager **)i )
  {
    v10 = (__int64)i + 16;
    if ( !i )
      v10 = 24LL;
    v11 = *(_QWORD *)v10;
    v12 = (__int64)i + 24;
    if ( !i )
      v12 = 32LL;
    if ( (*(_BYTE *)v12 & 2) == 0 )
    {
      v13 = 3 * (*((unsigned int *)a5 + 35) + 6LL);
      *((_QWORD *)a5 + v13) = *(_QWORD *)(v11 + 48);
      v14 = *(_QWORD *)(v11 + 64);
      *((_DWORD *)a5 + 2 * v13 + 4) = 0;
      *((_QWORD *)a5 + v13 + 1) = v14;
      ++*((_DWORD *)a5 + 35);
    }
  }
}
