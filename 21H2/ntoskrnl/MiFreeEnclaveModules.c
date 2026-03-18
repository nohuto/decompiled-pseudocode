/*
 * XREFs of MiFreeEnclaveModules @ 0x14097A0B0
 * Callers:
 *     MiCanDeleteEnclave @ 0x1405A862C (MiCanDeleteEnclave.c)
 *     MmFreeVirtualMemory @ 0x1407B99C0 (MmFreeVirtualMemory.c)
 * Callees:
 *     DbgkUnMapViewOfSection @ 0x1406C321C (DbgkUnMapViewOfSection.c)
 *     MiDereferenceEnclaveModule @ 0x14097A08C (MiDereferenceEnclaveModule.c)
 */

void __fastcall MiFreeEnclaveModules(volatile signed __int32 **a1, _KPROCESS *a2)
{
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rax
  volatile signed __int32 **v6; // rcx

  while ( 1 )
  {
    v4 = *a1;
    if ( *a1 == (volatile signed __int32 *)a1 )
      break;
    if ( a2 )
      DbgkUnMapViewOfSection(a2, *((_QWORD *)v4 + 2));
    v5 = *(_QWORD *)v4;
    if ( *(volatile signed __int32 **)(*(_QWORD *)v4 + 8LL) != v4
      || (v6 = (volatile signed __int32 **)*((_QWORD *)v4 + 1), *v6 != v4) )
    {
      __fastfail(3u);
    }
    *v6 = (volatile signed __int32 *)v5;
    *(_QWORD *)(v5 + 8) = v6;
    MiDereferenceEnclaveModule(v4);
  }
}
