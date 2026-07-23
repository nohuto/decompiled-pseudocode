/*
 * XREFs of HalpIommuInterruptRoutine @ 0x1404CC230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

char HalpIommuInterruptRoutine()
{
  __int64 *v0; // rbx
  unsigned int v1; // edi
  char v2; // si
  __int64 *v3; // rcx

  v0 = (__int64 *)HalpIommuList;
  v1 = 0;
  v2 = 0;
  while ( v0 != &HalpIommuList )
  {
    v3 = v0;
    v0 = (__int64 *)*v0;
    if ( (v3[57] & 0x120) != 0 && ((unsigned __int8 (__fastcall *)(__int64))v3[36])(v3[2]) )
    {
      v2 = 1;
      (*(void (__fastcall **)(_QWORD))(HalIommuDispatch + 96))(v1);
    }
    ++v1;
  }
  return v2;
}
