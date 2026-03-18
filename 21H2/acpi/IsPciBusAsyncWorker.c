/*
 * XREFs of IsPciBusAsyncWorker @ 0x1C000B380
 * Callers:
 *     IsPciBusAsync @ 0x1C001B660 (IsPciBusAsync.c)
 * Callees:
 *     AMLIGetParent @ 0x1C000A040 (AMLIGetParent.c)
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     IsPciBusAsync @ 0x1C001B660 (IsPciBusAsync.c)
 *     PciConfigInternal @ 0x1C001CAAC (PciConfigInternal.c)
 *     ACPIConvertStringDelimitation @ 0x1C0025CF4 (ACPIConvertStringDelimitation.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IsPciBusAsyncWorker(__int64 a1, int a2, int a3, KSPIN_LOCK *a4)
{
  char v5; // r15
  int v6; // esi
  __int64 *v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // r14
  __int64 *v12; // rbp
  const char *v13; // rcx
  int v14; // eax
  __int64 *v15; // rcx
  __int64 *v16; // rbp
  int v17; // eax
  int v18; // eax
  _BYTE *v19; // rax
  unsigned int v20; // edi
  void *v21; // rcx
  void *v22; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rbp
  int v28; // ecx
  __int64 v29; // rdx
  int v30; // eax
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rbp
  _BYTE *v34; // rax
  KIRQL v35; // al

  v5 = 0;
  v6 = a2;
  _InterlockedIncrement((volatile signed __int32 *)a4 + 10);
  v7 = (__int64 *)*a4;
  if ( !*a4 )
    goto LABEL_68;
  if ( a2 < 0 )
    goto LABEL_68;
  v8 = *(_QWORD *)(*v7 + 104);
  if ( !v8 )
    goto LABEL_68;
  v9 = *(_QWORD *)(v8 + 8);
  if ( (v9 & 0x2000000) != 0 )
  {
    v34 = (_BYTE *)a4[8];
LABEL_72:
    *v34 = 1;
    goto LABEL_23;
  }
  if ( (v9 & 0x100000000LL) != 0 )
  {
LABEL_68:
    v19 = (_BYTE *)a4[8];
    goto LABEL_22;
  }
  v10 = *((_DWORD *)a4 + 2);
  if ( (v10 & 1) != 0 )
    goto LABEL_10;
  v11 = (__int64)(a4 + 2);
  *((_DWORD *)a4 + 2) = v10 | 1;
  a4[2] = 0LL;
  v12 = AMLIGetNamedChild(v7, 1145653343);
  if ( !v12 )
    goto LABEL_10;
  v6 = ACPIGet(*a4, 1145653343, 738722310, 0, 0, (__int64)&IsPciBusAsyncWorker, (__int64)a4, v11, 0LL);
  AMLIDereferenceHandleEx(v12);
  if ( v6 == 259 )
    return 259LL;
  if ( v6 >= 0 )
  {
LABEL_10:
    v13 = (const char *)a4[2];
    if ( v13 )
    {
      if ( strstr(v13, "PNP0A03") || strstr((const char *)a4[2], "PNP0A08") )
      {
        _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x2000000uLL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 192), a4[2], 0LL) )
          ExFreePoolWithTag((PVOID)a4[2], 0);
        _InterlockedOr((volatile signed __int32 *)(v8 + 184), 0x21u);
        a4[2] = 0LL;
LABEL_71:
        v34 = (_BYTE *)a4[8];
        goto LABEL_72;
      }
      ExFreePoolWithTag((PVOID)a4[2], 0);
      a4[2] = 0LL;
    }
    v14 = *((_DWORD *)a4 + 2);
    if ( (v14 & 0x80u) == 0 )
    {
      v15 = (__int64 *)*a4;
      a4[3] = 0LL;
      *((_DWORD *)a4 + 2) = v14 | 0x80;
      v16 = AMLIGetNamedChild(v15, 1145652063);
      if ( v16 )
      {
        v6 = ACPIGet(
               *a4,
               1145652063,
               738722055,
               0,
               0,
               (__int64)&IsPciBusAsyncWorker,
               (__int64)a4,
               (__int64)(a4 + 3),
               0LL);
        AMLIDereferenceHandleEx(v16);
        if ( v6 == 259 )
          return 259LL;
        if ( v6 < 0 )
          goto LABEL_21;
      }
    }
    if ( !a4[3] )
    {
LABEL_17:
      v17 = *((_DWORD *)a4 + 2);
      if ( (v17 & 8) == 0 )
      {
        *((_DWORD *)a4 + 2) = v17 | 8;
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 88), 0, 0) & 0x80u) != 0 )
        {
          *((_DWORD *)a4 + 8) = *(_DWORD *)(v8 + 92);
        }
        else
        {
          v18 = ACPIGet(
                  *a4,
                  1380204895,
                  -1543240702,
                  0,
                  0,
                  (__int64)&IsPciBusAsyncWorker,
                  (__int64)a4,
                  (__int64)(a4 + 4),
                  0LL);
          v6 = v18;
          if ( v18 == 259 )
            return 259LL;
          if ( v18 < 0 )
            goto LABEL_21;
        }
      }
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 88), 0, 0) & 0x80u) == 0 )
      {
        _InterlockedExchange((volatile __int32 *)(v8 + 92), *((_DWORD *)a4 + 8));
        _InterlockedOr((volatile signed __int32 *)(v8 + 88), 0x80u);
      }
      v24 = *((_DWORD *)a4 + 2);
      if ( (v24 & 0x20) == 0 )
      {
        v25 = *a4;
        *((_DWORD *)a4 + 2) = v24 | 0x20;
        v26 = AMLIGetParent(v25);
        v27 = v26;
        if ( !v26 )
        {
          v6 = -1073741661;
          goto LABEL_21;
        }
        v6 = IsPciBusAsync(v26, &IsPciBusAsyncWorker, a4, (char *)a4 + 36);
        AMLIDereferenceHandleEx(v27);
        if ( v6 == 259 )
          return 259LL;
        if ( v6 < 0 )
          goto LABEL_21;
      }
      if ( !*((_BYTE *)a4 + 36) )
        goto LABEL_21;
      v28 = *((_DWORD *)a4 + 2);
      if ( (v28 & 0x40) != 0 )
      {
LABEL_47:
        if ( *((_WORD *)a4 + 36) != 0xFFFF && *((_WORD *)a4 + 37) != 0xFFFF )
        {
          v31 = *((unsigned __int8 *)a4 + 86);
          if ( (_BYTE)v31 != 0xFF
            && *((_BYTE *)a4 + 83) != 0xFF
            && *((_BYTE *)a4 + 82) != 0xFF
            && *((_BYTE *)a4 + 81) != 0xFF )
          {
            if ( (v31 & 0xFFFFFF7F) - 1 <= 1 )
            {
              _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x2000000uLL);
              *(_BYTE *)(v8 + 96) = *((_BYTE *)a4 + 86);
              *(_BYTE *)a4[8] = 1;
            }
            else
            {
              _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x100000000uLL);
              v5 = 1;
              *(_BYTE *)a4[8] = 0;
            }
            v32 = AMLIGetParent(*a4);
            if ( v32 )
            {
              v33 = *(_QWORD *)(*(_QWORD *)v32 + 104LL);
              AMLIDereferenceHandleEx(v32);
              if ( v33 )
              {
                if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v33 + 184), 0, 0) & 1) != 0 )
                {
                  _InterlockedOr((volatile signed __int32 *)(v8 + 88), 2u);
                  if ( v5 == 1 && (AcpiOverrideAttributes & 0x8000) != 0 )
                    _InterlockedOr64((volatile signed __int64 *)(v8 + 1000), 0x8000uLL);
                }
                goto LABEL_23;
              }
            }
          }
        }
        goto LABEL_21;
      }
      v29 = *a4;
      *((_DWORD *)a4 + 2) = v28 | 0x40;
      v30 = PciConfigInternal(
              (int)a4 + 72,
              v29,
              a3,
              (_DWORD)a4,
              (__int64)&IsPciBusAsyncWorker,
              (__int64)a4,
              (__int64)(a4 + 9));
      v6 = v30;
      if ( v30 != 259 )
      {
        if ( v30 < 0 )
          goto LABEL_21;
        goto LABEL_47;
      }
      return 259LL;
    }
    ACPIConvertStringDelimitation();
    if ( !strstr((const char *)a4[3], "PNP0A03") && !strstr((const char *)a4[3], "PNP0A08") )
    {
      ExFreePoolWithTag((PVOID)a4[3], 0);
      a4[3] = 0LL;
      goto LABEL_17;
    }
    _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x2000000uLL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 200), a4[3], 0LL) )
      ExFreePoolWithTag((PVOID)a4[3], 0);
    _InterlockedOr((volatile signed __int32 *)(v8 + 184), 0x41u);
    a4[3] = 0LL;
    goto LABEL_71;
  }
LABEL_21:
  v19 = (_BYTE *)a4[8];
LABEL_22:
  *v19 = 0;
LABEL_23:
  v20 = 0;
  if ( v6 != -1073741772 )
    v20 = v6;
  if ( *((_DWORD *)a4 + 10) )
    ((void (__fastcall *)(KSPIN_LOCK, _QWORD, _QWORD, KSPIN_LOCK))a4[6])(*a4, v20, 0LL, a4[7]);
  v21 = (void *)a4[2];
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  v22 = (void *)a4[3];
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  if ( *a4 )
  {
    AMLIDereferenceHandleEx(*a4);
    *a4 = 0LL;
  }
  if ( a4 < gPreAllocPciPool || a4 >= &gBBNResultCacheLock )
  {
    ExFreePoolWithTag(a4, 0x46706341u);
  }
  else
  {
    v35 = KeAcquireSpinLockRaiseToDpc(&gPreAllocPciPoolSpinLock);
    *((_BYTE *)a4 + 136) = 0;
    KeReleaseSpinLock(&gPreAllocPciPoolSpinLock, v35);
  }
  return v20;
}
