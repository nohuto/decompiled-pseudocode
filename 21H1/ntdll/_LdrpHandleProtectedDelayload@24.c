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
        _DWORD *a2@<ecx>,
        int a3@<ebp>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  _DWORD *v9; // edi
  int DelayloadExportDll; // eax
  _DWORD *v11; // esi
  int v12; // ecx
  char *v13; // edx
  unsigned int v14; // esi
  int v15; // eax
  _DWORD *v16; // ecx
  int v17; // edx
  unsigned int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  int v22; // edi
  unsigned int v23; // eax
  int v24; // edx
  _DWORD *v25; // eax
  int v26; // ecx
  int v27; // esi
  int v29; // [esp-298h] [ebp-2A4h]
  _DWORD v30[4]; // [esp-284h] [ebp-290h] BYREF
  int v31; // [esp-274h] [ebp-280h]
  int v32; // [esp-270h] [ebp-27Ch]
  int v33; // [esp-26Ch] [ebp-278h]
  int v34; // [esp-268h] [ebp-274h]
  _DWORD *v35; // [esp-264h] [ebp-270h]
  _DWORD *v36; // [esp-260h] [ebp-26Ch]
  int v37; // [esp-25Ch] [ebp-268h] BYREF
  int v38; // [esp-258h] [ebp-264h]
  void (__thiscall *v39)(_DWORD, int *, int, int, int, _DWORD); // [esp-254h] [ebp-260h]
  int v40; // [esp-250h] [ebp-25Ch]
  int v41; // [esp-24Ch] [ebp-258h]
  char *v42; // [esp-248h] [ebp-254h]
  unsigned int v43; // [esp-244h] [ebp-250h]
  int v44; // [esp-240h] [ebp-24Ch] BYREF
  int v45; // [esp-23Ch] [ebp-248h]
  int v46; // [esp-238h] [ebp-244h] BYREF
  int v47; // [esp-234h] [ebp-240h] BYREF
  int v48; // [esp-230h] [ebp-23Ch]
  _DWORD *Heap; // [esp-22Ch] [ebp-238h]
  _DWORD v50[136]; // [esp-228h] [ebp-234h] BYREF
  _EH4_SCOPETABLE *v51; // [esp-8h] [ebp-14h]
  int v52; // [esp-4h] [ebp-10h]
  _DWORD v53[2]; // [esp+0h] [ebp-Ch] BYREF
  int v54; // [esp+8h] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+0h]

  v53[0] = a3;
  v53[1] = retaddr;
  v52 = -2;
  v51 = stru_4B38C228;
  v50[135] = _except_handler4;
  v50[134] = NtCurrentTeb()->NtTib.ExceptionList;
  v50[131] = &v54;
  v51 = (_EH4_SCOPETABLE *)(__security_cookie ^ (unsigned int)stru_4B38C228);
  v45 = a1;
  v9 = a2;
  v36 = a2;
  v33 = a4;
  v34 = a5;
  v40 = a6;
  v44 = 0;
  DelayloadExportDll = LdrpGetDelayloadExportDll(a2, a1, &v47, a7, a6);
  v41 = DelayloadExportDll;
  if ( DelayloadExportDll >= 0 )
  {
    v11 = *(_DWORD **)(v47 + 24);
    if ( LdrControlFlowGuardEnforced() )
    {
      v12 = dword_4B3A9374[0];
      if ( (unsigned int)v11 < dword_4B3A9374[0] || (unsigned int)v11 >= dword_4B3A9374[0] + dword_4B3A9378[0] )
      {
        RtlpxLookupFunctionTable(v30, v11, (int)v53);
        v12 = v30[1];
      }
      else
      {
        v30[0] = dword_4B3A9370[0];
        v30[2] = dword_4B3A9378[0];
        v30[3] = dword_4B3A937C[0];
      }
      if ( (_DWORD *)v12 != v11 )
        __fastfail(0x18u);
    }
    v13 = (char *)(v9[6] + *(_DWORD *)(v45 + 12));
    v42 = v13;
    v48 = (v40 - (int)v13) >> 2;
    v14 = 0;
    if ( *(_DWORD *)v13 )
    {
      do
        ++v14;
      while ( *(_DWORD *)&v13[4 * v14] );
    }
    if ( v14 <= 0x80 )
    {
      Heap = v50;
    }
    else
    {
      Heap = (_DWORD *)RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, 4 * v14);
      if ( !Heap )
      {
        Heap = v50;
        v42 = (char *)v40;
        v14 -= v48;
        if ( v14 > 0x80 )
          v14 = 128;
        v48 = 0;
      }
    }
    if ( g_ShimsEnabled )
      v15 = MEMORY[0x7FFE0330] ^ __ROR4__(g_pfnSE_GetProcAddressForCaller, 32 - (MEMORY[0x7FFE0330] & 0x1F));
    else
      v15 = 0;
    v39 = (void (__thiscall *)(_DWORD, int *, int, int, int, _DWORD))v15;
    v43 = 0;
    if ( !v14 )
    {
LABEL_38:
      v52 = 0;
      if ( v41 < 0
        && (v24 = LdrpRedirectDelayloadFailure(v45, v33, v34, v40, v41), (v44 = v24) != 0)
        && (v41 == -1073741512 || v41 == -1073741702 || v41 == -1073741511 || v41 == -1073740671) )
      {
        v25 = Heap;
        v26 = v48;
        Heap[v48] = v24;
      }
      else
      {
        v25 = Heap;
        v26 = v48;
      }
      LdrpWriteBackProtectedDelayLoad(v25, v14, v26);
      v52 = -2;
      JUMPOUT(0x4B2CFD55);
    }
    v38 = 0;
    v16 = Heap;
    v35 = Heap;
    v32 = v42 - (char *)Heap;
    v17 = v48;
    v18 = 0;
    while ( 1 )
    {
      *v16 = 0;
      if ( v18 == v17 || (unsigned int)(*(_DWORD *)((char *)v16 + v32) - v9[6]) < v9[8] )
      {
        v46 = 0;
        v19 = v9[6];
        v20 = *(_DWORD *)(v19 + *(_DWORD *)(v45 + 16) + 4 * ((int)&v42[v38 - (v19 + *(_DWORD *)(v45 + 12))] >> 2));
        if ( v20 >= 0 )
        {
          v21 = v19 + v20 + 2;
          v20 = 0;
        }
        else
        {
          v21 = 0;
          v20 = (unsigned __int16)v20;
        }
        v31 = LdrpResolveProcedureAddress(v21, v20, 0, &v46);
        if ( v31 < 0 )
          goto LABEL_33;
        if ( AvrfpAPILookupCallbacksEnabled )
          AVrfCallAPILookupCallback(v46, 1, &v46);
        if ( v39 )
        {
          v37 = 0;
          v29 = v9[6];
          v22 = v46;
          v39(v39, &v37, v47, v46, v29, 0);
          if ( v37 )
            v22 = v37;
        }
        else
        {
LABEL_33:
          v22 = v46;
        }
        v16 = v35;
        *v35 = v22;
        v17 = v48;
        v23 = v43;
        v9 = v36;
        if ( v43 != v48 )
          goto LABEL_37;
        v41 = v31;
        v44 = Heap[v48];
      }
      v23 = v43;
LABEL_37:
      v18 = v23 + 1;
      v43 = v18;
      v38 += 4;
      v35 = ++v16;
      if ( v18 >= v14 )
        goto LABEL_38;
    }
  }
  v27 = LdrpRedirectDelayloadFailure(v45, v33, v34, a6, DelayloadExportDll);
  v44 = v27;
  if ( v27 && (v41 == -1073741515 || v41 == -1073740671) )
    LdrpWriteBackProtectedDelayLoad(&v44, 1, 0);
  return v27;
}
