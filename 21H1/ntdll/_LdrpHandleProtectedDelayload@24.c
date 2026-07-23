/*
 * XREFs of _LdrpHandleProtectedDelayload@24 @ 0x4B2CF930
 * Callers:
 *     _LdrResolveDelayLoadedAPI@24 @ 0x4B2CCA20 (_LdrResolveDelayLoadedAPI@24.c)
 * Callees:
 *     _RtlpxLookupFunctionTable@8 @ 0x4B2BD6C0 (_RtlpxLookupFunctionTable@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _LdrpGetDelayloadExportDll@20 @ 0x4B2CF859 (_LdrpGetDelayloadExportDll@20.c)
 *     _LdrpHandleProtectedDelayload@24 @ 0x4B2CF930 (_LdrpHandleProtectedDelayload@24.c)
 *     _LdrpWriteBackProtectedDelayLoad@20 @ 0x4B2CFDFF (_LdrpWriteBackProtectedDelayLoad@20.c)
 *     _LdrControlFlowGuardEnforced@0 @ 0x4B2D0100 (_LdrControlFlowGuardEnforced@0.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _LdrpResolveProcedureAddress@24 @ 0x4B306029 (_LdrpResolveProcedureAddress@24.c)
 *     _LdrpRedirectDelayloadFailure@28 @ 0x4B32F8F2 (_LdrpRedirectDelayloadFailure@28.c)
 *     _AVrfCallAPILookupCallback@20 @ 0x4B338404 (_AVrfCallAPILookupCallback@20.c)
 */

