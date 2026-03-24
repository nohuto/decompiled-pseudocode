/*
 * XREFs of _CcdReadRegistryValues @ 0x1C0136C14
 * Callers:
 *     ?_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0136D68 (-_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C0146248 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     _CcdOpenRegistrySubkey @ 0x1C01364B8 (_CcdOpenRegistrySubkey.c)
 */

__int64 __fastcall CcdReadRegistryValues(HANDLE a1, PCWSTR SourceString, void *Src, unsigned int a4, __int64 a5)
{
  unsigned __int64 v5; // r15
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  SIZE_T v13; // rax
  unsigned __int64 v14; // rbp
  char *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char *v20; // rbx
  unsigned int v21; // eax
  __int64 v22; // r15
  char *v23; // rcx
  __int64 v24; // rdx
  _DWORD *v25; // rax
  int RegistryValues; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  _QWORD *v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  v5 = a4;
  Handle = 0LL;
  if ( SourceString && *SourceString )
  {
    v9 = CcdOpenRegistrySubkey((int)&Handle, 131097, (int)a1, SourceString, 0LL);
    v12 = v9;
    if ( v9 < 0 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
      v31[7] = a5;
      v31[3] = v12;
      v31[4] = a1;
      v31[5] = SourceString;
      v31[6] = Src;
      WdLogEvent5_WdError(v31);
      return (unsigned int)v12;
    }
  }
  else
  {
    Handle = a1;
  }
  v13 = 56 * v5;
  v14 = v5;
  if ( !is_mul_ok(v5, 0x38uLL) )
    v13 = -1LL;
  v15 = (char *)operator new[](v13, 0x63644356u, (POOL_TYPE)512);
  v20 = v15;
  if ( v15 )
  {
    memmove(v15, Src, 56 * v5);
    v21 = v5 - 1;
    v22 = a5;
    if ( v21 )
    {
      v23 = v20 + 40;
      v24 = v21;
      do
      {
        *((_QWORD *)v23 - 2) += v22;
        v25 = (_DWORD *)*((_QWORD *)v23 - 2);
        *((_DWORD *)v23 - 2) = 0x4000000;
        *(_QWORD *)v23 = 0LL;
        *((_DWORD *)v23 + 2) = 0;
        v23 += 56;
        *v25 = 0;
        --v24;
      }
      while ( v24 );
    }
    RegistryValues = RtlQueryRegistryValuesEx(0x40000000LL, Handle, v20, 0LL, 0LL);
    v12 = RegistryValues;
    if ( RegistryValues < 0 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29);
      v33[3] = v12;
      v33[4] = Handle;
      v33[5] = Src;
      v33[6] = v14;
      v33[7] = v22;
      WdLogEvent5_WdWarning(v33);
    }
    if ( Handle != a1 )
      ZwClose(Handle);
    operator delete[](v20);
    return (unsigned int)v12;
  }
  v32 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
  *(_QWORD *)(v32 + 24) = v5;
  *(_QWORD *)(v32 + 32) = 56 * v5;
  WdLogEvent5_WdLowResource(v32);
  return 3221225495LL;
}
