/*
 * XREFs of wil_details_StagingConfig_Load @ 0x18009BE1C
 * Callers:
 *     wil_StagingConfig_QueryFeatureState @ 0x18009B578 (wil_StagingConfig_QueryFeatureState.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x18009FD00 (ZwQueryWnfStateData.c)
 *     memset @ 0x1800A4180 (memset.c)
 */

__int64 __fastcall wil_details_StagingConfig_Load(__int64 a1, __int64 a2, __int64 a3, void *a4)
{
  int v6; // edi
  __int64 v7; // r13
  char *Heap; // r15
  char *v9; // rbx
  SIZE_T v10; // r14
  NTSTATUS v11; // eax
  unsigned __int32 v12; // r12d
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r8
  __int64 v15; // r10
  ULONG v16; // r9d
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  __int64 result; // rax
  char *v21; // rdx
  ULONG BufferSize; // [rsp+30h] [rbp-30h] BYREF
  ULONG ChangeStamp; // [rsp+34h] [rbp-2Ch] BYREF
  ULONG v24[2]; // [rsp+38h] [rbp-28h] BYREF
  WNF_STATE_NAME StateName; // [rsp+40h] [rbp-20h] BYREF
  WNF_STATE_NAME v26; // [rsp+48h] [rbp-18h] BYREF

  *(_QWORD *)v24 = a4;
  memset((void *)(a1 + 8), 0, 0x50uLL);
  v6 = 0;
  v7 = 200LL;
  *(_QWORD *)a1 = 0LL;
  Heap = 0LL;
  v9 = 0LL;
  StateName = (WNF_STATE_NAME)_WIL_WNF_WIL_MACHINE_FEATURE_STORE;
  v10 = -(__int64)(a4 != 0LL) & 0xC8;
  BufferSize = a4 != 0LL ? 0xC8 : 0;
  v11 = ZwQueryWnfStateData(&StateName, 0LL, 0LL, (PWNF_CHANGE_STAMP)(a1 + 8), a4, &BufferSize);
  v12 = v11;
  if ( v11 )
    goto LABEL_13;
  v9 = *(char **)v24;
  if ( *(_QWORD *)v24 )
    goto LABEL_13;
  do
  {
    if ( v10 < 0xC8 )
      v10 = 200LL;
    v13 = v10;
    v10 = BufferSize;
    if ( v13 >= BufferSize )
      v10 = v13;
    if ( v10 < 0x10 )
      v10 = 16LL;
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    if ( !Heap )
      return 3221225626LL;
    BufferSize = v10;
    v11 = ZwQueryWnfStateData(&StateName, 0LL, 0LL, (PWNF_CHANGE_STAMP)(a1 + 8), Heap, &BufferSize);
    v12 = v11;
    v9 = Heap;
LABEL_13:
    ;
  }
  while ( v11 == -1073741789 );
  if ( v12 || !v9 )
  {
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    return v12;
  }
  else
  {
    v14 = BufferSize;
    if ( BufferSize > 4 )
      *(_BYTE *)(a1 + 12) = *v9;
    if ( (unsigned int)v14 >= 0x10
      && *(_BYTE *)(a1 + 12) == 2
      && *((_WORD *)v9 + 1) >= 0x10u
      && (v15 = *((unsigned __int16 *)v9 + 2),
          v14 >= *((unsigned __int16 *)v9 + 1) + 16 * (unsigned __int64)*((unsigned __int16 *)v9 + 3) + 12 * v15) )
    {
      ChangeStamp = 0;
      v16 = 0;
      if ( (_WORD)v15 )
      {
        v26 = (WNF_STATE_NAME)_WIL_WNF_WIL_MACHINE_FEATURE_STORE_MODIFIED;
        v24[0] = 0;
        ZwQueryWnfStateData(&v26, 0LL, 0LL, &ChangeStamp, 0LL, v24);
        LODWORD(v14) = BufferSize;
        v16 = ChangeStamp;
      }
      *(_QWORD *)(a1 + 24) = v9;
      *(_QWORD *)(a1 + 32) = v9 + 16;
      *(_QWORD *)(a1 + 40) = &v9[12 * *((unsigned __int16 *)v9 + 2) + 16];
      *(_DWORD *)(a1 + 48) = v16 != 0;
      if ( *v9 == 2 && (unsigned __int8)v9[1] < 2u )
      {
        v17 = 16 * *((unsigned __int16 *)v9 + 3);
        v18 = 3 * *((unsigned __int16 *)v9 + 2);
        v19 = *((unsigned __int16 *)v9 + 1);
        *(_DWORD *)(a1 + 16) = 1;
        LODWORD(v14) = v19 + v17 + 4 * v18;
      }
    }
    else
    {
      BufferSize = 16;
      *(_OWORD *)v9 = 0LL;
      *(_DWORD *)v9 = 1049090;
      LODWORD(v14) = BufferSize;
      *(_QWORD *)(a1 + 24) = v9;
      v21 = &v9[*((unsigned __int16 *)v9 + 1)];
      *(_QWORD *)(a1 + 32) = v21;
      *(_QWORD *)(a1 + 40) = &v21[12 * *((unsigned __int16 *)v9 + 2)];
    }
    *(_QWORD *)(a1 + 64) = (unsigned int)v14;
    if ( Heap )
      v7 = v10;
    *(_QWORD *)(a1 + 56) = v9;
    *(_QWORD *)(a1 + 72) = v7;
    LOBYTE(v6) = v9 == Heap;
    result = 0LL;
    *(_DWORD *)(a1 + 80) = v6;
  }
  return result;
}
