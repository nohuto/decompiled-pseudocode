/*
 * XREFs of PortMiniportRegistryRead @ 0x1C005814C
 * Callers:
 *     StorPortRegistryRead @ 0x1C0038CB0 (StorPortRegistryRead.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DA00 (memset.c)
 */

__int64 __fastcall PortMiniportRegistryRead(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v8; // rax
  _BYTE *v9; // r14
  int v10; // eax
  int *v11; // rcx
  __int64 v12; // rbx
  PVOID SystemRoutineAddress; // rax
  unsigned int v14; // r12d
  unsigned int v15; // edx
  unsigned int v16; // ebx
  _WORD *v17; // rcx
  __int64 v18; // rbx
  int v19; // edx
  unsigned int i; // r8d
  int v21; // eax
  PVOID P[2]; // [rsp+30h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v25[14]; // [rsp+50h] [rbp-39h] BYREF
  int v26; // [rsp+F0h] [rbp+67h] BYREF
  int v27; // [rsp+100h] [rbp+77h] BYREF

  v26 = 0;
  v27 = -1;
  *(_OWORD *)P = 0LL;
  memset(v25, 0, sizeof(v25));
  v8 = *(_QWORD *)(a2 + 8);
  v9 = (_BYTE *)(*(_QWORD *)(a4 + 32) + *(unsigned int *)(a4 + 52));
  LODWORD(v25[4]) = 0;
  v25[2] = v8;
  v10 = 20;
  LODWORD(v25[1]) = 20;
  if ( a3 == 1 )
  {
    v10 = 52;
    v25[3] = P;
    v11 = &v26;
    LODWORD(v25[1]) = 52;
  }
  else
  {
    if ( a3 == 4 )
    {
      v10 = 52;
      v25[3] = v9;
      LODWORD(v25[1]) = 52;
    }
    else
    {
      v25[3] = a4;
      v25[0] = &PortpBinaryReadCallBack;
    }
    v11 = &v27;
  }
  v25[5] = v11;
  LODWORD(v25[6]) = 4;
  if ( (v10 & 0x20) != 0 )
  {
    LODWORD(v25[1]) = v10 | 0x100;
    LODWORD(v25[4]) = a3 << 24;
  }
  v12 = *(_QWORD *)(a1 + 8);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  v14 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD *, _QWORD, _QWORD))SystemRoutineAddress)(
          0LL,
          v12,
          v25,
          0LL,
          0LL);
  if ( (v14 & 0x80000000) != 0 )
    goto LABEL_30;
  if ( a3 != 1 )
  {
    if ( a3 == 4 )
    {
      *(_DWORD *)(a4 + 44) = 4;
      return v14;
    }
    if ( *(_DWORD *)(a4 + 60) != -1073741789 )
      return v14;
    v14 = -1073741789;
LABEL_30:
    v21 = *(_DWORD *)(a4 + 44);
    *(_DWORD *)(a4 + 44) = 0;
    *(_DWORD *)(a4 + 48) = v21;
    return v14;
  }
  if ( LOWORD(P[0]) && (v15 = *(_DWORD *)(a4 + 44), LOWORD(P[0]) >> 1 < v15) )
  {
    v16 = (LOWORD(P[0]) >> 1) + 1;
    if ( WORD1(P[0]) - (unsigned __int64)LOWORD(P[0]) >= 2 && *((_WORD *)P[1] + (LOWORD(P[0]) >> 1)) && v16 < v15 )
      v16 = (LOWORD(P[0]) >> 1) + 2;
    memset(v9, 0, *(unsigned int *)(a4 + 44));
    v17 = P[1];
    v18 = v16 - 1;
    v19 = 0;
    v9[v18] = 0;
    if ( v17 )
    {
      for ( i = 0; i < (unsigned int)v18; ++v19 )
      {
        if ( !*v17 )
          break;
        ++i;
        *v9++ = *(_BYTE *)v17++;
      }
    }
  }
  else
  {
    v14 = -1073741789;
    v19 = 0;
    *(_DWORD *)(a4 + 48) = ((unsigned int)LOWORD(P[0]) + 1) >> 1;
  }
  *(_DWORD *)(a4 + 44) = v19;
  ExFreePoolWithTag(P[1], 0);
  return v14;
}
