/*
 * XREFs of HMAllocObject @ 0x1C0094E60
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0017D48 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0041D24 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C0062288 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     UserAddBaseWindowHandle @ 0x1C013D680 (UserAddBaseWindowHandle.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     EtwTraceUserCreateHandle @ 0x1C00176E0 (EtwTraceUserCreateHandle.c)
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C002F4F0 (-HMGrowHandleTable@@YAHXZ.c)
 *     LockObjectAssignment @ 0x1C0076B50 (LockObjectAssignment.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C00956EC (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     ?HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z @ 0x1C0095870 (-HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z.c)
 *     ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C0096F30 (-HMFreeUserOrIsolatedType@@YAXGEPEAX@Z.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0098B90 (Win32AllocPoolWithQuotaZInit.c)
 *     ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x1C009924C (-HMAllocateIsolatedType@@YAPEAXE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C012B048 (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall HMAllocObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  size_t v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // r14
  void (__fastcall __noreturn **v9)(ULONG_PTR); // rdx
  unsigned __int16 v10; // bx
  __int64 *v11; // r15
  size_t v12; // rbp
  unsigned int v13; // edi
  void **v14; // rdi
  __int64 v15; // r12
  char *v16; // r15
  bool v17; // cc
  __int64 *v18; // r14
  __int64 v19; // r8
  HANDLE ProcessId; // rax
  unsigned __int64 v21; // rdx
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 result; // rax
  HANDLE ThreadId; // rax
  unsigned __int64 *v27; // rcx
  __int64 (__fastcall *v28)(_QWORD, _QWORD, _QWORD); // rax
  void *v29; // r14
  char *v30; // rcx
  char v31; // al
  _BYTE *Heap; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  void **v35; // rax
  char EtwUserHandleType; // al
  int v37; // ecx
  int v38; // r8d
  BOOL v39; // [rsp+44h] [rbp-54h]
  __int64 v40; // [rsp+48h] [rbp-50h]
  __int64 *v41; // [rsp+50h] [rbp-48h]
  unsigned __int8 v44; // [rsp+B0h] [rbp+18h]

  v44 = a3;
  v4 = 0LL;
  v5 = (unsigned int)a4;
  v6 = a1;
  v7 = (unsigned __int8)a3;
  v39 = 0;
  GetDomainLockRef(14LL, a2, a3, a4);
  v9 = &gahti;
  v40 = 24 * v7;
  v10 = *((_WORD *)&gahti + 12 * v7 + 6);
  if ( (v10 & 3) != 0 )
  {
    v4 = *(_QWORD *)(v6 + 416);
    if ( *(_DWORD *)(v4 + 68) >= gUserProcessHandleQuota )
    {
LABEL_74:
      v34 = 1158LL;
LABEL_77:
      UserSetLastError(v34, (__int64)v9);
      return 0LL;
    }
  }
  while ( 1 )
  {
    if ( (_BYTE)v7 != 1 && qword_1C024ACD0 )
    {
      v11 = &qword_1C024ACD0;
      goto LABEL_6;
    }
    if ( qword_1C024ACC8 )
      break;
    if ( !(unsigned int)HMGrowHandleTable() )
      goto LABEL_74;
  }
  v11 = &qword_1C024ACC8;
LABEL_6:
  v41 = v11;
  if ( (v10 & 0x10) != 0 && a2 )
  {
    if ( !qword_1C02526E8 )
      goto LABEL_76;
    if ( (int)qword_1C02526E8() < 0 )
      goto LABEL_76;
    v14 = (void **)HMAllocateUserOrIsolatedType(v5, v10, v7);
    if ( !v14 )
      goto LABEL_76;
    v28 = qword_1C02526F0;
    if ( qword_1C02526F0 )
      v28 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C02526F0(
                                                              a2,
                                                              *(unsigned int *)((char *)&gahti + v40 + 16),
                                                              ((_DWORD)v7 << 16) | 5u);
    v14[5] = v28;
    if ( !v28 )
    {
      HMFreeUserOrIsolatedType(v10, v7, v14);
      goto LABEL_76;
    }
    v29 = v14[3];
    ObfReferenceObject((PVOID)a2);
    v14[3] = (void *)a2;
    if ( v29 )
      ObfDereferenceObject(v29);
    v30 = (char *)v14[5];
    v14[4] = v14;
    v14[6] = &v30[-*(_QWORD *)(a2 + 128)];
LABEL_23:
    v9 = 0LL;
    goto LABEL_24;
  }
  if ( (v10 & 0x40) == 0 )
  {
    v39 = !a2 && (v10 & 0x20) != 0;
    v12 = v5;
    if ( (v10 & 0x200) != 0 )
    {
      v14 = (void **)HMAllocateIsolatedType(v7);
    }
    else
    {
      v13 = *(_DWORD *)((char *)&gahti + v40 + 8);
      if ( qword_1C0252C10 && (int)qword_1C0252C10() >= 0 )
      {
        if ( qword_1C0252C18 )
          v14 = (void **)qword_1C0252C18(33LL, v12, v13);
        else
          v14 = 0LL;
        if ( !v14 )
          goto LABEL_76;
        memset(v14, 0, v12);
      }
      else
      {
        v14 = 0LL;
      }
    }
    if ( !v14 )
    {
LABEL_76:
      v34 = 8LL;
      goto LABEL_77;
    }
    if ( (_BYTE)v7 == 1 )
    {
      v33 = Win32AllocPoolWithQuotaZInit(0x140uLL);
      v14[5] = (void *)v33;
      if ( !v33 )
      {
        HMFreeUserOrIsolatedType(v10, 1u, v14);
        v14 = 0LL;
      }
    }
    if ( (v10 & 0x100) != 0 )
    {
      LockObjectAssignment(v14 + 3, (void *)a2);
      v14[4] = v14;
    }
    v6 = a1;
    goto LABEL_23;
  }
  if ( *(_DWORD *)((char *)&gahti + v40 + 16) )
  {
    v14 = (void **)Win32AllocPoolZInit(v5, *(unsigned int *)((char *)&gahti + v40 + 8));
    if ( !v14 )
      goto LABEL_76;
    Heap = RtlAllocateHeap(gpvSharedAlloc, 0, *(unsigned int *)((char *)&gahti + v40 + 16));
    v14[5] = Heap;
    if ( !Heap )
    {
      Win32FreePool(v14);
      goto LABEL_76;
    }
    v9 = 0LL;
    v14[3] = 0LL;
    v14[4] = 0LL;
    v14[6] = (void *)(Heap - (_BYTE *)gpvSharedAlloc);
  }
  else
  {
    v35 = (void **)RtlAllocateHeap(gpvSharedAlloc, 0, v5);
    v14 = v35;
    if ( !v35 )
      goto LABEL_76;
    v9 = 0LL;
    v35[3] = 0LL;
    v35[4] = 0LL;
    v35[6] = (void *)((char *)v35 - (_BYTE *)gpvSharedAlloc);
    v35[5] = 0LL;
  }
LABEL_24:
  if ( !v14 )
    goto LABEL_76;
  v15 = *v11;
  v16 = (char *)qword_1C024AD48 + 32 * *v11;
  v17 = (unsigned int)v15 <= giheLast;
  v18 = (__int64 *)((char *)gpKernelHandleTable + 24 * v15);
  *v41 = *v18;
  if ( !v17 )
    giheLast = v15;
  v19 = v44;
  v16[24] = v44;
  *v18 = (__int64)v14;
  if ( (v10 & 0x40) != 0 )
  {
    *(_QWORD *)v16 = v14[6];
  }
  else if ( (v10 & 0x10) != 0 && a2 )
  {
    *(_QWORD *)v16 = v14[6];
    *((_QWORD *)v16 + 2) = ***(_QWORD ***)(a2 + 8);
  }
  else
  {
    *(_QWORD *)v16 = 0LL;
  }
  if ( v39 )
    v16[25] |= 0x40u;
  if ( (v10 & 2) != 0 )
  {
    *((_DWORD *)v14 + 4) = 0;
    v18[1] = *(_QWORD *)(v6 + 416);
    ProcessId = PsGetProcessId(**(PEPROCESS **)(v6 + 416));
    v19 = v44;
    *((_QWORD *)v16 + 1) = ProcessId;
    if ( (v10 & 4) != 0 )
      v14[3] = *(void **)(v6 + 416);
  }
  else if ( (v10 & 1) != 0 )
  {
    v18[1] = v6;
    ThreadId = PsGetThreadId(*(PETHREAD *)v6);
    v19 = v44;
    *((_QWORD *)v16 + 1) = ThreadId;
    v14[2] = (void *)v18[1];
  }
  v21 = (int)v15 | (unsigned __int64)(*(unsigned __int16 *)((char *)qword_1C024AD48
                                                          + v15 * (unsigned int)dword_1C024AD50
                                                          + 26) << 16);
  *v14 = (void *)v21;
  if ( *(_DWORD *)((char *)&gahti + v40 + 16) )
  {
    v27 = (unsigned __int64 *)v14[5];
    *v27 = v21;
    v27[1] = (unsigned __int64)v14[6];
  }
  if ( v4 )
  {
    v22 = ++*(_DWORD *)(v4 + 68);
    if ( v22 > *(_DWORD *)(v4 + 72) )
      *(_DWORD *)(v4 + 72) = v22;
  }
  if ( ++giheCount > (unsigned int)giheCountPeak )
    giheCountPeak = giheCount;
  if ( (v10 & 3) != 0 )
  {
    v23 = (unsigned int)PsGetProcessId(**(PEPROCESS **)(v6 + 416));
    if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
    {
      EtwUserHandleType = GetEtwUserHandleType(v44, v24, v23 & 0xFFFFFFFC);
      McTemplateK0pqqq_EtwWriteTransfer(
        v37,
        (unsigned int)&UserCreateHandle,
        v38,
        (unsigned int)*v14,
        EtwUserHandleType);
    }
  }
  else
  {
    v31 = GetEtwUserHandleType((unsigned __int8)v19, v21, v19);
    EtwTraceUserCreateHandle((int)*v14, v31, 0);
  }
  result = *v18;
  v18[2] = 0LL;
  return result;
}
