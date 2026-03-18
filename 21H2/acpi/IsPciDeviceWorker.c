/*
 * XREFs of IsPciDeviceWorker @ 0x1C0007A10
 * Callers:
 *     IsPciDevice @ 0x1C001CDCC (IsPciDevice.c)
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

__int64 __fastcall IsPciDeviceWorker(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  char v5; // r15
  int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // r14
  __int64 v11; // rbp
  const char *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbp
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rbp
  _BYTE *v21; // rax
  unsigned int v22; // edi
  void *v23; // rcx
  void *v24; // rcx
  int v26; // eax
  __int64 v27; // rdx
  int v28; // eax
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rbp
  _BYTE *v32; // rax
  char v33; // al

  v5 = 0;
  v6 = a2;
  _InterlockedIncrement((volatile signed __int32 *)a4 + 9);
  v7 = *a4;
  if ( !*a4 || *(_WORD *)(*(_QWORD *)v7 + 66LL) != 6 || a2 < 0 || (v8 = *(_QWORD *)(*(_QWORD *)v7 + 104LL)) == 0 )
  {
    v21 = (_BYTE *)a4[7];
    goto LABEL_23;
  }
  if ( (*(_QWORD *)(v8 + 8) & 0x102000000LL) != 0 )
  {
    v32 = (_BYTE *)a4[7];
    goto LABEL_56;
  }
  v9 = *((_DWORD *)a4 + 2);
  if ( (v9 & 1) == 0 )
  {
    v10 = (__int64)(a4 + 2);
    *((_DWORD *)a4 + 2) = v9 | 1;
    a4[2] = 0LL;
    v11 = AMLIGetNamedChild(v7, 1145653343LL);
    if ( v11 )
    {
      v6 = ACPIGet(*a4, 1145653343, 738722310, 0, 0, (__int64)&IsPciDeviceWorker, (__int64)a4, v10, 0LL);
      AMLIDereferenceHandleEx(v11);
      if ( v6 == 259 )
        return 259LL;
      if ( v6 < 0 )
        goto LABEL_22;
    }
  }
  v12 = (const char *)a4[2];
  if ( v12 )
  {
    if ( strstr(v12, "PNP0A03") || strstr((const char *)a4[2], "PNP0A08") )
    {
      _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x2000000uLL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 192), a4[2], 0LL) )
        ExFreePoolWithTag((PVOID)a4[2], 0);
      _InterlockedOr((volatile signed __int32 *)(v8 + 184), 0x21u);
      a4[2] = 0LL;
LABEL_55:
      v32 = (_BYTE *)a4[7];
LABEL_56:
      *v32 = 1;
      goto LABEL_24;
    }
    ExFreePoolWithTag((PVOID)a4[2], 0);
    a4[2] = 0LL;
  }
  v13 = *((_DWORD *)a4 + 2);
  if ( (v13 & 0x80u) == 0 )
  {
    v14 = *a4;
    a4[3] = 0LL;
    *((_DWORD *)a4 + 2) = v13 | 0x80;
    v15 = AMLIGetNamedChild(v14, 1145652063LL);
    if ( v15 )
    {
      v6 = ACPIGet(*a4, 1145652063, 738722055, 0, 0, (__int64)&IsPciDeviceWorker, (__int64)a4, (__int64)(a4 + 3), 0LL);
      AMLIDereferenceHandleEx(v15);
      if ( v6 == 259 )
        return 259LL;
      if ( v6 < 0 )
        goto LABEL_22;
    }
  }
  if ( a4[3] )
  {
    ACPIConvertStringDelimitation();
    if ( !strstr((const char *)a4[3], "PNP0A03") && !strstr((const char *)a4[3], "PNP0A08") )
    {
      ExFreePoolWithTag((PVOID)a4[3], 0);
      a4[3] = 0LL;
      goto LABEL_12;
    }
    _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x2000000uLL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 192), a4[3], 0LL) )
      ExFreePoolWithTag((PVOID)a4[3], 0);
    _InterlockedOr((volatile signed __int32 *)(v8 + 184), 0x41u);
    a4[3] = 0LL;
    goto LABEL_55;
  }
LABEL_12:
  v16 = *((_DWORD *)a4 + 2);
  if ( (v16 & 8) == 0 )
  {
    *((_DWORD *)a4 + 2) = v16 | 8;
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 88), 0, 0) & 0x80u) == 0 )
    {
      v29 = ACPIGet(*a4, 1380204895, -1543240702, 0, 0, (__int64)&IsPciDeviceWorker, (__int64)a4, (__int64)a4 + 12, 0LL);
      v6 = v29;
      if ( v29 == 259 )
        return 259LL;
      if ( v29 < 0 )
        goto LABEL_22;
    }
    else
    {
      *((_DWORD *)a4 + 3) = *(_DWORD *)(v8 + 92);
    }
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 88), 0, 0) & 0x80u) == 0 )
  {
    _InterlockedExchange((volatile __int32 *)(v8 + 92), *((_DWORD *)a4 + 3));
    _InterlockedOr((volatile signed __int32 *)(v8 + 88), 0x80u);
  }
  v17 = *((_DWORD *)a4 + 2);
  if ( (v17 & 0x20) != 0 )
  {
LABEL_21:
    if ( !*((_BYTE *)a4 + 32) )
      goto LABEL_22;
    v26 = *((_DWORD *)a4 + 2);
    if ( (v26 & 0x40) == 0 )
    {
      v27 = *a4;
      *((_DWORD *)a4 + 2) = v26 | 0x40;
      v28 = PciConfigInternal(0, v27, 0, 15, (__int64)&IsPciDeviceWorker, (__int64)a4, (__int64)(a4 + 8));
      v6 = v28;
      if ( v28 == 259 )
        return 259LL;
      if ( v28 < 0 )
        goto LABEL_22;
    }
    if ( (*((_BYTE *)a4 + 78) & 0x7Fu) - 1 <= 1 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x2000000uLL);
      if ( *((_WORD *)a4 + 32) == 0xFFFF
        || *((_WORD *)a4 + 33) == 0xFFFF
        || (v33 = *((_BYTE *)a4 + 78), v33 == -1)
        || *((_BYTE *)a4 + 75) == 0xFF
        || *((_BYTE *)a4 + 74) == 0xFF
        || *((_BYTE *)a4 + 73) == 0xFF )
      {
        *((_DWORD *)a4 + 2) &= ~0x40u;
      }
      else
      {
        *(_BYTE *)(v8 + 96) = v33;
      }
    }
    else
    {
      _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x100000000uLL);
      v5 = 1;
    }
    *(_BYTE *)a4[7] = 1;
    v30 = AMLIGetParent(*a4);
    if ( v30 )
    {
      v31 = *(_QWORD *)(*(_QWORD *)v30 + 104LL);
      AMLIDereferenceHandleEx(v30);
      if ( v31 )
      {
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v31 + 184), 0, 0) & 1) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(v8 + 88), 2u);
          if ( v5 == 1 && (AcpiOverrideAttributes & 0x8000) != 0 )
            _InterlockedOr64((volatile signed __int64 *)(v8 + 1000), 0x8000uLL);
        }
        goto LABEL_24;
      }
    }
    goto LABEL_22;
  }
  v18 = *a4;
  *((_DWORD *)a4 + 2) = v17 | 0x20;
  v19 = AMLIGetParent(v18);
  v20 = v19;
  if ( !v19 )
  {
    v6 = -1073741661;
    goto LABEL_22;
  }
  v6 = IsPciBusAsync(v19, &IsPciDeviceWorker, a4, a4 + 4);
  AMLIDereferenceHandleEx(v20);
  if ( v6 == 259 )
    return 259LL;
  if ( v6 >= 0 )
    goto LABEL_21;
LABEL_22:
  v21 = (_BYTE *)a4[7];
LABEL_23:
  *v21 = 0;
LABEL_24:
  v22 = 0;
  if ( v6 != -1073741772 )
    v22 = v6;
  if ( *((_DWORD *)a4 + 9) )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))a4[5])(*a4, v22, 0LL, a4[6]);
  v23 = (void *)a4[2];
  if ( v23 )
    ExFreePoolWithTag(v23, 0);
  v24 = (void *)a4[3];
  if ( v24 )
    ExFreePoolWithTag(v24, 0);
  if ( *a4 )
    AMLIDereferenceHandleEx(*a4);
  ExFreePoolWithTag(a4, 0x46706341u);
  return v22;
}
