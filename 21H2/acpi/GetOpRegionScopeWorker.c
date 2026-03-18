/*
 * XREFs of GetOpRegionScopeWorker @ 0x1C001CCA0
 * Callers:
 *     GetOpRegionScope @ 0x1C001CE9C (GetOpRegionScope.c)
 * Callees:
 *     AMLIIterateParentNext @ 0x1C00083A0 (AMLIIterateParentNext.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     IsPciDevice @ 0x1C001CDCC (IsPciDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetOpRegionScopeWorker(__int64 a1, int a2, __int64 a3, volatile signed __int32 **a4)
{
  unsigned int v5; // edi
  int v6; // eax
  volatile signed __int32 *v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rcx
  __int64 v13; // rax

  v5 = a2;
  _InterlockedIncrement((volatile signed __int32 *)a4 + 6);
  if ( a2 >= 0 )
  {
    if ( a4[1] )
    {
      while ( 1 )
      {
        v6 = *((_DWORD *)a4 + 4);
        if ( (v6 & 0x800) == 0 )
        {
          v7 = a4[1];
          *((_DWORD *)a4 + 4) = v6 | 0x800;
          v8 = IsPciDevice(v7, &GetOpRegionScopeWorker, a4, (char *)a4 + 20);
          v5 = v8;
          if ( v8 == 259 )
            return 259LL;
          if ( v8 < 0 )
            goto LABEL_10;
        }
        *((_DWORD *)a4 + 4) &= ~0x800u;
        v9 = (__int64)a4[1];
        if ( *((_BYTE *)a4 + 20) )
          break;
        v13 = AMLIIterateParentNext(v9);
        a4[1] = (volatile signed __int32 *)v13;
        if ( !v13 )
          goto LABEL_20;
      }
      *(_QWORD *)a4[6] = v9;
      v10 = *(_QWORD *)a4[6];
      dword_1C0081AC8 = 0;
      byte_1C0081ACC = 0;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v5 = 0;
    }
    else
    {
LABEL_20:
      v5 = -1073741275;
    }
  }
LABEL_10:
  if ( *((_DWORD *)a4 + 6) )
    ((void (__fastcall *)(volatile signed __int32 *, _QWORD, _QWORD, volatile signed __int32 *))a4[4])(
      *a4,
      v5,
      0LL,
      a4[5]);
  if ( *a4 )
  {
    AMLIDereferenceHandleEx(*a4);
    *a4 = 0LL;
  }
  v11 = a4[1];
  if ( v11 )
  {
    AMLIDereferenceHandleEx(v11);
    a4[1] = 0LL;
  }
  ExFreePoolWithTag(a4, 0x46706341u);
  return v5;
}
