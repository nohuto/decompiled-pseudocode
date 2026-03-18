/*
 * XREFs of DpiQueryDisplayIDDescriptor @ 0x1C0167B90
 * Callers:
 *     ?_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ @ 0x1C01678E0 (-_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00F05E8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall DpiQueryDisplayIDDescriptor(__int64 a1, unsigned int *a2, void *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  unsigned int v6; // ecx
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  char v10; // al
  unsigned int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // r8
  unsigned int v14; // ebx
  _DWORD v15[2]; // [rsp+30h] [rbp-40h] BYREF
  void *v16; // [rsp+38h] [rbp-38h]
  struct _DXGKARG_QUERYADAPTERINFO v17; // [rsp+40h] [rbp-30h] BYREF
  int v18; // [rsp+80h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 64LL);
  v6 = *(_DWORD *)(*(_QWORD *)(v5 + 40) + 28LL);
  if ( v6 < 0x8001 )
    return 3223126017LL;
  v8 = *(_QWORD *)(v3 + 936);
  v9 = *(_QWORD *)(v8 + 104);
  if ( !v9 || v6 < 0xA00B )
    goto LABEL_13;
  v10 = *(_BYTE *)(v9 + 123);
  if ( v10 != 2 )
  {
    if ( v10 == 1 )
      return 3223126017LL;
LABEL_13:
    v18 = *(_DWORD *)(v8 + 24);
    v15[0] = *a2;
    v15[1] = 0;
    v17.pInputData = &v18;
    v16 = a3;
    v17.pOutputData = v15;
    *(_QWORD *)&v17.Type = 20LL;
    *(_QWORD *)&v17.InputDataSize = 4LL;
    *(_QWORD *)&v17.Flags.0 = 0LL;
    HIDWORD(v17.hKmdProcessHandle) = 0;
    v17.OutputDataSize = 16;
    KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
    v14 = DXGADAPTER::DdiQueryAdapterInfo(*(DXGADAPTER **)(v5 + 3896), &v17, v13);
    KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
    result = v14;
    *a2 = v15[0];
    return result;
  }
  v11 = *(unsigned __int16 *)(v8 + 96);
  if ( !(_WORD)v11 )
    return 3223126017LL;
  if ( a3 )
  {
    v12 = *a2;
    if ( *a2 > v11 )
    {
      *a2 = v11;
      v12 = v11;
    }
    memmove(a3, *(const void **)(v8 + 120), v12);
    return 0LL;
  }
  else
  {
    *a2 = v11;
    return 3221225507LL;
  }
}
