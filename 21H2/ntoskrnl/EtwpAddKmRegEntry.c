/*
 * XREFs of EtwpAddKmRegEntry @ 0x1407631D0
 * Callers:
 *     EtwpRegisterProvider @ 0x140762EE0 (EtwpRegisterProvider.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140353E60 (MmIsSessionAddress.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwpReferenceGuidEntry @ 0x1406DB204 (EtwpReferenceGuidEntry.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpAddKmRegEntry(ULONG_PTR BugCheckParameter2, int a2, unsigned __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned int v8; // edi
  _WORD *PoolWithTag; // rax
  _WORD *v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rcx

  v8 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x52777445u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x70uLL);
    v11[49] = 1;
    EtwpReferenceGuidEntry(BugCheckParameter2);
    *((_QWORD *)v11 + 4) = BugCheckParameter2;
    if ( a2 == 2 )
      v11[49] |= 8u;
    if ( a3 )
    {
      *((_QWORD *)v11 + 11) = a3;
      *((_QWORD *)v11 + 10) = a4;
      if ( MmIsSessionAddress(a3) )
      {
        v11[49] |= 0x10u;
        *((_DWORD *)v11 + 14) = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      }
    }
    v12 = (_QWORD *)(BugCheckParameter2 + 56);
    v13 = *(_QWORD *)(BugCheckParameter2 + 56);
    if ( *(_QWORD *)(v13 + 8) != BugCheckParameter2 + 56 )
      __fastfail(3u);
    *((_QWORD *)v11 + 1) = v12;
    *(_QWORD *)v11 = v13;
    *(_QWORD *)(v13 + 8) = v11;
    *v12 = v11;
    *((_QWORD *)v11 + 3) = v11 + 8;
    *((_QWORD *)v11 + 2) = v11 + 8;
    v11[49] |= 0x80u;
    *a5 = v11;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v8;
}
