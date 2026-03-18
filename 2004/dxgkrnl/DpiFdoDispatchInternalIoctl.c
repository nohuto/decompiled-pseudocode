/*
 * XREFs of DpiFdoDispatchInternalIoctl @ 0x1C01946F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     DpiSharedPowerRegister @ 0x1C02CCD6C (DpiSharedPowerRegister.c)
 */

__int64 __fastcall DpiFdoDispatchInternalIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r14
  __int64 v5; // rbx
  int v6; // edi
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rsi
  int v11; // eax
  int v12; // eax
  __int64 v13; // r13
  _QWORD *v14; // r12
  _QWORD *v15; // rsi
  _QWORD *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v19; // cl
  PRKMUTEX v20; // r14
  __int64 v21; // r12
  PRKMUTEX v22; // r13
  unsigned int i; // esi
  __int64 (__fastcall *v24)(PRKMUTEX, __int64 *); // rax
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // [rsp+80h] [rbp+40h] BYREF
  PRKMUTEX Mutex; // [rsp+88h] [rbp+48h]
  PERESOURCE Resource; // [rsp+90h] [rbp+50h]

  v2 = *(_QWORD *)(a2 + 184);
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  v6 = -1073741637;
  v30 = 0LL;
  v7 = *(unsigned int *)(v2 + 24);
  v8 = *(unsigned int *)(v2 + 8);
  v9 = *(unsigned int *)(v2 + 16);
  v10 = *(_QWORD *)(v2 + 32);
  v11 = *(_DWORD *)(v2 + 24) - 2302031;
  if ( v11 )
  {
    v12 = v11 - 4;
    if ( v12 )
    {
      if ( v12 == 1972 )
      {
        v27 = DpiSharedPowerRegister(a1, v8, v10, v9, *(_QWORD *)(a2 + 112), v8, (__int64)&v30);
        v5 = v30;
        v6 = v27;
      }
      else
      {
        v26 = WdLogNewEntry5_WdWarning(a1, v8, v9);
        *(_QWORD *)(v26 + 24) = v7;
        WdLogEvent5_WdWarning(v26);
      }
      goto LABEL_22;
    }
    if ( (unsigned int)v9 >= 0x10 && v10 )
    {
      v6 = 0;
      v13 = *(_QWORD *)(v10 + 8);
      Mutex = *(PRKMUTEX *)v10;
      KeEnterCriticalRegion();
      Resource = (PERESOURCE)(v4 + 3304);
      ExAcquireResourceSharedLite((PERESOURCE)(v4 + 3304), 1u);
      v14 = (_QWORD *)(v4 + 3464);
      v15 = *(_QWORD **)(v4 + 3464);
      while ( v15 != v14 )
      {
        v16 = v15 - 4;
        v15 = (_QWORD *)*v15;
        v30 = 0LL;
        if ( *(_DWORD *)v16 == 1 )
        {
          v6 = (*(__int64 (__fastcall **)(PRKMUTEX, __int64 *))v13)(Mutex, &v30);
          if ( v6 < 0 )
            break;
          v18 = *((unsigned int *)v16 + 4);
          if ( (_DWORD)v18 == 1 || (int)v18 > 2 && (int)v18 <= 4 )
          {
            *(_DWORD *)(v30 + 8) = v18;
          }
          else
          {
            v28 = WdLogNewEntry5_WdError(v18, v17);
            *(_QWORD *)(v28 + 24) = *((int *)v16 + 4);
            *(_QWORD *)(v28 + 32) = -1073741811LL;
            WdLogEvent5_WdError(v28);
          }
          *(_DWORD *)v30 = *((_DWORD *)v16 + 6);
          *(_DWORD *)(v30 + 4) = *((_DWORD *)v16 + 1);
          *(_DWORD *)(v30 + 12) = *((_DWORD *)v16 + 2);
          v19 = *((_BYTE *)v16 + 12);
          v20 = Mutex;
          *(_BYTE *)(v30 + 16) = v19;
          v6 = (*(__int64 (__fastcall **)(PRKMUTEX, __int64))(v13 + 8))(v20, v30);
          if ( v6 < 0 )
          {
            (*(void (__fastcall **)(PRKMUTEX, __int64))(v13 + 16))(v20, v30);
            break;
          }
        }
      }
      ExReleaseResourceLite(Resource);
      KeLeaveCriticalRegion();
      goto LABEL_22;
    }
LABEL_29:
    v6 = -1073741789;
    v29 = WdLogNewEntry5_WdError(a1, v8);
    *(_QWORD *)(v29 + 24) = -1073741789LL;
    WdLogEvent5_WdError(v29);
    goto LABEL_22;
  }
  if ( (unsigned int)v9 < 0x10 || !v10 )
    goto LABEL_29;
  Mutex = (PRKMUTEX)(v4 + 3584);
  KeWaitForSingleObject((PVOID)(v4 + 3584), Executive, 0, 0, 0LL);
  v6 = 0;
  v21 = *(_QWORD *)(v10 + 8);
  v22 = *(PRKMUTEX *)v10;
  for ( i = 0; i < *(_DWORD *)(v4 + 2684); ++i )
  {
    v24 = *(__int64 (__fastcall **)(PRKMUTEX, __int64 *))v21;
    v30 = 0LL;
    v6 = v24(v22, &v30);
    if ( v6 < 0 )
      break;
    *(_DWORD *)v30 = i;
    *(_DWORD *)(v30 + 4) = 0;
    v6 = (*(__int64 (__fastcall **)(PRKMUTEX, __int64))(v21 + 8))(v22, v30);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(PRKMUTEX, __int64))(v21 + 16))(v22, v30);
      break;
    }
  }
  KeReleaseMutex(Mutex, 0);
LABEL_22:
  *(_DWORD *)(a2 + 48) = v6;
  *(_QWORD *)(a2 + 56) = v5;
  IofCompleteRequest((PIRP)a2, 1);
  return (unsigned int)v6;
}
