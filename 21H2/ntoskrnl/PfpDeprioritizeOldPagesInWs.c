/*
 * XREFs of PfpDeprioritizeOldPagesInWs @ 0x1408DF840
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1406B3034 (PfSetSuperfetchInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     MmUpdateOldWorkingSetPages @ 0x14053CC2C (MmUpdateOldWorkingSetPages.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfpDeprioritizeOldPagesInWs(__int64 a1, KPROCESSOR_MODE a2)
{
  unsigned int v3; // eax
  int updated; // ebx
  unsigned __int64 v5; // rdx
  unsigned int v6; // esi
  unsigned int v7; // edi
  char v8; // r8
  HANDLE Handle[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  *(_OWORD *)Handle = 0LL;
  v11 = 0LL;
  Object = 0LL;
  v3 = 24;
  if ( *(_DWORD *)(a1 + 24) == 24 )
  {
    if ( a2 )
    {
      v5 = *(_QWORD *)(a1 + 16);
      if ( (v5 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v5 + 24 > 0x7FFFFFFF0000LL || v5 + 24 < v5 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v3 = *(_DWORD *)(a1 + 24);
      }
    }
    memmove(Handle, *(const void **)(a1 + 16), v3);
    if ( LODWORD(Handle[0]) != 3
      || (v11 & 0xFFFFFFC0) != 0
      || (v6 = v11 & 0xF, v6 > 8)
      || (v7 = ((unsigned int)v11 >> 4) & 3, v7 == 3)
      || v6 == 8 && !v7 )
    {
      updated = -1073741811;
    }
    else
    {
      updated = ObReferenceObjectByHandleWithTag(
                  Handle[1],
                  0x2000u,
                  (POBJECT_TYPE)PsProcessType,
                  a2,
                  0x73576650u,
                  &Object,
                  0LL);
      if ( updated >= 0 )
      {
        v8 = 0;
        if ( v7 )
        {
          v8 = 1;
          if ( v7 == 1 )
            v8 = 3;
        }
        updated = MmUpdateOldWorkingSetPages((ULONG_PTR)Object, v6, v8);
      }
    }
  }
  else
  {
    updated = -1073741306;
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x73576650u);
  return (unsigned int)updated;
}
