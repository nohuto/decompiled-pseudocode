/*
 * XREFs of ACPILoadAddDynamicDataBlockTable @ 0x1C00BDCC8
 * Callers:
 *     ACPILoadProcessRSDT @ 0x1C00BD9F8 (ACPILoadProcessRSDT.c)
 *     ACPILoadProcessDSDT @ 0x1C00BF044 (ACPILoadProcessDSDT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPILoadAddDynamicDataBlockTable(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  _QWORD *Pool2; // rax
  _QWORD *v6; // rdx
  __int64 v8; // rdx

  v2 = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 32LL, 1953522497LL);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  Pool2[3] = a1;
  if ( a2 )
  {
    v8 = AcpiDynamicDataBlockTableList;
    if ( *(__int64 **)(AcpiDynamicDataBlockTableList + 8) == &AcpiDynamicDataBlockTableList )
    {
      *Pool2 = AcpiDynamicDataBlockTableList;
      Pool2[1] = &AcpiDynamicDataBlockTableList;
      *(_QWORD *)(v8 + 8) = Pool2;
      AcpiDynamicDataBlockTableList = (__int64)Pool2;
      return v2;
    }
LABEL_9:
    __fastfail(3u);
  }
  v6 = (_QWORD *)qword_1C0082768;
  if ( *(__int64 **)qword_1C0082768 != &AcpiDynamicDataBlockTableList )
    goto LABEL_9;
  *Pool2 = &AcpiDynamicDataBlockTableList;
  Pool2[1] = v6;
  *v6 = Pool2;
  qword_1C0082768 = (__int64)Pool2;
  return v2;
}