int __userpurge LdrpHandleProtectedDelayload@<eax>(
        int a1@<edx>,
        ULONG_PTR *a2@<ecx>,
        int a3@<ebp>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  ULONG_PTR *v9; // edi
  NTSTATUS DelayloadExportDll; // eax
  void *v11; // esi
  int v12; // eax
  int v13; // ecx
  _DWORD *v14; // edx
  unsigned int v15; // esi
  int v16; // eax
  _DWORD *v17; // ecx
  int v18; // edx
  unsigned int v19; // eax
  int v20; // edx
  int v21; // eax
  int v22; // ecx
  int v23; // edi
  unsigned int v24; // eax
  int v25; // edx
  _DWORD *v26; // eax
  int v27; // ecx
  int v28; // esi
  int v30; // [esp-298h] [ebp-2A4h]
  SIZE_T v31; // [esp-294h] [ebp-2A0h]
  _DWORD v32[4]; // [esp-284h] [ebp-290h] BYREF
  int v33; // [esp-274h] [ebp-280h]
  int v34; // [esp-270h] [ebp-27Ch]
  int v35; // [esp-26Ch] [ebp-278h]
  int v36; // [esp-268h] [ebp-274h]
  _DWORD *v37; // [esp-264h] [ebp-270h]
  ULONG_PTR *v38; // [esp-260h] [ebp-26Ch]
  int v39; // [esp-25Ch] [ebp-268h] BYREF
  int v40; // [esp-258h] [ebp-264h]
  void (__thiscall *v41)(_DWORD, int *, volatile signed __int32 *, int, int, _DWORD); // [esp-254h] [ebp-260h]
  int v42; // [esp-250h] [ebp-25Ch]
  NTSTATUS v43; // [esp-24Ch] [ebp-258h]
  int v44; // [esp-248h] [ebp-254h]
  unsigned int v45; // [esp-244h] [ebp-250h]
  int v46; // [esp-240h] [ebp-24Ch] BYREF
  int v47; // [esp-23Ch] [ebp-248h]
  int v48; // [esp-238h] [ebp-244h] BYREF
  volatile signed __int32 *v49; // [esp-234h] [ebp-240h] BYREF
  int v50; // [esp-230h] [ebp-23Ch]
  _DWORD *Heap; // [esp-22Ch] [ebp-238h]
  _DWORD v52[136]; // [esp-228h] [ebp-234h] BYREF
  _EH4_SCOPETABLE *v53; // [esp-8h] [ebp-14h]
  int v54; // [esp-4h] [ebp-10h]
  _DWORD v55[2]; // [esp+0h] [ebp-Ch] BYREF
  int v56; // [esp+8h] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+0h]

  v55[0] = a3;
  v55[1] = retaddr;
  v54 = -2;
  v53 = stru_4B38C228;
  v52[135] = _except_handler4;
  v52[134] = NtCurrentTeb()->NtTib.ExceptionList;
  v52[131] = &v56;
  v53 = (_EH4_SCOPETABLE *)(__security_cookie ^ (unsigned int)stru_4B38C228);
  v47 = a1;
  v9 = a2;
  v38 = a2;
  v35 = a4;
  v36 = a5;
  v42 = a6;
  v46 = 0;
  DelayloadExportDll = LdrpGetDelayloadExportDll(a2, a1, &v49, a7, a6);
  v43 = DelayloadExportDll;
  if ( DelayloadExportDll >= 0 )
  {
    v11 = (void *)*((_DWORD *)v49 + 6);
    LOBYTE(v12) = LdrControlFlowGuardEnforced();
    if ( v12 )
    {
      v13 = dword_4B3A9374[0];
      if ( (unsigned int)v11 < dword_4B3A9374[0] || (unsigned int)v11 >= dword_4B3A9374[0] + dword_4B3A9378[0] )
      {
        RtlpxLookupFunctionTable(v11, (int)v32, (int)v55, v9);
        v13 = v32[1];
      }
      else
      {
        v32[0] = dword_4B3A9370[0];
        v32[2] = dword_4B3A9378[0];
        v32[3] = dword_4B3A937C[0];
      }
      if ( (void *)v13 != v11 )
        __fastfail(0x18u);
    }
    v14 = (_DWORD *)(*((_DWORD *)v9 + 6) + *(_DWORD *)(v47 + 12));
    v44 = (int)v14;
    v50 = (v42 - (int)v14) >> 2;
    v15 = 0;
    if ( *v14 )
    {
      do
        ++v15;
      while ( v14[v15] );
    }
    if ( v15 <= 0x80 )
    {
      Heap = v52;
    }
    else
    {
      LODWORD(v31) = 4 * v15;
      Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, v31);
      if ( !Heap )
      {
        Heap = v52;
        v44 = v42;
        v15 -= v50;
        if ( v15 > 0x80 )
          v15 = 128;
        v50 = 0;
      }
    }
    if ( g_ShimsEnabled )
      v16 = MEMORY[0x7FFE0330] ^ __ROR4__(g_pfnSE_GetProcAddressForCaller, 32 - (MEMORY[0x7FFE0330] & 0x1F));
    else
      v16 = 0;
    v41 = (void (__thiscall *)(_DWORD, int *, volatile signed __int32 *, int, int, _DWORD))v16;
    v45 = 0;
    if ( !v15 )
    {
LABEL_38:
      v54 = 0;
      if ( v43 < 0
        && (v25 = LdrpRedirectDelayloadFailure(v47, v35, v36, v42, v43), (v46 = v25) != 0)
        && (v43 == -1073741512 || v43 == -1073741702 || v43 == -1073741511 || v43 == -1073740671) )
      {
        v26 = Heap;
        v27 = v50;
        Heap[v50] = v25;
      }
      else
      {
        v26 = Heap;
        v27 = v50;
      }
      LdrpWriteBackProtectedDelayLoad(v26, v15, v27);
      v54 = -2;
      JUMPOUT(0x4B2CFD55);
    }
    v40 = 0;
    v17 = Heap;
    v37 = Heap;
    v34 = v44 - (_DWORD)Heap;
    v18 = v50;
    v19 = 0;
    while ( 1 )
    {
      *v17 = 0;
      if ( v19 == v18 || (unsigned int)(*(_DWORD *)((char *)v17 + v34) - *((_DWORD *)v9 + 6)) < *((_DWORD *)v9 + 8) )
      {
        v48 = 0;
        v20 = *((_DWORD *)v9 + 6);
        v21 = *(_DWORD *)(v20 + *(_DWORD *)(v47 + 16) + 4 * ((v44 + v40 - (v20 + *(_DWORD *)(v47 + 12))) >> 2));
        if ( v21 >= 0 )
        {
          v22 = v20 + v21 + 2;
          v21 = 0;
        }
        else
        {
          v22 = 0;
          v21 = (unsigned __int16)v21;
        }
        v33 = LdrpResolveProcedureAddress(v22, v21, 0, &v48);
        if ( v33 < 0 )
          goto LABEL_33;
        if ( AvrfpAPILookupCallbacksEnabled )
          AVrfCallAPILookupCallback(v48, 1, &v48);
        if ( v41 )
        {
          v39 = 0;
          v30 = *((_DWORD *)v9 + 6);
          v23 = v48;
          v41(v41, &v39, v49, v48, v30, 0);
          if ( v39 )
            v23 = v39;
        }
        else
        {
LABEL_33:
          v23 = v48;
        }
        v17 = v37;
        *v37 = v23;
        v18 = v50;
        v24 = v45;
        v9 = v38;
        if ( v45 != v50 )
          goto LABEL_37;
        v43 = v33;
        v46 = Heap[v50];
      }
      v24 = v45;
LABEL_37:
      v19 = v24 + 1;
      v45 = v19;
      v40 += 4;
      v37 = ++v17;
      if ( v19 >= v15 )
        goto LABEL_38;
    }
  }
  v28 = LdrpRedirectDelayloadFailure(v47, v35, v36, a6, DelayloadExportDll);
  v46 = v28;
  if ( v28 && (v43 == -1073741515 || v43 == -1073740671) )
    LdrpWriteBackProtectedDelayLoad(&v46, 1, 0);
  return v28;
}
