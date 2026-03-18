/*
 * XREFs of GetOpRegionScopeWorker @ 0x1C0017AC0
 * Callers:
 *     GetOpRegionScope @ 0x1C00179F4 (GetOpRegionScope.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B8AC (AMLIDereferenceHandleEx.c)
 *     IsPciDevice @ 0x1C0017BD0 (IsPciDevice.c)
 *     AMLIIterateParentNext @ 0x1C002EF94 (AMLIIterateParentNext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetOpRegionScopeWorker(__int64 a1, int a2, __int64 a3, __int64 *a4)
{
  unsigned int v5; // edi
  int v6; // eax
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax

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
          result = IsPciDevice(v7, GetOpRegionScopeWorker, a4, (char *)a4 + 20);
          v5 = result;
          if ( (_DWORD)result == 259 )
            return result;
          if ( (int)result < 0 )
            break;
        }
        *((_DWORD *)a4 + 4) &= ~0x800u;
        v9 = a4[1];
        if ( *((_BYTE *)a4 + 20) )
        {
          *(_QWORD *)a4[6] = v9;
          v10 = *(_QWORD *)a4[6];
          dword_1C0082908 = 0;
          pszDest = 0;
          if ( (gdwfAMLI & 4) != 0 )
            _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
          v5 = 0;
          break;
        }
        v12 = AMLIIterateParentNext(v9);
        a4[1] = v12;
        if ( !v12 )
          goto LABEL_19;
      }
    }
    else
    {
LABEL_19:
      v5 = -1073741275;
    }
  }
  if ( *((_DWORD *)a4 + 6) )
    ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64))a4[4])(*a4, v5, 0LL, a4[5]);
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
