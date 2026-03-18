/*
 * XREFs of NtCreateMutant @ 0x1406CB4F0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeMutantEx @ 0x1402FF780 (KeInitializeMutantEx.c)
 *     ObCreateObjectEx @ 0x140679FF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14067A230 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateMutant(__int64 *a1, ACCESS_MASK a2, int a3)
{
  char PreviousMode; // di
  __int64 v6; // rcx
  int inserted; // ecx
  __int64 v9; // [rsp+20h] [rbp-48h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-18h] BYREF
  __int64 v11; // [rsp+58h] [rbp-10h] BYREF

  v11 = 0LL;
  DmaAdapter = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a1;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  inserted = ObCreateObjectEx(PreviousMode, ExMutantObjectType, a3, PreviousMode, v9, 56, 0, 0, &DmaAdapter, 0LL);
  if ( inserted >= 0 )
  {
    KeInitializeMutantEx((ULONG_PTR)DmaAdapter);
    inserted = ObInsertObjectEx(DmaAdapter, 0LL, a2, 0, 0, 0LL, (unsigned __int64 *)&v11);
    LODWORD(DmaAdapter) = inserted;
    if ( inserted >= 0 )
      *a1 = v11;
  }
  return (unsigned int)inserted;
}
